// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: RevampedLoader.exe

// ============================================================
// Function: FUN_140001000 @ 140001000
// ============================================================

void FUN_140001000(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140002fa0();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_14000107b;
  uVar4 = 0x8000000000000027;
  puVar6 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar6 + -8) = 0x14000106f;
    lVar5 = FUN_140003b00(uVar4);
    if (lVar5 != 0) {
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_1400010c1:
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar6 + -8) = 0x1400010da;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar6 = puVar6 + 8;
LAB_14000107b:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1400010c1;
    }
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x1400010be;
      _Dst = (void *)FUN_140003b00(uVar1);
      goto LAB_1400010c1;
    }
    uVar4 = uVar3 + 0x28;
    if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_1400010f8;
      FUN_140002f10();
    }
  } while( true );
}



// ============================================================
// Function: FUN_140001100 @ 140001100
// ============================================================

undefined8 FUN_140001100(undefined8 *param_1)

{
  (*(code *)*param_1)();
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}



// ============================================================
// Function: FUN_140001130 @ 140001130
// ============================================================

void FUN_140001130(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
                  size_t param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t _Size;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Src;
  undefined1 *puVar9;
  void *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  _Size = param_1[2];
  _Src = (void *)0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002fa0();
  }
  uVar4 = param_1[3];
  pvVar7 = (void *)(_Size + param_2 | 0xf);
  if ((pvVar7 < (void *)0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    pvVar3 = (void *)(uVar4 + (uVar4 >> 1));
    _Src = pvVar7;
    if (pvVar7 < pvVar3) {
      _Src = pvVar3;
    }
    uVar1 = (longlong)_Src + 1;
    if (uVar1 == 0) {
      unaff_RDI = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = (longlong)_Src + 0x28;
        if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140002f10();
        }
        goto LAB_1400011d3;
      }
      unaff_RDI = (void *)FUN_140003b00(uVar1);
    }
LAB_1400011f6:
    param_1[2] = _Size + param_2;
    pvVar7 = (void *)(_Size + (longlong)unaff_RDI);
    param_1[3] = _Src;
    if (uVar4 < 0x10) {
      memcpy(unaff_RDI,param_1,_Size);
      memcpy(pvVar7,param_4,param_5);
      *(undefined1 *)((longlong)pvVar7 + param_5) = 0;
      goto LAB_140001286;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,_Src,_Size);
    memcpy(pvVar7,param_4,param_5);
    *(undefined1 *)((longlong)pvVar7 + param_5) = 0;
    if (0xfff < uVar4 + 1) {
      puVar2 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar2));
      if (_Src < (void *)0x20) {
        free((void *)*puVar2);
        goto LAB_140001286;
      }
      goto LAB_14000125a;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1400011d3:
    lVar6 = FUN_140003b00(uVar8);
    if (lVar6 != 0) {
      unaff_RDI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar6;
      goto LAB_1400011f6;
    }
LAB_14000125a:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140001269;
  free(_Src);
LAB_140001286:
  *param_1 = unaff_RDI;
  return;
}



// ============================================================
// Function: FUN_1400012c0 @ 1400012c0
// ============================================================

undefined8 * FUN_1400012c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140001300 @ 140001300
// ============================================================

