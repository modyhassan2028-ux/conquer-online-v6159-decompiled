import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DecompileAll extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: DecompileAll <outputDir>");
            return;
        }
        File outDir = new File(args[0]);
        outDir.mkdirs();

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        String progName = currentProgram.getName();
        String safe = progName.replaceAll("[^A-Za-z0-9._-]", "_");
        File combined = new File(outDir, safe + ".decompiled.c");
        File index = new File(outDir, safe + ".index.tsv");
        PrintWriter cw = new PrintWriter(new FileWriter(combined));
        PrintWriter iw = new PrintWriter(new FileWriter(index));
        cw.println("// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)");
        cw.println("// Binary: " + progName);
        cw.println();
        iw.println("function\taddress\tsize\tstatus");

        int total = 0, failed = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = it.next();
            total++;
            try {
                DecompileResults res = decomp.decompileFunction(f, 60, monitor);
                if (res != null && res.decompileCompleted()) {
                    String code = res.getDecompiledFunction().getC();
                    cw.println("// ============================================================");
                    cw.println("// Function: " + f.getName() + " @ " + f.getEntryPoint());
                    cw.println("// ============================================================");
                    cw.println(code);
                    cw.println();
                    iw.println(f.getName() + "\t" + f.getEntryPoint() + "\t" + f.getBody().getNumAddresses() + "\tok");
                } else {
                    failed++;
                    iw.println(f.getName() + "\t" + f.getEntryPoint() + "\t" + f.getBody().getNumAddresses() + "\tfailed");
                }
            } catch (Exception e) {
                failed++;
                iw.println(f.getName() + "\t" + f.getEntryPoint() + "\tfailed\texception: " + e.getMessage());
            }
            if (total % 200 == 0) println("decompiled " + total + " functions (" + failed + " failed)");
        }
        decomp.dispose();
        cw.println();
        cw.println("// Total functions: " + total + ", failed: " + failed);
        cw.close();
        iw.close();
        println("DONE DecompileAll: " + total + " functions, " + failed + " failed -> " + combined.getAbsolutePath());
    }
}