undefined8 * FUN_140001300(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140001340 @ 140001340
// ============================================================

undefined8 * FUN_140001340(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// ============================================================
// Function: exception @ 140001370
// ============================================================

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}



// ============================================================
// Function: FUN_140001400 @ 140001400
// ============================================================

void FUN_140001400(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}



// ============================================================
// Function: FUN_140001420 @ 140001420
// ============================================================

undefined8 * FUN_140001420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140001470 @ 140001470
// ============================================================

void FUN_140001470(LPCSTR param_1)

{
  code *pcVar1;
  ulonglong _Size;
  int iVar2;
  longlong lVar3;
  LPWSTR lpWideCharStr;
  LPWSTR pWVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStackY_38 [8];
  undefined1 auStackY_30 [24];
  
  puVar5 = auStackY_38;
  if (DAT_14000a178 == (HWND)0x0) {
    return;
  }
  lpWideCharStr = (LPWSTR)0x0;
  iVar2 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  uVar6 = (ulonglong)iVar2;
  pWVar4 = lpWideCharStr;
  if (iVar2 == 0) {
LAB_140001531:
    MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar2);
    iVar2 = GetWindowTextLengthW(DAT_14000a178);
    if (1500000 < iVar2) {
      SendMessageW(DAT_14000a178,0xb1,0,500000);
      SendMessageW(DAT_14000a178,0xc2,0,0x140005578);
      iVar2 = GetWindowTextLengthW(DAT_14000a178);
    }
    SendMessageW(DAT_14000a178,0xb1,(longlong)iVar2,(longlong)iVar2);
    SendMessageW(DAT_14000a178,0xc2,0,(LPARAM)lpWideCharStr);
    SendMessageW(DAT_14000a178,0xb7,0,0);
    if (lpWideCharStr == (LPWSTR)0x0) {
      return;
    }
    if ((ulonglong)(((longlong)pWVar4 - (longlong)lpWideCharStr >> 1) * 2) < 0x1000)
    goto LAB_14000162a;
    pWVar4 = (LPWSTR)((longlong)lpWideCharStr + (-8 - (longlong)*(LPWSTR *)(lpWideCharStr + -4)));
    lpWideCharStr = *(LPWSTR *)(lpWideCharStr + -4);
    puVar5 = auStackY_38;
    if (pWVar4 < (LPWSTR)0x20) goto LAB_14000162a;
  }
  else {
    if (0x7fffffffffffffff < uVar6) {
      FUN_140002fc0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Size = uVar6 * 2;
    if (_Size == 0) {
LAB_14000151b:
      memset(lpWideCharStr,0,_Size);
      pWVar4 = lpWideCharStr + uVar6;
      goto LAB_140001531;
    }
    if (_Size < 0x1000) {
      lpWideCharStr = (LPWSTR)FUN_140003b00(_Size);
      goto LAB_14000151b;
    }
    if (_Size + 0x27 <= _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_140002f10();
    }
    lVar3 = FUN_140003b00(_Size + 0x27);
    if (lVar3 != 0) {
      lpWideCharStr = (LPWSTR)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(lpWideCharStr + -4) = lVar3;
      goto LAB_14000151b;
    }
  }
  lpWideCharStr = pWVar4;
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar5 = auStackY_30;
LAB_14000162a:
  *(undefined8 *)(puVar5 + -8) = 0x14000162f;
  free(lpWideCharStr);
  return;
}



// ============================================================
// Function: FUN_140001660 @ 140001660
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140001660(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  code *pcVar5;
  HANDLE hProcess;
  undefined1 *puVar6;
  LPCSTR ****pppppCVar7;
  DWORD DVar8;
  BOOL BVar9;
  size_t sVar10;
  ulonglong uVar11;
  LPCSTR ***ppppCVar12;
  longlong lVar13;
  LPVOID lpBaseAddress;
  HMODULE hModule;
  LPTHREAD_START_ROUTINE lpStartAddress;
  HANDLE hHandle;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  LPCSTR ****pppppCVar20;
  ulonglong uVar21;
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  undefined1 *puVar24;
  undefined8 uStackY_3c0;
  undefined1 auStackY_3b8 [8];
  undefined1 auStackY_3b0 [24];
  _STARTUPINFOA local_358;
  char local_2e8 [256];
  undefined1 (*local_1e8) [16];
  ulonglong uStack_1e0;
  undefined1 *local_1d8;
  ulonglong uStack_1d0;
  undefined1 (*local_1c8) [16];
  undefined8 uStack_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  LPCSTR ***local_1a8;
  undefined8 uStack_1a0;
  undefined1 (*local_198) [16];
  ulonglong local_190;
  undefined1 (*local_188) [16];
  ulonglong uStack_180;
  undefined1 *local_178;
  ulonglong uStack_170;
  CHAR local_168 [272];
  ulonglong local_58;
  
  puVar18 = auStackY_3b8;
  local_58 = DAT_14000a040 ^ (ulonglong)auStackY_3b8;
  GetModuleFileNameA((HMODULE)0x0,local_168,0x104);
  local_1e8 = (undefined1 (*) [16])0x0;
  uStack_1e0 = 0;
  local_1d8 = (undefined1 *)0x0;
  uStack_1d0 = 0;
  sVar10 = strlen(local_168);
  FUN_140001000(&local_1e8,local_168,sVar10);
  uVar21 = uStack_1d0;
  puVar17 = local_1d8;
  pauVar23 = local_1e8;
  pauVar15 = (undefined1 (*) [16])&local_1e8;
  if (0xf < uStack_1d0) {
    pauVar15 = local_1e8;
  }
  puVar16 = (undefined1 *)0xffffffffffffffff;
  if (local_1d8 != (undefined1 *)0x0) {
    puVar19 = (undefined1 *)0xffffffffffffffff;
    if (local_1d8 + -1 != (undefined1 *)0xffffffffffffffff) {
      puVar19 = local_1d8 + -1;
    }
    if (puVar19 + 3 < (undefined1 *)0x10) {
      memset(local_2e8,0,0x100);
      pbVar22 = &DAT_1400056c0;
      do {
        local_2e8[*pbVar22] = '\x01';
        pbVar22 = pbVar22 + 1;
      } while (pbVar22 != &DAT_1400056c2);
      pauVar14 = (undefined1 (*) [16])(puVar19 + (longlong)pauVar15);
      cVar4 = local_2e8[(byte)(*pauVar14)[0]];
      while (cVar4 == '\0') {
        if (pauVar14 == pauVar15) goto LAB_1400017ba;
        pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 0xf);
        cVar4 = local_2e8[(byte)(*pauVar14)[0]];
      }
      puVar16 = (undefined1 *)((longlong)pauVar14 - (longlong)pauVar15);
    }
    else {
      puVar16 = thunk_FUN_140003380(pauVar15,puVar19 + 1,(undefined1 (*) [16])&DAT_1400056c0,2);
      pauVar23 = local_1e8;
      puVar17 = local_1d8;
      uVar21 = uStack_1d0;
    }
  }
LAB_1400017ba:
  pppppCVar20 = (LPCSTR ****)0x0;
  local_188 = (undefined1 (*) [16])0x0;
  uStack_180 = 0;
  local_178 = (undefined1 *)0x0;
  uStack_170 = 0;
  puVar19 = puVar16 + 1;
  if (puVar17 < puVar16 + 1) {
    puVar19 = puVar17;
  }
  pauVar15 = (undefined1 (*) [16])&local_1e8;
  if (0xf < uVar21) {
    pauVar15 = pauVar23;
  }
  FUN_140001000(&local_188,pauVar15,(size_t)puVar19);
  if (uStack_1d0 < 0x10) {
LAB_14000183b:
    puVar19 = local_178;
    local_1e8 = local_188;
    uStack_1e0 = uStack_180;
    local_1d8 = local_178;
    uStack_1d0 = uStack_170;
    if (0x7fffffffffffffffU - (longlong)local_178 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_140002fa0();
    }
    pauVar15 = (undefined1 (*) [16])&local_1e8;
    if (0xf < uStack_170) {
      pauVar15 = local_188;
    }
    local_1a8 = (LPCSTR ***)0x0;
    uStack_1a0 = 0;
    local_198 = (undefined1 (*) [16])0x0;
    local_190 = 0;
    pauVar23 = (undefined1 (*) [16])(local_178 + 0xd);
    puVar24 = (undefined1 *)0x8000000000000027;
    if (pauVar23 < (undefined1 (*) [16])0x10) {
      uVar21 = 0xf;
      pppppCVar20 = &local_1a8;
      pppppCVar7 = (LPCSTR ****)local_1a8;
    }
    else {
      uVar21 = (ulonglong)pauVar23 | 0xf;
      if (uVar21 < 0x8000000000000000) {
        if (uVar21 < 0x16) {
          uVar21 = 0x16;
        }
        uVar1 = uVar21 + 1;
        pppppCVar7 = pppppCVar20;
        if (uVar1 != 0) {
          if (0xfff < uVar1) {
            uVar11 = uVar21 + 0x28;
            if (uVar11 <= uVar1) goto LAB_140001f1b;
            goto LAB_1400018d7;
          }
          pppppCVar20 = (LPCSTR ****)FUN_140003b00(uVar1);
          pppppCVar7 = pppppCVar20;
        }
      }
      else {
        uVar21 = 0x7fffffffffffffff;
        uVar11 = 0x8000000000000027;
LAB_1400018d7:
        ppppCVar12 = (LPCSTR ***)FUN_140003b00(uVar11);
        puVar16 = (undefined1 *)0x7fffffffffffffff;
        puVar17 = auStackY_3b8;
        if (ppppCVar12 == (LPCSTR ***)0x0) goto LAB_140001e75;
        pppppCVar20 = (LPCSTR ****)((longlong)ppppCVar12 + 0x27U & 0xffffffffffffffe0);
        pppppCVar20[-1] = ppppCVar12;
        pppppCVar7 = pppppCVar20;
      }
    }
    local_1a8 = (LPCSTR ***)pppppCVar7;
    local_198 = pauVar23;
    local_190 = uVar21;
    memcpy(pppppCVar20,pauVar15,(size_t)puVar19);
    puVar17 = local_1d8;
    *(undefined8 *)((longlong)pppppCVar20 + (longlong)puVar19) = s_MsgServer_exe_1400056c8._0_8_;
    *(undefined4 *)((longlong)(pppppCVar20 + 1) + (longlong)puVar19) =
         s_MsgServer_exe_1400056c8._8_4_;
    ((LPCSTR)((longlong)pppppCVar20 + 0xc))[(longlong)puVar19] = s_MsgServer_exe_1400056c8[0xc];
    *(CHAR *)((longlong)pppppCVar20 + (longlong)*pauVar23) = '\0';
    if (0x7fffffffffffffffU - (longlong)local_1d8 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_140002fa0();
    }
    pauVar15 = (undefined1 (*) [16])&local_1e8;
    if (0xf < uStack_1d0) {
      pauVar15 = local_1e8;
    }
    local_1c8 = (undefined1 (*) [16])0x0;
    uStack_1c0 = 0;
    pauVar23 = (undefined1 (*) [16])0x0;
    local_1b8 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    puVar19 = local_1d8 + 0x10;
    if (puVar19 < (undefined1 *)0x10) {
      puVar16 = (undefined1 *)0xf;
      pauVar14 = (undefined1 (*) [16])&local_1c8;
LAB_140001a65:
      local_1b8 = puVar19;
      local_1b0 = puVar16;
      memcpy(pauVar14,pauVar15,(size_t)puVar17);
      pcVar3 = puVar17 + (longlong)*pauVar14;
      *(undefined8 *)pcVar3 = s_RevampedHook_dll_1400056d8._0_8_;
      *(undefined8 *)(pcVar3 + 8) = s_RevampedHook_dll_1400056d8._8_8_;
      puVar19[(longlong)pauVar14] = 0;
      pppppCVar20 = &local_1a8;
      if (0xf < local_190) {
        pppppCVar20 = (LPCSTR ****)local_1a8;
      }
      DVar8 = GetFileAttributesA((LPCSTR)pppppCVar20);
      if (DVar8 == 0xffffffff) {
        FUN_140001470("[Error] MsgServer.exe not found!\r\n");
LAB_140001ddd:
        puVar16 = (undefined1 *)0x0;
      }
      else {
        pauVar15 = (undefined1 (*) [16])&local_1c8;
        if ((undefined1 *)0xf < local_1b0) {
          pauVar15 = local_1c8;
        }
        DVar8 = GetFileAttributesA((LPCSTR)pauVar15);
        if (DVar8 == 0xffffffff) {
          FUN_140001470("[Error] RevampedHook.dll not found!\r\n");
          goto LAB_140001ddd;
        }
        local_358.cb = 0x68;
        local_358.lpReserved = (LPSTR)0x0;
        local_358.lpDesktop = (LPSTR)0x0;
        local_358.lpTitle = (LPSTR)0x0;
        local_358.dwX = 0;
        local_358.dwY = 0;
        local_358.dwXSize = 0;
        local_358.dwYSize = 0;
        local_358.dwXCountChars = 0;
        local_358.dwYCountChars = 0;
        local_358.dwFillAttribute = 0;
        local_358.dwFlags = 0;
        local_358.wShowWindow = 0;
        local_358.cbReserved2 = 0;
        local_358._68_4_ = 0;
        local_358.lpReserved2 = (LPBYTE)0x0;
        local_358.hStdInput = (HANDLE)0x0;
        local_358.hStdOutput = (HANDLE)0x0;
        local_358.hStdError = (HANDLE)0x0;
        pauVar15 = (undefined1 (*) [16])&local_1e8;
        if (0xf < uStack_1d0) {
          pauVar15 = local_1e8;
        }
        pppppCVar20 = &local_1a8;
        if (0xf < local_190) {
          pppppCVar20 = (LPCSTR ****)local_1a8;
        }
        BVar9 = CreateProcessA((LPCSTR)pppppCVar20,(LPSTR)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0x8000004,(LPVOID)0x0,(LPCSTR)pauVar15,
                               &local_358,(LPPROCESS_INFORMATION)&DAT_14000a1c8);
        if (BVar9 == 0) {
          FUN_140001470("[Error] Failed to create MsgServer.exe process!\r\n");
          goto LAB_140001ddd;
        }
        FUN_140001470("[Loader] Created MsgServer.exe (suspended)\r\n");
        hProcess = DAT_14000a1c8;
        pauVar15 = (undefined1 (*) [16])&local_1c8;
        if ((undefined1 *)0xf < local_1b0) {
          pauVar15 = local_1c8;
        }
        sVar10 = strlen((char *)pauVar15);
        lpBaseAddress = VirtualAllocEx(hProcess,(LPVOID)0x0,sVar10 + 1,0x3000,4);
        if (lpBaseAddress == (LPVOID)0x0) {
LAB_140001dbf:
          FUN_140001470("[Error] Failed to inject RevampedHook.dll!\r\n");
          TerminateProcess(DAT_14000a1c8,1);
          goto LAB_140001ddd;
        }
        BVar9 = WriteProcessMemory(hProcess,lpBaseAddress,pauVar15,sVar10 + 1,(SIZE_T *)0x0);
        if (BVar9 == 0) {
LAB_140001daa:
          VirtualFreeEx(hProcess,lpBaseAddress,0,0x8000);
          goto LAB_140001dbf;
        }
        hModule = GetModuleHandleA("kernel32.dll");
        lpStartAddress = (LPTHREAD_START_ROUTINE)GetProcAddress(hModule,"LoadLibraryA");
        hHandle = CreateRemoteThread(hProcess,(LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress,
                                     lpBaseAddress,0,(LPDWORD)0x0);
        if (hHandle == (HANDLE)0x0) goto LAB_140001daa;
        WaitForSingleObject(hHandle,10000);
        CloseHandle(hHandle);
        VirtualFreeEx(hProcess,lpBaseAddress,0,0x8000);
        FUN_140001470("[Loader] Injected RevampedHook.dll\r\n");
        ResumeThread(DAT_14000a1d0);
        FUN_140001470("[Loader] Server resumed\r\n");
        LOCK();
        DAT_14000a1e0 = 1;
        UNLOCK();
        pauVar14 = (undefined1 (*) [16])FUN_140003b00(8);
        pauVar15 = pauVar23;
        if (pauVar14 != (undefined1 (*) [16])0x0) {
          *(code **)*pauVar14 = FUN_140001f50;
          pauVar15 = pauVar14;
        }
        local_188 = (undefined1 (*) [16])
                    _beginthreadex((void *)0x0,0,FUN_140001100,pauVar15,0,(uint *)&uStack_180);
        if (local_188 == (undefined1 (*) [16])0x0) {
          uStack_180 = uStack_180 & 0xffffffff00000000;
          std::_Throw_Cpp_error(6);
LAB_140001f1b:
                    /* WARNING: Subroutine does not return */
          FUN_140002f10();
        }
        FUN_140002fe0(&local_188);
        if ((int)uStack_180 != 0) {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
        pauVar14 = (undefined1 (*) [16])FUN_140003b00(8);
        pauVar15 = pauVar23;
        if (pauVar14 != (undefined1 (*) [16])0x0) {
          *(code **)*pauVar14 = FUN_140002500;
          pauVar15 = pauVar14;
        }
        local_188 = (undefined1 (*) [16])
                    _beginthreadex((void *)0x0,0,FUN_140001100,pauVar15,0,(uint *)&uStack_180);
        if (local_188 == (undefined1 (*) [16])0x0) {
          uStack_180 = uStack_180 & 0xffffffff00000000;
          std::_Throw_Cpp_error(6);
          pcVar5 = (code *)swi(3);
          uVar21 = (*pcVar5)();
          return uVar21;
        }
        FUN_140002fe0(&local_188);
        if ((int)uStack_180 != 0) {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
        puVar16 = (undefined1 *)0x1;
      }
      if ((undefined1 *)0xf < local_1b0) {
        pauVar15 = local_1c8;
        puVar18 = auStackY_3b8;
        if (((undefined1 *)0xfff < local_1b0 + 1) &&
           (pauVar15 = *(undefined1 (**) [16])((longlong)local_1c8[-1] + 8), puVar18 = auStackY_3b8,
           (LPCSTR)0x1f <
           (LPCSTR)((longlong)local_1c8 +
                   (-8 - (longlong)*(undefined1 (**) [16])((longlong)local_1c8[-1] + 8)))))
        goto LAB_140001e16;
        goto LAB_140001e20;
      }
    }
    else {
      puVar16 = (undefined1 *)((ulonglong)puVar19 | 0xf);
      puVar6 = (undefined1 *)0x7fffffffffffffff;
      if (puVar16 < (undefined1 *)0x8000000000000000) {
        if (puVar16 < (undefined1 *)0x16) {
          puVar16 = (undefined1 *)0x16;
        }
        puVar2 = puVar16 + 1;
        if (puVar2 == (undefined1 *)0x0) {
          local_1c8 = (undefined1 (*) [16])0x0;
          pauVar14 = pauVar23;
        }
        else {
          if ((undefined1 *)0xfff < puVar2) {
            puVar24 = puVar16 + 0x28;
            puVar6 = puVar16;
            if (puVar24 <= puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_140002f10();
            }
            goto LAB_140001a22;
          }
          pauVar14 = (undefined1 (*) [16])FUN_140003b00((size_t)puVar2);
          local_1c8 = pauVar14;
        }
        goto LAB_140001a65;
      }
LAB_140001a22:
      puVar16 = puVar6;
      lVar13 = FUN_140003b00((size_t)puVar24);
      if (lVar13 != 0) {
        pauVar14 = (undefined1 (*) [16])(lVar13 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(pauVar14[-1] + 8) = lVar13;
        local_1c8 = pauVar14;
        goto LAB_140001a65;
      }
LAB_140001e16:
      pcVar5 = (code *)swi(0x29);
      pauVar15 = (undefined1 (*) [16])(*pcVar5)(5);
      puVar18 = auStackY_3b0;
LAB_140001e20:
      *(undefined8 *)(puVar18 + -8) = 0x140001e25;
      free(pauVar15);
    }
    local_1b8 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0xf;
    local_1c8 = (undefined1 (*) [16])((ulonglong)local_1c8 & 0xffffffffffffff00);
    if (local_190 < 0x10) goto LAB_140001e84;
    pppppCVar20 = (LPCSTR ****)local_1a8;
    if ((0xfff < local_190 + 1) &&
       (pppppCVar20 = (LPCSTR ****)local_1a8[-1], puVar17 = puVar18,
       (LPCSTR)0x1f < (LPCSTR)((longlong)local_1a8 + (-8 - (longlong)local_1a8[-1]))))
    goto LAB_140001e75;
  }
  else {
    pauVar15 = local_1e8;
    if ((uStack_1d0 + 1 < 0x1000) ||
       (pauVar15 = *(undefined1 (**) [16])(local_1e8[-1] + 8), puVar17 = auStackY_3b8,
       (LPCSTR)((longlong)local_1e8 + (-8 - (longlong)pauVar15)) < (LPCSTR)0x20)) {
      free(pauVar15);
      goto LAB_14000183b;
    }
LAB_140001e75:
    pcVar5 = (code *)swi(0x29);
    pppppCVar20 = (LPCSTR ****)(*pcVar5)(5);
    puVar18 = puVar17 + 8;
  }
  *(undefined8 *)(puVar18 + -8) = 0x140001e84;
  free(pppppCVar20);
LAB_140001e84:
  local_190 = 0xf;
  local_1a8 = (LPCSTR ***)((ulonglong)local_1a8 & 0xffffffffffffff00);
  if (0xf < uStack_1d0) {
    pauVar15 = local_1e8;
    local_198 = pauVar23;
    if ((0xfff < uStack_1d0 + 1) &&
       (pauVar15 = *(undefined1 (**) [16])((longlong)local_1e8[-1] + 8),
       (LPCSTR)0x1f < (LPCSTR)((longlong)local_1e8 + (-8 - (longlong)pauVar15)))) {
      pcVar5 = (code *)swi(0x29);
      pauVar15 = (undefined1 (*) [16])(*pcVar5)(5);
      puVar18 = puVar18 + 8;
    }
    *(undefined8 *)(puVar18 + -8) = 0x140001ee3;
    free(pauVar15);
  }
  *(undefined8 *)(puVar18 + -8) = 0x140001ef5;
  return (ulonglong)puVar16 & 0xff;
}



// ============================================================
// Function: FUN_140001f50 @ 140001f50
// ============================================================

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140001f50(void)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  code *pcVar3;
  undefined8 *****pppppuVar4;
  char *****pppppcVar5;
  BOOL BVar6;
  HANDLE hFile;
  char *pcVar7;
  size_t sVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  undefined8 *****pppppuVar11;
  ulonglong uVar12;
  char ****ppppcVar13;
  undefined1 (*pauVar14) [32];
  int iVar15;
  void *_Dst;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  char *****pppppcVar21;
  undefined8 uStackY_1110;
  undefined1 auStackY_1108 [8];
  undefined1 auStackY_1100 [24];
  uint local_10c4;
  HANDLE local_10c0;
  undefined1 (*local_10b8) [32];
  undefined8 uStack_10b0;
  ulonglong local_10a8;
  ulonglong local_10a0;
  undefined8 ****local_1098;
  undefined8 uStack_1090;
  size_t local_1088;
  ulonglong local_1080;
  char ****local_1078;
  undefined8 uStack_1070;
  ulonglong local_1068;
  ulonglong local_1060;
  char local_1058 [4096];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140001f6f;
  puVar18 = auStackY_1108;
  puVar19 = auStackY_1108;
  local_58 = DAT_14000a040 ^ (ulonglong)auStackY_1108;
  iVar15 = 0;
  do {
    hFile = CreateFileA("\\\\.\\pipe\\RevampedHookLog",0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
    local_10c0 = hFile;
    if (hFile != (HANDLE)0xffffffffffffffff) {
      DAT_14000a000 =
           CreateFileA("\\\\.\\pipe\\RevampedHookCmd",0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                       (HANDLE)0x0);
      pcVar7 = _strdup("[Loader] Connected to RevampedHook log pipe\r\n");
      PostMessageW(DAT_14000a170,0x8001,0,(LPARAM)pcVar7);
      uStack_10b0 = 0;
      local_10a8 = 0;
      local_10a0 = 0xf;
      local_10b8 = (undefined1 (*) [32])0x0;
      BVar6 = ReadFile(hFile,local_1058,0xfff,&local_10c4,(LPOVERLAPPED)0x0);
      if (BVar6 != 0) goto LAB_1400020a0;
      goto LAB_140002470;
    }
    Sleep(100);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 100);
  pcVar7 = _strdup("[Error] Could not connect to RevampedHook log pipe!\r\n");
  PostMessageW(DAT_14000a170,0x8001,0,(LPARAM)pcVar7);
  puVar19 = auStackY_1108;
LAB_1400024ca:
  *(undefined8 *)(puVar19 + -8) = 0x1400024d9;
  return;
LAB_1400020a0:
  if (local_10c4 == 0) goto LAB_140002470;
  if (0xfff < (ulonglong)local_10c4) {
    FUN_140003b4c();
LAB_1400024f3:
                    /* WARNING: Subroutine does not return */
    FUN_140002f10();
  }
  local_1058[local_10c4] = '\0';
  sVar8 = strlen(local_1058);
  if (local_10a0 - local_10a8 < sVar8) {
    FUN_140001130(&local_10b8,sVar8,0,local_1058,sVar8);
  }
  else {
    pauVar14 = (undefined1 (*) [32])&local_10b8;
    if (0xf < local_10a0) {
      pauVar14 = local_10b8;
    }
    _Dst = (void *)((longlong)*pauVar14 + local_10a8);
    local_10a8 = local_10a8 + sVar8;
    memmove(_Dst,local_1058,sVar8);
    *(undefined1 *)((longlong)_Dst + sVar8) = 0;
  }
LAB_140002130:
  pppppcVar21 = (char *****)0x0;
  pauVar14 = (undefined1 (*) [32])&local_10b8;
  if (0xf < local_10a0) {
    pauVar14 = local_10b8;
  }
  if (local_10a8 == 0) {
    uVar20 = 0xffffffffffffffff;
  }
  else {
    pauVar2 = (undefined1 (*) [32])(*pauVar14 + local_10a8);
    pauVar9 = thunk_FUN_1400035c0(pauVar14,pauVar2,10);
    uVar20 = 0xffffffffffffffff;
    if (pauVar9 != pauVar2) {
      uVar20 = (longlong)pauVar9 - (longlong)pauVar14;
    }
  }
  hFile = local_10c0;
  if (uVar20 != 0xffffffffffffffff) {
    local_1098 = (undefined8 *****)0x0;
    uStack_1090 = 0;
    local_1088 = 0;
    local_1080 = 0;
    uVar10 = uVar20;
    if (local_10a8 < uVar20) {
      uVar10 = local_10a8;
    }
    pauVar14 = (undefined1 (*) [32])&local_10b8;
    if (0xf < local_10a0) {
      pauVar14 = local_10b8;
    }
    FUN_140001000(&local_1098,pauVar14,uVar10);
    uVar10 = uVar20 + 1;
    if (local_10a8 < uVar20 + 1) {
      uVar10 = local_10a8;
    }
    pauVar14 = (undefined1 (*) [32])&local_10b8;
    if (0xf < local_10a0) {
      pauVar14 = local_10b8;
    }
    uVar16 = local_10a8 - uVar10;
    memmove(pauVar14,(void *)((longlong)*pauVar14 + uVar10),uVar16 + 1);
    pppppuVar4 = (undefined8 *****)local_1098;
    sVar8 = local_1088;
    uVar20 = local_1080;
    while (local_10a8 = uVar16, local_1098 = pppppuVar4, local_1080 = uVar20, sVar8 != 0) {
      pppppuVar11 = &local_1098;
      if (0xf < uVar20) {
        pppppuVar11 = pppppuVar4;
      }
      local_1088 = sVar8 - 1;
      if (*(char *)(local_1088 + (longlong)pppppuVar11) != '\r') {
        if (sVar8 != 0) {
          if (0x7fffffffffffffff - sVar8 < 2) {
            local_1088 = sVar8;
                    /* WARNING: Subroutine does not return */
            FUN_140002fa0();
          }
          pppppuVar11 = &local_1098;
          if (0xf < uVar20) {
            pppppuVar11 = pppppuVar4;
          }
          local_1078 = (char ****)0x0;
          uStack_1070 = 0;
          local_1068 = 0;
          local_1060 = 0;
          uVar10 = sVar8 + 2;
          if (uVar10 < 0x10) {
            uVar16 = 0xf;
            pppppcVar21 = &local_1078;
            local_1088 = sVar8;
            pppppcVar5 = (char *****)local_1078;
          }
          else {
            uVar16 = uVar10 | 0xf;
            if (0x7fffffffffffffff < uVar16) {
              uVar16 = 0x7fffffffffffffff;
              uVar12 = 0x8000000000000027;
LAB_140002327:
              local_1088 = sVar8;
              ppppcVar13 = (char ****)FUN_140003b00(uVar12);
              if (ppppcVar13 != (char ****)0x0) {
                pppppcVar21 = (char *****)((longlong)ppppcVar13 + 0x27U & 0xffffffffffffffe0);
                pppppcVar21[-1] = ppppcVar13;
                pppppcVar5 = pppppcVar21;
                goto LAB_140002362;
              }
LAB_1400024ad:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar17 = auStackY_1100;
              goto LAB_1400024b4;
            }
            if (uVar16 < 0x16) {
              uVar16 = 0x16;
            }
            uVar1 = uVar16 + 1;
            local_1088 = sVar8;
            pppppcVar5 = pppppcVar21;
            if (uVar1 == 0) goto LAB_140002362;
            if (0xfff < uVar1) {
              uVar12 = uVar16 + 0x28;
              if (uVar1 < uVar12) goto LAB_140002327;
              goto LAB_1400024f3;
            }
            pppppcVar21 = (char *****)FUN_140003b00(uVar1);
            pppppcVar5 = pppppcVar21;
          }
LAB_140002362:
          local_1078 = (char ****)pppppcVar5;
          local_1068 = uVar10;
          local_1060 = uVar16;
          memcpy(pppppcVar21,pppppuVar11,sVar8);
          *(undefined2 *)((longlong)pppppcVar21 + sVar8) = DAT_1400055f4;
          *(char *)((longlong)pppppcVar21 + uVar10) = '\0';
          pppppcVar21 = &local_1078;
          if (0xf < local_1060) {
            pppppcVar21 = (char *****)local_1078;
          }
          pcVar7 = _strdup((char *)pppppcVar21);
          PostMessageW(DAT_14000a170,0x8001,0,(LPARAM)pcVar7);
          if (0xf < local_1060) {
            pppppcVar21 = (char *****)local_1078;
            if ((0xfff < local_1060 + 1) &&
               (pppppcVar21 = (char *****)local_1078[-1],
               (char *)0x1f < (char *)((longlong)local_1078 + (-8 - (longlong)pppppcVar21))))
            goto LAB_1400024ad;
            free(pppppcVar21);
          }
          local_1068 = 0;
          local_1060 = 0xf;
          local_1078 = (char ****)((ulonglong)local_1078 & 0xffffffffffffff00);
          if (uVar20 < 0x10) goto LAB_140002130;
          pppppuVar11 = pppppuVar4;
          if ((0xfff < uVar20 + 1) &&
             (pppppuVar11 = (undefined8 *****)pppppuVar4[-1], puVar17 = auStackY_1108,
             0x1f < (ulonglong)((longlong)pppppuVar4 + (-8 - (longlong)pppppuVar11))))
          goto LAB_1400024b4;
          free(pppppuVar11);
          goto LAB_140002130;
        }
        break;
      }
      pppppuVar11 = &local_1098;
      if (0xf < uVar20) {
        pppppuVar11 = pppppuVar4;
      }
      *(undefined1 *)(local_1088 + (longlong)pppppuVar11) = 0;
      pppppuVar4 = (undefined8 *****)local_1098;
      sVar8 = local_1088;
      uVar20 = local_1080;
    }
    local_1088 = sVar8;
    if (0xf < uVar20) {
      pppppuVar11 = pppppuVar4;
      if ((0xfff < uVar20 + 1) &&
         (pppppuVar11 = (undefined8 *****)pppppuVar4[-1], puVar17 = auStackY_1108,
         0x1f < (ulonglong)((longlong)pppppuVar4 + (-8 - (longlong)pppppuVar11)))) {
LAB_1400024b4:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar18 = puVar17 + 8;
        goto LAB_1400024bb;
      }
      free(pppppuVar11);
    }
    goto LAB_140002130;
  }
  BVar6 = ReadFile(local_10c0,local_1058,0xfff,&local_10c4,(LPOVERLAPPED)0x0);
  if (BVar6 == 0) goto LAB_140002470;
  goto LAB_1400020a0;
LAB_140002470:
  CloseHandle(hFile);
  if (0xf < local_10a0) {
    pauVar14 = local_10b8;
    puVar19 = auStackY_1108;
    if ((0xfff < local_10a0 + 1) &&
       (pauVar14 = *(undefined1 (**) [32])((longlong)local_10b8[-1] + 0x18), puVar19 = auStackY_1108
       , 0x1f < (ulonglong)((longlong)local_10b8 + (-8 - (longlong)pauVar14)))) {
LAB_1400024bb:
      pcVar3 = (code *)swi(0x29);
      pauVar14 = (undefined1 (*) [32])(*pcVar3)(5);
      puVar19 = puVar18 + 8;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1400024ca;
    free(pauVar14);
  }
  goto LAB_1400024ca;
}



// ============================================================
// Function: FUN_140002500 @ 140002500
// ============================================================

void FUN_140002500(void)

{
  WaitForSingleObject(DAT_14000a1c8,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00014000252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostMessageW(DAT_14000a170,0x8002,0,0);
  return;
}



// ============================================================
// Function: FUN_140002540 @ 140002540
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140002540(LPCSTR param_1)

{
  undefined1 auStackY_248 [32];
  WCHAR local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14000a040 ^ (ulonglong)auStackY_248;
  MultiByteToWideChar(0xfde9,0,param_1,-1,local_218,0x100);
  SetWindowTextW(DAT_14000a198,local_218);
  return;
}



// ============================================================
// Function: FUN_1400025b0 @ 1400025b0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LRESULT FUN_1400025b0(HWND param_1,uint param_2,HDC param_3,HWND param_4)

{
  ulonglong uVar1;
  void *_Memory;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 ***pppuVar7;
  LPCSTR ***ppppCVar8;
  void *_Memory_00;
  ulonglong uVar9;
  LRESULT LVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 ****ppppuVar14;
  undefined1 *puVar15;
  int iVar16;
  tagRECT *_Src;
  undefined8 uStackY_720;
  undefined1 auStackY_718 [8];
  undefined1 auStackY_710 [24];
  tagRECT local_6b0;
  size_t local_6a0;
  ulonglong local_698;
  undefined8 ***local_690;
  undefined8 uStack_688;
  ulonglong local_680;
  ulonglong uStack_678;
  LPCSTR **local_670;
  undefined8 **ppuStack_668;
  undefined8 **local_660;
  undefined8 **ppuStack_658;
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  
  puVar15 = auStackY_718;
  puVar13 = auStackY_718;
  local_48 = DAT_14000a040 ^ (ulonglong)auStackY_718;
  ppppuVar14 = (undefined8 ****)0x0;
  if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      uVar11 = (uint)param_3 & 0xffff;
      if (uVar11 == 0x3e9) {
        puVar13 = auStackY_718;
        if (DAT_14000a1e0 == '\0') {
          uVar9 = FUN_140001660();
          if ((char)uVar9 == '\0') {
            FUN_140002540("Launch FAILED - check log");
            LVar10 = 0;
            puVar13 = auStackY_718;
          }
          else {
            EnableWindow(DAT_14000a188,0);
            FUN_140002540(&DAT_1400055a0);
            LVar10 = 0;
            puVar13 = auStackY_718;
          }
          goto LAB_140002ed8;
        }
      }
      else {
        puVar13 = auStackY_718;
        if ((uVar11 == 0x3ec) &&
           (GetWindowTextW(DAT_14000a180,local_448,0x200), puVar13 = auStackY_718,
           local_448[0] != L'\0')) {
          SetWindowTextW(DAT_14000a180,L"");
          SetFocus(DAT_14000a180);
          WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
          local_6b0._0_8_ = (tagRECT *)0x0;
          local_6b0.right = 0;
          local_6b0.bottom = 0;
          local_6a0 = 0;
          local_698 = 0;
          sVar4 = strlen(local_648);
          FUN_140001000((undefined8 *)&local_6b0,local_648,sVar4);
          sVar4 = local_6a0;
          if (0x7fffffffffffffff - local_6a0 < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_140002fa0();
          }
          _Src = &local_6b0;
          if (0xf < local_698) {
            _Src = (tagRECT *)local_6b0._0_8_;
          }
          local_690 = (undefined8 ****)0x0;
          uStack_688 = 0;
          local_680 = 0;
          uStack_678 = 0;
          uVar9 = local_6a0 + 2;
          if (uVar9 < 0x10) {
            uVar5 = 0xf;
            ppppuVar14 = &local_690;
LAB_140002b64:
            local_680 = uVar9;
            uStack_678 = uVar5;
            *(undefined2 *)ppppuVar14 = DAT_1400055f8;
            memcpy((void *)((longlong)ppppuVar14 + 2),_Src,sVar4);
            *(undefined1 *)(uVar9 + (longlong)ppppuVar14) = 0;
            uVar9 = local_680;
            if (uStack_678 - local_680 < 2) {
              ppppuVar14 = (undefined8 ****)FUN_140001130(&local_690,2,0,&DAT_1400055f4,2);
            }
            else {
              local_680 = local_680 + 2;
              ppppuVar14 = &local_690;
              if (0xf < uStack_678) {
                ppppuVar14 = (undefined8 ****)local_690;
              }
              *(undefined2 *)((longlong)ppppuVar14 + uVar9) = DAT_1400055f4;
              *(undefined1 *)((longlong)ppppuVar14 + uVar9 + 2) = 0;
              ppppuVar14 = &local_690;
            }
            local_670 = (LPCSTR **)0x0;
            ppuStack_668 = (undefined8 **)0x0;
            local_660 = (undefined8 **)0x0;
            ppuStack_658 = (undefined8 **)0x0;
            local_670 = (LPCSTR **)*ppppuVar14;
            ppuStack_668 = ppppuVar14[1];
            local_660 = ppppuVar14[2];
            ppuStack_658 = ppppuVar14[3];
            ppppuVar14[2] = (undefined8 ***)0x0;
            ppppuVar14[3] = (undefined8 ***)0xf;
            *(undefined1 *)ppppuVar14 = 0;
            puVar15 = auStackY_718;
            if (0xf < uStack_678) {
              ppppuVar14 = (undefined8 ****)local_690;
              puVar15 = auStackY_718;
              if ((0xfff < uStack_678 + 1) &&
                 (ppppuVar14 = (undefined8 ****)local_690[-1], puVar15 = auStackY_718,
                 0x1f < (ulonglong)((longlong)local_690 + (-8 - (longlong)ppppuVar14)))) {
                pcVar2 = (code *)swi(0x29);
                ppppuVar14 = (undefined8 ****)(*pcVar2)(5);
                puVar15 = auStackY_710;
              }
              *(undefined8 *)(puVar15 + -8) = 0x140002c52;
              free(ppppuVar14);
            }
            local_680 = 0;
            uStack_678 = 0xf;
            local_690 = (undefined8 ***)((ulonglong)local_690 & 0xffffffffffffff00);
            ppppCVar8 = &local_670;
            if ((undefined8 ***)0xf < ppuStack_658) {
              ppppCVar8 = (LPCSTR ***)local_670;
            }
            *(undefined8 *)(puVar15 + -8) = 0x140002c75;
            FUN_140001470((LPCSTR)ppppCVar8);
            uVar9 = local_698;
            if (DAT_14000a000 != (HANDLE)0xffffffffffffffff) {
              uVar5 = *(ulonglong *)(puVar15 + 0x78);
              if (local_698 == uVar5) {
                *(undefined8 *)(puVar15 + 0x20) = 1;
                *(undefined8 *)(puVar15 + -8) = 0x140002ce1;
                FUN_140001130((undefined8 *)(puVar15 + 0x68),1,0,&DAT_1400055fc,
                              *(size_t *)(puVar15 + 0x20));
              }
              else {
                *(ulonglong *)(puVar15 + 0x78) = uVar5 + 1;
                puVar12 = (undefined8 *)(puVar15 + 0x68);
                if (0xf < uVar9) {
                  puVar12 = *(undefined8 **)(puVar15 + 0x68);
                }
                *(char *)((longlong)puVar12 + uVar5) = (char)DAT_1400055fc;
                *(undefined1 *)((longlong)puVar12 + uVar5 + 1) = 0;
              }
              puVar13 = puVar15 + 0x68;
              if (0xf < local_698) {
                puVar13 = *(undefined1 **)(puVar15 + 0x68);
              }
              *(undefined8 *)(puVar15 + 0x20) = 0;
              *(undefined8 *)(puVar15 + -8) = 0x140002d10;
              WriteFile(DAT_14000a000,puVar13,*(DWORD *)(puVar15 + 0x78),(LPDWORD)(puVar15 + 0x60),
                        *(LPOVERLAPPED *)(puVar15 + 0x20));
            }
            if ((undefined8 ***)0xf < ppuStack_658) {
              ppppCVar8 = (LPCSTR ***)local_670;
              if ((0xfff < (longlong)ppuStack_658 + 1U) &&
                 (ppppCVar8 = (LPCSTR ***)local_670[-1],
                 (LPCSTR)0x1f < (LPCSTR)((longlong)local_670 + (-8 - (longlong)local_670[-1]))))
              goto LAB_140002d42;
              goto LAB_140002d4c;
            }
          }
          else {
            uVar5 = uVar9 | 0xf;
            if (uVar5 < 0x8000000000000000) {
              if (uVar5 < 0x16) {
                uVar5 = 0x16;
              }
              uVar1 = uVar5 + 1;
              if (uVar1 == 0) {
                local_690 = (undefined8 ****)0x0;
              }
              else {
                if (0xfff < uVar1) {
                  uVar6 = uVar5 + 0x28;
                  if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    FUN_140002f10();
                  }
                  goto LAB_140002af1;
                }
                ppppuVar14 = (undefined8 ****)FUN_140003b00(uVar1);
                local_690 = ppppuVar14;
              }
              goto LAB_140002b64;
            }
            uVar6 = 0x8000000000000027;
            uVar5 = 0x7fffffffffffffff;
LAB_140002af1:
            pppuVar7 = (undefined8 ***)FUN_140003b00(uVar6);
            if (pppuVar7 != (undefined8 ***)0x0) {
              ppppuVar14 = (undefined8 ****)((longlong)pppuVar7 + 0x27U & 0xffffffffffffffe0);
              ppppuVar14[-1] = pppuVar7;
              local_690 = ppppuVar14;
              goto LAB_140002b64;
            }
LAB_140002d42:
            pcVar2 = (code *)swi(0x29);
            ppppCVar8 = (LPCSTR ***)(*pcVar2)(5);
            puVar15 = puVar15 + 8;
LAB_140002d4c:
            *(undefined8 *)(puVar15 + -8) = 0x140002d51;
            free(ppppCVar8);
          }
          local_660 = (undefined8 **)0x0;
          ppuStack_658 = (undefined8 **)0xf;
          local_670 = (LPCSTR **)((ulonglong)local_670 & 0xffffffffffffff00);
          puVar13 = puVar15;
          if (0xf < local_698) {
            _Memory_00 = *(void **)(puVar15 + 0x68);
            if (0xfff < local_698 + 1) {
              _Memory = *(void **)((longlong)_Memory_00 + -8);
              if ((ulonglong)((longlong)_Memory_00 + (-8 - (longlong)_Memory)) < 0x20) {
                *(undefined8 *)(puVar15 + -8) = 0x140002d9a;
                free(_Memory);
                LVar10 = 0;
                goto LAB_140002ed8;
              }
              pcVar2 = (code *)swi(0x29);
              _Memory_00 = (void *)(*pcVar2)(5);
              puVar15 = puVar15 + 8;
            }
            *(undefined8 *)(puVar15 + -8) = 0x140002db0;
            free(_Memory_00);
            LVar10 = 0;
            puVar13 = puVar15;
            goto LAB_140002ed8;
          }
        }
      }
    }
    else {
      if (param_2 == 1) {
        DAT_14000a188 =
             CreateWindowExW(0,L"BUTTON",L"Launch Server",0x50000000,10,10,0x8c,0x20,param_1,
                             (HMENU)0x3e9,(HINSTANCE)0x0,(LPVOID)0x0);
        SendMessageW(DAT_14000a188,0x30,DAT_14000a1a0,1);
        DAT_14000a198 =
             CreateWindowExW(0,L"STATIC",L"  Ready",0x50000000,0xa0,0x10,400,0x14,param_1,
                             (HMENU)0x3ed,(HINSTANCE)0x0,(LPVOID)0x0);
        SendMessageW(DAT_14000a198,0x30,DAT_14000a1a0,1);
        DAT_14000a178 =
             CreateWindowExW(0x200,L"EDIT",L"",0x50200844,10,0x32,0x3c0,0x230,param_1,(HMENU)0x3ea,
                             (HINSTANCE)0x0,(LPVOID)0x0);
        SendMessageW(DAT_14000a178,0x30,DAT_14000a1a8,1);
        SendMessageW(DAT_14000a178,0xc5,2000000,0);
        DAT_14000a180 =
             CreateWindowExW(0x200,L"EDIT",L"",0x50000080,0x1e,0x26a,0x35c,0x1a,param_1,(HMENU)0x3eb
                             ,(HINSTANCE)0x0,(LPVOID)0x0);
        SendMessageW(DAT_14000a180,0x30,DAT_14000a1a8,1);
        DAT_14000a190 =
             CreateWindowExW(0,L"BUTTON",L"Send",0x50000000,900,0x26a,0x46,0x1a,param_1,(HMENU)0x3ec
                             ,(HINSTANCE)0x0,(LPVOID)0x0);
        SendMessageW(DAT_14000a190,0x30,DAT_14000a1a0,1);
        CreateWindowExW(0,L"STATIC",L">",0x50000000,0xc,0x26d,0x10,0x14,param_1,(HMENU)0x0,
                        (HINSTANCE)0x0,(LPVOID)0x0);
        LVar10 = 0;
        puVar13 = auStackY_718;
        goto LAB_140002ed8;
      }
      if (param_2 == 2) {
        PostQuitMessage(0);
        LVar10 = 0;
        puVar13 = auStackY_718;
        goto LAB_140002ed8;
      }
      if (param_2 == 5) {
        GetClientRect(param_1,&local_6b0);
        iVar16 = local_6b0.right - local_6b0.left;
        iVar3 = local_6b0.bottom - local_6b0.top;
        MoveWindow(DAT_14000a178,10,0x32,iVar16 + -0x14,iVar3 + -100,1);
        MoveWindow(DAT_14000a180,0x1e,iVar3 + -0x2a,iVar16 + -0x6e,0x1a,1);
        MoveWindow(DAT_14000a190,iVar16 + -0x46,iVar3 + -0x2a,0x3c,0x1a,1);
        LVar10 = 0;
        puVar13 = auStackY_718;
        goto LAB_140002ed8;
      }
      if (param_2 != 0x10) goto LAB_140002e1f;
      if ((DAT_14000a1c8 == 0) ||
         (iVar3 = MessageBoxW(param_1,L"Server is running. Really quit?",L"RevampedHook",0x24),
         puVar13 = auStackY_718, iVar3 == 6)) {
        DestroyWindow(param_1);
        LVar10 = 0;
        puVar13 = auStackY_718;
        goto LAB_140002ed8;
      }
    }
  }
  else {
    if ((param_2 == 0x133) || (param_2 == 0x138)) {
      SetTextColor(param_3,0xdcdcdc);
      if (param_4 == DAT_14000a178) {
        SetBkColor(param_3,0x141414);
        LVar10 = DAT_14000a1c0;
        puVar13 = auStackY_718;
      }
      else if (param_4 == DAT_14000a180) {
        SetBkColor(param_3,0x323232);
        LVar10 = DAT_14000a1b8;
        puVar13 = auStackY_718;
      }
      else {
        SetBkColor(param_3,0x1e1e1e);
        LVar10 = DAT_14000a1b0;
      }
      goto LAB_140002ed8;
    }
    if (param_2 != 0x8001) {
      if (param_2 == 0x8002) {
        FUN_140002540("Server process exited");
        EnableWindow(DAT_14000a188,1);
        LOCK();
        DAT_14000a1e0 = '\0';
        UNLOCK();
        FUN_140001470("[Loader] Server process has exited.\r\n");
        LVar10 = 0;
        puVar13 = auStackY_718;
        goto LAB_140002ed8;
      }
LAB_140002e1f:
      LVar10 = DefWindowProcW(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      puVar13 = auStackY_718;
      goto LAB_140002ed8;
    }
    puVar13 = auStackY_718;
    if (param_4 != (HWND)0x0) {
      FUN_140001470((LPCSTR)param_4);
      free(param_4);
      puVar13 = auStackY_718;
    }
  }
  LVar10 = 0;
LAB_140002ed8:
  *(undefined8 *)(puVar13 + -8) = 0x140002ee7;
  return LVar10;
}



// ============================================================
// Function: FUN_140002f10 @ 140002f10
// ============================================================

void FUN_140002f10(void)

{
  undefined8 local_28 [5];
  
  FUN_140001340(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140008920);
}



// ============================================================
// Function: FUN_140002f30 @ 140002f30
// ============================================================

void FUN_140002f30(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar3 = auStack_28;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      pcVar2 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar2)(5);
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x140002f78;
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ============================================================
// Function: FUN_140002fa0 @ 140002fa0
// ============================================================

void FUN_140002fa0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// Function: FUN_140002fc0 @ 140002fc0
// ============================================================

void FUN_140002fc0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// Function: FUN_140002fe0 @ 140002fe0
// ============================================================

void FUN_140002fe0(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_18 = *(undefined4 *)param_1;
    uStack_14 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_10 = *(undefined4 *)(param_1 + 1);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0xc);
    iVar2 = _Thrd_detach(&local_18);
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  std::_Throw_Cpp_error(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// Function: FUN_140003020 @ 140003020
// ============================================================

char * FUN_140003020(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



// ============================================================
// Function: FUN_140003040 @ 140003040
// ============================================================

undefined4 FUN_140003040(HINSTANCE param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  HWND pHVar2;
  tagMSG local_a8;
  WNDCLASSEXW local_78;
  
  Ordinal_17();
  local_78.cbSize = 0x50;
  local_78.hIcon = (HICON)0x0;
  local_78.hCursor = (HCURSOR)0x0;
  local_78.hbrBackground = (HBRUSH)0x0;
  local_78.lpszMenuName = (LPCWSTR)0x0;
  local_78.lpszClassName = (LPCWSTR)0x0;
  local_78.hIconSm = (HICON)0x0;
  local_78.lpfnWndProc = FUN_1400025b0;
  local_78.cbClsExtra = 0;
  local_78.cbWndExtra = 0;
  local_78.style = 3;
  local_78.hInstance = param_1;
  local_78.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_78.hbrBackground = CreateSolidBrush(0x1e1e1e);
  local_78.lpszClassName = L"RevampedHookLoader";
  local_78.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  RegisterClassExW(&local_78);
  DAT_14000a1b0 = CreateSolidBrush(0x1e1e1e);
  DAT_14000a1b8 = CreateSolidBrush(0x323232);
  DAT_14000a1c0 = CreateSolidBrush(0x141414);
  DAT_14000a1a0 = CreateFontW(0x10,0,0,0,400,0,0,0,1,0,0,5,0,L"Segoe UI");
  DAT_14000a1a8 = CreateFontW(0xf,0,0,0,400,0,0,0,1,0,0,5,0,L"Consolas");
  DAT_14000a170 =
       CreateWindowExW(0,L"RevampedHookLoader",L"RevampedHook â€” Server Launcher",0xcf0000,
                       -0x80000000,-0x80000000,1000,700,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  ShowWindow(DAT_14000a170,param_4);
  UpdateWindow(DAT_14000a170);
  iVar1 = GetMessageA(&local_a8,(HWND)0x0,0,0);
  while (iVar1 != 0) {
    if (((local_a8.message == 0x100) &&
        (CONCAT44(local_a8.wParam._4_4_,(undefined4)local_a8.wParam) == 0xd)) &&
       (pHVar2 = GetFocus(), pHVar2 == DAT_14000a180)) {
      SendMessageW(DAT_14000a170,0x111,0x3ec,DAT_14000a190);
    }
    else {
      TranslateMessage(&local_a8);
      DispatchMessageA(&local_a8);
    }
    iVar1 = GetMessageA(&local_a8,(HWND)0x0,0,0);
  }
  if (DAT_14000a1c8 != (HANDLE)0x0) {
    TerminateProcess(DAT_14000a1c8,0);
    CloseHandle(DAT_14000a1c8);
    CloseHandle(DAT_14000a1d0);
  }
  if (DAT_14000a000 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_14000a000);
  }
  DeleteObject(DAT_14000a1a0);
  DeleteObject(DAT_14000a1a8);
  DeleteObject(DAT_14000a1b0);
  DeleteObject(DAT_14000a1b8);
  DeleteObject(DAT_14000a1c0);
  return (undefined4)local_a8.wParam;
}



// ============================================================
// Function: FUN_140003380 @ 140003380
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_140003380(undefined1 (*param_1) [16],undefined1 *param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  undefined7 extraout_var;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var_00 [56];
  
  local_38 = DAT_14000a040 ^ (ulonglong)auStack_298;
  if ((DAT_14000a08c & 4) == 0) {
    memset(local_140,0,0x100);
    puVar5 = *param_3;
    for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4);
        param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
      local_140[(byte)(*param_3)[0]] = '\x01';
    }
    do {
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] == '\0');
  }
  else {
    cVar6 = FUN_140003a40((ulonglong)param_2,param_4,(byte)(DAT_14000a08c >> 5) & 1);
    iVar7 = (int)CONCAT71(extraout_var,cVar6);
    if (iVar7 == 2) {
      auVar11._0_8_ = FUN_1400038e0((byte *)param_3,param_4);
      auVar11._8_56_ = extraout_var_00;
      local_260 = auVar11._0_32_;
      do {
        if (param_2 < (undefined1 *)0x8) {
          uVar9 = (uint)param_2 & 7;
          if (((ulonglong)param_2 & 7) != 0) {
            memcpy(&local_40,param_1,(ulonglong)uVar9);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar10 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar10,_DAT_140007e20);
            auVar10 = vpsrld_avx2(auVar10,5);
            auVar10 = vpermd_avx2(auVar10,local_260);
            auVar4 = vpsllvd_avx2(auVar10,auVar4);
            uVar8 = vmovmskps_avx(auVar4);
            uVar8 = uVar8 & (1 << (sbyte)uVar9) - 1U;
            if (uVar8 != 0) {
              return (undefined1 *)(ulonglong)(0x1f - LZCOUNT(uVar8));
            }
          }
          return (undefined1 *)0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1[-1] + 8 + (longlong)param_2);
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 + -8;
        auVar10 = vpsrld_avx2(auVar4,5);
        auVar10 = vpermd_avx2(auVar10,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_140007e20);
        auVar4 = vpsllvd_avx2(auVar10,auVar4);
        iVar7 = vmovmskps_avx(auVar4);
      } while (iVar7 == 0);
      param_2 = param_2 + (0x1f - (ulonglong)(uint)LZCOUNT(iVar7));
    }
    else if (iVar7 == 1) {
      memset(local_240,0,0x100);
      puVar5 = *param_3;
      for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4);
          param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
        local_240[(byte)(*param_3)[0]] = '\x01';
      }
      do {
        if (param_2 == (undefined1 *)0x0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
        param_2 = param_2 + -1;
      } while (local_240[*pbVar1] == '\0');
    }
    else {
      param_2 = FUN_1400036c0(param_1,(ulonglong)param_2,param_3,param_4);
    }
  }
  return param_2;
}



// ============================================================
// Function: FUN_1400035c0 @ 1400035c0
// ============================================================

undefined1 (*) [32]
FUN_1400035c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_14000a08c & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_14000a08c & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_140003661;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140007df0 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_140007df0 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_140003661:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}



// ============================================================
// Function: FUN_1400036c0 @ 1400036c0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140003827) */
/* WARNING: Removing unreachable block (ram,0x00014000382a) */
/* WARNING: Removing unreachable block (ram,0x0001400038a3) */
/* WARNING: Removing unreachable block (ram,0x0001400038a5) */

undefined1 *
FUN_1400036c0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar11;
  
  local_68 = DAT_14000a040 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)param_2 & 0xf;
  uVar11 = (ulonglong)uVar10;
  puVar6 = *param_1 + param_2;
  iVar3 = -1;
  uVar7 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    memcpy(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          uVar13 = param_2 < 0x10;
          if ((bool)uVar13) {
            memcpy(&local_88,param_1,param_2);
            auVar14._8_8_ = uStack_80;
            auVar14._0_8_ = local_88;
          }
          else {
            auVar14 = *param_1;
          }
          iVar3 = pcmpestri(auVar2,auVar14,0x40,uVar7,uVar10);
          if ((bool)uVar13) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        return (undefined1 *)0xffffffffffffffff;
      }
      pauVar9 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      iVar3 = pcmpestri(auVar2,*pauVar9,0x40,uVar7,0x10);
    } while (bVar12);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar9 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_78,pauVar9,(ulonglong)uVar7);
    auVar2 = local_78;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 == 0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        uVar13 = local_88 < 0x10;
        if ((bool)uVar13) {
          memcpy(local_78,param_1,local_88);
        }
        else {
          local_78 = *param_1;
        }
        do {
          iVar5 = pcmpestri(*param_3,local_78,0x40,0x10,uVar10);
          if (((bool)uVar13) && (iVar3 < iVar5)) {
            iVar3 = iVar5;
          }
          param_3 = param_3 + 1;
          uVar13 = param_3 < pauVar9;
        } while (param_3 != pauVar9);
        if ((param_4 & 0xf) != 0) {
          pcmpestri(auVar2,local_78,0x40,uVar7,uVar10);
        }
        return (undefined1 *)(longlong)iVar3;
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      iVar5 = -1;
      pauVar8 = param_3;
      do {
        iVar4 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
        if ((bVar12) && (iVar5 < iVar4)) {
          iVar5 = iVar4;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar9;
      } while (pauVar8 != pauVar9);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar7,0x10);
      }
    } while (iVar5 == -1);
    puVar6 = puVar6 + ((longlong)iVar5 - (longlong)param_1);
  }
  return puVar6;
}



// ============================================================
// Function: FUN_1400038e0 @ 1400038e0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1400038e0(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_158 [56];
  undefined1 local_120 [8] [32];
  ulonglong local_20;
  
  local_20 = DAT_14000a040 ^ (ulonglong)auStack_158;
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x15) {
    auVar5 = ZEXT1664((undefined1  [16])0x0);
    uVar4 = 0;
    while (param_1 != pbVar1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      auVar3 = vpmovzxbq_avx2(ZEXT416((uint)(1 << (bVar2 >> 3 & 0x18))));
      auVar3 = vpsllq_avx2(auVar3,ZEXT416(bVar2 & 0x3f));
      auVar3 = vpor_avx2(auVar3,auVar5._0_32_);
      auVar5 = ZEXT3264(auVar3);
      uVar4 = auVar3._0_8_;
    }
  }
  else {
    memset(local_120,0,0x100);
    for (; param_1 != pbVar1; param_1 = param_1 + 1) {
      local_120[0][*param_1] = 0xff;
    }
    uVar4 = (ulonglong)
            ((uint)(SUB321(local_120[0] >> 7,0) & 1) |
             (uint)(SUB321(local_120[0] >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(local_120[0] >> 0x17,0) & 1) << 2 |
             (uint)(SUB321(local_120[0] >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(local_120[0] >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(local_120[0] >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(local_120[0] >> 0x37,0) & 1) << 6 |
             (uint)(SUB321(local_120[0] >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(local_120[0] >> 0x47,0) & 1) << 8 |
             (uint)(SUB321(local_120[0] >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(local_120[0] >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(local_120[0] >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(local_120[0] >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(local_120[0] >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(local_120[0] >> 0x77,0) & 1) << 0xe |
             (uint)SUB321(local_120[0] >> 0x7f,0) << 0xf |
             (uint)(SUB321(local_120[0] >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(local_120[0] >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(local_120[0] >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(local_120[0] >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(local_120[0] >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(local_120[0] >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(local_120[0] >> 0xb7,0) & 1) << 0x16 |
             (uint)SUB321(local_120[0] >> 0xbf,0) << 0x17 |
             (uint)(SUB321(local_120[0] >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(local_120[0] >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(local_120[0] >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(local_120[0] >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(local_120[0] >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(local_120[0] >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(local_120[0] >> 0xf7,0) & 1) << 0x1e |
            (uint)(byte)(local_120[0][0x1f] >> 7) << 0x1f);
  }
  return uVar4;
}



// ============================================================
// Function: FUN_140003a40 @ 140003a40
// ============================================================

char FUN_140003a40(ulonglong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return '\x02';
  }
  bVar1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bVar1 = 0x20 < param_1;
  }
  return bVar1;
}



// ============================================================
// Function: thunk_FUN_140003380 @ 140003ad0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
thunk_FUN_140003380(undefined1 (*param_1) [16],undefined1 *param_2,undefined1 (*param_3) [16],
                   ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  undefined7 extraout_var;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_298 [56];
  undefined1 auStack_260 [32];
  char acStack_240 [256];
  char acStack_140 [256];
  ulonglong uStack_40;
  ulonglong uStack_38;
  undefined1 extraout_var_00 [56];
  
  uStack_38 = DAT_14000a040 ^ (ulonglong)auStack_298;
  if ((DAT_14000a08c & 4) == 0) {
    memset(acStack_140,0,0x100);
    puVar5 = *param_3;
    for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4);
        param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
      acStack_140[(byte)(*param_3)[0]] = '\x01';
    }
    do {
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
      param_2 = param_2 + -1;
    } while (acStack_140[*pbVar1] == '\0');
  }
  else {
    cVar6 = FUN_140003a40((ulonglong)param_2,param_4,(byte)(DAT_14000a08c >> 5) & 1);
    iVar7 = (int)CONCAT71(extraout_var,cVar6);
    if (iVar7 == 2) {
      auVar11._0_8_ = FUN_1400038e0((byte *)param_3,param_4);
      auVar11._8_56_ = extraout_var_00;
      auStack_260 = auVar11._0_32_;
      do {
        if (param_2 < (undefined1 *)0x8) {
          uVar9 = (uint)param_2 & 7;
          if (((ulonglong)param_2 & 7) != 0) {
            memcpy(&uStack_40,param_1,(ulonglong)uVar9);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uStack_40;
            auVar10 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar10,_DAT_140007e20);
            auVar10 = vpsrld_avx2(auVar10,5);
            auVar10 = vpermd_avx2(auVar10,auStack_260);
            auVar4 = vpsllvd_avx2(auVar10,auVar4);
            uVar8 = vmovmskps_avx(auVar4);
            uVar8 = uVar8 & (1 << (sbyte)uVar9) - 1U;
            if (uVar8 != 0) {
              return (undefined1 *)(ulonglong)(0x1f - LZCOUNT(uVar8));
            }
          }
          return (undefined1 *)0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1[-1] + 8 + (longlong)param_2);
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 + -8;
        auVar10 = vpsrld_avx2(auVar4,5);
        auVar10 = vpermd_avx2(auVar10,auStack_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_140007e20);
        auVar4 = vpsllvd_avx2(auVar10,auVar4);
        iVar7 = vmovmskps_avx(auVar4);
      } while (iVar7 == 0);
      param_2 = param_2 + (0x1f - (ulonglong)(uint)LZCOUNT(iVar7));
    }
    else if (iVar7 == 1) {
      memset(acStack_240,0,0x100);
      puVar5 = *param_3;
      for (; param_3 != (undefined1 (*) [16])(puVar5 + param_4);
          param_3 = (undefined1 (*) [16])(*param_3 + 1)) {
        acStack_240[(byte)(*param_3)[0]] = '\x01';
      }
      do {
        if (param_2 == (undefined1 *)0x0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        pbVar1 = param_1[-1] + 0xf + (longlong)param_2;
        param_2 = param_2 + -1;
      } while (acStack_240[*pbVar1] == '\0');
    }
    else {
      param_2 = FUN_1400036c0(param_1,(ulonglong)param_2,param_3,param_4);
    }
  }
  return param_2;
}



// ============================================================
// Function: thunk_FUN_1400035c0 @ 140003ae0
// ============================================================

undefined1 (*) [32]
thunk_FUN_1400035c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_14000a08c & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_14000a08c & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_140003661;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140007df0 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_140007df0 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_140003661:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}



// ============================================================
// Function: _Xlength_error @ 140003ae5
// ============================================================

void __cdecl std::_Xlength_error(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140003ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Xlength_error(param_1);
  return;
}



// ============================================================
// Function: _Thrd_detach @ 140003aeb
// ============================================================

void _Thrd_detach(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140003aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Thrd_detach();
  return;
}



// ============================================================
// Function: _Cnd_do_broadcast_at_thread_exit @ 140003af1
// ============================================================

void _Cnd_do_broadcast_at_thread_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140003af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Cnd_do_broadcast_at_thread_exit();
  return;
}



// ============================================================
// Function: _Throw_Cpp_error @ 140003af7
// ============================================================

void __cdecl std::_Throw_Cpp_error(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140003af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Throw_Cpp_error(param_1);
  return;
}



// ============================================================
// Function: FUN_140003b00 @ 140003b00
// ============================================================

void FUN_140003b00(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140002f10();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140004248();
}



// ============================================================
// Function: free @ 140003b3c
// ============================================================

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// ============================================================
// Function: FUN_140003b44 @ 140003b44
// ============================================================

void FUN_140003b44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



// ============================================================
// Function: FUN_140003b4c @ 140003b4c
// ============================================================

void FUN_140003b4c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}



// ============================================================
// Function: FUN_140003b54 @ 140003b54
// ============================================================

undefined8 FUN_140003b54(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  FUN_140003b74(param_2,param_4);
  return 1;
}



// ============================================================
// Function: FUN_140003b74 @ 140003b74
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140003b74(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0) + param_1;
  }
  return param_1;
}



// ============================================================
// Function: FUN_140003bd8 @ 140003bd8
// ============================================================

void FUN_140003bd8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_140003b74(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



// ============================================================
// Function: __chkstk @ 140003c70
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// ============================================================
// Function: __security_check_cookie @ 140003cd0
// ============================================================

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14000a040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_140003b44();
  return;
}



// ============================================================
// Function: FUN_140003cf0 @ 140003cf0
// ============================================================

undefined8 * FUN_140003cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140003d1c @ 140003d1c
// ============================================================

void FUN_140003d1c(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(2);
  uVar5 = FUN_14000456c();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140004560();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_1400046e0();
    atexit(FUN_14000471c);
    uVar7 = FUN_140004564();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140004574();
      bVar2 = FUN_1400045b8();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140004560);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140004560();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140004584();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140004560();
      uVar5 = thunk_FUN_140004560();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_1400045d4(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// Function: FUN_140003dd4 @ 140003dd4
// ============================================================

undefined8 FUN_140003dd4(void)

{
  FUN_14000459c();
  return 0;
}



// ============================================================
// Function: FUN_140003de4 @ 140003de4
// ============================================================

void FUN_140003de4(void)

{
  ulonglong uVar1;
  
  FUN_140004674();
  uVar1 = FUN_140004560();
  _set_new_mode(uVar1 & 0xffffffff);
  return;
}



// ============================================================
// Function: FUN_140003e00 @ 140003e00
// ============================================================

int FUN_140003e00(void)

{
  bool bVar1;
  bool bVar2;
  WORD WVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  IMAGE_DOS_HEADER *pIVar8;
  undefined8 unaff_RBX;
  
  iVar4 = (int)unaff_RBX;
  uVar5 = FUN_1400042ac(1);
  if ((char)uVar5 == '\0') {
    FUN_1400045d4(7);
  }
  else {
    bVar1 = false;
    uVar5 = __scrt_acquire_startup_lock();
    iVar4 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar5);
    if (DAT_14000a1f0 != 1) {
      if (DAT_14000a1f0 == 0) {
        DAT_14000a1f0 = 1;
        iVar4 = _initterm_e(&DAT_1400053c0,&DAT_1400053d8);
        if (iVar4 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1400053a8);
        DAT_14000a1f0 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar5);
      plVar6 = (longlong *)FUN_1400045c4();
      if ((*plVar6 != 0) && (uVar7 = FUN_140004374((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_140005380)(0);
      }
      plVar6 = (longlong *)FUN_1400045cc();
      if ((*plVar6 != 0) && (uVar7 = FUN_140004374((longlong)plVar6), (char)uVar7 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar6);
      }
      WVar3 = __scrt_get_show_window_mode();
      uVar5 = _get_narrow_winmain_command_line();
      pIVar8 = &IMAGE_DOS_HEADER_140000000;
      iVar4 = FUN_140003040((HINSTANCE)&IMAGE_DOS_HEADER_140000000,0,uVar5,(uint)WVar3);
      bVar2 = FUN_140004620();
      if (bVar2) {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar8 >> 8),1),'\0');
        return iVar4;
      }
      goto LAB_140003f61;
    }
  }
  FUN_1400045d4(7);
LAB_140003f61:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}



// ============================================================
// Function: entry @ 140003f74
// ============================================================

void entry(void)

{
  FUN_1400044b0();
  FUN_140003e00();
  return;
}



// ============================================================
// Function: FUN_140003f88 @ 140003f88
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000140004073) */
/* WARNING: Removing unreachable block (ram,0x000140004063) */
/* WARNING: Removing unreachable block (ram,0x00014000403e) */
/* WARNING: Removing unreachable block (ram,0x000140003fc2) */
/* WARNING: Removing unreachable block (ram,0x000140003fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140003f88(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_14000a090 = 0x8000;
    _DAT_14000a098 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14000a1e4 = DAT_14000a1e4 | 1;
    }
  }
  uVar11 = 0;
  uVar8 = 0;
  if (*piVar1 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_14000a1e4 = DAT_14000a1e4 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar8 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_14000a088 = 1;
  DAT_14000a08c = 2;
  uVar9 = DAT_14000a0a0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_14000a088 = 2;
    DAT_14000a08c = 6;
    uVar9 = DAT_14000a0a0 & 0xffffffffffffffee;
  }
  DAT_14000a0a0 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
      _DAT_14000a088 = 3;
      uVar5 = DAT_14000a08c | 8;
      uVar7 = DAT_14000a0a0;
      if ((uVar12 & 0x20) != 0) {
        _DAT_14000a088 = 5;
        uVar5 = DAT_14000a08c | 0x28;
        uVar7 = DAT_14000a0a0 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_14000a08c = DAT_14000a08c | 0x68;
          _DAT_14000a088 = 6;
          uVar5 = DAT_14000a08c;
          uVar7 = DAT_14000a0a0 & 0xffffffffffffffd9;
        }
      }
      DAT_14000a0a0 = uVar7;
      DAT_14000a08c = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_14000a0a0 = DAT_14000a0a0 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_14000a1e8 = uVar8 & 0x400ff;
        DAT_14000a0a0 = DAT_14000a0a0 & ~((ulonglong)(uVar8 >> 0x10 & 6) | 0x1000029);
        if (1 < (byte)_DAT_14000a1e8) {
          DAT_14000a0a0 = DAT_14000a0a0 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_14000a0a0 = DAT_14000a0a0 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_140004224 @ 140004224
// ============================================================

undefined8 * FUN_140004224(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140004248 @ 140004248
// ============================================================

void FUN_140004248(void)

{
  undefined8 local_28 [5];
  
  FUN_140004224(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400089b0);
}



// ============================================================
// Function: free @ 140004268
// ============================================================

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// ============================================================
// Function: __scrt_acquire_startup_lock @ 140004270
// ============================================================

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_14000429e:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_14000a1f8 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_14000a1f8;
        uVar1 = DAT_14000a1f8;
      }
      DAT_14000a1f8 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_14000429e;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}



// ============================================================
// Function: FUN_1400042ac @ 1400042ac
// ============================================================

longlong FUN_1400042ac(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_14000a200 = 1;
  }
  FUN_140003f88();
  cVar1 = FUN_140004584();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_140004584();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_140004584();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// ============================================================
// Function: __scrt_initialize_onexit_tables @ 1400042e8
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_14000a201 == '\0') {
    if (1 < param_1) {
      FUN_1400045d4(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_14000a208 = _DAT_140007e10;
      uRam000000014000a210 = _UNK_140007e18;
      _DAT_14000a218 = 0xffffffffffffffff;
      _DAT_14000a220 = _DAT_140007e10;
      uRam000000014000a228 = _UNK_140007e18;
      _DAT_14000a230 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14000a208);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_14000a220), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_14000a201 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// ============================================================
// Function: FUN_140004374 @ 140004374
// ============================================================

ulonglong FUN_140004374(longlong param_1)

{
  word *pwVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  word *pwVar5;
  
  uVar2 = 0x5a4d;
  if (IMAGE_DOS_HEADER_140000000.e_magic == (char  [2])0x5a4d) {
    lVar4 = (longlong)(int)IMAGE_DOS_HEADER_140000000.e_lfanew;
    if ((*(int *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar4) == 0x4550) &&
       (uVar2 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + lVar4 + -4) == 0x20b)) {
      pwVar5 = (word *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar4 +
                       (ulonglong)
                       *(ushort *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + lVar4 + -8) +
                       0x18);
      uVar2 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar4 + 6);
      pwVar1 = pwVar5 + uVar2 * 0x14;
      for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 0x14) {
        if (((ulonglong)*(uint *)(pwVar5 + 6) <= param_1 - 0x140000000U) &&
           (uVar2 = (ulonglong)(*(int *)(pwVar5 + 4) + *(uint *)(pwVar5 + 6)),
           param_1 - 0x140000000U < uVar2)) goto LAB_1400043ea;
      }
      pwVar5 = (word *)0x0;
LAB_1400043ea:
      if (pwVar5 == (word *)0x0) {
        return uVar2 & 0xffffffffffffff00;
      }
      uVar3 = (uint7)(uVar2 >> 8);
      if (*(int *)(pwVar5 + 0x12) < 0) {
        return (ulonglong)uVar3 << 8;
      }
      return CONCAT71(uVar3,1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// ============================================================
// Function: __scrt_release_startup_lock @ 14000440c
// ============================================================

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_14000a1f8 = 0;
    UNLOCK();
  }
  return;
}



// ============================================================
// Function: __scrt_uninitialize_crt @ 140004430
// ============================================================

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_14000a200 == '\0') || (param_2 == '\0')) {
    FUN_140004584();
    FUN_140004584();
  }
  return 1;
}



// ============================================================
// Function: _onexit @ 14000445c
// ============================================================

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_14000a208 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14000a208);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



// ============================================================
// Function: atexit @ 140004498
// ============================================================

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ============================================================
// Function: FUN_1400044b0 @ 1400044b0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400044b0(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_14000a040 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_14000a040 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_14000a040 == 0x2b992ddfa232) {
      DAT_14000a040 = 0x2b992ddfa233;
    }
  }
  _DAT_14000a080 = ~DAT_14000a040;
  return;
}



// ============================================================
// Function: FUN_140004560 @ 140004560
// ============================================================

undefined8 FUN_140004560(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140004564 @ 140004564
// ============================================================

undefined8 FUN_140004564(void)

{
  return 1;
}



// ============================================================
// Function: FUN_14000456c @ 14000456c
// ============================================================

undefined8 FUN_14000456c(void)

{
  return 0x4000;
}



// ============================================================
// Function: FUN_140004574 @ 140004574
// ============================================================

void FUN_140004574(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000457b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_14000a240);
  return;
}



// ============================================================
// Function: FUN_140004584 @ 140004584
// ============================================================

undefined1 FUN_140004584(void)

{
  return 1;
}



// ============================================================
// Function: _guard_check_icall @ 140004588
// ============================================================

void _guard_check_icall(void)

{
  return;
}



// ============================================================
// Function: FUN_14000458c @ 14000458c
// ============================================================

undefined * FUN_14000458c(void)

{
  return &DAT_14000a250;
}



// ============================================================
// Function: FUN_140004594 @ 140004594
// ============================================================

undefined * FUN_140004594(void)

{
  return &DAT_14000a258;
}



// ============================================================
// Function: FUN_14000459c @ 14000459c
// ============================================================

void FUN_14000459c(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_14000458c();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_140004594();
  *puVar1 = *puVar1 | 2;
  return;
}



// ============================================================
// Function: FUN_1400045b8 @ 1400045b8
// ============================================================

bool FUN_1400045b8(void)

{
  return DAT_14000a0b0 == 0;
}



// ============================================================
// Function: FUN_1400045c4 @ 1400045c4
// ============================================================

undefined * FUN_1400045c4(void)

{
  return &DAT_14000a270;
}



// ============================================================
// Function: FUN_1400045cc @ 1400045cc
// ============================================================

undefined * FUN_1400045cc(void)

{
  return &DAT_14000a268;
}



// ============================================================
// Function: FUN_1400045d4 @ 1400045d4
// ============================================================

void FUN_1400045d4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



// ============================================================
// Function: __scrt_get_show_window_mode @ 1400045dc
// ============================================================

/* Library Function - Single Match
    __scrt_get_show_window_mode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}



// ============================================================
// Function: thunk_FUN_140004560 @ 140004618
// ============================================================

undefined8 thunk_FUN_140004560(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140004620 @ 140004620
// ============================================================

bool FUN_140004620(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  bool bVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (lVar2 = (longlong)pHVar1[0xf].unused, *(int *)((longlong)&pHVar1->unused + lVar2) != 0x4550))
     || ((*(short *)((longlong)&pHVar1[6].unused + lVar2) != 0x20b ||
         (*(uint *)((longlong)&pHVar1[0x21].unused + lVar2) < 0xf)))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)((longlong)&pHVar1[0x3e].unused + lVar2) != 0;
  }
  return bVar3;
}



// ============================================================
// Function: FUN_140004674 @ 140004674
// ============================================================

void FUN_140004674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000467b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(FUN_140004684);
  return;
}



// ============================================================
// Function: FUN_140004684 @ 140004684
// ============================================================

undefined8 FUN_140004684(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      puVar3 = (undefined8 *)__current_exception();
      *puVar3 = piVar1;
      uVar2 = param_1[1];
      puVar3 = (undefined8 *)__current_exception_context();
      *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
      terminate();
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_1400046e0 @ 1400046e0
// ============================================================

void FUN_1400046e0(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_140008530; plVar1 < &DAT_140008530; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140005380)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_14000471c @ 14000471c
// ============================================================

void FUN_14000471c(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_140008540; plVar1 < &DAT_140008540; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140005380)();
    }
  }
  return;
}



// ============================================================
// Function: __scrt_is_ucrt_dll_in_use @ 140004758
// ============================================================

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14000a0c0 != 0;
}



// ============================================================
// Function: __std_exception_copy @ 140004770
// ============================================================

void __std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_copy();
  return;
}



// ============================================================
// Function: __std_exception_destroy @ 140004776
// ============================================================

void __std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy();
  return;
}



// ============================================================
// Function: _CxxThrowException @ 14000477c
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00014000477c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: __CxxFrameHandler4 @ 140004782
// ============================================================

void __CxxFrameHandler4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler4();
  return;
}



// ============================================================
// Function: memcpy @ 140004788
// ============================================================

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140004788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// ============================================================
// Function: memmove @ 14000478e
// ============================================================

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000478e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// ============================================================
// Function: memset @ 140004794
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140004794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: __current_exception @ 1400047a0
// ============================================================

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



// ============================================================
// Function: __current_exception_context @ 1400047a6
// ============================================================

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



// ============================================================
// Function: free @ 1400047ac
// ============================================================

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// ============================================================
// Function: terminate @ 1400047b2
// ============================================================

void terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047b2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: strlen @ 1400047b8
// ============================================================

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400047b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}



// ============================================================
// Function: _callnewh @ 1400047be
// ============================================================

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400047be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



// ============================================================
// Function: malloc @ 1400047c4
// ============================================================

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400047c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



// ============================================================
// Function: _seh_filter_exe @ 1400047ca
// ============================================================

void _seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_exe();
  return;
}



// ============================================================
// Function: _set_app_type @ 1400047d0
// ============================================================

void _set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_app_type();
  return;
}



// ============================================================
// Function: __setusermatherr @ 1400047d6
// ============================================================

void __setusermatherr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __setusermatherr();
  return;
}



// ============================================================
// Function: _configure_narrow_argv @ 1400047dc
// ============================================================

void _configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}



// ============================================================
// Function: _initialize_narrow_environment @ 1400047e2
// ============================================================

void _initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}



// ============================================================
// Function: _get_narrow_winmain_command_line @ 1400047e8
// ============================================================

void _get_narrow_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _get_narrow_winmain_command_line();
  return;
}



// ============================================================
// Function: _initterm @ 1400047ee
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 1400047f4
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: exit @ 1400047fa
// ============================================================

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x0001400047fa. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}



// ============================================================
// Function: _exit @ 140004800
// ============================================================

void __cdecl _exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x000140004800. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(_Code);
  return;
}



// ============================================================
// Function: _set_fmode @ 140004806
// ============================================================

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140004806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



// ============================================================
// Function: _cexit @ 14000480c
// ============================================================

void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000480c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}



// ============================================================
// Function: _register_thread_local_exe_atexit_callback @ 140004818
// ============================================================

void _register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_thread_local_exe_atexit_callback();
  return;
}



// ============================================================
// Function: _configthreadlocale @ 14000481e
// ============================================================

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000481e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



// ============================================================
// Function: _set_new_mode @ 140004824
// ============================================================

void _set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_new_mode();
  return;
}



// ============================================================
// Function: __p__commode @ 14000482a
// ============================================================

void __p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000482a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__commode();
  return;
}



// ============================================================
// Function: _initialize_onexit_table @ 140004830
// ============================================================

void _initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_onexit_table();
  return;
}



// ============================================================
// Function: _register_onexit_function @ 140004836
// ============================================================

void _register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140004836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_onexit_function();
  return;
}



// ============================================================
// Function: _crt_atexit @ 14000483c
// ============================================================

void _crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}



// ============================================================
// Function: _guard_dispatch_icall @ 140004860
// ============================================================

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140004860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// Function: _guard_dispatch_icall @ 140004880
// ============================================================

/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x000140004880 */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140004860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// Function: FUN_14000492c @ 14000492c
// ============================================================

void FUN_14000492c(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



// ============================================================
// Function: FUN_14000494a @ 14000494a
// ============================================================

bool FUN_14000494a(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




// Total functions: 119, failed: 0
