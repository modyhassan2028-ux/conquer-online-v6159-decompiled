// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: FactionMatch.dll

// ============================================================
// Function: FUN_140d01000 @ 140d01000
// ============================================================

void FUN_140d01000(void)

{
  log_InlineLogERROR(&DAT_140d18368);
  return;
}



// ============================================================
// Function: FUN_140d01040 @ 140d01040
// ============================================================

void FUN_140d01040(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
  }
  return;
}



// ============================================================
// Function: FUN_140d01060 @ 140d01060
// ============================================================

int FUN_140d01060(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return 0;
  }
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return iVar1 % 10;
}



// ============================================================
// Function: FUN_140d010e0 @ 140d010e0
// ============================================================

undefined8 FUN_140d010e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return 0;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x000140d01135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  return uVar2;
}



// ============================================================
// Function: FUN_140d01140 @ 140d01140
// ============================================================

void FUN_140d01140(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d011bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}



// ============================================================
// Function: FUN_140d011c0 @ 140d011c0
// ============================================================

undefined8 FUN_140d011c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return 0;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x000140d01215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}



// ============================================================
// Function: FUN_140d01220 @ 140d01220
// ============================================================

void FUN_140d01220(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (param_2 - 1U < 3)) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if (param_2 == 1) {
      iVar1 = param_3 + (iVar1 / 10) * 10;
    }
    else if (param_2 == 2) {
      iVar1 = iVar1 + (param_3 - (iVar1 / 10) % 10) * 10;
    }
    else if (param_2 == 3) {
      iVar1 = iVar1 + (param_3 - (iVar1 / 100) % 10) * 100;
    }
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar2 + 0xb0))(plVar2,iVar1);
                    /* WARNING: Could not recover jumptable at 0x000140d0134d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
    return;
  }
  log_InlineLogERROR(&DAT_140d18368);
  return;
}



// ============================================================
// Function: FUN_140d01390 @ 140d01390
// ============================================================

undefined8 FUN_140d01390(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return 0;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x000140d013e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}



// ============================================================
// Function: FUN_140d013f0 @ 140d013f0
// ============================================================

void FUN_140d013f0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d0146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}



// ============================================================
// Function: FUN_140d01470 @ 140d01470
// ============================================================

void FUN_140d01470(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (param_2 - 1U < 8)) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
    return;
  }
  log_InlineLogERROR(&DAT_140d18368);
  return;
}



// ============================================================
// Function: FUN_140d01510 @ 140d01510
// ============================================================

void FUN_140d01510(int *param_1)

{
  int iVar1;
  
  iVar1 = tq::RandGet(10000);
  *param_1 = iVar1;
  return;
}



// ============================================================
// Function: FUN_140d01530 @ 140d01530
// ============================================================

undefined4 FUN_140d01530(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// Function: FUN_140d01540 @ 140d01540
// ============================================================

void FUN_140d01540(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d01570 @ 140d01570
// ============================================================

undefined * FUN_140d01570(void)

{
  if ((DAT_140d23378 & 1) == 0) {
    DAT_140d23378 = DAT_140d23378 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23370,"CFactionMatch");
    atexit((_func_5014 *)&LAB_140d17b50);
  }
  return &DAT_140d23370;
}



// ============================================================
// Function: FUN_140d015d0 @ 140d015d0
// ============================================================

void FUN_140d015d0(__uint64 param_1)

{
  if ((DAT_140d23378 & 1) == 0) {
    DAT_140d23378 = DAT_140d23378 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23370,"CFactionMatch");
    atexit((_func_5014 *)&LAB_140d17b50);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d01625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140d23370,param_1);
  return;
}



// ============================================================
// Function: FUN_140d01630 @ 140d01630
// ============================================================

void FUN_140d01630(void *param_1)

{
  if ((DAT_140d23378 & 1) == 0) {
    DAT_140d23378 = DAT_140d23378 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23370,"CFactionMatch");
    atexit((_func_5014 *)&LAB_140d17b50);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d01685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140d23370,param_1);
  return;
}



// ============================================================
// Function: FUN_140d01690 @ 140d01690
// ============================================================

void FUN_140d01690(void *param_1)

{
  if ((DAT_140d23378 & 1) == 0) {
    DAT_140d23378 = DAT_140d23378 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23370,"CFactionMatch");
    atexit((_func_5014 *)&LAB_140d17b50);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d016e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140d23370,param_1);
  return;
}



// ============================================================
// Function: FUN_140d016f0 @ 140d016f0
// ============================================================

undefined4 * FUN_140d016f0(void)

{
  undefined4 *puVar1;
  
  if ((DAT_140d23378 & 1) == 0) {
    DAT_140d23378 = DAT_140d23378 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23370,"CFactionMatch");
    atexit((_func_5014 *)&LAB_140d17b50);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140d23370,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_140d18368,"CHECKF","pFactionMatch",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\factionmatch\\src\\factionmatch.cpp"
                       ,0x28);
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d017a0 @ 140d017a0
// ============================================================

void * FUN_140d017a0(void *param_1,uint param_2)

{
  if (*(longlong *)((longlong)param_1 + 8) != 0) {
    (**(code **)**(undefined8 **)((longlong)param_1 + 8))(*(undefined8 **)((longlong)param_1 + 8),1)
    ;
  }
  if ((param_2 & 1) != 0) {
    FUN_140d01630(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d017e0 @ 140d017e0
// ============================================================

ulonglong FUN_140d017e0(longlong param_1,longlong *param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX_00;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x38))(param_2);
      if (puVar2 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_140d18368);
      }
      else {
        log_InlineLogERROR("CFactionMatch data repeat");
      }
      (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
      *(undefined8 *)(param_1 + 8) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    *(longlong *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) {
      log_InlineLogERROR(&DAT_140d18368);
      uVar1 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar1 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return uVar1;
}



// ============================================================
// Function: FUN_140d01910 @ 140d01910
// ============================================================

void FUN_140d01910(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      (**(code **)**(undefined8 **)((longlong)param_1 + 8))
                (*(undefined8 **)((longlong)param_1 + 8),1);
    }
    FUN_140d01630(param_1);
  }
  return;
}



// ============================================================
// Function: FUN_140d019d0 @ 140d019d0
// ============================================================

exception * FUN_140d019d0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d01a10 @ 140d01a10
// ============================================================

void FUN_140d01a10(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140d01a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d01a40 @ 140d01a40
// ============================================================

exception * FUN_140d01a40(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d01aa0 @ 140d01aa0
// ============================================================

void FUN_140d01aa0(void)

{
  return;
}



// ============================================================
// Function: FUN_140d01ab0 @ 140d01ab0
// ============================================================

exception *
FUN_140d01ab0(exception *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140d01b00 @ 140d01b00
// ============================================================

void FUN_140d01b00(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d01b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d01b40 @ 140d01b40
// ============================================================

longlong FUN_140d01b40(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}



// ============================================================
// Function: FUN_140d01b60 @ 140d01b60
// ============================================================

exception * FUN_140d01b60(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d01bc0 @ 140d01bc0
// ============================================================

exception *
FUN_140d01bc0(exception *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d01c20 @ 140d01c20
// ============================================================

void FUN_140d01c20(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d01c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d01c70 @ 140d01c70
// ============================================================

exception * FUN_140d01c70(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d01ce0 @ 140d01ce0
// ============================================================

exception *
FUN_140d01ce0(exception *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d01d40 @ 140d01d40
// ============================================================

void FUN_140d01d40(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d01d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d01d90 @ 140d01d90
// ============================================================

exception * FUN_140d01d90(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d01e10 @ 140d01e10
// ============================================================

void FUN_140d01e10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// ============================================================
// Function: FUN_140d01e30 @ 140d01e30
// ============================================================

bool FUN_140d01e30(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int local_28 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
    return false;
  }
  if (param_3 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
    return false;
  }
  uVar1 = FUN_140d010e0((longlong)param_2);
  uVar2 = FUN_140d010e0((longlong)param_3);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      return false;
    }
  }
  else if ((int)uVar2 == 0) {
    return true;
  }
  uVar1 = FUN_140d011c0((longlong)param_2);
  uVar2 = FUN_140d011c0((longlong)param_2);
  uVar3 = FUN_140d011c0((longlong)param_2);
  uVar4 = FUN_140d011c0((longlong)param_3);
  uVar5 = FUN_140d011c0((longlong)param_3);
  local_28[1] = 3;
  local_28[0] = 0;
  local_28[3] = 0;
  local_28[2] = 1;
  iVar7 = local_28[((int)uVar3 / 100) % 10] + local_28[((int)uVar2 / 10) % 10] +
          local_28[(int)uVar1 % 10];
  uVar1 = FUN_140d011c0((longlong)param_3);
  iVar6 = local_28[((int)uVar1 / 100) % 10] + local_28[((int)uVar5 / 10) % 10] +
          local_28[(int)uVar4 % 10];
  if (iVar6 < iVar7) {
    return true;
  }
  if (iVar6 <= iVar7) {
    uVar1 = FUN_140d01390((longlong)param_2);
    uVar2 = FUN_140d01390((longlong)param_3);
    if ((int)uVar2 < (int)uVar1) {
      return true;
    }
    uVar1 = FUN_140d01390((longlong)param_2);
    uVar2 = FUN_140d01390((longlong)param_3);
    if ((int)uVar2 <= (int)uVar1) {
      iVar6 = FUN_140d01530(param_2);
      iVar7 = FUN_140d01530(param_3);
      return iVar7 < iVar6;
    }
  }
  return false;
}



// ============================================================
// Function: FUN_140d02110 @ 140d02110
// ============================================================

undefined8 FUN_140d02110(longlong param_1)

{
  longlong in_RAX;
  undefined7 uVar1;
  longlong extraout_RAX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x548) == 9) {
    uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  }
  else {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      iVar3 = iVar3 + 1;
      if (100 < iVar3) {
        log_InlineLogERROR(&DAT_140d18368);
        in_RAX = extraout_RAX;
        break;
      }
      in_RAX = (longlong)iVar2;
      if (*(int *)(param_1 + 0x308 + in_RAX * 0x90) != 7) {
        return (ulonglong)(uint7)(int7)(int3)((uint)iVar2 >> 8) << 8;
      }
    }
    uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  }
  return CONCAT71(uVar1,1);
}



// ============================================================
// Function: FUN_140d021b0 @ 140d021b0
// ============================================================

void FUN_140d021b0(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x548) = 8;
  *(undefined1 *)(param_1 + 0x550) = 0;
  plVar1 = *(longlong **)(param_1 + 0x560);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,0x4c4b40a);
  }
  return;
}



// ============================================================
// Function: FUN_140d02220 @ 140d02220
// ============================================================

undefined8 FUN_140d02220(longlong param_1)

{
  longlong in_RAX;
  undefined7 uVar1;
  longlong extraout_RAX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x548) == 9) {
    uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  }
  else {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      iVar3 = iVar3 + 1;
      if (100 < iVar3) {
        log_InlineLogERROR(&DAT_140d18368);
        in_RAX = extraout_RAX;
        break;
      }
      in_RAX = (longlong)iVar2;
      if (*(int *)(param_1 + 200 + in_RAX * 0x90) != 3) {
        return (ulonglong)(uint7)(int7)(int3)((uint)iVar2 >> 8) << 8;
      }
    }
    uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  }
  return CONCAT71(uVar1,1);
}



// ============================================================
// Function: FUN_140d022c0 @ 140d022c0
// ============================================================

void FUN_140d022c0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_1 + 0x548) == 3) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      lVar2 = (longlong)iVar3;
      if (*(int *)(param_1 + 200 + lVar2 * 0x90) == 2) {
        if (*(int *)(param_1 + 0xcc + lVar2 * 0x90) == param_2) {
          piVar1 = (int *)(param_1 + 0xe0 + lVar2 * 0x90);
          *piVar1 = *piVar1 + param_3;
          return;
        }
        if (*(int *)(param_1 + 0xd0 + lVar2 * 0x90) == param_2) {
          piVar1 = (int *)(param_1 + 0xe4 + lVar2 * 0x90);
          *piVar1 = *piVar1 + param_3;
          return;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x548) == 7) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      lVar2 = (longlong)iVar3;
      if (*(int *)(param_1 + 0x308 + lVar2 * 0x90) == 6) {
        if (*(int *)(param_1 + 0x30c + lVar2 * 0x90) == param_2) {
          piVar1 = (int *)(param_1 + 800 + lVar2 * 0x90);
          *piVar1 = *piVar1 + param_3;
          return;
        }
        if (*(int *)(param_1 + 0x310 + lVar2 * 0x90) == param_2) {
          piVar1 = (int *)(param_1 + 0x324 + lVar2 * 0x90);
          *piVar1 = *piVar1 + param_3;
          return;
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d023d0 @ 140d023d0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d023d0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  longlong lVar5;
  void *_Src;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  int local_a8;
  int local_a4;
  int local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_90 = 0xfffffffffffffffe;
  uVar4 = DAT_140d23350 ^ (ulonglong)auStack_d8;
  local_38 = uVar4;
  if (*(longlong *)(param_1 + 0x560) == 0) {
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0x5d1);
    log_InlineLogERROR(&DAT_140d18368);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (*(int *)(param_1 + 0x548) == 8) {
    local_a4 = 1;
    local_a0 = 0;
    local_a8 = 0;
    while ((iVar3 = local_a0, iVar2 = local_a4, iVar1 = local_a8, local_a0 < 4 && (local_a8 < 8))) {
      lVar5 = (longlong)local_a0;
      local_98 = (void *)(**(code **)(**(longlong **)(param_1 + 0x560) + 0x20))
                                   (*(longlong **)(param_1 + 0x560),
                                    *(undefined4 *)(param_1 + 0x30c + lVar5 * 0x90));
      _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x560) + 0x20))
                               (*(longlong **)(param_1 + 0x560),
                                *(undefined4 *)(param_1 + 0x310 + lVar5 * 0x90));
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      if (local_98 != (void *)0x0) {
        memmove(&local_88,local_98,0x23);
      }
      if (_Src != (void *)0x0) {
        memmove(&local_60,_Src,0x23);
      }
      if (*(int *)(param_1 + 0x330 + lVar5 * 0x90) == 1) {
        local_b8 = &local_88;
        (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa8))
                  (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + (longlong)iVar1 * 4),
                   *(undefined4 *)(param_1 + 0x30c + lVar5 * 0x90),iVar2);
      }
      else {
        local_b8 = &local_60;
        (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa8))
                  (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + (longlong)iVar1 * 4),
                   *(undefined4 *)(param_1 + 0x310 + lVar5 * 0x90),iVar2);
      }
      local_a4 = iVar2 + 1;
      local_a8 = iVar1 + 1;
      if (*(int *)(param_1 + 0x330 + lVar5 * 0x90) == 2) {
        local_b8 = &local_88;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa8))
                          (*(longlong **)(param_1 + 0x560),
                           *(undefined4 *)(param_2 + (longlong)local_a8 * 4),
                           *(undefined4 *)(param_1 + 0x30c + lVar5 * 0x90),local_a4);
      }
      else {
        local_b8 = &local_60;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa8))
                          (*(longlong **)(param_1 + 0x560),
                           *(undefined4 *)(param_2 + (longlong)local_a8 * 4),
                           *(undefined4 *)(param_1 + 0x310 + lVar5 * 0x90),local_a4);
      }
      local_a4 = iVar2 + 2;
      local_a0 = iVar3 + 1;
      local_a8 = iVar1 + 2;
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



// ============================================================
// Function: FUN_140d02660 @ 140d02660
// ============================================================

void FUN_140d02660(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  tm *ptVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  __time32_t local_res20 [2];
  undefined4 local_86c;
  undefined4 local_868;
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    local_res20[0] = 0;
    _time32(local_res20);
    ptVar5 = _localtime32(local_res20);
    if (ptVar5 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140d18368);
    }
    else {
      iVar12 = ptVar5->tm_hour * 0x3c + ptVar5->tm_min;
      iVar10 = iVar12 * 0x3c + ptVar5->tm_sec;
      for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
        iVar4 = *(int *)(param_1 + 0x548);
        if ((iVar4 == 2) || (iVar4 == 3)) {
          if ((param_2 == 0) || (*(int *)(param_1 + 0xd4 + (longlong)iVar13 * 0x90) == param_2)) {
            lVar6 = (longlong)iVar13;
            iVar1 = *(int *)(param_1 + 200 + lVar6 * 0x90);
            if (((iVar1 == 1) || (iVar1 == 2)) &&
               (iVar2 = *(int *)(param_1 + 0xd4 + lVar6 * 0x90), iVar2 != 0)) {
              uVar11 = 0;
              if (((iVar1 == 1) && (iVar12 - 0x4c9U < 5)) &&
                 (uVar11 = 0x12048 - iVar10, (int)uVar11 < 0)) {
                uVar11 = 0;
              }
              local_86c = 0;
              if (iVar4 == 3) {
                iVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x88))
                                  (*(longlong **)(param_1 + 0x560),iVar2);
                if (iVar4 == *(int *)(param_1 + 0xcc + lVar6 * 0x90)) {
                  local_86c = 1;
                }
                else {
                  local_86c = 0;
                  if (iVar4 == *(int *)(param_1 + 0xd0 + lVar6 * 0x90)) {
                    local_86c = 2;
                  }
                }
              }
              FUN_140d12520(local_448);
              plVar3 = *(longlong **)(param_1 + 0x560);
              puVar7 = (undefined8 *)
                       (**(code **)(*plVar3 + 0x20))
                                 (plVar3,*(undefined4 *)(param_1 + 0xd0 + lVar6 * 0x90));
              puVar8 = (undefined8 *)
                       (**(code **)(*plVar3 + 0x20))
                                 (plVar3,*(undefined4 *)(param_1 + 0xcc + lVar6 * 0x90));
              uVar9 = FUN_140d12680(local_448,2,puVar8,puVar7,
                                    *(undefined4 *)(param_1 + 0xe0 + lVar6 * 0x90),
                                    *(undefined4 *)(param_1 + 0xe4 + lVar6 * 0x90),
                                    *(undefined4 *)(param_1 + 0xe8 + lVar6 * 0x90),
                                    *(undefined4 *)(param_1 + 0xec + lVar6 * 0x90),uVar11 & 0xffff,
                                    local_86c,0xffffffff);
              if ((char)uVar9 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x18))
                          (*(longlong **)(param_1 + 0x560),
                           *(undefined4 *)(param_1 + 0xd4 + lVar6 * 0x90),local_448);
              }
              FUN_140d12570((undefined8 *)local_448);
            }
          }
        }
        else if (((iVar4 == 6) || (iVar4 == 7)) &&
                ((param_2 == 0 || (*(int *)(param_1 + 0x314 + (longlong)iVar13 * 0x90) == param_2)))
                ) {
          lVar6 = (longlong)iVar13;
          iVar1 = *(int *)(param_1 + 0x308 + lVar6 * 0x90);
          if (((iVar1 == 5) || (iVar1 == 6)) &&
             (iVar2 = *(int *)(param_1 + 0x314 + lVar6 * 0x90), iVar2 != 0)) {
            uVar11 = 0;
            if (((iVar1 == 5) && (iVar12 - 0x505U < 5)) &&
               (uVar11 = 0x12e58 - iVar10, (int)uVar11 < 0)) {
              uVar11 = 0;
            }
            local_868 = 0;
            if (iVar4 == 7) {
              iVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x88))
                                (*(longlong **)(param_1 + 0x560),iVar2);
              if (iVar4 == *(int *)(param_1 + 0x30c + lVar6 * 0x90)) {
                local_868 = 1;
              }
              else {
                local_868 = 0;
                if (iVar4 == *(int *)(param_1 + 0x310 + lVar6 * 0x90)) {
                  local_868 = 2;
                }
              }
            }
            FUN_140d12520(local_858);
            plVar3 = *(longlong **)(param_1 + 0x560);
            puVar7 = (undefined8 *)
                     (**(code **)(*plVar3 + 0x20))
                               (plVar3,*(undefined4 *)(param_1 + 0x310 + lVar6 * 0x90));
            puVar8 = (undefined8 *)
                     (**(code **)(*plVar3 + 0x20))
                               (plVar3,*(undefined4 *)(param_1 + 0x30c + lVar6 * 0x90));
            uVar9 = FUN_140d12680(local_858,2,puVar8,puVar7,
                                  *(undefined4 *)(param_1 + 800 + lVar6 * 0x90),
                                  *(undefined4 *)(param_1 + 0x324 + lVar6 * 0x90),
                                  *(undefined4 *)(param_1 + 0x328 + lVar6 * 0x90),
                                  *(undefined4 *)(param_1 + 0x32c + lVar6 * 0x90),uVar11 & 0xffff,
                                  local_868,0xffffffff);
            if ((char)uVar9 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x18))
                        (*(longlong **)(param_1 + 0x560),
                         *(undefined4 *)(param_1 + 0x314 + lVar6 * 0x90),local_858);
            }
            FUN_140d12570((undefined8 *)local_858);
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d02af0 @ 140d02af0
// ============================================================

ulonglong FUN_140d02af0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  tm *ptVar3;
  longlong lVar4;
  int iVar5;
  __time32_t local_res18 [4];
  
  if (param_2 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x548);
    if ((((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 6)) || (iVar5 == 7)) {
      iVar5 = 0;
      local_res18[0] = 0;
      _time32(local_res18);
      ptVar3 = _localtime32(local_res18);
      uVar2 = 0;
      if (ptVar3 != (tm *)0x0) {
        uVar1 = ptVar3->tm_wday;
        uVar2 = (ulonglong)uVar1;
        if ((((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) && (*(int *)(param_1 + 0x548) != 5)) {
          for (; iVar5 < 4; iVar5 = iVar5 + 1) {
            lVar4 = (longlong)iVar5;
            uVar1 = *(uint *)(param_1 + 200 + lVar4 * 0x90);
            uVar2 = (ulonglong)uVar1;
            if (((uVar1 == 1) || (uVar1 == 2)) &&
               ((*(int *)(param_1 + 0xcc + lVar4 * 0x90) == param_2 ||
                (*(int *)(param_1 + 0xd0 + lVar4 * 0x90) == param_2)))) {
              return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
            }
          }
        }
        else if (uVar1 == 6) {
          for (; iVar5 < 4; iVar5 = iVar5 + 1) {
            lVar4 = (longlong)iVar5;
            uVar1 = *(uint *)(param_1 + 0x308 + lVar4 * 0x90);
            uVar2 = (ulonglong)uVar1;
            if (((uVar1 == 5) || (uVar1 == 6)) &&
               ((*(int *)(param_1 + 0x30c + lVar4 * 0x90) == param_2 ||
                (*(int *)(param_1 + 0x310 + lVar4 * 0x90) == param_2)))) {
              return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
            }
          }
        }
        uVar2 = uVar2 & 0xffffffffffffff00;
      }
    }
    else {
      uVar2 = (ulonglong)(uint3)((uint)iVar5 >> 8) << 8;
    }
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d02c30 @ 140d02c30
// ============================================================

ulonglong FUN_140d02c30(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(param_1 + 0x548);
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 == 2) || (uVar1 == 3)) {
    uVar2 = 0;
    piVar3 = (int *)(param_1 + 0xcc);
    do {
      if (*piVar3 == param_2) goto LAB_140d02ccf;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x24;
    } while ((longlong)uVar2 < 4);
  }
  else if ((uVar1 == 6) || (uVar1 == 7)) {
    uVar2 = 0;
    piVar3 = (int *)(param_1 + 0x30c);
    while (*piVar3 != param_2) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x24;
      if (3 < (longlong)uVar2) {
        return uVar2 & 0xffffffffffffff00;
      }
    }
LAB_140d02ccf:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d02ce0 @ 140d02ce0
// ============================================================

void FUN_140d02ce0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  tm *ptVar3;
  longlong lVar4;
  int iVar5;
  __time32_t local_res20 [2];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_3 != 0) {
    iVar5 = 0;
    local_res20[0] = 0;
    _time32(local_res20);
    ptVar3 = _localtime32(local_res20);
    if (ptVar3 != (tm *)0x0) {
      iVar2 = ptVar3->tm_wday;
      if ((((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) && (*(int *)(param_1 + 0x548) != 5)) {
        for (; iVar5 < 4; iVar5 = iVar5 + 1) {
          lVar4 = (longlong)iVar5;
          iVar2 = *(int *)(param_1 + 200 + lVar4 * 0x90);
          if ((iVar2 == 1) || (iVar2 == 2)) {
            if (*(int *)(param_1 + 0xcc + lVar4 * 0x90) == param_3) {
              piVar1 = (int *)(param_1 + 0xe8 + lVar4 * 0x90);
              *piVar1 = *piVar1 + -1;
              return;
            }
            if (*(int *)(param_1 + 0xd0 + lVar4 * 0x90) == param_3) {
              piVar1 = (int *)(param_1 + 0xec + lVar4 * 0x90);
              *piVar1 = *piVar1 + -1;
              return;
            }
          }
        }
      }
      else if (iVar2 == 6) {
        for (; iVar5 < 4; iVar5 = iVar5 + 1) {
          lVar4 = (longlong)iVar5;
          iVar2 = *(int *)(param_1 + 0x308 + lVar4 * 0x90);
          if ((iVar2 == 5) || (iVar2 == 6)) {
            if (*(int *)(param_1 + 0x30c + lVar4 * 0x90) == param_3) {
              piVar1 = (int *)(param_1 + 0x328 + lVar4 * 0x90);
              *piVar1 = *piVar1 + -1;
              return;
            }
            if (*(int *)(param_1 + 0x310 + lVar4 * 0x90) == param_3) {
              piVar1 = (int *)(param_1 + 0x32c + lVar4 * 0x90);
              *piVar1 = *piVar1 + -1;
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d02e80 @ 140d02e80
// ============================================================

void FUN_140d02e80(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_2 + 0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x60))();
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x78))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  }
  return;
}



// ============================================================
// Function: FUN_140d02f10 @ 140d02f10
// ============================================================

undefined4 FUN_140d02f10(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (4 < *(int *)(param_1 + 0x548)) {
    piVar1 = (int *)(param_1 + 0x310);
    uVar3 = uVar2;
    while( true ) {
      if (((piVar1[-1] == param_2) && (*piVar1 == param_3)) ||
         ((piVar1[-1] == param_3 && (*piVar1 == param_2)))) break;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      piVar1 = piVar1 + 0x24;
      if (3 < (longlong)uVar2) {
        return 0;
      }
    }
    return *(undefined4 *)(param_1 + 0x314 + (longlong)(int)uVar3 * 0x90);
  }
  piVar1 = (int *)(param_1 + 0xd0);
  uVar3 = uVar2;
  while( true ) {
    if (((piVar1[-1] == param_2) && (*piVar1 == param_3)) ||
       ((piVar1[-1] == param_3 && (*piVar1 == param_2)))) break;
    uVar3 = uVar3 + 1;
    uVar2 = (ulonglong)((int)uVar2 + 1);
    piVar1 = piVar1 + 0x24;
    if (3 < (longlong)uVar3) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0xd4 + (longlong)(int)uVar2 * 0x90);
}



// ============================================================
// Function: FUN_140d03010 @ 140d03010
// ============================================================

longlong FUN_140d03010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d03032;
  }
  lVar2 = *plVar1;
LAB_140d03032:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140d03050 @ 140d03050
// ============================================================

longlong * FUN_140d03050(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d03072;
  }
  lVar2 = *plVar1;
LAB_140d03072:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}



// ============================================================
// Function: FUN_140d030a0 @ 140d030a0
// ============================================================

longlong FUN_140d030a0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}



// ============================================================
// Function: FUN_140d032a0 @ 140d032a0
// ============================================================

bool FUN_140d032a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d03330 @ 140d03330
// ============================================================

bool FUN_140d03330(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d03380 @ 140d03380
// ============================================================

bool FUN_140d03380(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d033f0 @ 140d033f0
// ============================================================

bool FUN_140d033f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d03470 @ 140d03470
// ============================================================

void FUN_140d03470(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"vector<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140d21918);
}



// ============================================================
// Function: FUN_140d034e0 @ 140d034e0
// ============================================================

exception * FUN_140d034e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x18));
  return param_1;
}



// ============================================================
// Function: FUN_140d03530 @ 140d03530
// ============================================================

exception * FUN_140d03530(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d036c0 @ 140d036c0
// ============================================================

longlong FUN_140d036c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}



// ============================================================
// Function: FUN_140d03700 @ 140d03700
// ============================================================

void FUN_140d03700(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"vector<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140d21918);
}



// ============================================================
// Function: FUN_140d03790 @ 140d03790
// ============================================================

longlong FUN_140d03790(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_140d039f0 @ 140d039f0
// ============================================================

longlong * FUN_140d039f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_140d03a20;
  }
  else {
LAB_140d03a20:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140d03a48;
  }
  _invalid_parameter_noinfo();
LAB_140d03a48:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}



// ============================================================
// Function: FUN_140d03a60 @ 140d03a60
// ============================================================

longlong * FUN_140d03a60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_140d03a90;
  }
  else {
LAB_140d03a90:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140d03ab8;
  }
  _invalid_parameter_noinfo();
LAB_140d03ab8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d03ad0 @ 140d03ad0
// ============================================================

void FUN_140d03ad0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d03af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d03b60 @ 140d03b60
// ============================================================

void FUN_140d03b60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x25) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x25);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x25);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x25);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x25);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d03b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d03c00 @ 140d03c00
// ============================================================

void FUN_140d03c00(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d03c40 @ 140d03c40
// ============================================================

void FUN_140d03c40(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 << 2);
  return;
}



// ============================================================
// Function: FUN_140d03d20 @ 140d03d20
// ============================================================

void FUN_140d03d20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140d03d90 @ 140d03d90
// ============================================================

void FUN_140d03d90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140d03e30 @ 140d03e30
// ============================================================

void FUN_140d03e30(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d03eb0 @ 140d03eb0
// ============================================================

void FUN_140d03eb0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d03f30 @ 140d03f30
// ============================================================

void FUN_140d03f30(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_1 * 0x28);
  return;
}



// ============================================================
// Function: FUN_140d04030 @ 140d04030
// ============================================================

exception * FUN_140d04030(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d04060 @ 140d04060
// ============================================================

longlong FUN_140d04060(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_140d04100 @ 140d04100
// ============================================================

void * FUN_140d04100(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d04230 @ 140d04230
// ============================================================

void * FUN_140d04230(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d04280 @ 140d04280
// ============================================================

void * FUN_140d04280(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d043d0 @ 140d043d0
// ============================================================

void * FUN_140d043d0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d04410 @ 140d04410
// ============================================================

void * FUN_140d04410(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d04450 @ 140d04450
// ============================================================

void FUN_140d04450(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_140d01e30(&stack0x00000028,*(undefined4 **)(param_1 + lVar2 * 8),param_4);
      if (!bVar1) break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(undefined4 **)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(undefined4 **)(param_1 + param_2 * 8) = param_4;
  }
  return;
}



// ============================================================
// Function: FUN_140d044f0 @ 140d044f0
// ============================================================

undefined * FUN_140d044f0(void)

{
  if ((DAT_140d23388 & 1) == 0) {
    DAT_140d23388 = DAT_140d23388 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23380,"CFactionMatchMgr");
    atexit((_func_5014 *)&LAB_140d17b60);
  }
  return &DAT_140d23380;
}



// ============================================================
// Function: FUN_140d04550 @ 140d04550
// ============================================================

void FUN_140d04550(__uint64 param_1)

{
  if ((DAT_140d23388 & 1) == 0) {
    DAT_140d23388 = DAT_140d23388 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23380,"CFactionMatchMgr");
    atexit((_func_5014 *)&LAB_140d17b60);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d045a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140d23380,param_1);
  return;
}



// ============================================================
// Function: FUN_140d045b0 @ 140d045b0
// ============================================================

void FUN_140d045b0(void *param_1)

{
  if ((DAT_140d23388 & 1) == 0) {
    DAT_140d23388 = DAT_140d23388 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23380,"CFactionMatchMgr");
    atexit((_func_5014 *)&LAB_140d17b60);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d04605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140d23380,param_1);
  return;
}



// ============================================================
// Function: FUN_140d04610 @ 140d04610
// ============================================================

void FUN_140d04610(void *param_1)

{
  if ((DAT_140d23388 & 1) == 0) {
    DAT_140d23388 = DAT_140d23388 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23380,"CFactionMatchMgr");
    atexit((_func_5014 *)&LAB_140d17b60);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d04665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140d23380,param_1);
  return;
}



// ============================================================
// Function: FUN_140d04670 @ 140d04670
// ============================================================

bool FUN_140d04670(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d046b0 @ 140d046b0
// ============================================================

bool FUN_140d046b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d046f0 @ 140d046f0
// ============================================================

longlong FUN_140d046f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d04712;
  }
  lVar2 = *plVar1;
LAB_140d04712:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140d04730 @ 140d04730
// ============================================================

bool FUN_140d04730(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d04770 @ 140d04770
// ============================================================

bool FUN_140d04770(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d047b0 @ 140d047b0
// ============================================================

void FUN_140d047b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d047e0 @ 140d047e0
// ============================================================

void FUN_140d047e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d04810 @ 140d04810
// ============================================================

void FUN_140d04810(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d04840 @ 140d04840
// ============================================================

void FUN_140d04840(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d04850 @ 140d04850
// ============================================================

longlong FUN_140d04850(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d04872;
  }
  lVar2 = *plVar1;
LAB_140d04872:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d04890 @ 140d04890
// ============================================================

longlong FUN_140d04890(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d048b2;
  }
  lVar2 = *plVar1;
LAB_140d048b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d048d0 @ 140d048d0
// ============================================================

void FUN_140d048d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d048e0 @ 140d048e0
// ============================================================

longlong FUN_140d048e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d04902;
  }
  lVar2 = *plVar1;
LAB_140d04902:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d04940 @ 140d04940
// ============================================================

void FUN_140d04940(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 4);
  return;
}



// ============================================================
// Function: FUN_140d049f0 @ 140d049f0
// ============================================================

void FUN_140d049f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// ============================================================
// Function: FUN_140d04a50 @ 140d04a50
// ============================================================

void FUN_140d04a50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// ============================================================
// Function: FUN_140d04b10 @ 140d04b10
// ============================================================

void FUN_140d04b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// ============================================================
// Function: FUN_140d04b70 @ 140d04b70
// ============================================================

void FUN_140d04b70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// ============================================================
// Function: FUN_140d04c30 @ 140d04c30
// ============================================================

void FUN_140d04c30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x25) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// ============================================================
// Function: FUN_140d04c90 @ 140d04c90
// ============================================================

void FUN_140d04c90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x25) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// ============================================================
// Function: FUN_140d04d10 @ 140d04d10
// ============================================================

void FUN_140d04d10(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d04d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d04db0 @ 140d04db0
// ============================================================

void FUN_140d04db0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140d04e60 @ 140d04e60
// ============================================================

void FUN_140d04e60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140d04ed0 @ 140d04ed0
// ============================================================

void FUN_140d04ed0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d04f40 @ 140d04f40
// ============================================================

void FUN_140d04f40(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d04fb0 @ 140d04fb0
// ============================================================

void FUN_140d04fb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140d219d0);
  }
  operator_new(param_2 * 0x28);
  return;
}



// ============================================================
// Function: FUN_140d05020 @ 140d05020
// ============================================================

void FUN_140d05020(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140d05052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d050c0 @ 140d050c0
// ============================================================

void FUN_140d050c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140d050f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d05160 @ 140d05160
// ============================================================

longlong * FUN_140d05160(longlong *param_1,longlong param_2)

{
  FUN_140d039f0(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140d05180 @ 140d05180
// ============================================================

longlong * FUN_140d05180(longlong *param_1,longlong param_2)

{
  FUN_140d03a60(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140d051a0 @ 140d051a0
// ============================================================

void FUN_140d051a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x25) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x25);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x25);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x25);
    }
    if (*(char *)(param_1[1] + 0x25) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140d051d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d05270 @ 140d05270
// ============================================================

longlong * FUN_140d05270(longlong *param_1)

{
  FUN_140d03ad0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d05290 @ 140d05290
// ============================================================

longlong * FUN_140d05290(longlong *param_1)

{
  FUN_140d03b60(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d052b0 @ 140d052b0
// ============================================================

undefined8 * FUN_140d052b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d052f0 @ 140d052f0
// ============================================================

undefined8 * FUN_140d052f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d05330 @ 140d05330
// ============================================================

undefined8 * FUN_140d05330(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d053c0 @ 140d053c0
// ============================================================

void * FUN_140d053c0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d05410 @ 140d05410
// ============================================================

void * FUN_140d05410(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d05500 @ 140d05500
// ============================================================

void * FUN_140d05500(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d05540 @ 140d05540
// ============================================================

void * FUN_140d05540(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d05580 @ 140d05580
// ============================================================

void FUN_140d05580(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_140d01e30(local_res20,(undefined4 *)*param_2,(undefined4 *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  bVar2 = FUN_140d01e30(local_res20,(undefined4 *)*param_3,(undefined4 *)*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  bVar2 = FUN_140d01e30(local_res20,(undefined4 *)*param_2,(undefined4 *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}



// ============================================================
// Function: FUN_140d05620 @ 140d05620
// ============================================================

void FUN_140d05620(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2 + 2;
    if (param_3 <= lVar2) break;
    bVar1 = FUN_140d01e30(&param_5,*(undefined4 **)(param_1 + lVar2 * 8),
                          *(undefined4 **)(param_1 + -8 + lVar2 * 8));
    if (bVar1) {
      lVar2 = lVar3 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar3 = lVar2;
  }
  if (lVar2 == param_3) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 + -1;
  }
  FUN_140d04450(param_1,lVar3,param_2,param_4);
  return;
}



// ============================================================
// Function: FUN_140d056d0 @ 140d056d0
// ============================================================

void * FUN_140d056d0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d05710 @ 140d05710
// ============================================================

void FUN_140d05710(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_140d05620((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}



// ============================================================
// Function: FUN_140d05740 @ 140d05740
// ============================================================

longlong FUN_140d05740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d05762;
  }
  lVar2 = *plVar1;
LAB_140d05762:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d05780 @ 140d05780
// ============================================================

longlong FUN_140d05780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d057a2;
  }
  lVar2 = *plVar1;
LAB_140d057a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d057c0 @ 140d057c0
// ============================================================

longlong FUN_140d057c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d057e2;
  }
  lVar2 = *plVar1;
LAB_140d057e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d05800 @ 140d05800
// ============================================================

void FUN_140d05800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d05820 @ 140d05820
// ============================================================

void FUN_140d05820(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d05840 @ 140d05840
// ============================================================

void FUN_140d05840(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d05860 @ 140d05860
// ============================================================

void FUN_140d05860(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d05880 @ 140d05880
// ============================================================

void FUN_140d05880(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d058a0 @ 140d058a0
// ============================================================

undefined8 FUN_140d058a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140d03470();
    }
    lVar1 = FUN_140d04940(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d05910 @ 140d05910
// ============================================================

void FUN_140d05910(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// Function: FUN_140d05940 @ 140d05940
// ============================================================

void FUN_140d05940(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d05940(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140d05990 @ 140d05990
// ============================================================

void FUN_140d05990(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d05990(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140d059e0 @ 140d059e0
// ============================================================

void FUN_140d059e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140d059e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
  }
  return;
}



// ============================================================
// Function: FUN_140d05a30 @ 140d05a30
// ============================================================

longlong * FUN_140d05a30(longlong *param_1)

{
  FUN_140d04d10(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d05a50 @ 140d05a50
// ============================================================

undefined8 * FUN_140d05a50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) ||
     ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d05ab0 @ 140d05ab0
// ============================================================

undefined8 FUN_140d05ab0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140d03700();
    }
    lVar1 = FUN_140d04db0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d05b10 @ 140d05b10
// ============================================================

undefined8 * FUN_140d05b10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d05b50 @ 140d05b50
// ============================================================

undefined8 *
FUN_140d05b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d05bd0 @ 140d05bd0
// ============================================================

undefined8 *
FUN_140d05bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d05c50 @ 140d05c50
// ============================================================

undefined8 *
FUN_140d05c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_5[1];
    *(undefined4 *)(puVar1 + 4) = param_5[2];
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d05cf0 @ 140d05cf0
// ============================================================

undefined8 * FUN_140d05cf0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d05d30 @ 140d05d30
// ============================================================

longlong * FUN_140d05d30(longlong *param_1)

{
  FUN_140d05020(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d05d50 @ 140d05d50
// ============================================================

undefined8 * FUN_140d05d50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d05d90 @ 140d05d90
// ============================================================

longlong * FUN_140d05d90(longlong *param_1)

{
  FUN_140d050c0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d05db0 @ 140d05db0
// ============================================================

longlong * FUN_140d05db0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * 4;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140d05e1a;
  }
  _invalid_parameter_noinfo();
LAB_140d05e1a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d05e60 @ 140d05e60
// ============================================================

undefined8 * FUN_140d05e60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d05ea0 @ 140d05ea0
// ============================================================

longlong * FUN_140d05ea0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140d05f0a;
  }
  _invalid_parameter_noinfo();
LAB_140d05f0a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d05f40 @ 140d05f40
// ============================================================

undefined8 * FUN_140d05f40(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) ||
     ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d05fa0 @ 140d05fa0
// ============================================================

undefined8 * FUN_140d05fa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d05fe0 @ 140d05fe0
// ============================================================

longlong * FUN_140d05fe0(longlong *param_1)

{
  FUN_140d051a0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d06000 @ 140d06000
// ============================================================

void FUN_140d06000(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06060 @ 140d06060
// ============================================================

void FUN_140d06060(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}



// ============================================================
// Function: FUN_140d060c0 @ 140d060c0
// ============================================================

void FUN_140d060c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06120 @ 140d06120
// ============================================================

longlong * FUN_140d06120(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140d04d10(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140d06150 @ 140d06150
// ============================================================

longlong * FUN_140d06150(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140d03ad0(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140d06180 @ 140d06180
// ============================================================

longlong * FUN_140d06180(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140d03b60(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140d061b0 @ 140d061b0
// ============================================================

undefined8 * FUN_140d061b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06200 @ 140d06200
// ============================================================

undefined8 * FUN_140d06200(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06250 @ 140d06250
// ============================================================

undefined8 * FUN_140d06250(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d062a0 @ 140d062a0
// ============================================================

void * FUN_140d062a0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d06310 @ 140d06310
// ============================================================

void * FUN_140d06310(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d06380 @ 140d06380
// ============================================================

void * FUN_140d06380(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}



// ============================================================
// Function: FUN_140d06450 @ 140d06450
// ============================================================

void * FUN_140d06450(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d06490 @ 140d06490
// ============================================================

void * FUN_140d06490(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d064d0 @ 140d064d0
// ============================================================

void FUN_140d064d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140d05580(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_140d05580(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_140d05580(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_140d05580(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_140d05580(param_1,param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_140d065b0 @ 140d065b0
// ============================================================

void FUN_140d065b0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140d05620(param_1,lVar2,lVar3,*(undefined4 **)(param_1 + -8 + lVar1),param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140d06630 @ 140d06630
// ============================================================

void FUN_140d06630(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    local_res18[0] = param_3;
    do {
      puVar1 = (undefined4 *)*puVar4;
      bVar2 = FUN_140d01e30(local_res18,puVar1,(undefined4 *)*param_1);
      if (bVar2) {
        lVar3 = (longlong)puVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(puVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = puVar1;
      }
      else {
        bVar2 = FUN_140d01e30(local_res18,puVar1,(undefined4 *)puVar4[-1]);
        puVar6 = puVar4;
        puVar5 = puVar4;
        if (bVar2) {
          do {
            puVar6 = puVar5 + -1;
            *puVar5 = *puVar6;
            bVar2 = FUN_140d01e30(local_res18,puVar1,(undefined4 *)puVar5[-2]);
            puVar5 = puVar6;
          } while (bVar2);
        }
        *puVar6 = puVar1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != param_2);
  }
  return;
}



// ============================================================
// Function: FUN_140d06750 @ 140d06750
// ============================================================

void FUN_140d06750(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140d05620((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,puVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_140d06780 @ 140d06780
// ============================================================

void FUN_140d06780(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d067c0 @ 140d067c0
// ============================================================

undefined8 * FUN_140d067c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d06810 @ 140d06810
// ============================================================

undefined8 * FUN_140d06810(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d06860 @ 140d06860
// ============================================================

void FUN_140d06860(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d05940(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}



// ============================================================
// Function: FUN_140d068e0 @ 140d068e0
// ============================================================

void FUN_140d068e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d05990(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}



// ============================================================
// Function: FUN_140d06960 @ 140d06960
// ============================================================

void FUN_140d06960(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x25);
  while (cVar1 == '\0') {
    FUN_140d059e0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x25);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}



// ============================================================
// Function: FUN_140d069e0 @ 140d069e0
// ============================================================

longlong * FUN_140d069e0(longlong *param_1)

{
  FUN_140d04d10(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d06a00 @ 140d06a00
// ============================================================

longlong * FUN_140d06a00(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140d04d10(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140d06a30 @ 140d06a30
// ============================================================

void FUN_140d06a30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d06a50 @ 140d06a50
// ============================================================

void FUN_140d06a50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d06a70 @ 140d06a70
// ============================================================

void FUN_140d06a70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d06a90 @ 140d06a90
// ============================================================

undefined8 * FUN_140d06a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06ae0 @ 140d06ae0
// ============================================================

undefined8 * FUN_140d06ae0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d06b20 @ 140d06b20
// ============================================================

longlong * FUN_140d06b20(longlong *param_1)

{
  FUN_140d05020(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d06b40 @ 140d06b40
// ============================================================

undefined8 * FUN_140d06b40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d06b80 @ 140d06b80
// ============================================================

longlong * FUN_140d06b80(longlong *param_1)

{
  FUN_140d050c0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d06ba0 @ 140d06ba0
// ============================================================

undefined8 * FUN_140d06ba0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) ||
     ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06c00 @ 140d06c00
// ============================================================

void FUN_140d06c00(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06c30 @ 140d06c30
// ============================================================

undefined8 * FUN_140d06c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06c80 @ 140d06c80
// ============================================================

undefined8 * FUN_140d06c80(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) ||
     ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d06ce0 @ 140d06ce0
// ============================================================

undefined8 * FUN_140d06ce0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}



// ============================================================
// Function: FUN_140d06d20 @ 140d06d20
// ============================================================

longlong * FUN_140d06d20(longlong *param_1)

{
  FUN_140d051a0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d06d40 @ 140d06d40
// ============================================================

void FUN_140d06d40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d06000();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06d80 @ 140d06d80
// ============================================================

void FUN_140d06d80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d06060();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06dc0 @ 140d06dc0
// ============================================================

void FUN_140d06dc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d060c0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x25) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140d06e00 @ 140d06e00
// ============================================================

undefined8 * FUN_140d06e00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d06e50 @ 140d06e50
// ============================================================

undefined8 * FUN_140d06e50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140d21a30);
  }
  FUN_140d04d10(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140d0703c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140d0703c:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140d049f0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d04a50((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140d049f0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140d04a50((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d049f0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140d04a50((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}



// ============================================================
// Function: FUN_140d07210 @ 140d07210
// ============================================================

exception * FUN_140d07210(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d07270 @ 140d07270
// ============================================================

undefined8 * FUN_140d07270(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d072c0 @ 140d072c0
// ============================================================

undefined8 * FUN_140d072c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140d21a30);
  }
  FUN_140d03ad0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140d074ac;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140d074ac:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140d04b10((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d04b70((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140d04b10((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140d04b70((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d04b10((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140d04b70((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}



// ============================================================
// Function: FUN_140d07680 @ 140d07680
// ============================================================

undefined8 * FUN_140d07680(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d076d0 @ 140d076d0
// ============================================================

undefined8 * FUN_140d076d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar5 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140d21a30);
  }
  FUN_140d03b60(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x25) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
            plVar12[1] = (longlong)plVar11;
          }
          *plVar11 = (longlong)plVar12;
          plVar10[2] = plVar5[2];
          *(longlong **)(plVar5[2] + 8) = plVar10;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar5) {
          *(longlong **)(param_1[6] + 8) = plVar10;
        }
        else {
          puVar7 = (undefined8 *)plVar5[1];
          if ((longlong *)*puVar7 == plVar5) {
            *puVar7 = plVar10;
          }
          else {
            puVar7[2] = plVar10;
          }
        }
        plVar10[1] = plVar5[1];
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x24);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x24);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_140d078bc;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
    plVar12[1] = (longlong)plVar11;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar5) {
    *(longlong **)(param_1[6] + 8) = plVar12;
  }
  else if ((longlong *)*plVar11 == plVar5) {
    *plVar11 = (longlong)plVar12;
  }
  else {
    plVar11[2] = (longlong)plVar12;
  }
  if (*(longlong **)param_1[6] == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x25);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x25);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_140d078bc:
  if (*(char *)((longlong)plVar5 + 0x24) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x24) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_140d04c30((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(*plVar11 + 0x24) != '\x01') || (*(char *)(plVar11[2] + 0x24) != '\x01'))
            {
              if (*(char *)(plVar11[2] + 0x24) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140d04c90((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(plVar11[2] + 0x24) = 1;
              FUN_140d04c30((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_140d04c90((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(plVar11[2] + 0x24) != '\x01') || (*(char *)(*plVar11 + 0x24) != '\x01'))
            {
              if (*(char *)(*plVar11 + 0x24) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_140d04c30((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(*plVar11 + 0x24) = 1;
              FUN_140d04c90((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x24) = 1;
  }
  operator_delete(plVar5);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar8 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar8;
  return param_2;
}



// ============================================================
// Function: FUN_140d07a90 @ 140d07a90
// ============================================================

undefined8 * FUN_140d07a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d07ae0 @ 140d07ae0
// ============================================================

undefined8 * FUN_140d07ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d07b30 @ 140d07b30
// ============================================================

undefined8 * FUN_140d07b30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d07c60 @ 140d07c60
// ============================================================

void * FUN_140d07c60(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d07ca0 @ 140d07ca0
// ============================================================

void * FUN_140d07ca0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140d07ce0 @ 140d07ce0
// ============================================================

undefined8 *
FUN_140d07ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res20 [8];
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) -
                      ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  local_res20[0] = param_4;
  FUN_140d064d0(param_2,puVar6,param_3 + -1,param_4);
  puVar7 = puVar6;
  while (puVar8 = puVar7, param_2 < puVar8) {
    bVar3 = FUN_140d01e30(local_res20,(undefined4 *)puVar8[-1],(undefined4 *)*puVar8);
    if ((bVar3) ||
       (bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar8,(undefined4 *)puVar8[-1]),
       puVar7 = puVar8 + -1, bVar3)) break;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar7 = puVar6;
    puVar5 = puVar8;
    if (param_3 <= puVar6) break;
    bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar6,(undefined4 *)*puVar8);
    if ((bVar3) ||
       (bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar8,(undefined4 *)*puVar6), bVar3))
    break;
  } while( true );
joined_r0x000140d07dc3:
  puVar4 = puVar5;
  puVar2 = puVar7;
  puVar7 = puVar8;
  if (param_3 <= puVar2) {
joined_r0x000140d07e1c:
    for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
      puVar7 = puVar7 + -1;
      bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar7,(undefined4 *)*puVar4);
      if (!bVar3) {
        bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar4,(undefined4 *)*puVar7);
        if (bVar3) break;
        puVar4 = puVar4 + -1;
        if (puVar4 != puVar7) {
          uVar1 = *puVar4;
          *puVar4 = *puVar7;
          *puVar7 = uVar1;
        }
      }
    }
    if (puVar8 == param_2) {
      if (puVar2 == param_3) {
        *param_1 = puVar4;
        param_1[1] = puVar6;
        return param_1;
      }
      if ((puVar6 != puVar2) && (puVar4 != puVar6)) {
        uVar1 = *puVar4;
        *puVar4 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar7 = puVar2 + 1;
      puVar5 = puVar4 + 1;
      if (puVar4 != puVar2) {
        uVar1 = *puVar4;
        *puVar4 = *puVar2;
        *puVar2 = uVar1;
      }
    }
    else {
      puVar8 = puVar8 + -1;
      if (puVar2 == param_3) {
        puVar5 = puVar4 + -1;
        if (puVar8 != puVar5) {
          uVar1 = *puVar8;
          *puVar8 = *puVar5;
          *puVar5 = uVar1;
        }
        puVar6 = puVar6 + -1;
        puVar7 = puVar2;
        if (puVar5 != puVar6) {
          uVar1 = *puVar5;
          *puVar5 = *puVar6;
          *puVar6 = uVar1;
        }
      }
      else {
        if (puVar2 != puVar8) {
          uVar1 = *puVar2;
          *puVar2 = *puVar8;
          *puVar8 = uVar1;
        }
        puVar7 = puVar2 + 1;
        puVar5 = puVar4;
      }
    }
    goto joined_r0x000140d07dc3;
  }
  bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar4,(undefined4 *)*puVar2);
  puVar5 = puVar6;
  if (!bVar3) {
    bVar3 = FUN_140d01e30(local_res20,(undefined4 *)*puVar2,(undefined4 *)*puVar4);
    if (bVar3) goto joined_r0x000140d07e1c;
    puVar5 = puVar6 + 1;
    if (puVar6 != puVar2) {
      uVar1 = *puVar6;
      *puVar6 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar6 = puVar5;
  puVar7 = puVar2 + 1;
  puVar5 = puVar4;
  goto joined_r0x000140d07dc3;
}



// ============================================================
// Function: FUN_140d07f50 @ 140d07f50
// ============================================================

void FUN_140d07f50(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (1 < lVar3) {
    lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
    while (0 < lVar2) {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + -1;
      FUN_140d05620(param_1,lVar2,lVar3,*(undefined4 **)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d07fd0 @ 140d07fd0
// ============================================================

void FUN_140d07fd0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  FUN_140d06630(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d07ff0 @ 140d07ff0
// ============================================================

void FUN_140d07ff0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    puVar1 = *(undefined4 **)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140d05620((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,puVar1,
                  param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140d08030 @ 140d08030
// ============================================================

void FUN_140d08030(longlong param_1)

{
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  operator_delete(*(void **)(param_1 + 0x60));
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  operator_delete(*(void **)(param_1 + 0x30));
  return;
}



// ============================================================
// Function: FUN_140d080d0 @ 140d080d0
// ============================================================

ulonglong FUN_140d080d0(longlong param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  ulonglong extraout_RAX_06;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0x548);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == 3) {
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x118);
    do {
      if (*(int *)(puVar7 + -10) == 2) {
        piVar2 = (int *)*puVar7;
        if (piVar2 < (int *)puVar7[-1]) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX;
        }
        piVar5 = (int *)puVar7[-1];
        if ((int *)*puVar7 < piVar5) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_00;
        }
        lVar3 = puVar7[-4];
        for (; (piVar5 != piVar2 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
        }
        piVar2 = (int *)*puVar7;
        if (piVar2 < (int *)puVar7[-1]) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_01;
        }
        if ((lVar3 == 0) || (lVar3 != puVar7[-4])) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_02;
        }
        if (piVar5 != piVar2) {
LAB_140d08178:
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x12;
    } while (lVar6 < 4);
  }
  else if (uVar1 == 7) {
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x358);
    do {
      if (*(int *)(puVar7 + -10) == 6) {
        piVar2 = (int *)*puVar7;
        if (piVar2 < (int *)puVar7[-1]) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_03;
        }
        piVar5 = (int *)puVar7[-1];
        if ((int *)*puVar7 < piVar5) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_04;
        }
        lVar3 = puVar7[-4];
        for (; (piVar5 != piVar2 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
        }
        piVar2 = (int *)*puVar7;
        if (piVar2 < (int *)puVar7[-1]) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_05;
        }
        if ((lVar3 == 0) || (lVar3 != puVar7[-4])) {
          _invalid_parameter_noinfo();
          uVar4 = extraout_RAX_06;
        }
        if (piVar5 != piVar2) goto LAB_140d08178;
      }
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x12;
    } while (lVar6 < 4);
  }
  return uVar4 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d08220 @ 140d08220
// ============================================================

ulonglong FUN_140d08220(longlong param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  ulonglong extraout_RAX_06;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0x548);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == 3) {
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x148);
    do {
      piVar2 = (int *)*puVar7;
      if (piVar2 < (int *)puVar7[-1]) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX;
      }
      piVar5 = (int *)puVar7[-1];
      if ((int *)*puVar7 < piVar5) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_00;
      }
      lVar3 = puVar7[-4];
      for (; (piVar5 != piVar2 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
      }
      piVar2 = (int *)*puVar7;
      if (piVar2 < (int *)puVar7[-1]) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_01;
      }
      if ((lVar3 == 0) || (lVar3 != puVar7[-4])) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_02;
      }
      if (piVar5 != piVar2) {
LAB_140d082bc:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x12;
    } while (lVar6 < 4);
  }
  else if (uVar1 == 7) {
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x388);
    do {
      piVar2 = (int *)*puVar7;
      if (piVar2 < (int *)puVar7[-1]) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_03;
      }
      piVar5 = (int *)puVar7[-1];
      if ((int *)*puVar7 < piVar5) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_04;
      }
      lVar3 = puVar7[-4];
      for (; (piVar5 != piVar2 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
      }
      piVar2 = (int *)*puVar7;
      if (piVar2 < (int *)puVar7[-1]) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_05;
      }
      if ((lVar3 == 0) || (lVar3 != puVar7[-4])) {
        _invalid_parameter_noinfo();
        uVar4 = extraout_RAX_06;
      }
      if (piVar5 != piVar2) goto LAB_140d082bc;
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x12;
    } while (lVar6 < 4);
  }
  return uVar4 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d08360 @ 140d08360
// ============================================================

void FUN_140d08360(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  longlong lVar10;
  CMsg local_438 [1040];
  
  puVar9 = *(undefined4 **)(param_2 + 0x48);
  if (*(undefined4 **)(param_2 + 0x50) < puVar9) {
    _invalid_parameter_noinfo();
  }
  plVar2 = *(longlong **)(param_2 + 0x30);
  FUN_140d12850(local_438);
  uVar7 = FUN_140d128d0(local_438,2,param_3);
  if ((char)uVar7 == '\0') {
    log_InlineLogERROR(&DAT_140d18368);
    FUN_140d128a0((undefined8 *)local_438);
  }
  else {
    while( true ) {
      puVar3 = *(undefined4 **)(param_2 + 0x50);
      if (puVar3 < *(undefined4 **)(param_2 + 0x48)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_2 + 0x30))) {
        _invalid_parameter_noinfo();
      }
      if (puVar9 == puVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(undefined4 **)(lVar10 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *puVar9;
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xd0))
                        (*(longlong **)(param_1 + 0x560),uVar1);
      if (cVar5 != '\0') {
        plVar4 = *(longlong **)(param_1 + 0x560);
        pcVar8 = (char *)(**(code **)(*plVar4 + 0x130))(plVar4,uVar1);
        uVar6 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar1);
        FUN_140d12a70((longlong)local_438,uVar6,pcVar8);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(undefined4 **)(lVar10 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      puVar9 = puVar9 + 1;
    }
    if (param_4 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x560) + 0x18))
                (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 0xc),local_438);
    }
    else {
      (**(code **)**(undefined8 **)(param_1 + 0x560))
                (*(undefined8 **)(param_1 + 0x560),param_4,local_438);
    }
    FUN_140d128a0((undefined8 *)local_438);
  }
  return;
}



// ============================================================
// Function: FUN_140d08530 @ 140d08530
// ============================================================

void FUN_140d08530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    puVar4 = *(undefined4 **)(param_2 + 0x48);
    if (*(undefined4 **)(param_2 + 0x50) < puVar4) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_2 + 0x30);
    while( true ) {
      puVar2 = *(undefined4 **)(param_2 + 0x50);
      if (puVar2 < *(undefined4 **)(param_2 + 0x48)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_2 + 0x30))) {
        _invalid_parameter_noinfo();
      }
      if (puVar4 == puVar2) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1;
      }
      if (*(undefined4 **)(lVar5 + 0x20) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 0x560) + 0x150))
                (*(longlong **)(param_1 + 0x560),*puVar4);
      FUN_140d12850(local_418);
      uVar3 = FUN_140d128d0(local_418,3,0);
      if ((char)uVar3 != '\0') {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(undefined4 **)(lVar5 + 0x20) <= puVar4) {
          _invalid_parameter_noinfo();
        }
        (**(code **)**(undefined8 **)(param_1 + 0x560))(*(undefined8 **)(param_1 + 0x560),*puVar4);
      }
      FUN_140d128a0((undefined8 *)local_418);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1;
      }
      if (*(undefined4 **)(lVar5 + 0x20) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d086c0 @ 140d086c0
// ============================================================

undefined8 * FUN_140d086c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d08720 @ 140d08720
// ============================================================

undefined8 * FUN_140d08720(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d08770 @ 140d08770
// ============================================================

undefined8 * FUN_140d08770(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d08840 @ 140d08840
// ============================================================

undefined8 * FUN_140d08840(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d088a0 @ 140d088a0
// ============================================================

void FUN_140d088a0(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d088e0 @ 140d088e0
// ============================================================

undefined8 * FUN_140d088e0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d08930 @ 140d08930
// ============================================================

undefined8 * FUN_140d08930(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d08980 @ 140d08980
// ============================================================

void FUN_140d08980(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d089a0 @ 140d089a0
// ============================================================

void FUN_140d089a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d089c0 @ 140d089c0
// ============================================================

void FUN_140d089c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d089e0 @ 140d089e0
// ============================================================

undefined8 * FUN_140d089e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (undefined8 *)0x0) || (uVar1 < (ulonglong)param_1[3])) ||
     ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d08a40 @ 140d08a40
// ============================================================

longlong * FUN_140d08a40(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  rsize_t _DstSize;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) ||
     ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  _Src = *(void **)(param_4 + 8);
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_2[1];
  if (_Dst != _Src) {
    lVar2 = param_1[4] - (longlong)_Src >> 2;
    _DstSize = lVar2 * 4;
    if (0 < lVar2) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return param_2;
}



// ============================================================
// Function: FUN_140d08b70 @ 140d08b70
// ============================================================

undefined8 *
FUN_140d08b70(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140d21918);
  }
  plVar5 = FUN_140d05b50(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_140d08f10 @ 140d08f10
// ============================================================

undefined8 *
FUN_140d08f10(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140d21918);
  }
  plVar5 = FUN_140d05bd0(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_140d092b0 @ 140d092b0
// ============================================================

undefined8 *
FUN_140d092b0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0x1555555555555553 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140d21918);
  }
  plVar5 = FUN_140d05c50(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x24);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x25) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x25) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x24);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x24) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_140d095f0 @ 140d095f0
// ============================================================

longlong * FUN_140d095f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_140d06860((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140d06e50(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d097a0 @ 140d097a0
// ============================================================

longlong * FUN_140d097a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_140d068e0((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140d072c0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d09950 @ 140d09950
// ============================================================

longlong * FUN_140d09950(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_140d06960((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x25) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x25);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x25);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x25);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x25);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140d076d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d09b00 @ 140d09b00
// ============================================================

undefined8 * FUN_140d09b00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d09b50 @ 140d09b50
// ============================================================

undefined8 * FUN_140d09b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d09ba0 @ 140d09ba0
// ============================================================

undefined8 * FUN_140d09ba0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d09c50 @ 140d09c50
// ============================================================

void * FUN_140d09c50(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}



// ============================================================
// Function: FUN_140d09c90 @ 140d09c90
// ============================================================

void * FUN_140d09c90(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}



// ============================================================
// Function: FUN_140d09cd0 @ 140d09cd0
// ============================================================

void FUN_140d09cd0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    puVar1 = *(undefined4 **)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140d05620((longlong)param_1,0,lVar2 + -8 >> 3,puVar1,param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140d09d40 @ 140d09d40
// ============================================================

undefined4 * FUN_140d09d40(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0xc);
    plVar2 = plVar1;
  }
  *(longlong **)(param_1 + 0xc) = plVar2;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x18);
    plVar3 = plVar2;
  }
  *(longlong **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d09df0 @ 140d09df0
// ============================================================

void FUN_140d09df0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  tm *ptVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  void *pvVar22;
  bool bVar23;
  __time32_t local_res18 [2];
  void *local_res20;
  CMsg local_448 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    pvVar22 = (void *)0x0;
    local_res18[0] = 0;
    _time32(local_res18);
    ptVar7 = _localtime32(local_res18);
    if (ptVar7 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140d18368);
    }
    else {
      iVar17 = ptVar7->tm_hour * 0x3c + ptVar7->tm_min;
      iVar16 = iVar17 * 0x3c + ptVar7->tm_sec;
      iVar6 = ptVar7->tm_wday;
      if ((((iVar6 == 1) && (iVar17 < 0x547)) || (iVar6 == 0)) ||
         ((iVar1 = *(int *)(param_1 + 0x548), iVar1 == 9 || (iVar1 == 0)))) {
        FUN_140d12520(local_448);
        uVar8 = FUN_140d125a0(local_448,1);
        if ((char)uVar8 != '\0') {
          (**(code **)**(undefined8 **)(param_1 + 0x560))
                    (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
        }
        FUN_140d12570((undefined8 *)local_448);
      }
      else {
        uVar18 = 0;
        if ((((iVar6 == 1) && (0x546 < iVar17)) || ((iVar6 == 2 || ((iVar6 == 3 || (iVar6 == 4))))))
           && (iVar1 != 5)) {
          if ((((iVar6 == 2) || (iVar6 == 3)) || (iVar6 == 4)) && (iVar17 - 0x4c9U < 0x7d)) {
            if (iVar17 < 0x4ce) {
              uVar19 = 0x12048 - iVar16;
              pvVar15 = (void *)(ulonglong)uVar19;
              if ((int)uVar19 < 0) {
                pvVar15 = pvVar22;
              }
              uVar18 = SUB82(pvVar15,0);
            }
            FUN_140d12ba0(local_448);
            uVar8 = FUN_140d12c20(local_448,0,uVar18,0);
            pvVar15 = pvVar22;
            if ((char)uVar8 != '\0') {
              while (iVar6 = (int)pvVar15, iVar6 < 4) {
                lVar9 = (longlong)iVar6;
                pvVar10 = pvVar22;
                if (*(int *)(param_1 + 0xcc + lVar9 * 0x90) != 0) {
                  pvVar10 = (void *)(**(code **)(**(longlong **)(param_1 + 0x560) + 0x20))();
                }
                pvVar11 = pvVar22;
                if (*(int *)(param_1 + 0xd0 + lVar9 * 0x90) != 0) {
                  pvVar11 = (void *)(**(code **)(**(longlong **)(param_1 + 0x560) + 0x20))();
                }
                pvVar15 = (void *)(ulonglong)(iVar6 + 1U);
                uVar8 = FUN_140d12ce0((longlong)local_448,iVar6 + 1U,
                                      *(undefined4 *)(param_1 + 0xcc + lVar9 * 0x90),pvVar10,
                                      *(undefined4 *)(param_1 + 0xd0 + lVar9 * 0x90),pvVar11,
                                      *(undefined4 *)(param_1 + 0xe0 + lVar9 * 0x90),
                                      *(undefined4 *)(param_1 + 0xe4 + lVar9 * 0x90),
                                      *(undefined4 *)(param_1 + 0xe8 + lVar9 * 0x90),
                                      *(undefined4 *)(param_1 + 0xec + lVar9 * 0x90),
                                      *(undefined4 *)(param_1 + 0xf0 + lVar9 * 0x90),0,0);
                if ((char)uVar8 == '\0') {
                  log_InlineLogERROR(&DAT_140d18368);
                }
              }
              (**(code **)**(undefined8 **)(param_1 + 0x560))
                        (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
            }
            FUN_140d12bf0((undefined8 *)local_448);
          }
          else {
            FUN_140d12ee0(local_448);
            uVar8 = FUN_140d12f60(local_448);
            if ((char)uVar8 != '\0') {
              puVar2 = *(undefined8 **)(param_1 + 0x38);
              puVar20 = (undefined8 *)*puVar2;
              plVar3 = *(longlong **)(param_1 + 8);
LAB_140d0a150:
              lVar9 = 0;
              if (plVar3 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
              }
              if (puVar20 != puVar2) {
                if (plVar3 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                else {
                  lVar9 = *plVar3;
                }
                if (puVar20 == *(undefined8 **)(lVar9 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar9 = puVar20[4];
                if (lVar9 != 0) {
                  local_res20 = (void *)0x0;
                  uVar8 = FUN_140d010e0(lVar9);
                  if ((int)uVar8 != 0) {
                    lVar4 = **(longlong **)(param_1 + 0x560);
                    uVar12 = FUN_140d010e0(lVar9);
                    local_res20 = (void *)(**(code **)(lVar4 + 0x20))
                                                    (*(undefined8 *)(param_1 + 0x560),
                                                     uVar12 & 0xffffffff);
                  }
                  uVar8 = FUN_140d01390(lVar9);
                  uVar13 = FUN_140d011c0(lVar9);
                  uVar14 = FUN_140d010e0(lVar9);
                  iVar6 = FUN_140d01060(lVar9);
                  uVar8 = FUN_140d12fb0((longlong)local_448,iVar6 % 10,(int)uVar14,local_res20,
                                        (int)uVar13,(int)uVar8,0,0,0);
                  if ((char)uVar8 == '\0') {
                    log_InlineLogERROR(&DAT_140d18368);
                  }
                }
                if (plVar3 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)puVar20 + 0x29) == '\0') {
                  puVar21 = puVar20;
                  puVar5 = (undefined8 *)puVar20[2];
                  if (*(char *)((longlong)puVar20[2] + 0x29) == '\0') {
                    do {
                      puVar20 = puVar5;
                      puVar5 = (undefined8 *)*puVar20;
                    } while (*(char *)((longlong)*puVar20 + 0x29) == '\0');
                  }
                  else {
                    do {
                      puVar20 = (undefined8 *)puVar21[1];
                      if (*(char *)((longlong)puVar20 + 0x29) != '\0') break;
                      bVar23 = puVar21 == (undefined8 *)puVar20[2];
                      puVar21 = puVar20;
                    } while (bVar23);
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
                goto LAB_140d0a150;
              }
              (**(code **)**(undefined8 **)(param_1 + 0x560))
                        (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
            }
            FUN_140d12f30((undefined8 *)local_448);
          }
        }
        else if ((((((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) || (iVar6 == 4)) && (iVar1 == 5)
                 ) || ((iVar6 == 5 || (iVar6 == 6)))) {
          if ((iVar6 == 6) && (iVar17 - 0x505U < 5)) {
            iVar16 = 0x12e58 - iVar16;
            if (iVar16 < 0) {
              iVar16 = 0;
            }
          }
          else if ((iVar6 == 6) && (iVar17 - 0x50aU < 0x78)) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0xffff;
          }
          FUN_140d12ba0(local_448);
          uVar8 = FUN_140d12c20(local_448,1,(short)iVar16,iVar1 == 8);
          if ((char)uVar8 != '\0') {
            while (iVar6 = (int)pvVar22, iVar6 < 4) {
              lVar9 = (longlong)iVar6;
              plVar3 = *(longlong **)(param_1 + 0x560);
              pvVar22 = (void *)(ulonglong)(iVar6 + 1U);
              pvVar15 = (void *)(**(code **)(*plVar3 + 0x20))
                                          (plVar3,*(undefined4 *)(param_1 + 0x310 + lVar9 * 0x90));
              pvVar10 = (void *)(**(code **)(*plVar3 + 0x20))
                                          (plVar3,*(undefined4 *)(param_1 + 0x30c + lVar9 * 0x90));
              uVar8 = FUN_140d12ce0((longlong)local_448,iVar6 + 1U,
                                    *(undefined4 *)(param_1 + 0x30c + lVar9 * 0x90),pvVar10,
                                    *(undefined4 *)(param_1 + 0x310 + lVar9 * 0x90),pvVar15,
                                    *(undefined4 *)(param_1 + 800 + lVar9 * 0x90),
                                    *(undefined4 *)(param_1 + 0x324 + lVar9 * 0x90),
                                    *(undefined4 *)(param_1 + 0x328 + lVar9 * 0x90),
                                    *(undefined4 *)(param_1 + 0x32c + lVar9 * 0x90),
                                    *(undefined4 *)(param_1 + 0x330 + lVar9 * 0x90),0,0);
              if ((char)uVar8 == '\0') {
                log_InlineLogERROR(&DAT_140d18368);
              }
            }
            (**(code **)**(undefined8 **)(param_1 + 0x560))
                      (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
          }
          FUN_140d12bf0((undefined8 *)local_448);
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0a560 @ 140d0a560
// ============================================================

void FUN_140d0a560(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = (undefined8 *)*puVar1;
  plVar2 = *(longlong **)(param_1 + 8);
  do {
    while( true ) {
      while( true ) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar4 == puVar1) {
          return;
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar2;
        }
        if (puVar4 == *(undefined8 **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar6 = puVar4[4];
        if (lVar6 != 0) {
          FUN_140d01140(lVar6,0);
          FUN_140d013f0(lVar6,0);
          FUN_140d01220(lVar6,1,0);
          FUN_140d01220(lVar6,2,0);
          FUN_140d01220(lVar6,3,0);
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar4 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar5 = puVar4;
      puVar3 = (undefined8 *)puVar4[2];
      if (*(char *)((longlong)puVar4[2] + 0x29) != '\0') break;
      do {
        puVar4 = puVar3;
        puVar3 = (undefined8 *)*puVar4;
      } while (*(char *)((longlong)*puVar4 + 0x29) == '\0');
    }
    do {
      puVar4 = (undefined8 *)puVar5[1];
      if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
      bVar7 = puVar5 == (undefined8 *)puVar4[2];
      puVar5 = puVar4;
    } while (bVar7);
  } while( true );
}



// ============================================================
// Function: FUN_140d0a6c0 @ 140d0a6c0
// ============================================================

void FUN_140d0a6c0(longlong param_1)

{
  int iVar1;
  tm *ptVar2;
  __time32_t local_res10 [6];
  
  iVar1 = tq::DateStamp(0);
  if (*(int *)(param_1 + 0x54c) != iVar1) {
    *(int *)(param_1 + 0x54c) = iVar1;
    local_res10[0] = 0;
    _time32(local_res10);
    ptVar2 = _localtime32(local_res10);
    if (ptVar2 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140d18368);
    }
    else if (ptVar2->tm_wday == 1) {
      FUN_140d0a560(param_1);
      *(undefined4 *)(param_1 + 0x548) = 0;
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0a760 @ 140d0a760
// ============================================================

void * FUN_140d0a760(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  tm *ptVar4;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  undefined8 uVar6;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  __time32_t local_res18 [2];
  
  if (param_2 != 0) {
    local_res18[0] = 0;
    _time32(local_res18);
    ptVar4 = _localtime32(local_res18);
    register0x00000020 = (BADSPACEBASE *)0x0;
    if (ptVar4 != (tm *)0x0) {
      uVar1 = ptVar4->tm_wday;
      puVar5 = (undefined8 *)(ulonglong)uVar1;
      if ((((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) && (*(int *)(param_1 + 0x548) != 5)) {
        puVar2 = *(undefined8 **)(param_1 + 0x38);
        plVar3 = *(longlong **)(param_1 + 8);
        puVar5 = puVar2;
        puVar7 = (undefined8 *)*puVar2;
LAB_140d0a810:
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          puVar5 = extraout_RAX;
        }
        if (puVar7 == puVar2) goto LAB_140d0a9ad;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar3;
        }
        if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((puVar7[4] == 0) || (uVar6 = FUN_140d010e0(puVar7[4]), (int)uVar6 != param_2)) {
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
            puVar8 = puVar7;
            puVar5 = (undefined8 *)puVar7[2];
            if (*(char *)((longlong)puVar7[2] + 0x29) == '\0') {
              do {
                puVar7 = puVar5;
                puVar5 = (undefined8 *)*puVar7;
              } while (*(char *)((longlong)puVar5 + 0x29) == '\0');
            }
            else {
              do {
                puVar5 = (undefined8 *)puVar8[1];
                puVar7 = puVar5;
                if (*(char *)((longlong)puVar5 + 0x29) != '\0') break;
                bVar10 = puVar8 == (undefined8 *)puVar5[2];
                puVar8 = puVar5;
              } while (bVar10);
            }
          }
          else {
            _invalid_parameter_noinfo();
            puVar5 = extraout_RAX_00;
          }
          goto LAB_140d0a810;
        }
        register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else if (uVar1 == 6) {
        puVar2 = *(undefined8 **)(param_1 + 0x38);
        plVar3 = *(longlong **)(param_1 + 8);
        puVar5 = puVar2;
        puVar7 = (undefined8 *)*puVar2;
LAB_140d0a8f8:
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          puVar5 = extraout_RAX_01;
        }
        if (puVar7 == puVar2) goto LAB_140d0a9ad;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar3;
        }
        if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((puVar7[4] == 0) || (uVar6 = FUN_140d010e0(puVar7[4]), (int)uVar6 != param_2)) {
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
            puVar8 = puVar7;
            puVar5 = (undefined8 *)puVar7[2];
            if (*(char *)((longlong)puVar7[2] + 0x29) == '\0') {
              do {
                puVar7 = puVar5;
                puVar5 = (undefined8 *)*puVar7;
              } while (*(char *)((longlong)puVar5 + 0x29) == '\0');
            }
            else {
              do {
                puVar5 = (undefined8 *)puVar8[1];
                puVar7 = puVar5;
                if (*(char *)((longlong)puVar5 + 0x29) != '\0') break;
                bVar10 = puVar8 == (undefined8 *)puVar5[2];
                puVar8 = puVar5;
              } while (bVar10);
            }
          }
          else {
            _invalid_parameter_noinfo();
            puVar5 = extraout_RAX_02;
          }
          goto LAB_140d0a8f8;
        }
        register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else {
LAB_140d0a9ad:
        register0x00000020 = (BADSPACEBASE *)((ulonglong)puVar5 & 0xffffffffffffff00);
      }
    }
  }
  return register0x00000020;
}



// ============================================================
// Function: FUN_140d0a9d0 @ 140d0a9d0
// ============================================================

undefined8 * FUN_140d0a9d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  rsize_t _DstSize;
  
  _Src = (void *)((longlong)*(void **)(param_3 + 8) + 4);
  lVar3 = param_1[4] - (longlong)_Src >> 2;
  if (0 < lVar3) {
    _DstSize = lVar3 << 2;
    memmove_s(*(void **)(param_3 + 8),_DstSize,_Src,_DstSize);
  }
  param_1[4] = param_1[4] + -4;
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar1 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d0aa60 @ 140d0aa60
// ============================================================

void FUN_140d0aa60(longlong *param_1)

{
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  longlong lVar1;
  
  _Src = (void *)param_1[4];
  if (_Src < (void *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_1[3];
  if ((void *)param_1[4] < _Dst) {
    _invalid_parameter_noinfo();
  }
  if ((_Dst < (void *)param_1[3]) || ((void *)param_1[4] < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *param_1;
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar1 == 0) || (lVar1 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar1 = param_1[4] - (longlong)_Src >> 2;
    _DstSize = lVar1 * 4;
    if (0 < lVar1) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return;
}



// ============================================================
// Function: FUN_140d0ab20 @ 140d0ab20
// ============================================================

longlong * FUN_140d0ab20(longlong *param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < (int)plVar6[3];
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140d0ac7d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140d0acac;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140d0ac7d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140d08b70(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140d0acac:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140d0acd0 @ 140d0acd0
// ============================================================

longlong * FUN_140d0acd0(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140d0ae2d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140d0ae5c;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140d0ae2d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140d08f10(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140d0ae5c:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140d0ae80 @ 140d0ae80
// ============================================================

longlong * FUN_140d0ae80(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}



// ============================================================
// Function: FUN_140d0af50 @ 140d0af50
// ============================================================

longlong * FUN_140d0af50(longlong *param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x25) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < (int)plVar6[3];
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x25) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140d0b0ad:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140d0b0dc;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x25) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x25);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x25);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x25);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x25);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140d0b0ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140d092b0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140d0b0dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140d0b100 @ 140d0b100
// ============================================================

longlong * FUN_140d0b100(longlong *param_1,longlong *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x25) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(int *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x25) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(int *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}



// ============================================================
// Function: FUN_140d0b1d0 @ 140d0b1d0
// ============================================================

void FUN_140d0b1d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0b1f0 @ 140d0b1f0
// ============================================================

void FUN_140d0b1f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0b210 @ 140d0b210
// ============================================================

void FUN_140d0b210(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0b260 @ 140d0b260
// ============================================================

longlong * FUN_140d0b260(longlong *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_140d08b70(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(int *)(puVar3 + 3)) {
        FUN_140d08b70(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
        return param_2;
      }
    }
    else {
      lVar4 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar4) {
        if (*(int *)(*(undefined8 **)(param_1[6] + 0x10) + 3) < *param_4) {
          FUN_140d08b70(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),
                        (undefined8 *)param_4);
          return param_2;
        }
      }
      else {
        iVar8 = *param_4;
        if (iVar8 < *(int *)(param_3[1] + 0x18)) {
          local_38 = *param_3;
          local_30 = (longlong *)param_3[1];
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)local_30 + 0x29) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x29);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x29);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x29);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x29);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x29) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x29) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          iVar8 = *param_4;
          if ((int)plVar7[3] < iVar8) {
            if (*(char *)(plVar7[2] + 0x29) != '\0') {
              FUN_140d08b70(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140d08b70(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
            return param_2;
          }
        }
        if (*(int *)(param_3[1] + 0x18) < iVar8) {
          local_38 = *param_3;
          plVar7 = (longlong *)param_1[6];
          local_30 = (longlong *)param_3[1];
          lVar4 = *param_1;
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          plVar9 = local_30;
          if (*(char *)((longlong)local_30 + 0x29) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x29);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x29);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x29);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x29);
                plVar6 = (longlong *)plVar9[1];
                plVar5 = plVar9;
              }
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == 0) || (local_38 != lVar4)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar9 == plVar7) || (*param_4 < (int)plVar9[3])) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x29) != '\0') {
              FUN_140d08b70(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140d08b70(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140d0ab20(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}



// ============================================================
// Function: FUN_140d0b580 @ 140d0b580
// ============================================================

void FUN_140d0b580(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_140d095f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140d0b5f0 @ 140d0b5f0
// ============================================================

void FUN_140d0b5f0(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_140d097a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140d0b660 @ 140d0b660
// ============================================================

void FUN_140d0b660(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_140d09950(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140d0b700 @ 140d0b700
// ============================================================

void FUN_140d0b700(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  rsize_t rVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x28) - lVar3 >> 2;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar6 - lVar3 >> 2;
    if (0x3fffffffffffffffU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140d03470();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140d04940(param_1 + 0x10,uVar8);
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 2;
      puVar5 = (undefined4 *)((longlong)pvVar2 + lVar3 * 4);
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_4;
        puVar5 = puVar5 + 1;
      }
      lVar6 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 2;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 2;
        memmove_s(pvVar2,rVar7,*(void **)(param_1 + 0x18),rVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 2;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 2;
        memmove_s((void *)((longlong)pvVar2 + (lVar3 + param_3) * 4),rVar7,*(void **)(param_2 + 8),
                  rVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + uVar8 * 4);
      *(void **)(param_1 + 0x20) =
           (void *)((longlong)pvVar2 + (param_3 + (lVar3 - (longlong)pvVar9 >> 2)) * 4);
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    else if ((ulonglong)(lVar6 - *(longlong *)(param_2 + 8) >> 2) < param_3) {
      uVar1 = *param_4;
      FUN_140d09c50(param_1,*(void **)(param_2 + 8),lVar6,
                    (void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
      puVar5 = *(undefined4 **)(param_1 + 0x20);
      for (lVar3 = param_3 - ((longlong)puVar5 - *(longlong *)(param_2 + 8) >> 2); lVar3 != 0;
          lVar3 = lVar3 + -1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 4;
      lVar3 = *(longlong *)(param_1 + 0x20);
      for (puVar5 = *(undefined4 **)(param_2 + 8); puVar5 != (undefined4 *)(lVar3 + param_3 * -4);
          puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    else {
      uVar1 = *param_4;
      pvVar9 = (void *)(lVar6 + param_3 * -4);
      pvVar2 = FUN_140d09c50(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140d06310(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0b9a0 @ 140d0b9a0
// ============================================================

undefined8 * FUN_140d0b9a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d0b9f0 @ 140d0b9f0
// ============================================================

undefined8 * FUN_140d0b9f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d0ba40 @ 140d0ba40
// ============================================================

undefined8 * FUN_140d0ba40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}



// ============================================================
// Function: FUN_140d0ba90 @ 140d0ba90
// ============================================================

void FUN_140d0ba90(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  rsize_t rVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x28) - lVar3 >> 3;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar6 - lVar3 >> 3;
    if (0x1fffffffffffffffU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140d03700();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140d04db0(param_1 + 0x10,uVar8);
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 3;
      puVar5 = (undefined8 *)((longlong)pvVar2 + lVar3 * 8);
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_4;
        puVar5 = puVar5 + 1;
      }
      lVar6 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s(pvVar2,rVar7,*(void **)(param_1 + 0x18),rVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s((void *)((longlong)pvVar2 + (lVar3 + param_3) * 8),rVar7,*(void **)(param_2 + 8),
                  rVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + uVar8 * 8);
      *(void **)(param_1 + 0x20) =
           (void *)((longlong)pvVar2 + (param_3 + (lVar3 - (longlong)pvVar9 >> 3)) * 8);
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    else if ((ulonglong)(lVar6 - *(longlong *)(param_2 + 8) >> 3) < param_3) {
      uVar1 = *param_4;
      FUN_140d09c90(param_1,*(void **)(param_2 + 8),lVar6,
                    (void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      for (lVar3 = param_3 - ((longlong)puVar5 - *(longlong *)(param_2 + 8) >> 3); lVar3 != 0;
          lVar3 = lVar3 + -1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 8;
      lVar3 = *(longlong *)(param_1 + 0x20);
      for (puVar5 = *(undefined8 **)(param_2 + 8); puVar5 != (undefined8 *)(lVar3 + param_3 * -8);
          puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    else {
      uVar1 = *param_4;
      pvVar9 = (void *)(lVar6 + param_3 * -8);
      pvVar2 = FUN_140d09c90(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140d06380(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0bd40 @ 140d0bd40
// ============================================================

void FUN_140d0bd40(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_140d09cd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d0bd50 @ 140d0bd50
// ============================================================

void FUN_140d0bd50(longlong param_1,uint param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  local_res10[0] = param_2;
  if (param_3 - 1U < 3) {
    if (param_4 < 4) {
      if (param_2 != 0) {
        FUN_140d0ae80((longlong *)(param_1 + 0x48),(longlong *)&local_40,local_res10);
        lVar1 = *(longlong *)(param_1 + 0x78);
        lVar2 = 0;
        local_30 = *(longlong **)(param_1 + 0x48);
        if ((local_40 == (longlong *)0x0) || (local_40 != local_30)) {
          _invalid_parameter_noinfo();
        }
        if (local_38 == lVar1) {
          log_InlineLogERROR(&DAT_140d18368);
        }
        else {
          if (local_40 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar2 = *local_40;
          }
          if (local_38 == *(longlong *)(lVar2 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (*(longlong *)(local_38 + 0x20) == 0) {
            log_InlineLogERROR(&DAT_140d18368);
          }
          else {
            FUN_140d01220(*(longlong *)(local_38 + 0x20),param_3,param_4);
          }
        }
      }
    }
    else {
      log_InlineLogERROR(&DAT_140d18368);
    }
  }
  else {
    log_InlineLogERROR(&DAT_140d18368);
  }
  return;
}



// ============================================================
// Function: FUN_140d0bef0 @ 140d0bef0
// ============================================================

void FUN_140d0bef0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140d0ae80((longlong *)(param_1 + 0x48),(longlong *)&local_40,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x78);
    lVar3 = 0;
    local_30 = *(longlong **)(param_1 + 0x48);
    if ((local_40 == (longlong *)0x0) || (local_40 != local_30)) {
      _invalid_parameter_noinfo();
    }
    if (local_38 == lVar1) {
      log_InlineLogERROR(&DAT_140d18368);
    }
    else {
      if (local_40 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar3 = *local_40;
      }
      if (local_38 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar1 = *(longlong *)(local_38 + 0x20);
      if (lVar1 == 0) {
        log_InlineLogERROR(&DAT_140d18368);
      }
      else {
        uVar2 = FUN_140d01390(lVar1);
        FUN_140d013f0(lVar1,param_3 + (int)uVar2);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0c010 @ 140d0c010
// ============================================================

void FUN_140d0c010(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    FUN_140d08530(param_1,param_2);
    puVar6 = *(undefined4 **)(param_2 + 0x48);
    if (*(undefined4 **)(param_2 + 0x50) < puVar6) {
      _invalid_parameter_noinfo();
    }
    plVar3 = *(longlong **)(param_2 + 0x30);
    puVar4 = *(undefined4 **)(param_2 + 0x50);
    if (puVar4 < *(undefined4 **)(param_2 + 0x48)) {
      _invalid_parameter_noinfo();
    }
    plVar5 = *(longlong **)(param_2 + 0x30);
    while( true ) {
      if ((plVar3 == (longlong *)0x0) || (plVar3 != plVar5)) {
        _invalid_parameter_noinfo();
      }
      if (puVar6 == puVar4) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar3;
      }
      if (*(undefined4 **)(lVar7 + 0x20) <= puVar6) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                (*(longlong **)(param_1 + 0x560),*puVar6,1);
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar3;
      }
      if (*(undefined4 **)(lVar7 + 0x20) <= puVar6) {
        _invalid_parameter_noinfo();
      }
      puVar6 = puVar6 + 1;
    }
    FUN_140d0aa60((longlong *)(param_2 + 0x30));
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xb8))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 0xc));
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x60))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 0xc));
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x80))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xc0))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 4),0);
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xc0))
              (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_2 + 8),0);
    if (*(int *)(param_2 + 0x28) == 1) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xb0))
              (*(longlong **)(param_1 + 0x560),uVar2,uVar1);
  }
  return;
}



// ============================================================
// Function: FUN_140d0c240 @ 140d0c240
// ============================================================

undefined4 FUN_140d0c240(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xb8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x25);
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  while (cVar1 == '\0') {
    if (*(int *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x25);
  }
  puVar8 = *(undefined8 **)(param_1 + 0xb8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(int *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xb8);
    local_28 = *(longlong *)(param_1 + 0x88);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xb8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x88))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar5 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar5 = *(undefined4 *)(lVar4 + 0x20);
  }
  return uVar5;
}



// ============================================================
// Function: FUN_140d0c360 @ 140d0c360
// ============================================================

undefined8 * FUN_140d0c360(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_48 [2];
  undefined8 local_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(int *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(int *)(puVar4 + 3))) {
    local_48[0] = *param_2;
    local_40 = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_140d0b260(param_1,local_28,(longlong *)&local_38,local_48);
    plVar6 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
  }
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar5 = *plVar6;
  }
  if (puVar4 == *(undefined8 **)(lVar5 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return puVar4 + 4;
}



// ============================================================
// Function: FUN_140d0c460 @ 140d0c460
// ============================================================

void FUN_140d0c460(longlong *param_1)

{
  FUN_140d0b580(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0c490 @ 140d0c490
// ============================================================

void FUN_140d0c490(longlong *param_1)

{
  FUN_140d0b5f0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0c4c0 @ 140d0c4c0
// ============================================================

void FUN_140d0c4c0(longlong *param_1)

{
  FUN_140d0b660(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0c4f0 @ 140d0c4f0
// ============================================================

longlong * FUN_140d0c4f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar3 = 0;
  uVar1 = param_1[3];
  lVar4 = lVar3;
  if ((param_1[4] - uVar1 & 0xfffffffffffffffc) != 0) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) >> 2;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140d0b700((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 4;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140d0c5e4;
  }
  _invalid_parameter_noinfo();
LAB_140d0c5e4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d0c620 @ 140d0c620
// ============================================================

undefined8 * FUN_140d0c620(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d06000();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0c6a0 @ 140d0c6a0
// ============================================================

undefined8 * FUN_140d0c6a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d06060();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0c720 @ 140d0c720
// ============================================================

undefined8 * FUN_140d0c720(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d060c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0c7a0 @ 140d0c7a0
// ============================================================

longlong * FUN_140d0c7a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar3 = 0;
  uVar1 = param_1[3];
  lVar4 = lVar3;
  if ((param_1[4] - uVar1 & 0xfffffffffffffff8) != 0) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) >> 3;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140d0ba90((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140d0c894;
  }
  _invalid_parameter_noinfo();
LAB_140d0c894:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d0c8d0 @ 140d0c8d0
// ============================================================

void FUN_140d0c8d0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_140d0c9a7:
      if (1 < lVar2) {
        FUN_140d06630(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_140d07f50((longlong)param_1,(longlong)param_2,param_4);
        FUN_140d09cd0(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_140d0c9a7;
    }
    FUN_140d07ce0(&local_18,param_1,param_2,param_4);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140d0c8d0(param_1,local_18,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_140d0c8d0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}



// ============================================================
// Function: FUN_140d0ca00 @ 140d0ca00
// ============================================================

void FUN_140d0ca00(longlong *param_1)

{
  FUN_140d0b580(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0ca30 @ 140d0ca30
// ============================================================

void FUN_140d0ca30(longlong *param_1)

{
  FUN_140d0b5f0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0ca60 @ 140d0ca60
// ============================================================

void FUN_140d0ca60(longlong *param_1)

{
  FUN_140d0b660(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d0ca90 @ 140d0ca90
// ============================================================

void FUN_140d0ca90(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48 [2];
  ulonglong uVar11;
  
  *param_1 = factionmatch::CFactionMatchMgr::vftable;
  plVar1 = param_1 + 1;
  puVar4 = (undefined8 *)param_1[7];
  puVar9 = (undefined8 *)*puVar4;
  puVar5 = (ulonglong *)*plVar1;
  uVar11 = 0;
  while( true ) {
    if (puVar5 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar9 == puVar4) goto LAB_140d0cbc5;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    if (100 < uVar10) break;
    if (puVar5 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar12 = 0;
    }
    else {
      uVar12 = *puVar5;
    }
    if (puVar9 == *(undefined8 **)(uVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140d01910((void *)puVar9[4]);
    if (puVar5 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar9 + 0x29) == '\0') {
      puVar6 = (undefined8 *)puVar9[2];
      if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
        cVar3 = *(char *)((longlong)*puVar6 + 0x29);
        puVar9 = puVar6;
        puVar6 = (undefined8 *)*puVar6;
        while (cVar3 == '\0') {
          cVar3 = *(char *)((longlong)*puVar6 + 0x29);
          puVar9 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      else {
        cVar3 = *(char *)((longlong)puVar9[1] + 0x29);
        puVar8 = (undefined8 *)puVar9[1];
        puVar6 = puVar9;
        while ((puVar9 = puVar8, cVar3 == '\0' && (puVar6 == (undefined8 *)puVar9[2]))) {
          cVar3 = *(char *)((longlong)puVar9[1] + 0x29);
          puVar8 = (undefined8 *)puVar9[1];
          puVar6 = puVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  log_InlineLogERROR(&DAT_140d18368);
LAB_140d0cbc5:
  cVar3 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
  plVar2 = *(longlong **)(param_1[7] + 8);
  while (cVar3 == '\0') {
    FUN_140d05940(plVar1,(longlong *)plVar2[2]);
    plVar7 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar7;
    cVar3 = *(char *)((longlong)plVar7 + 0x29);
  }
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  _eh_vector_destructor_iterator_(param_1 + 0x61,0x90,4,FUN_140d08030);
  _eh_vector_destructor_iterator_(param_1 + 0x19,0x90,4,FUN_140d08030);
  plVar2 = param_1 + 0x11;
  puStack_60 = (undefined8 *)param_1[0x17];
  local_68 = *plVar2;
  puStack_50 = (undefined8 *)*puStack_60;
  local_58 = local_68;
  FUN_140d09950(plVar2,local_48,&local_58,&local_68);
  operator_delete((void *)param_1[0x17]);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  operator_delete((void *)*plVar2);
  plVar2 = param_1 + 9;
  puStack_50 = (undefined8 *)param_1[0xf];
  local_68 = *plVar2;
  puStack_60 = (undefined8 *)*puStack_50;
  local_58 = local_68;
  FUN_140d097a0(plVar2,local_48,&local_68,&local_58);
  operator_delete((void *)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  operator_delete((void *)*plVar2);
  puStack_50 = (undefined8 *)param_1[7];
  local_68 = *plVar1;
  puStack_60 = (undefined8 *)*puStack_50;
  local_58 = local_68;
  FUN_140d095f0(plVar1,local_48,&local_68,&local_58);
  operator_delete((void *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  operator_delete((void *)*plVar1);
  return;
}



// ============================================================
// Function: FUN_140d0cdd0 @ 140d0cdd0
// ============================================================

void FUN_140d0cdd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_1 + 0x548) == 7) {
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      lVar4 = (longlong)iVar5;
      piVar1 = (int *)(param_1 + 0x308 + lVar4 * 0x90);
      if (*piVar1 == 6) {
        (**(code **)(**(longlong **)(param_1 + 0x560) + 0x68))
                  (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x314 + lVar4 * 0x90));
        iVar2 = *(int *)(param_1 + 800 + lVar4 * 0x90);
        iVar3 = *(int *)(param_1 + 0x324 + lVar4 * 0x90);
        if ((iVar3 * 0x96) / 100 < iVar2) {
          *piVar1 = 7;
          *(undefined4 *)(param_1 + 0x330 + lVar4 * 0x90) = 1;
          *(undefined4 *)(param_1 + 0x328 + lVar4 * 0x90) = 0;
          *(undefined4 *)(param_1 + 0x32c + lVar4 * 0x90) = 0;
          FUN_140d0c010(param_1,(longlong)piVar1);
          tq::MyLogSave("gmlog/factionmatch","final win syn:%u lose syn:%u");
        }
        else if ((iVar2 * 0x96) / 100 < iVar3) {
          *piVar1 = 7;
          *(undefined4 *)(param_1 + 0x330 + lVar4 * 0x90) = 2;
          *(undefined4 *)(param_1 + 0x328 + lVar4 * 0x90) = 0;
          *(undefined4 *)(param_1 + 0x32c + lVar4 * 0x90) = 0;
          FUN_140d0c010(param_1,(longlong)piVar1);
          tq::MyLogSave("gmlog/factionmatch","final win syn:%u lose syn:%u");
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0cfa0 @ 140d0cfa0
// ============================================================

void FUN_140d0cfa0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  iVar6 = *(int *)(param_1 + 0x548);
  if (iVar6 != 9) {
    if (iVar6 == 5) {
      if ((((*(int *)(param_1 + 0x30c) != 0) || (*(int *)(param_1 + 0x310) != 0)) &&
          (*(int *)(param_1 + 0x30c) != 0)) && (*(int *)(param_1 + 0x310) == 0)) {
        *(undefined4 *)(param_1 + 0x330) = 1;
        *(undefined4 *)(param_1 + 0x308) = 7;
        *(undefined4 *)(param_1 + 0x548) = 8;
      }
    }
    else if (iVar6 == 7) {
      for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        lVar5 = (longlong)iVar6;
        piVar1 = (int *)(param_1 + 0x308 + lVar5 * 0x90);
        if (*piVar1 == 6) {
          iVar7 = iVar6;
          (**(code **)(**(longlong **)(param_1 + 0x560) + 0x68))
                    (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x314 + lVar5 * 0x90)
                    );
          iVar3 = *(int *)(param_1 + 800 + lVar5 * 0x90);
          iVar4 = *(int *)(param_1 + 0x324 + lVar5 * 0x90);
          if (iVar4 < iVar3) {
            *piVar1 = 7;
            *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 1;
          }
          else if (iVar3 < iVar4) {
            *piVar1 = 7;
            *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 2;
          }
          else {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x40))
                              (*(longlong **)(param_1 + 0x560),
                               *(undefined4 *)(param_1 + 0x30c + lVar5 * 0x90),
                               *(undefined4 *)(param_1 + 0x314 + lVar5 * 0x90));
            lVar2 = **(longlong **)(param_1 + 0x560);
            iVar4 = (**(code **)(lVar2 + 0x40))
                              (*(longlong **)(param_1 + 0x560),
                               *(undefined4 *)(param_1 + 0x310 + lVar5 * 0x90),
                               *(undefined4 *)(param_1 + 0x314 + lVar5 * 0x90),lVar2,iVar7,uVar8);
            if (iVar4 < iVar3) {
              *piVar1 = 7;
              *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 1;
            }
            else if (iVar3 < iVar4) {
              *piVar1 = 7;
              *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 2;
            }
            else {
              iVar3 = tq::RandGet(2);
              if (iVar3 == 0) {
                *piVar1 = 7;
                *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 1;
              }
              else {
                *piVar1 = 7;
                *(undefined4 *)(param_1 + 0x330 + lVar5 * 0x90) = 2;
              }
            }
          }
          FUN_140d0c010(param_1,(longlong)piVar1);
          if (*(int *)(param_1 + 0x330 + lVar5 * 0x90) == 1) {
            tq::MyLogSave("gmlog/factionmatch","final win syn:%u lose syn:%u");
          }
          else {
            tq::MyLogSave("gmlog/factionmatch","final win syn:%u lose syn:%u");
          }
          *(undefined4 *)(param_1 + 0x328 + lVar5 * 0x90) = 0;
          *(undefined4 *)(param_1 + 0x32c + lVar5 * 0x90) = 0;
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0d200 @ 140d0d200
// ============================================================

void FUN_140d0d200(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  tm *ptVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  __time32_t local_res10 [2];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_1 + 0x548) == 3) {
    local_res10[0] = 0;
    _time32(local_res10);
    ptVar4 = _localtime32(local_res10);
    if ((ptVar4 != (tm *)0x0) &&
       (((iVar7 = ptVar4->tm_wday, iVar7 == 2 || (iVar7 == 3)) || (iVar7 == 4)))) {
      iVar7 = iVar7 + -1;
      for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        lVar5 = (longlong)iVar6;
        piVar1 = (int *)(param_1 + 200 + lVar5 * 0x90);
        if (*piVar1 == 2) {
          (**(code **)(**(longlong **)(param_1 + 0x560) + 0x68))
                    (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0xd4 + lVar5 * 0x90))
          ;
          iVar2 = *(int *)(param_1 + 0xe0 + lVar5 * 0x90);
          iVar3 = *(int *)(param_1 + 0xe4 + lVar5 * 0x90);
          if ((iVar3 * 0x96) / 100 < iVar2) {
            *piVar1 = 3;
            *(undefined4 *)(param_1 + 0xf0 + lVar5 * 0x90) = 1;
            *(undefined4 *)(param_1 + 0xe8 + lVar5 * 0x90) = 0;
            *(undefined4 *)(param_1 + 0xec + lVar5 * 0x90) = 0;
            FUN_140d0c010(param_1,(longlong)piVar1);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),iVar7,1);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),iVar7,3);
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe0 + lVar5 * 0x90));
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe4 + lVar5 * 0x90));
            tq::MyLogSave("gmlog/factionmatch","round win syn:%u lose syn:%u");
          }
          else if ((iVar2 * 0x96) / 100 < iVar3) {
            *piVar1 = 3;
            *(undefined4 *)(param_1 + 0xf0 + lVar5 * 0x90) = 2;
            *(undefined4 *)(param_1 + 0xe8 + lVar5 * 0x90) = 0;
            *(undefined4 *)(param_1 + 0xec + lVar5 * 0x90) = 0;
            FUN_140d0c010(param_1,(longlong)piVar1);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),iVar7,3);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),iVar7,1);
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe0 + lVar5 * 0x90));
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe4 + lVar5 * 0x90));
            tq::MyLogSave("gmlog/factionmatch","round win syn:%u lose syn:%u");
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0d4e0 @ 140d0d4e0
// ============================================================

void FUN_140d0d4e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  tm *ptVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  __time32_t local_res10 [2];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_1 + 0x548) == 3) {
    local_res10[0] = 0;
    _time32(local_res10);
    ptVar4 = _localtime32(local_res10);
    if ((ptVar4 != (tm *)0x0) &&
       (((iVar7 = ptVar4->tm_wday, iVar7 == 2 || (iVar7 == 3)) || (iVar7 == 4)))) {
      iVar7 = iVar7 + -1;
      for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        lVar5 = (longlong)iVar6;
        piVar1 = (int *)(param_1 + 200 + lVar5 * 0x90);
        if (*piVar1 == 2) {
          (**(code **)(**(longlong **)(param_1 + 0x560) + 0x68))
                    (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0xd4 + lVar5 * 0x90))
          ;
          iVar2 = *(int *)(param_1 + 0xe0 + lVar5 * 0x90);
          iVar3 = *(int *)(param_1 + 0xe4 + lVar5 * 0x90);
          if ((iVar3 * 0x73) / 100 < iVar2) {
            *piVar1 = 3;
            *(undefined4 *)(param_1 + 0xf0 + lVar5 * 0x90) = 1;
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),iVar7,1);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),iVar7,3);
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe0 + lVar5 * 0x90));
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe4 + lVar5 * 0x90));
          }
          else if ((iVar2 * 0x73) / 100 < iVar3) {
            *piVar1 = 3;
            *(undefined4 *)(param_1 + 0xf0 + lVar5 * 0x90) = 2;
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),iVar7,3);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),iVar7,1);
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe0 + lVar5 * 0x90));
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe4 + lVar5 * 0x90));
          }
          else {
            *piVar1 = 3;
            *(undefined4 *)(param_1 + 0xf0 + lVar5 * 0x90) = 3;
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),iVar7,2);
            FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),iVar7,2);
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xcc + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe0 + lVar5 * 0x90));
            FUN_140d0bef0(param_1,*(uint *)(param_1 + 0xd0 + lVar5 * 0x90),
                          *(int *)(param_1 + 0xe4 + lVar5 * 0x90));
          }
          FUN_140d0c010(param_1,(longlong)piVar1);
          *(undefined4 *)(param_1 + 0xe8 + lVar5 * 0x90) = 0;
          *(undefined4 *)(param_1 + 0xec + lVar5 * 0x90) = 0;
          if (*(int *)(param_1 + 0xf0 + lVar5 * 0x90) == 1) {
            tq::MyLogSave("gmlog/factionmatch","round win syn:%u lose syn:%u");
          }
          else {
            tq::MyLogSave("gmlog/factionmatch","round win syn:%u lose syn:%u");
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0d820 @ 140d0d820
// ============================================================

void FUN_140d0d820(longlong param_1,int param_2,int *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  tm *ptVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  __time32_t local_res20 [2];
  CMsg local_448 [1040];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    uVar11 = 0;
    local_res20[0] = 0;
    _time32(local_res20);
    ptVar5 = _localtime32(local_res20);
    if (ptVar5 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140d18368);
    }
    else {
      iVar10 = ptVar5->tm_hour * 0x3c + ptVar5->tm_min;
      iVar9 = iVar10 * 0x3c + ptVar5->tm_sec;
      iVar3 = *param_3;
      if ((iVar3 == 1) && (iVar10 - 0x4c9U < 5)) {
        iVar9 = 0x12048 - iVar9;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        uVar2 = (ushort)iVar9;
      }
      else {
        uVar2 = 0;
        if ((iVar3 == 5) && (uVar2 = 0, iVar10 - 0x505U < 5)) {
          iVar9 = 0x12e58 - iVar9;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          uVar2 = (ushort)iVar9;
        }
      }
      if ((iVar3 == 2) || (iVar3 == 6)) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x88))
                          (*(longlong **)(param_1 + 0x560),param_3[3]);
        if (iVar3 == param_3[1]) {
          uVar11 = 1;
        }
        else if (iVar3 == param_3[2]) {
          uVar11 = 2;
        }
      }
      uVar4 = FUN_140d0c240(param_1,param_2);
      FUN_140d12520(local_448);
      plVar1 = *(longlong **)(param_1 + 0x560);
      puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,param_3[2]);
      puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,param_3[1]);
      uVar8 = FUN_140d12680(local_448,2,puVar7,puVar6,param_3[6],param_3[7],param_3[8],param_3[9],
                            (uint)uVar2,uVar11,uVar4);
      if ((char)uVar8 != '\0') {
        (**(code **)**(undefined8 **)(param_1 + 0x560))
                  (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
      }
      FUN_140d12570((undefined8 *)local_448);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0daa0 @ 140d0daa0
// ============================================================

void FUN_140d0daa0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  tm *ptVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  __time32_t local_res8 [2];
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  
  if ((*(int *)(param_1 + 0x548) == 3) || (*(int *)(param_1 + 0x548) == 7)) {
    puVar12 = (undefined8 *)(*(undefined8 **)(param_1 + 0xb8))[1];
    cVar1 = *(char *)((longlong)puVar12 + 0x25);
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    while (cVar1 == '\0') {
      if (*(int *)(puVar12 + 3) < param_2) {
        puVar7 = (undefined8 *)puVar12[2];
        puVar12 = puVar4;
      }
      else {
        puVar7 = (undefined8 *)*puVar12;
      }
      puVar4 = puVar12;
      puVar12 = puVar7;
      cVar1 = *(char *)((longlong)puVar7 + 0x25);
    }
    lVar13 = *(longlong *)(param_1 + 0x88);
    puVar12 = *(undefined8 **)(param_1 + 0xb8);
    local_60 = (int)puVar4;
    uStack_5c = (undefined4)((ulonglong)puVar4 >> 0x20);
    local_68._0_4_ = (int)lVar13;
    local_68._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
    if (lVar13 == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar4 == puVar12) || (param_2 < *(int *)(puVar4 + 3))) {
      plVar10 = &local_58;
      local_50 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(longlong *)(param_1 + 0x88);
    }
    else {
      plVar10 = &local_68;
    }
    plVar3 = (longlong *)*plVar10;
    lVar13 = *(longlong *)(param_1 + 0xb8);
    local_48 = plVar3;
    local_40 = plVar10[1];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    lVar5 = local_40;
    if (local_40 == lVar13) {
      local_68._4_4_ = 0;
      local_68._0_4_ = param_2;
      local_60 = param_3;
      FUN_140d0af50((longlong *)(param_1 + 0x88),(longlong *)&local_48,(int *)&local_68);
    }
    else {
      lVar13 = 0;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar13 = *plVar3;
      }
      if (lVar5 == *(longlong *)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      piVar9 = (int *)(lVar5 + 0x20);
      *piVar9 = *piVar9 + param_3;
    }
    uVar11 = 0;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x30))
                      (*(longlong **)(param_1 + 0x560),param_2);
    if (iVar6 != 0) {
      local_res8[0] = 0;
      _time32(local_res8);
      ptVar8 = _localtime32(local_res8);
      if (ptVar8 != (tm *)0x0) {
        iVar2 = ptVar8->tm_wday;
        if ((((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) && (*(int *)(param_1 + 0x548) != 5)) {
          piVar9 = (int *)(param_1 + 0xcc);
          uVar14 = uVar11;
          do {
            if ((piVar9[-1] == 2) && ((*piVar9 == iVar6 || (piVar9[1] == iVar6)))) {
              piVar9 = (int *)(param_1 + 200 + (longlong)(int)uVar14 * 0x90);
LAB_140d0dcf4:
              FUN_140d0d820(param_1,param_2,piVar9);
              return;
            }
            uVar11 = uVar11 + 1;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            piVar9 = piVar9 + 0x24;
          } while ((longlong)uVar11 < 4);
        }
        else if (iVar2 == 6) {
          piVar9 = (int *)(param_1 + 0x30c);
          uVar14 = uVar11;
          do {
            if ((piVar9[-1] == 6) && ((*piVar9 == iVar6 || (piVar9[1] == iVar6)))) {
              piVar9 = (int *)(param_1 + 0x308 + (longlong)(int)uVar14 * 0x90);
              goto LAB_140d0dcf4;
            }
            uVar11 = uVar11 + 1;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            piVar9 = piVar9 + 0x24;
          } while ((longlong)uVar11 < 4);
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0dd20 @ 140d0dd20
// ============================================================

void FUN_140d0dd20(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  
  if (*(longlong *)(param_1 + 0x560) != 0) {
    puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xb8))[1];
    cVar1 = *(char *)((longlong)puVar8 + 0x25);
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    while (cVar1 == '\0') {
      if (*(int *)(puVar8 + 3) < param_2) {
        puVar6 = (undefined8 *)puVar8[2];
        puVar8 = puVar4;
      }
      else {
        puVar6 = (undefined8 *)*puVar8;
      }
      puVar4 = puVar8;
      puVar8 = puVar6;
      cVar1 = *(char *)((longlong)puVar6 + 0x25);
    }
    lVar9 = *(longlong *)(param_1 + 0x88);
    puVar8 = *(undefined8 **)(param_1 + 0xb8);
    local_60 = SUB84(puVar4,0);
    uStack_5c = (undefined4)((ulonglong)puVar4 >> 0x20);
    local_68._0_4_ = (int)lVar9;
    local_68._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar4 == puVar8) || (param_2 < *(int *)(puVar4 + 3))) {
      plVar7 = &local_58;
      local_50 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(longlong *)(param_1 + 0x88);
    }
    else {
      plVar7 = &local_68;
    }
    plVar2 = (longlong *)*plVar7;
    lVar9 = *(longlong *)(param_1 + 0xb8);
    local_48 = plVar2;
    local_40 = plVar7[1];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    lVar5 = local_40;
    if (local_40 == lVar9) {
      iVar3 = param_3 / 10000;
      if (0 < iVar3) {
        FUN_140d0daa0(param_1,param_2,iVar3);
        (**(code **)(**(longlong **)(param_1 + 0x560) + 0x98))
                  (*(longlong **)(param_1 + 0x560),param_2,iVar3);
        param_3 = param_3 % 10000;
      }
      local_60 = 0;
      local_68._0_4_ = param_2;
      local_68._4_4_ = param_3;
      FUN_140d0af50((longlong *)(param_1 + 0x88),(longlong *)&local_48,(int *)&local_68);
    }
    else {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar2;
      }
      if (lVar5 == *(longlong *)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + param_3;
      iVar3 = *(int *)(lVar5 + 0x1c) / 10000;
      if (0 < iVar3) {
        FUN_140d0daa0(param_1,param_2,iVar3);
        (**(code **)(**(longlong **)(param_1 + 0x560) + 0x98))
                  (*(longlong **)(param_1 + 0x560),param_2,iVar3);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) % 10000;
      }
    }
    return;
  }
  log_InlineLogERROR(&DAT_140d18368);
  return;
}



// ============================================================
// Function: FUN_140d0df80 @ 140d0df80
// ============================================================

ulonglong FUN_140d0df80(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  tm *ptVar3;
  tm *extraout_RAX;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  __time32_t local_28 [4];
  
  uVar7 = 0;
  local_28[0] = 0;
  _time32(local_28);
  ptVar3 = _localtime32(local_28);
  if (((ptVar3 != (tm *)0x0) && (iVar6 = ptVar3->tm_wday, iVar6 != 1)) && (iVar6 != 0)) {
    if (param_4 == 2) {
      if ((iVar6 == 2) && (*(int *)(param_1 + 0x548) != 4)) {
        do {
          iVar6 = (int)uVar7;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185a0 + (longlong)iVar6 * 8));
          lVar1 = *plVar4;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185a4 + (longlong)iVar6 * 8));
          lVar2 = *plVar4;
          if ((((lVar1 != 0) && (lVar2 != 0)) &&
              ((uVar5 = FUN_140d010e0(lVar1), (int)uVar5 == param_2 &&
               (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_3 == (int)ptVar3)))) ||
             ((ptVar3 = (tm *)FUN_140d010e0(lVar1), (int)ptVar3 == param_3 &&
              (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_2 == (int)ptVar3)))) goto LAB_140d0e24f;
          uVar7 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < 4);
      }
    }
    else if (param_4 == 3) {
      if (((iVar6 == 2) || (iVar6 == 3)) && ((iVar6 != 3 || (*(int *)(param_1 + 0x548) != 4)))) {
        do {
          iVar6 = (int)uVar7;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185c0 + (longlong)iVar6 * 8));
          lVar1 = *plVar4;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185c4 + (longlong)iVar6 * 8));
          lVar2 = *plVar4;
          if (((((lVar1 != 0) && (lVar2 != 0)) &&
               (uVar5 = FUN_140d010e0(lVar1), (int)uVar5 == param_2)) &&
              (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_3 == (int)ptVar3)) ||
             ((ptVar3 = (tm *)FUN_140d010e0(lVar1), (int)ptVar3 == param_3 &&
              (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_2 == (int)ptVar3)))) goto LAB_140d0e24f;
          uVar7 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < 4);
      }
    }
    else if (param_4 == 4) {
      if ((((iVar6 == 2) || (iVar6 == 3)) || (iVar6 == 4)) &&
         ((iVar6 != 4 || (*(int *)(param_1 + 0x548) != 4)))) {
        do {
          iVar6 = (int)uVar7;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185e0 + (longlong)iVar6 * 8));
          lVar1 = *plVar4;
          plVar4 = FUN_140d0c360((longlong *)(param_1 + 8),
                                 (int *)(&DAT_140d185e4 + (longlong)iVar6 * 8));
          lVar2 = *plVar4;
          if (((((lVar1 != 0) && (lVar2 != 0)) &&
               (uVar5 = FUN_140d010e0(lVar1), (int)uVar5 == param_2)) &&
              (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_3 == (int)ptVar3)) ||
             ((ptVar3 = (tm *)FUN_140d010e0(lVar1), (int)ptVar3 == param_3 &&
              (ptVar3 = (tm *)FUN_140d010e0(lVar2), param_2 == (int)ptVar3)))) goto LAB_140d0e24f;
          uVar7 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < 4);
      }
    }
    else if (param_4 == 6) {
      if ((iVar6 == 6) && (*(int *)(param_1 + 0x548) != 8)) {
        ptVar3 = (tm *)(param_1 + 0x310);
        do {
          if (((ptVar3[-1].tm_isdst == param_2) && (ptVar3->tm_sec == param_3)) ||
             ((ptVar3[-1].tm_isdst == param_3 && (ptVar3->tm_sec == param_2)))) {
LAB_140d0e24f:
            return CONCAT71((int7)((ulonglong)ptVar3 >> 8),1);
          }
          uVar7 = uVar7 + 1;
          ptVar3 = ptVar3 + 4;
        } while ((longlong)uVar7 < 4);
      }
    }
    else {
      log_InlineLogERROR("SynCompete Sponsor Choose a Wrongday!");
      ptVar3 = extraout_RAX;
    }
  }
  return (ulonglong)ptVar3 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d0e260 @ 140d0e260
// ============================================================

undefined8 FUN_140d0e260(longlong param_1,int param_2,int param_3,short param_4,int param_5)

{
  longlong *plVar1;
  ulonglong in_RAX;
  tm *ptVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  __time32_t local_res10 [2];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar7 = 0;
  local_res10[0] = 0;
  _time32(local_res10);
  ptVar2 = _localtime32(local_res10);
  if (ptVar2 == (tm *)0x0) {
    return 0;
  }
  iVar5 = ptVar2->tm_hour * 0x3c + ptVar2->tm_min;
  if (param_4 == 1) {
    if (param_5 == 2) {
      if ((ptVar2->tm_wday == 2) && (iVar5 < 0x4ce)) {
        plVar1 = (longlong *)(param_1 + 8);
        do {
          lVar8 = (longlong)(int)uVar7;
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185a0 + lVar8 * 8));
          uVar4 = FUN_140d010e0(*plVar3);
          if ((int)uVar4 == param_2) {
            plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185a4 + lVar8 * 8));
            ptVar2 = (tm *)FUN_140d010e0(*plVar3);
            if (param_3 == (int)ptVar2) {
LAB_140d0e5ce:
              return CONCAT71((int7)((ulonglong)ptVar2 >> 8),1);
            }
          }
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185a0 + lVar8 * 8));
          ptVar2 = (tm *)FUN_140d010e0(*plVar3);
          if ((int)ptVar2 == param_3) {
            plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185a4 + lVar8 * 8));
            ptVar2 = (tm *)FUN_140d010e0(*plVar3);
            if (param_2 == (int)ptVar2) goto LAB_140d0e5ce;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < 4);
      }
    }
    else if (param_5 == 3) {
      if (((ptVar2->tm_wday == 3) || (ptVar2->tm_wday == 2)) && (*(int *)(param_1 + 0x548) != 3)) {
        plVar1 = (longlong *)(param_1 + 8);
        do {
          lVar8 = (longlong)(int)uVar7;
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185c0 + lVar8 * 8));
          uVar4 = FUN_140d010e0(*plVar3);
          if ((int)uVar4 == param_2) {
            plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185c4 + lVar8 * 8));
            ptVar2 = (tm *)FUN_140d010e0(*plVar3);
            if (param_3 == (int)ptVar2) goto LAB_140d0e5ce;
          }
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185c0 + lVar8 * 8));
          ptVar2 = (tm *)FUN_140d010e0(*plVar3);
          if ((int)ptVar2 == param_3) {
            plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185c4 + lVar8 * 8));
            ptVar2 = (tm *)FUN_140d010e0(*plVar3);
            if (param_2 == (int)ptVar2) goto LAB_140d0e5ce;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < 4);
      }
    }
    else if ((((param_5 == 4) && (ptVar2->tm_wday < 5)) && (1 < ptVar2->tm_wday)) &&
            (*(int *)(param_1 + 0x548) != 3)) {
      plVar1 = (longlong *)(param_1 + 8);
      do {
        lVar8 = (longlong)(int)uVar7;
        plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185e0 + lVar8 * 8));
        uVar4 = FUN_140d010e0(*plVar3);
        if ((int)uVar4 == param_2) {
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185e4 + lVar8 * 8));
          ptVar2 = (tm *)FUN_140d010e0(*plVar3);
          if (param_3 == (int)ptVar2) goto LAB_140d0e5ce;
        }
        plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185e0 + lVar8 * 8));
        ptVar2 = (tm *)FUN_140d010e0(*plVar3);
        if ((int)ptVar2 == param_3) {
          plVar3 = FUN_140d0c360(plVar1,(int *)(&DAT_140d185e4 + lVar8 * 8));
          ptVar2 = (tm *)FUN_140d010e0(*plVar3);
          if (param_2 == (int)ptVar2) goto LAB_140d0e5ce;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < 4);
    }
  }
  else if (param_4 == 2) {
    if (iVar5 < 0x4ce) {
      uVar6 = *(uint *)(param_1 + 0x548);
      ptVar2 = (tm *)(ulonglong)uVar6;
      if ((uVar6 == 1) || (uVar6 == 2)) {
        ptVar2 = (tm *)(param_1 + 0xd0);
        do {
          if (((ptVar2[-1].tm_isdst == param_2) && (ptVar2->tm_sec == param_3)) ||
             ((ptVar2[-1].tm_isdst == param_3 && (ptVar2->tm_sec == param_2)))) goto LAB_140d0e5ce;
          uVar7 = uVar7 + 1;
          ptVar2 = ptVar2 + 4;
        } while ((longlong)uVar7 < 4);
      }
    }
  }
  else if ((ptVar2->tm_wday != 6) || (iVar5 < 0x50a)) {
    uVar6 = *(uint *)(param_1 + 0x548);
    ptVar2 = (tm *)(ulonglong)uVar6;
    if ((uVar6 == 5) || (uVar6 == 6)) {
      ptVar2 = (tm *)(param_1 + 0x310);
      do {
        if (((ptVar2[-1].tm_isdst == param_2) && (ptVar2->tm_sec == param_3)) ||
           ((ptVar2[-1].tm_isdst == param_3 && (ptVar2->tm_sec == param_2)))) goto LAB_140d0e5ce;
        uVar7 = uVar7 + 1;
        ptVar2 = ptVar2 + 4;
      } while ((longlong)uVar7 < 4);
    }
  }
  return (ulonglong)ptVar2 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d0e5f0 @ 140d0e5f0
// ============================================================

void FUN_140d0e5f0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined4 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5] - (longlong)puVar1 >> 2;
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 2) < uVar3) {
    *puVar2 = *param_2;
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140d0c4f0(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_140d0e6a0 @ 140d0e6a0
// ============================================================

undefined8 * FUN_140d0e6a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d06000();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0e720 @ 140d0e720
// ============================================================

undefined8 * FUN_140d0e720(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d06060();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0e7a0 @ 140d0e7a0
// ============================================================

undefined8 * FUN_140d0e7a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_140d060c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d0e820 @ 140d0e820
// ============================================================

void FUN_140d0e820(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5] - (longlong)puVar1 >> 3;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 3) < uVar3) {
    *puVar2 = *param_2;
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140d0c7a0(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_140d0e8d0 @ 140d0e8d0
// ============================================================

void FUN_140d0e8d0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140d0c8d0((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,
                param_3);
  return;
}



// ============================================================
// Function: FUN_140d0e930 @ 140d0e930
// ============================================================

undefined8 * FUN_140d0e930(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = factionmatch::CFactionMatchMgr::vftable;
  FUN_140d0e6a0(param_1 + 1);
  FUN_140d0e720(param_1 + 9);
  FUN_140d0e7a0(param_1 + 0x11);
  _eh_vector_constructor_iterator_(param_1 + 0x19,0x90,4,FUN_140d09d40,FUN_140d08030);
  _eh_vector_constructor_iterator_(param_1 + 0x61,0x90,4,FUN_140d09d40,FUN_140d08030);
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = param_2;
  return param_1;
}



// ============================================================
// Function: FUN_140d0ea10 @ 140d0ea10
// ============================================================

undefined8 * FUN_140d0ea10(undefined8 *param_1,uint param_2)

{
  FUN_140d0ca90(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140d045b0(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d0ea40 @ 140d0ea40
// ============================================================

void FUN_140d0ea40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong *local_res18;
  longlong *local_150 [3];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong *local_120 [3];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_78 = 0xfffffffffffffffe;
  local_res18 = operator_new(8);
  if (local_res18 == (longlong *)0x0) {
    local_150[0] = (longlong *)0x0;
  }
  else {
    *local_res18 = (longlong)local_150;
    local_150[0] = local_res18;
  }
  plVar9 = (longlong *)0x0;
  local_138 = (undefined8 *)0x0;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  local_res18 = operator_new(8);
  local_120[0] = plVar9;
  if (local_res18 != (longlong *)0x0) {
    *local_res18 = (longlong)local_120;
    local_120[0] = local_res18;
  }
  local_108 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar7 = (undefined8 *)*puVar1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  plVar12 = plVar9;
  local_98 = puVar2;
  local_88 = puVar2;
LAB_140d0eb34:
  if (puVar2 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  if (puVar7 == puVar1) goto LAB_140d0ec85;
  uVar13 = (int)plVar12 + 1;
  plVar12 = (longlong *)(ulonglong)uVar13;
  if (uVar13 < 0x65) {
    if (puVar2 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar11 = plVar9;
    }
    else {
      plVar11 = (longlong *)*puVar2;
    }
    if (puVar7 == (undefined8 *)plVar11[6]) {
      _invalid_parameter_noinfo();
    }
    plVar11 = (longlong *)puVar7[4];
    local_res18 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      FUN_140d01510((int *)plVar11);
      uVar13 = FUN_140d01060((longlong)plVar11);
      if ((uVar13 & 1 ^ (int)uVar13 >> 0x1f) == (int)uVar13 >> 0x1f) {
        FUN_140d0e820((longlong *)local_120,&local_res18);
      }
      else {
        FUN_140d0e820((longlong *)local_150,&local_res18);
      }
    }
    if (puVar2 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
      puVar8 = puVar7;
      puVar3 = (undefined8 *)puVar7[2];
      if (*(char *)((longlong)puVar7[2] + 0x29) == '\0') {
        do {
          puVar7 = puVar3;
          puVar3 = (undefined8 *)*puVar7;
          local_c8 = puVar7;
        } while (*(char *)((longlong)*puVar7 + 0x29) == '\0');
      }
      else {
        do {
          puVar7 = (undefined8 *)puVar8[1];
          if (*(char *)((longlong)puVar7 + 0x29) != '\0') break;
          bVar15 = puVar8 == (undefined8 *)puVar7[2];
          puVar8 = puVar7;
        } while (bVar15);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    goto LAB_140d0eb34;
  }
  log_InlineLogERROR(&DAT_140d18368);
LAB_140d0ec85:
  puVar1 = local_130;
  local_a8 = (longlong *)0x0;
  if (local_130 < local_138) {
    _invalid_parameter_noinfo();
  }
  puVar7 = local_138;
  plVar12 = local_150[0];
  local_a8 = local_150[0];
  uStack_a0 = puVar1;
  local_a8._0_4_ = SUB84(local_150[0],0);
  local_a8._4_4_ = (undefined4)((ulonglong)local_150[0] >> 0x20);
  uStack_a0._0_4_ = SUB84(puVar1,0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_b8 = (longlong *)0x0;
  local_a8 = plVar12;
  uStack_a0 = puVar1;
  if (local_130 < local_138) {
    _invalid_parameter_noinfo();
  }
  local_b8 = local_150[0];
  plVar11 = local_b8;
  uStack_b0 = puVar7;
  local_b8._0_4_ = SUB84(local_150[0],0);
  local_b8._4_4_ = (undefined4)((ulonglong)local_150[0] >> 0x20);
  uStack_b0._0_4_ = SUB84(puVar7,0);
  uStack_b0._4_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = (undefined4)uStack_b0;
  uStack_4c = uStack_b0._4_4_;
  local_b8 = plVar11;
  uStack_b0 = puVar7;
  if ((plVar12 == (longlong *)0x0) || (plVar12 != local_150[0])) {
    _invalid_parameter_noinfo();
  }
  FUN_140d0c8d0(puVar7,puVar1,(longlong)puVar1 - (longlong)puVar7 >> 3,0);
  puVar1 = local_100;
  local_d8 = (longlong *)0x0;
  if (local_100 < local_108) {
    _invalid_parameter_noinfo();
  }
  puVar7 = local_108;
  plVar12 = local_120[0];
  local_d8 = local_120[0];
  uStack_d0 = puVar1;
  local_d8._0_4_ = SUB84(local_120[0],0);
  local_d8._4_4_ = (undefined4)((ulonglong)local_120[0] >> 0x20);
  uStack_d0._0_4_ = SUB84(puVar1,0);
  uStack_d0._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
  local_38 = (undefined4)local_d8;
  uStack_34 = local_d8._4_4_;
  uStack_30 = (undefined4)uStack_d0;
  uStack_2c = uStack_d0._4_4_;
  local_e8 = (longlong *)0x0;
  local_d8 = plVar12;
  uStack_d0 = puVar1;
  if (local_100 < local_108) {
    _invalid_parameter_noinfo();
  }
  local_e8 = local_120[0];
  plVar11 = local_e8;
  uStack_e0 = puVar7;
  local_e8._0_4_ = SUB84(local_120[0],0);
  local_e8._4_4_ = (undefined4)((ulonglong)local_120[0] >> 0x20);
  uStack_e0._0_4_ = SUB84(puVar7,0);
  uStack_e0._4_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_48 = (undefined4)local_e8;
  uStack_44 = local_e8._4_4_;
  uStack_40 = (undefined4)uStack_e0;
  uStack_3c = uStack_e0._4_4_;
  local_e8 = plVar11;
  uStack_e0 = puVar7;
  if ((plVar12 == (longlong *)0x0) || (plVar12 != local_120[0])) {
    _invalid_parameter_noinfo();
  }
  FUN_140d0c8d0(puVar7,puVar1,(longlong)puVar1 - (longlong)puVar7 >> 3,0);
  *(undefined4 *)(param_1 + 0x548) = 5;
  plVar12 = plVar9;
  do {
    iVar10 = (int)plVar9;
    if (3 < iVar10) {
LAB_140d0ef89:
      if (local_108 != (undefined8 *)0x0) {
        operator_delete(local_108);
      }
      local_108 = (undefined8 *)0x0;
      local_100 = (undefined8 *)0x0;
      local_f8 = 0;
      operator_delete(local_120[0]);
      if (local_138 != (undefined8 *)0x0) {
        operator_delete(local_138);
      }
      local_138 = (undefined8 *)0x0;
      local_130 = (undefined8 *)0x0;
      local_128 = 0;
      operator_delete(local_150[0]);
      return;
    }
    uVar13 = (int)plVar12 + 1;
    plVar12 = (longlong *)(ulonglong)uVar13;
    if (100 < uVar13) {
      log_InlineLogERROR(&DAT_140d18368);
      goto LAB_140d0ef89;
    }
    uVar14 = (ulonglong)iVar10;
    *(undefined4 *)(param_1 + 0x308 + uVar14 * 0x90) = 4;
    *(undefined4 *)(param_1 + 0x314 + uVar14 * 0x90) = *(undefined4 *)(&DAT_140d18600 + uVar14 * 4);
    *(undefined4 *)(param_1 + 0x30c + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 0x310 + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 800 + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 0x324 + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 0x328 + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 0x32c + uVar14 * 0x90) = 0;
    *(undefined4 *)(param_1 + 0x330 + uVar14 * 0x90) = 0;
    uVar5 = (longlong)local_130 - (longlong)local_138 >> 3;
    if (iVar10 < (int)uVar5) {
      if (uVar5 <= uVar14) {
        _invalid_parameter_noinfo();
      }
      uVar6 = FUN_140d010e0(local_138[uVar14]);
      *(int *)(param_1 + 0x30c + uVar14 * 0x90) = (int)uVar6;
    }
    uVar5 = (longlong)local_100 - (longlong)local_108 >> 3;
    if (iVar10 < (int)uVar5) {
      if (uVar5 <= uVar14) {
        _invalid_parameter_noinfo();
      }
      uVar6 = FUN_140d010e0(local_108[uVar14]);
      *(int *)(param_1 + 0x310 + uVar14 * 0x90) = (int)uVar6;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                      (*(longlong **)(param_1 + 0x560),
                       *(undefined4 *)(param_1 + 0x30c + uVar14 * 0x90));
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x30c + uVar14 * 0x90) = 0;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                      (*(longlong **)(param_1 + 0x560),
                       *(undefined4 *)(param_1 + 0x310 + uVar14 * 0x90));
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x310 + uVar14 * 0x90) = 0;
    }
    plVar9 = (longlong *)(ulonglong)(iVar10 + 1);
  } while( true );
}



// ============================================================
// Function: FUN_140d0f010 @ 140d0f010
// ============================================================

void FUN_140d0f010(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  longlong *local_res18;
  longlong *local_88 [3];
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong *local_58;
  undefined8 *local_48;
  ulonglong *local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_res18 = operator_new(8);
  if (local_res18 == (longlong *)0x0) {
    local_88[0] = (longlong *)0x0;
  }
  else {
    *local_res18 = (longlong)local_88;
    local_88[0] = local_res18;
  }
  uVar12 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = (undefined8 *)*puVar1;
  puVar2 = *(ulonglong **)(param_1 + 8);
  uVar13 = uVar12;
  uVar8 = uVar12;
  local_58 = puVar2;
  local_40 = puVar2;
LAB_140d0f0c0:
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != local_58)) {
    _invalid_parameter_noinfo();
  }
  iVar9 = (int)uVar8;
  if (puVar10 == puVar1) goto LAB_140d0f21a;
  uVar15 = (int)uVar13 + 1;
  uVar13 = (ulonglong)uVar15;
  if (uVar15 < 0x65) {
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar14 = uVar12;
    }
    else {
      uVar14 = *puVar2;
    }
    if (puVar10 == *(undefined8 **)(uVar14 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)puVar10[4];
    local_res18 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      uVar7 = FUN_140d010e0((longlong)plVar3);
      if ((int)uVar7 == 0) {
        uVar7 = FUN_140d010e0((longlong)plVar3);
        if ((int)uVar7 == 0) goto LAB_140d0f21a;
      }
      else {
        FUN_140d0e820((longlong *)local_88,&local_res18);
        uVar8 = (ulonglong)(iVar9 + 1);
      }
    }
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar10 + 0x29) == '\0') {
      puVar11 = puVar10;
      puVar4 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar10[2] + 0x29) == '\0') {
        do {
          puVar10 = puVar4;
          puVar4 = (undefined8 *)*puVar10;
          local_48 = puVar10;
        } while (*(char *)((longlong)*puVar10 + 0x29) == '\0');
      }
      else {
        do {
          puVar10 = (undefined8 *)puVar11[1];
          if (*(char *)((longlong)puVar10 + 0x29) != '\0') break;
          bVar16 = puVar11 == (undefined8 *)puVar10[2];
          puVar11 = puVar10;
        } while (bVar16);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    goto LAB_140d0f0c0;
  }
  log_InlineLogERROR(&DAT_140d18368);
LAB_140d0f21a:
  if (iVar9 - 1U < 2) {
    *(undefined4 *)(param_1 + 0x548) = 5;
    uVar13 = uVar12;
    while (iVar9 = (int)uVar12, iVar9 < 4) {
      uVar15 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar15;
      if (100 < uVar15) {
        log_InlineLogERROR(&DAT_140d18368);
        break;
      }
      lVar6 = (longlong)iVar9;
      *(undefined4 *)(param_1 + 0x308 + lVar6 * 0x90) = 4;
      *(undefined4 *)(param_1 + 0x314 + lVar6 * 0x90) = *(undefined4 *)(&DAT_140d18600 + lVar6 * 4);
      *(undefined4 *)(param_1 + 0x30c + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 0x310 + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 800 + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 0x324 + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 0x328 + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 0x32c + lVar6 * 0x90) = 0;
      *(undefined4 *)(param_1 + 0x330 + lVar6 * 0x90) = 0;
      if (iVar9 == 0) {
        lVar6 = local_68 - (longlong)local_70 >> 3;
        if (0 < (int)lVar6) {
          if (lVar6 == 0) {
            _invalid_parameter_noinfo();
          }
          uVar7 = FUN_140d010e0(*local_70);
          *(int *)(param_1 + 0x30c) = (int)uVar7;
        }
        uVar8 = local_68 - (longlong)local_70 >> 3;
        if (1 < (int)uVar8) {
          if (uVar8 < 2) {
            _invalid_parameter_noinfo();
          }
          uVar7 = FUN_140d010e0(local_70[1]);
          *(int *)(param_1 + 0x310) = (int)uVar7;
        }
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                          (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x30c));
        if (cVar5 == '\0') {
          *(undefined4 *)(param_1 + 0x30c) = 0;
        }
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                          (*(longlong **)(param_1 + 0x560),*(undefined4 *)(param_1 + 0x310));
        if (cVar5 == '\0') {
          *(undefined4 *)(param_1 + 0x310) = 0;
        }
      }
      uVar12 = (ulonglong)(iVar9 + 1);
    }
  }
  else if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x548) = 9;
  }
  if (local_70 != (longlong *)0x0) {
    operator_delete(local_70);
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  operator_delete(local_88[0]);
  return;
}



// ============================================================
// Function: FUN_140d0f400 @ 140d0f400
// ============================================================

void FUN_140d0f400(longlong param_1)

{
  tm *ptVar1;
  __time32_t local_res10 [6];
  
  *(undefined4 *)(param_1 + 0x548) = 4;
  *(undefined1 *)(param_1 + 0x550) = 0;
  local_res10[0] = 0;
  _time32(local_res10);
  ptVar1 = _localtime32(local_res10);
  if ((ptVar1 != (tm *)0x0) && (ptVar1->tm_wday == 4)) {
    FUN_140d0ea40(param_1);
  }
  return;
}



// ============================================================
// Function: FUN_140d0f460 @ 140d0f460
// ============================================================

uint FUN_140d0f460(longlong param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  tm *ptVar8;
  longlong lVar9;
  undefined8 uVar10;
  __time32_t local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    uVar7 = extraout_EAX & 0xffffff00;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    uVar7 = extraout_EAX_00 & 0xffffff00;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x30))();
    uVar7 = 0;
    if (iVar4 != 0) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x28))
                        (*(longlong **)(param_1 + 0x560),param_2);
      iVar6 = tq::DateStamp(0);
      if ((iVar5 == 0) || (uVar7 = tq::DateStampDiff(iVar5,iVar6), 7 < (int)uVar7)) {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x48))
                          (*(longlong **)(param_1 + 0x560),param_2,0x57);
        if ((cVar3 == '\0') ||
           (uVar7 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x50))
                              (*(longlong **)(param_1 + 0x560),param_2), 0 < (int)uVar7)) {
          iVar5 = 0;
          local_res18[0] = 0;
          _time32(local_res18);
          ptVar8 = _localtime32(local_res18);
          uVar7 = 0;
          if (ptVar8 != (tm *)0x0) {
            uVar7 = ptVar8->tm_hour * 0x3c + ptVar8->tm_min;
            iVar6 = ptVar8->tm_wday;
            if ((((iVar6 == 2) || (iVar6 == 3)) || (iVar6 == 4)) && (*(int *)(param_1 + 0x548) != 5)
               ) {
              uVar7 = uVar7 - 0x4c9;
              if (uVar7 < 0x7d) {
                for (; iVar5 < 4; iVar5 = iVar5 + 1) {
                  lVar9 = (longlong)iVar5;
                  puVar1 = (uint *)(param_1 + 200 + lVar9 * 0x90);
                  uVar7 = *puVar1;
                  if ((uVar7 == 1) || (uVar7 == 2)) {
                    if (*(int *)(param_1 + 0xcc + lVar9 * 0x90) == iVar4) {
                      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x58))
                                        (*(longlong **)(param_1 + 0x560),param_2,
                                         *(undefined4 *)(param_1 + 0xd4 + lVar9 * 0x90));
                      if ((char)uVar7 != '\0') {
                        (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa0))
                                  (*(longlong **)(param_1 + 0x560),param_2,2);
                        piVar2 = (int *)(param_1 + 0xe8 + lVar9 * 0x90);
                        *piVar2 = *piVar2 + 1;
                        FUN_140d08360(param_1,(longlong)puVar1,iVar5,param_2);
                        uVar10 = FUN_140d0d820(param_1,param_2,(int *)puVar1);
                        return (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                      }
                    }
                    else if ((*(int *)(param_1 + 0xd0 + lVar9 * 0x90) == iVar4) &&
                            (uVar7 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x58))
                                               (*(longlong **)(param_1 + 0x560),param_2,
                                                *(undefined4 *)(param_1 + 0xd4 + lVar9 * 0x90),0),
                            (char)uVar7 != '\0')) {
                      (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa0))
                                (*(longlong **)(param_1 + 0x560),param_2,2);
                      piVar2 = (int *)(param_1 + 0xec + lVar9 * 0x90);
                      *piVar2 = *piVar2 + 1;
                      FUN_140d08360(param_1,(longlong)puVar1,iVar5,param_2);
                      uVar10 = FUN_140d0d820(param_1,param_2,(int *)puVar1);
                      return (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                    }
                  }
                }
              }
            }
            else if ((iVar6 == 6) && (uVar7 = uVar7 - 0x505, uVar7 < 0x7d)) {
              for (; iVar5 < 4; iVar5 = iVar5 + 1) {
                lVar9 = (longlong)iVar5;
                puVar1 = (uint *)(param_1 + 0x308 + lVar9 * 0x90);
                uVar7 = *puVar1;
                if ((uVar7 == 5) || (uVar7 == 6)) {
                  if (*(int *)(param_1 + 0x30c + lVar9 * 0x90) == iVar4) {
                    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x58))
                                      (*(longlong **)(param_1 + 0x560),param_2,
                                       *(undefined4 *)(param_1 + 0x314 + lVar9 * 0x90));
                    if ((char)uVar7 != '\0') {
                      (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa0))
                                (*(longlong **)(param_1 + 0x560),param_2,2);
                      piVar2 = (int *)(param_1 + 0x328 + lVar9 * 0x90);
                      *piVar2 = *piVar2 + 1;
                      FUN_140d08360(param_1,(longlong)puVar1,iVar5,param_2);
                      uVar10 = FUN_140d0d820(param_1,param_2,(int *)puVar1);
                      return (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                    }
                  }
                  else if ((*(int *)(param_1 + 0x310 + lVar9 * 0x90) == iVar4) &&
                          (uVar7 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x58))
                                             (*(longlong **)(param_1 + 0x560),param_2,
                                              *(undefined4 *)(param_1 + 0x314 + lVar9 * 0x90),0),
                          (char)uVar7 != '\0')) {
                    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xa0))
                              (*(longlong **)(param_1 + 0x560),param_2,2);
                    piVar2 = (int *)(param_1 + 0x32c + lVar9 * 0x90);
                    *piVar2 = *piVar2 + 1;
                    FUN_140d08360(param_1,(longlong)puVar1,iVar5,param_2);
                    uVar10 = FUN_140d0d820(param_1,param_2,(int *)puVar1);
                    return (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                  }
                }
              }
            }
            uVar7 = uVar7 & 0xffffff00;
          }
        }
        else {
          uVar7 = uVar7 & 0xffffff00;
        }
      }
      else {
        uVar7 = uVar7 & 0xffffff00;
      }
    }
  }
  return uVar7;
}



// ============================================================
// Function: FUN_140d0f850 @ 140d0f850
// ============================================================

void FUN_140d0f850(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  tm *ptVar5;
  longlong lVar6;
  int iVar7;
  __time32_t local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x30))();
    if (iVar4 != 0) {
      iVar7 = 0;
      local_res18[0] = 0;
      _time32(local_res18);
      ptVar5 = _localtime32(local_res18);
      if (ptVar5 != (tm *)0x0) {
        iVar3 = ptVar5->tm_wday;
        if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) && (*(int *)(param_1 + 0x548) != 5)) {
          for (; iVar7 < 4; iVar7 = iVar7 + 1) {
            lVar6 = (longlong)iVar7;
            piVar1 = (int *)(param_1 + 200 + lVar6 * 0x90);
            if ((*piVar1 == 1) || (*piVar1 == 2)) {
              if (*(int *)(param_1 + 0xcc + lVar6 * 0x90) == iVar4) {
                piVar2 = (int *)(param_1 + 0xe8 + lVar6 * 0x90);
                *piVar2 = *piVar2 + 1;
                FUN_140d0d820(param_1,param_2,piVar1);
                return;
              }
              if (*(int *)(param_1 + 0xd0 + lVar6 * 0x90) == iVar4) {
                piVar2 = (int *)(param_1 + 0xec + lVar6 * 0x90);
                *piVar2 = *piVar2 + 1;
                FUN_140d0d820(param_1,param_2,piVar1);
                return;
              }
            }
          }
        }
        else if (iVar3 == 6) {
          for (; iVar7 < 4; iVar7 = iVar7 + 1) {
            lVar6 = (longlong)iVar7;
            piVar1 = (int *)(param_1 + 0x308 + lVar6 * 0x90);
            if ((*piVar1 == 5) || (*piVar1 == 6)) {
              if (*(int *)(param_1 + 0x30c + lVar6 * 0x90) == iVar4) {
                piVar2 = (int *)(param_1 + 0x328 + lVar6 * 0x90);
                *piVar2 = *piVar2 + 1;
                FUN_140d0d820(param_1,param_2,piVar1);
                return;
              }
              if (*(int *)(param_1 + 0x310 + lVar6 * 0x90) == iVar4) {
                piVar2 = (int *)(param_1 + 0x32c + lVar6 * 0x90);
                *piVar2 = *piVar2 + 1;
                FUN_140d0d820(param_1,param_2,piVar1);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d0fa40 @ 140d0fa40
// ============================================================

void FUN_140d0fa40(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  int local_res10 [2];
  CMsg local_438 [1040];
  
  lVar9 = (longlong)(int)param_3;
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_3 < 4) {
    if ((*(int *)(param_1 + 0x548) == 3) || (*(int *)(param_1 + 0x548) == 7)) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xd8))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xe0))
                          (*(longlong **)(param_1 + 0x560),param_2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xf8))
                            (*(longlong **)(param_1 + 0x560),param_2);
          cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x148))
                            (*(longlong **)(param_1 + 0x560),uVar4);
          if (cVar3 == '\0') {
            uVar7 = FUN_140d080d0(param_1,param_2);
            if ((char)uVar7 == '\0') {
              if (*(int *)(param_1 + 0x548) == 3) {
                piVar8 = (int *)(param_1 + 200 + lVar9 * 0x90);
                if (*piVar8 == 2) {
                  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xf8))
                                    (*(longlong **)(param_1 + 0x560),param_2);
                  if (iVar5 != 0) {
                    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x140))
                                      (*(longlong **)(param_1 + 0x560),iVar5);
                    if ((cVar3 == '\0') && (*(int *)(param_1 + 0xd4 + lVar9 * 0x90) != iVar5)) {
                      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x108))();
                      if (cVar3 == '\0') {
                        plVar1 = *(longlong **)(param_1 + 0x560);
                        lVar2 = *plVar1;
                        uVar4 = (**(code **)(lVar2 + 0x120))(plVar1,param_2);
                        uVar6 = (**(code **)(*plVar1 + 0x118))(plVar1,param_2);
                        (**(code **)(lVar2 + 0x110))
                                  (*(undefined8 *)(param_1 + 0x560),param_2,iVar5,uVar6,uVar4,1);
                        piVar8 = (int *)(param_1 + 200 + lVar9 * 0x90);
                      }
                      FUN_140d12850(local_438);
                      uVar7 = FUN_140d128d0(local_438,0,param_3);
                      if ((char)uVar7 == '\0') {
                        log_InlineLogERROR(&DAT_140d18368);
                        FUN_140d128a0((undefined8 *)local_438);
                      }
                      else {
                        (**(code **)**(undefined8 **)(param_1 + 0x560))
                                  (*(undefined8 **)(param_1 + 0x560),param_2,local_438);
                        (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                                  (*(longlong **)(param_1 + 0x560),param_2,0);
                        FUN_140d0e5f0((longlong *)(param_1 + 0xf8 + lVar9 * 0x90),local_res10);
                        FUN_140d0d820(param_1,param_2,piVar8);
                        (**(code **)(**(longlong **)(param_1 + 0x560) + 0x128))
                                  (*(longlong **)(param_1 + 0x560),param_2,
                                   *(undefined4 *)(param_1 + 0xd4 + lVar9 * 0x90));
                        FUN_140d08360(param_1,(longlong)piVar8,param_3,0);
                        FUN_140d128a0((undefined8 *)local_438);
                      }
                    }
                  }
                }
              }
              else if ((*(int *)(param_1 + 0x548) == 7) &&
                      (piVar8 = (int *)(param_1 + 0x308 + lVar9 * 0x90), *piVar8 == 6)) {
                iVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xf8))
                                  (*(longlong **)(param_1 + 0x560),param_2);
                if ((iVar5 != 0) && (*(int *)(param_1 + 0x314 + lVar9 * 0x90) != iVar5)) {
                  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x108))();
                  if (cVar3 == '\0') {
                    plVar1 = *(longlong **)(param_1 + 0x560);
                    lVar2 = *plVar1;
                    uVar4 = (**(code **)(lVar2 + 0x120))(plVar1,param_2);
                    uVar6 = (**(code **)(*plVar1 + 0x118))(plVar1,param_2);
                    (**(code **)(lVar2 + 0x110))
                              (*(undefined8 *)(param_1 + 0x560),param_2,iVar5,uVar6,uVar4,1);
                    piVar8 = (int *)(param_1 + 0x308 + lVar9 * 0x90);
                  }
                  FUN_140d12850(local_438);
                  uVar7 = FUN_140d128d0(local_438,0,param_3);
                  if ((char)uVar7 == '\0') {
                    log_InlineLogERROR(&DAT_140d18368);
                    FUN_140d128a0((undefined8 *)local_438);
                  }
                  else {
                    (**(code **)**(undefined8 **)(param_1 + 0x560))
                              (*(undefined8 **)(param_1 + 0x560),param_2,local_438);
                    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                              (*(longlong **)(param_1 + 0x560),param_2,0);
                    FUN_140d0e5f0((longlong *)(param_1 + 0x338 + lVar9 * 0x90),local_res10);
                    FUN_140d0d820(param_1,param_2,piVar8);
                    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x128))
                              (*(longlong **)(param_1 + 0x560),param_2,
                               *(undefined4 *)(param_1 + 0x314 + lVar9 * 0x90));
                    FUN_140d08360(param_1,(longlong)piVar8,param_3,0);
                    FUN_140d128a0((undefined8 *)local_438);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    log_InlineLogERROR(&DAT_140d18368);
  }
  return;
}



// ============================================================
// Function: FUN_140d0ff20 @ 140d0ff20
// ============================================================

void FUN_140d0ff20(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  rsize_t rVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  int local_res8 [2];
  CMsg local_448 [1040];
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xd0))();
    if ((cVar5 != '\0') && (uVar7 = FUN_140d080d0(param_1,param_2), (char)uVar7 != '\0')) {
      if (*(int *)(param_1 + 0x548) == 3) {
        iVar12 = 0;
        plVar11 = (longlong *)(param_1 + 0x118);
        do {
          if ((int)plVar11[-10] == 2) {
            plVar1 = (longlong *)(param_1 + 0x128 + (longlong)iVar12 * 0x90);
            piVar3 = (int *)*plVar11;
            if (piVar3 < (int *)plVar11[-1]) {
              _invalid_parameter_noinfo();
            }
            piVar10 = (int *)plVar11[-1];
            if ((int *)*plVar11 < piVar10) {
              _invalid_parameter_noinfo();
            }
            plVar4 = (longlong *)plVar11[-4];
            for (; (piVar10 != piVar3 && (*piVar10 != param_2)); piVar10 = piVar10 + 1) {
            }
            piVar3 = (int *)*plVar11;
            if (piVar3 < (int *)plVar11[-1]) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)plVar11[-4])) {
              _invalid_parameter_noinfo();
            }
            if (piVar10 != piVar3) {
              if (plVar4 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar8 = 0;
              }
              else {
                lVar8 = *plVar4;
              }
              if (*(int **)(lVar8 + 0x20) <= piVar10) {
                _invalid_parameter_noinfo();
              }
              iVar2 = *piVar10;
              local_res8[0] = iVar2;
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                        (*(longlong **)(param_1 + 0x560),iVar2,1);
              lVar8 = *plVar11 - (longlong)(piVar10 + 1) >> 2;
              if (0 < lVar8) {
                rVar9 = lVar8 << 2;
                memmove_s(piVar10,rVar9,piVar10 + 1,rVar9);
              }
              *plVar11 = *plVar11 + -4;
              if ((piVar10 < (int *)plVar11[-1]) || ((int *)*plVar11 < piVar10)) {
                _invalid_parameter_noinfo();
              }
              FUN_140d0e5f0(plVar1,local_res8);
              uVar6 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xf8))
                                (*(longlong **)(param_1 + 0x560),param_2);
              cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x100))
                                (*(longlong **)(param_1 + 0x560),uVar6);
              if (((cVar5 != '\0') &&
                  (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x140))
                                     (*(longlong **)(param_1 + 0x560),uVar6), cVar5 != '\0')) &&
                 (param_3 != '\0')) {
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x150))
                          (*(longlong **)(param_1 + 0x560),param_2);
              }
              piVar3 = (int *)plVar1[4];
              if (piVar3 < (int *)plVar1[3]) {
                _invalid_parameter_noinfo();
              }
              piVar10 = (int *)plVar1[3];
              if ((int *)plVar1[4] < piVar10) {
                _invalid_parameter_noinfo();
              }
              lVar8 = *plVar1;
              for (; (piVar10 != piVar3 && (*piVar10 != iVar2)); piVar10 = piVar10 + 1) {
              }
              piVar3 = (int *)plVar1[4];
              if (piVar3 < (int *)plVar1[3]) {
                _invalid_parameter_noinfo();
              }
              if ((lVar8 == 0) || (lVar8 != *plVar1)) {
                _invalid_parameter_noinfo();
              }
              if (piVar10 != piVar3) {
                lVar8 = plVar1[4] - (longlong)(piVar10 + 1) >> 2;
                if (0 < lVar8) {
                  rVar9 = lVar8 << 2;
                  memmove_s(piVar10,rVar9,piVar10 + 1,rVar9);
                }
                plVar1[4] = plVar1[4] + -4;
                if ((piVar10 < (int *)plVar1[3]) || ((int *)plVar1[4] < piVar10)) {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140d12850(local_448);
              uVar7 = FUN_140d128d0(local_448,3,iVar12);
              if ((char)uVar7 != '\0') {
                (**(code **)**(undefined8 **)(param_1 + 0x560))
                          (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
              }
              FUN_140d08360(param_1,param_1 + 200 + (longlong)iVar12 * 0x90,iVar12,0);
              FUN_140d128a0((undefined8 *)local_448);
              return;
            }
          }
          iVar12 = iVar12 + 1;
          plVar11 = plVar11 + 0x12;
        } while (iVar12 < 4);
      }
      else if (*(int *)(param_1 + 0x548) == 7) {
        iVar12 = 0;
        plVar11 = (longlong *)(param_1 + 0x358);
        do {
          if ((int)plVar11[-10] == 6) {
            plVar1 = (longlong *)(param_1 + 0x368 + (longlong)iVar12 * 0x90);
            piVar3 = (int *)*plVar11;
            if (piVar3 < (int *)plVar11[-1]) {
              _invalid_parameter_noinfo();
            }
            piVar10 = (int *)plVar11[-1];
            if ((int *)*plVar11 < piVar10) {
              _invalid_parameter_noinfo();
            }
            plVar4 = (longlong *)plVar11[-4];
            for (; (piVar10 != piVar3 && (*piVar10 != param_2)); piVar10 = piVar10 + 1) {
            }
            piVar3 = (int *)*plVar11;
            if (piVar3 < (int *)plVar11[-1]) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)plVar11[-4])) {
              _invalid_parameter_noinfo();
            }
            if (piVar10 != piVar3) {
              if (plVar4 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar8 = 0;
              }
              else {
                lVar8 = *plVar4;
              }
              if (*(int **)(lVar8 + 0x20) <= piVar10) {
                _invalid_parameter_noinfo();
              }
              iVar2 = *piVar10;
              local_res8[0] = iVar2;
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                        (*(longlong **)(param_1 + 0x560),iVar2,1);
              lVar8 = *plVar11 - (longlong)(piVar10 + 1) >> 2;
              if (0 < lVar8) {
                rVar9 = lVar8 << 2;
                memmove_s(piVar10,rVar9,piVar10 + 1,rVar9);
              }
              *plVar11 = *plVar11 + -4;
              if ((piVar10 < (int *)plVar11[-1]) || ((int *)*plVar11 < piVar10)) {
                _invalid_parameter_noinfo();
              }
              FUN_140d0e5f0(plVar1,local_res8);
              uVar6 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0xf8))
                                (*(longlong **)(param_1 + 0x560),param_2);
              cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x100))
                                (*(longlong **)(param_1 + 0x560),uVar6);
              if (((cVar5 != '\0') &&
                  (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x140))
                                     (*(longlong **)(param_1 + 0x560),uVar6), cVar5 != '\0')) &&
                 (param_3 != '\0')) {
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x150))
                          (*(longlong **)(param_1 + 0x560),param_2);
              }
              piVar3 = (int *)plVar1[4];
              if (piVar3 < (int *)plVar1[3]) {
                _invalid_parameter_noinfo();
              }
              piVar10 = (int *)plVar1[3];
              if ((int *)plVar1[4] < piVar10) {
                _invalid_parameter_noinfo();
              }
              lVar8 = *plVar1;
              for (; (piVar10 != piVar3 && (*piVar10 != iVar2)); piVar10 = piVar10 + 1) {
              }
              piVar3 = (int *)plVar1[4];
              if (piVar3 < (int *)plVar1[3]) {
                _invalid_parameter_noinfo();
              }
              if ((lVar8 == 0) || (lVar8 != *plVar1)) {
                _invalid_parameter_noinfo();
              }
              if (piVar10 != piVar3) {
                lVar8 = plVar1[4] - (longlong)(piVar10 + 1) >> 2;
                if (0 < lVar8) {
                  rVar9 = lVar8 << 2;
                  memmove_s(piVar10,rVar9,piVar10 + 1,rVar9);
                }
                plVar1[4] = plVar1[4] + -4;
                if ((piVar10 < (int *)plVar1[3]) || ((int *)plVar1[4] < piVar10)) {
                  _invalid_parameter_noinfo();
                }
              }
              FUN_140d12850(local_448);
              uVar7 = FUN_140d128d0(local_448,3,iVar12);
              if ((char)uVar7 != '\0') {
                (**(code **)**(undefined8 **)(param_1 + 0x560))
                          (*(undefined8 **)(param_1 + 0x560),param_2,local_448);
              }
              FUN_140d08360(param_1,param_1 + 0x308 + (longlong)iVar12 * 0x90,iVar12,0);
              FUN_140d128a0((undefined8 *)local_448);
              return;
            }
          }
          iVar12 = iVar12 + 1;
          plVar11 = plVar11 + 0x12;
        } while (iVar12 < 4);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d10580 @ 140d10580
// ============================================================

void FUN_140d10580(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d080d0(param_1,param_2);
  if ((char)uVar1 != '\0') {
    FUN_140d0ff20(param_1,param_2,'\x01');
  }
  return;
}



// ============================================================
// Function: FUN_140d105b0 @ 140d105b0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d105b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  tm *ptVar9;
  ulonglong extraout_RAX;
  ulonglong uVar10;
  undefined4 extraout_var;
  int iVar11;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  __time32_t local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  longlong local_498;
  uint local_490 [2];
  undefined4 *local_488;
  int local_480 [2];
  undefined4 *local_478;
  undefined8 local_470;
  uint local_468 [6];
  longlong local_450 [3];
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_470 = 0xfffffffffffffffe;
  local_38 = DAT_140d23350 ^ (ulonglong)auStack_4d8;
  iVar4 = 1;
  *(undefined4 *)(param_1 + 0x548) = 1;
  local_498 = param_1;
  memset(local_438,0,0x400);
  _snprintf(local_438,0x3ff,"select * from cq_syncompeterank order by rank");
  local_39 = 0;
  plVar5 = (longlong *)InstanceGet();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_438,2);
  uVar10 = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
    if (lVar6 != 8) {
      (**(code **)(*plVar5 + 0x40))(plVar5);
      log_InlineLogWARNING("factionmatch data count is not 8: count(%I64u)");
    }
    local_49c = 1;
    iVar3 = 8;
    local_4a0 = 8;
    local_4a4 = 0;
    while ((iVar1 = local_4a4, local_4a4 < 8 && (iVar4 <= iVar3))) {
      (**(code **)(*plVar5 + 0x30))(plVar5,(longlong)local_4a4);
      puVar7 = FUN_140d016f0();
      if (puVar7 == (undefined4 *)0x0) {
        local_4b8 = 0x68;
        log_InlineLogERROR(&DAT_140d18368);
      }
      else {
        FUN_140d017e0((longlong)puVar7,plVar5);
        iVar2 = FUN_140d01060((longlong)puVar7);
        if (iVar2 == 0) {
          local_4a0 = iVar3 + -1;
          iVar2 = iVar4;
          iVar11 = local_4a0;
          iVar4 = iVar3;
        }
        else {
          iVar2 = iVar4 + 1;
          iVar11 = iVar3;
          local_49c = iVar2;
        }
        iVar3 = FUN_140d01060((longlong)puVar7);
        if (iVar3 != iVar4) {
          FUN_140d01470((longlong)puVar7,iVar4);
        }
        local_480[0] = iVar4;
        local_478 = puVar7;
        FUN_140d0ab20((longlong *)(param_1 + 8),(longlong *)local_468,local_480);
        uVar8 = FUN_140d010e0((longlong)puVar7);
        local_490[0] = (uint)uVar8;
        local_488 = puVar7;
        local_468[0] = local_490[0];
        FUN_140d0acd0((longlong *)(param_1 + 0x48),local_450,local_490);
        iVar4 = iVar2;
        iVar3 = iVar11;
      }
      local_4a4 = iVar1 + 1;
    }
    (**(code **)*plVar5)(plVar5);
    local_4a8 = 0;
    _time32(&local_4a8);
    ptVar9 = _localtime32(&local_4a8);
    if (ptVar9 == (tm *)0x0) {
      local_4b8 = 0x89;
      log_InlineLogERROR(&DAT_140d18368);
      uVar10 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      iVar3 = ptVar9->tm_hour * 0x3c + ptVar9->tm_min;
      iVar4 = ptVar9->tm_wday;
      if ((((iVar4 == 1) && (0x545 < iVar3)) || (iVar4 == 2)) ||
         (((iVar4 == 3 || (iVar4 == 4)) || ((iVar4 == 5 || ((iVar4 == 6 && (iVar3 < 0x50a)))))))) {
        FUN_140d0f010(param_1);
      }
      iVar4 = ptVar9->tm_wday;
      if (((((iVar4 == 4) && (0x545 < iVar3)) || (iVar4 == 5)) || ((iVar4 == 6 && (iVar3 < 0x50a))))
         && (*(int *)(param_1 + 0x548) != 5)) {
        FUN_140d0ea40(param_1);
      }
      iVar4 = tq::DateStamp(0);
      *(int *)(param_1 + 0x54c) = iVar4;
      uVar10 = CONCAT71((int7)(CONCAT44(extraout_var,iVar4) >> 8),1);
    }
  }
  return uVar10;
}



// ============================================================
// Function: FUN_140d108b0 @ 140d108b0
// ============================================================

void FUN_140d108b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int local_res10;
  __time32_t local_res18 [2];
  tm *local_res20;
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
  }
  else if (*(int *)(param_1 + 0x548) != 9) {
    uVar18 = 0;
    local_res18[0] = 0;
    _time32(local_res18);
    local_res20 = _localtime32(local_res18);
    if (local_res20 != (tm *)0x0) {
      iVar9 = local_res20->tm_hour * 0x3c + local_res20->tm_min;
      iVar17 = local_res20->tm_wday;
      if ((((iVar17 == 2) || (iVar17 == 3)) || (iVar17 == 4)) &&
         (iVar2 = *(int *)(param_1 + 0x548), iVar2 != 5)) {
        if (iVar9 == 0x4c9) {
          if (iVar2 != 2) {
            *(undefined4 *)(param_1 + 0x548) = 2;
            FUN_140d06960(param_1 + 0x88);
            uVar16 = uVar18;
            while (iVar17 = (int)uVar16, iVar17 < 4) {
              local_res10 = 1;
              lVar12 = (longlong)iVar17;
              *(undefined4 *)(param_1 + 0xe0 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0xe4 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0xe8 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0xec + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0xf0 + lVar12 * 0x90) = 0;
              uVar11 = *(undefined4 *)(&DAT_140d18600 + lVar12 * 4);
              *(undefined4 *)(param_1 + 0xd4 + lVar12 * 0x90) = uVar11;
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x70))
                        (*(longlong **)(param_1 + 0x560),uVar11,param_1 + 0xd8 + lVar12 * 0x90);
              puVar15 = *(undefined4 **)(param_1 + 0x110 + lVar12 * 0x90);
              if (*(undefined4 **)(param_1 + 0x118 + lVar12 * 0x90) < puVar15) {
                _invalid_parameter_noinfo();
              }
              puVar3 = *(ulonglong **)(param_1 + 0xf8 + lVar12 * 0x90);
              puVar4 = *(undefined4 **)(param_1 + 0x118 + lVar12 * 0x90);
              if (puVar4 < *(undefined4 **)(param_1 + 0x110 + lVar12 * 0x90)) {
                _invalid_parameter_noinfo();
              }
              puVar5 = *(ulonglong **)(param_1 + 0xf8 + lVar12 * 0x90);
              while( true ) {
                if ((puVar3 == (ulonglong *)0x0) || (puVar3 != puVar5)) {
                  _invalid_parameter_noinfo();
                }
                if (puVar15 == puVar4) break;
                if (puVar3 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar16 = uVar18;
                }
                else {
                  uVar16 = *puVar3;
                }
                if (*(undefined4 **)(uVar16 + 0x20) <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                          (*(longlong **)(param_1 + 0x560),*puVar15,1);
                if (puVar3 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar16 = uVar18;
                }
                else {
                  uVar16 = *puVar3;
                }
                if (*(undefined4 **)(uVar16 + 0x20) <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                puVar15 = puVar15 + 1;
              }
              lVar12 = (longlong)iVar17;
              FUN_140d0aa60((longlong *)(param_1 + 0xf8 + lVar12 * 0x90));
              FUN_140d0aa60((longlong *)(param_1 + 0x128 + lVar12 * 0x90));
              iVar9 = local_res20->tm_wday;
              uVar11 = 0;
              if (iVar9 == 2) {
                local_res10 = 1;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185a0 + lVar12 * 8));
                lVar6 = *plVar13;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185a4 + lVar12 * 8));
                lVar7 = *plVar13;
                uVar10 = uVar11;
                if (lVar6 != 0) {
                  uVar14 = FUN_140d010e0(lVar6);
                  uVar10 = (int)uVar14;
                }
                *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90) = uVar10;
                if (lVar7 != 0) {
                  uVar14 = FUN_140d010e0(lVar7);
                  uVar11 = (undefined4)uVar14;
                }
                *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90) = uVar11;
              }
              else if (iVar9 == 3) {
                local_res10 = 2;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185c0 + lVar12 * 8));
                lVar6 = *plVar13;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185c4 + lVar12 * 8));
                lVar7 = *plVar13;
                uVar10 = uVar11;
                if (lVar6 != 0) {
                  uVar14 = FUN_140d010e0(lVar6);
                  uVar10 = (int)uVar14;
                }
                *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90) = uVar10;
                if (lVar7 != 0) {
                  uVar14 = FUN_140d010e0(lVar7);
                  uVar11 = (undefined4)uVar14;
                }
                *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90) = uVar11;
              }
              else if (iVar9 == 4) {
                local_res10 = 3;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185e0 + lVar12 * 8));
                lVar6 = *plVar13;
                plVar13 = FUN_140d0c360((longlong *)(param_1 + 8),
                                        (int *)(&DAT_140d185e4 + lVar12 * 8));
                lVar7 = *plVar13;
                uVar10 = uVar11;
                if (lVar6 != 0) {
                  uVar14 = FUN_140d010e0(lVar6);
                  uVar10 = (int)uVar14;
                }
                *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90) = uVar10;
                if (lVar7 != 0) {
                  uVar14 = FUN_140d010e0(lVar7);
                  uVar11 = (undefined4)uVar14;
                }
                *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90) = uVar11;
              }
              else {
                *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90) = 0;
                *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90) = 0;
              }
              FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar12 * 0x90),local_res10,0);
              FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar12 * 0x90),local_res10,0);
              cVar8 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                                (*(longlong **)(param_1 + 0x560),
                                 *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90));
              if (cVar8 == '\0') {
                *(undefined4 *)(param_1 + 0xcc + lVar12 * 0x90) = 0;
              }
              cVar8 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x90))
                                (*(longlong **)(param_1 + 0x560),
                                 *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90));
              if (cVar8 == '\0') {
                *(undefined4 *)(param_1 + 0xd0 + lVar12 * 0x90) = 0;
              }
              iVar9 = *(int *)(param_1 + 0xcc + lVar12 * 0x90);
              if ((iVar9 == 0) && (*(int *)(param_1 + 0xd0 + lVar12 * 0x90) == 0)) {
                *(undefined4 *)(param_1 + 200 + lVar12 * 0x90) = 3;
                *(undefined4 *)(param_1 + 0xf0 + lVar12 * 0x90) = 0;
              }
              else if ((iVar9 == 0) || (*(int *)(param_1 + 0xd0 + lVar12 * 0x90) == 0)) {
                *(undefined4 *)(param_1 + 200 + lVar12 * 0x90) = 3;
                if (*(int *)(param_1 + 0xcc + lVar12 * 0x90) == 0) {
                  *(undefined4 *)(param_1 + 0xf0 + lVar12 * 0x90) = 2;
                  FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xd0 + lVar12 * 0x90),local_res10,1);
                  tq::MyLogSave("gmlog/factionmatch","round win syn:%u no enermy");
                }
                else {
                  *(undefined4 *)(param_1 + 0xf0 + lVar12 * 0x90) = 1;
                  FUN_140d0bd50(param_1,*(uint *)(param_1 + 0xcc + lVar12 * 0x90),local_res10,1);
                  tq::MyLogSave("gmlog/factionmatch","round win syn:%u no enermy");
                }
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x80))
                          (*(longlong **)(param_1 + 0x560),
                           *(undefined4 *)(param_1 + 0xd4 + lVar12 * 0x90),
                           *(undefined4 *)(param_1 + 0xd8 + lVar12 * 0x90),
                           *(undefined4 *)(param_1 + 0xdc + lVar12 * 0x90));
                *(undefined4 *)(param_1 + 200 + lVar12 * 0x90) = 1;
              }
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x60))
                        (*(longlong **)(param_1 + 0x560),
                         *(undefined4 *)(param_1 + 0xd4 + lVar12 * 0x90));
              uVar16 = (ulonglong)(iVar17 + 1);
            }
            uVar14 = FUN_140d02220(param_1);
            if (((char)uVar14 != '\0') &&
               (*(undefined4 *)(param_1 + 0x548) = 4, local_res20->tm_wday == 4)) {
              FUN_140d0ea40(param_1);
            }
          }
        }
        else if (iVar9 == 0x4ce) {
          if (iVar2 == 2) {
            *(undefined4 *)(param_1 + 0x548) = 3;
            *(undefined1 *)(param_1 + 0x550) = 0;
            (**(code **)(**(longlong **)(param_1 + 0x560) + 200))();
            while (iVar17 = (int)uVar18, iVar17 < 4) {
              piVar1 = (int *)(param_1 + 200 + (longlong)iVar17 * 0x90);
              if (*piVar1 == 1) {
                *piVar1 = 2;
                FUN_140d02e80(param_1,(longlong)piVar1);
              }
              uVar18 = (ulonglong)(iVar17 + 1);
            }
          }
        }
        else if (iVar9 == 0x4ec) {
          if ((iVar2 == 3) && (*(char *)(param_1 + 0x550) == '\0')) {
            *(undefined1 *)(param_1 + 0x550) = 1;
            FUN_140d0d200(param_1);
            uVar14 = FUN_140d02220(param_1);
            if ((char)uVar14 != '\0') {
              *(undefined4 *)(param_1 + 0x548) = 4;
              FUN_140d0f400(param_1);
            }
          }
        }
        else if ((iVar9 == 0x546) && (iVar2 == 3)) {
          FUN_140d0d4e0(param_1);
          uVar14 = FUN_140d02220(param_1);
          if ((char)uVar14 != '\0') {
            *(undefined4 *)(param_1 + 0x548) = 4;
            FUN_140d0f400(param_1);
          }
        }
      }
      else if (iVar17 == 6) {
        if (iVar9 == 0x505) {
          if (*(int *)(param_1 + 0x548) != 6) {
            FUN_140d06960(param_1 + 0x88);
            if (*(int *)(param_1 + 0x548) != 5) {
              FUN_140d0ea40(param_1);
            }
            FUN_140d0cfa0(param_1);
            uVar14 = FUN_140d02110(param_1);
            if ((char)uVar14 != '\0') {
              FUN_140d021b0(param_1);
              return;
            }
            *(undefined4 *)(param_1 + 0x548) = 6;
            uVar16 = uVar18;
            while (iVar17 = (int)uVar16, iVar17 < 4) {
              lVar12 = (longlong)iVar17;
              *(undefined4 *)(param_1 + 800 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0x324 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0x328 + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0x32c + lVar12 * 0x90) = 0;
              *(undefined4 *)(param_1 + 0x330 + lVar12 * 0x90) = 0;
              uVar11 = *(undefined4 *)(&DAT_140d18600 + lVar12 * 4);
              *(undefined4 *)(param_1 + 0x314 + lVar12 * 0x90) = uVar11;
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x70))
                        (*(longlong **)(param_1 + 0x560),uVar11,param_1 + 0x318 + lVar12 * 0x90,
                         param_1 + 0x31c + lVar12 * 0x90);
              puVar15 = *(undefined4 **)(param_1 + 0x350 + lVar12 * 0x90);
              if (*(undefined4 **)(param_1 + 0x358 + lVar12 * 0x90) < puVar15) {
                _invalid_parameter_noinfo();
              }
              puVar3 = *(ulonglong **)(param_1 + 0x338 + lVar12 * 0x90);
              puVar4 = *(undefined4 **)(param_1 + 0x358 + lVar12 * 0x90);
              if (puVar4 < *(undefined4 **)(param_1 + 0x350 + lVar12 * 0x90)) {
                _invalid_parameter_noinfo();
              }
              puVar5 = *(ulonglong **)(param_1 + 0x338 + lVar12 * 0x90);
              while( true ) {
                if ((puVar3 == (ulonglong *)0x0) || (puVar3 != puVar5)) {
                  _invalid_parameter_noinfo();
                }
                if (puVar15 == puVar4) break;
                if (puVar3 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar16 = uVar18;
                }
                else {
                  uVar16 = *puVar3;
                }
                if (*(undefined4 **)(uVar16 + 0x20) <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                (**(code **)(**(longlong **)(param_1 + 0x560) + 0x158))
                          (*(longlong **)(param_1 + 0x560),*puVar15,1);
                if (puVar3 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar16 = uVar18;
                }
                else {
                  uVar16 = *puVar3;
                }
                if (*(undefined4 **)(uVar16 + 0x20) <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                puVar15 = puVar15 + 1;
              }
              lVar12 = (longlong)iVar17;
              FUN_140d0aa60((longlong *)(param_1 + 0x338 + lVar12 * 0x90));
              FUN_140d0aa60((longlong *)(param_1 + 0x368 + lVar12 * 0x90));
              iVar9 = *(int *)(param_1 + 0x30c + lVar12 * 0x90);
              if ((iVar9 == 0) && (*(int *)(param_1 + 0x310 + lVar12 * 0x90) == 0)) {
                *(undefined4 *)(param_1 + 0x308 + lVar12 * 0x90) = 7;
                *(undefined4 *)(param_1 + 0x330 + lVar12 * 0x90) = 0;
              }
              else if ((iVar9 == 0) || (*(int *)(param_1 + 0x310 + lVar12 * 0x90) == 0)) {
                *(undefined4 *)(param_1 + 0x308 + lVar12 * 0x90) = 7;
                if (*(int *)(param_1 + 0x30c + lVar12 * 0x90) == 0) {
                  *(undefined4 *)(param_1 + 0x330 + lVar12 * 0x90) = 2;
                  tq::MyLogSave("gmlog/factionmatch","final win syn:%u no enermy");
                }
                else {
                  *(undefined4 *)(param_1 + 0x330 + lVar12 * 0x90) = 1;
                  tq::MyLogSave("gmlog/factionmatch","final win syn:%u no enermy");
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x308 + lVar12 * 0x90) = 5;
              }
              (**(code **)(**(longlong **)(param_1 + 0x560) + 0x60))
                        (*(longlong **)(param_1 + 0x560),
                         *(undefined4 *)(param_1 + 0x314 + lVar12 * 0x90));
              uVar16 = (ulonglong)(iVar17 + 1);
            }
            uVar14 = FUN_140d02110(param_1);
            if ((char)uVar14 != '\0') {
              *(undefined4 *)(param_1 + 0x548) = 8;
            }
          }
        }
        else if (iVar9 == 0x50a) {
          if (*(int *)(param_1 + 0x548) == 6) {
            *(undefined4 *)(param_1 + 0x548) = 7;
            *(undefined1 *)(param_1 + 0x550) = 0;
            (**(code **)(**(longlong **)(param_1 + 0x560) + 200))();
            while (iVar17 = (int)uVar18, iVar17 < 4) {
              piVar1 = (int *)(param_1 + 0x308 + (longlong)iVar17 * 0x90);
              if (*piVar1 == 5) {
                *piVar1 = 6;
                FUN_140d02e80(param_1,(longlong)piVar1);
              }
              uVar18 = (ulonglong)(iVar17 + 1);
            }
          }
        }
        else if (iVar9 == 0x528) {
          if ((*(int *)(param_1 + 0x548) == 7) && (*(char *)(param_1 + 0x550) == '\0')) {
            *(undefined1 *)(param_1 + 0x550) = 1;
            FUN_140d0cdd0(param_1);
            uVar14 = FUN_140d02110(param_1);
            if ((char)uVar14 != '\0') {
              *(undefined4 *)(param_1 + 0x548) = 8;
              FUN_140d021b0(param_1);
            }
          }
        }
        else if ((iVar9 == 0x582) && (*(int *)(param_1 + 0x548) == 7)) {
          FUN_140d0cfa0(param_1);
          uVar14 = FUN_140d02110(param_1);
          if ((char)uVar14 != '\0') {
            *(undefined4 *)(param_1 + 0x548) = 8;
            FUN_140d021b0(param_1);
          }
        }
      }
      FUN_140d0a6c0(param_1);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d11460 @ 140d11460
// ============================================================

void FUN_140d11460(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar5 = (undefined8 *)*puVar1;
  plVar2 = *(longlong **)(param_1 + 8);
  uVar7 = 0;
  do {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar5 == puVar1) goto LAB_140d1159d;
    uVar7 = uVar7 + 1;
    if (100 < uVar7) {
      log_InlineLogERROR(&DAT_140d18368);
LAB_140d1159d:
      FUN_140d06860(param_1 + 8);
      FUN_140d068e0(param_1 + 0x48);
      uVar4 = FUN_140d105b0(param_1);
      if ((char)uVar4 == '\0') {
        log_InlineLogERROR(&DAT_140d18368);
      }
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (puVar5 == *(undefined8 **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140d01910((void *)puVar5[4]);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar5 + 0x29) == '\0') {
      puVar6 = puVar5;
      puVar3 = (undefined8 *)puVar5[2];
      if (*(char *)((longlong)puVar5[2] + 0x29) == '\0') {
        do {
          puVar5 = puVar3;
          puVar3 = (undefined8 *)*puVar5;
        } while (*(char *)((longlong)*puVar5 + 0x29) == '\0');
      }
      else {
        do {
          puVar5 = (undefined8 *)puVar6[1];
          if (*(char *)((longlong)puVar5 + 0x29) != '\0') break;
          bVar9 = puVar6 == (undefined8 *)puVar5[2];
          puVar6 = puVar5;
        } while (bVar9);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}



// ============================================================
// Function: FUN_140d11610 @ 140d11610
// ============================================================

undefined8 * FUN_140d11610(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140d18368,"IF_NOT","pConsumer",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\factionmatch\\src\\factionmatchmgr.cpp"
                       ,0x34);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_140d23388 & 1) == 0) {
      DAT_140d23388 = DAT_140d23388 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_140d23380,"CFactionMatchMgr");
      atexit((_func_5014 *)&LAB_140d17b60);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140d23380,0x568);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140d0e930(puVar1,param_1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140d18368,"CHECKF","pFactionMatchMgr",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\factionmatch\\src\\factionmatchmgr.cpp"
                         ,0x3b);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140d105b0((longlong)puVar1);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d11720 @ 140d11720
// ============================================================

void FUN_140d11720(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_140d11730 @ 140d11730
// ============================================================

undefined8 FUN_140d11730(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d11740 @ 140d11740
// ============================================================

undefined8 FUN_140d11740(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d11750 @ 140d11750
// ============================================================

undefined8 FUN_140d11750(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d11760 @ 140d11760
// ============================================================

undefined8 FUN_140d11760(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d11770 @ 140d11770
// ============================================================

undefined8 * FUN_140d11770(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d117b0 @ 140d117b0
// ============================================================

ulonglong FUN_140d117b0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}



// ============================================================
// Function: FUN_140d117d0 @ 140d117d0
// ============================================================

ulonglong FUN_140d117d0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),0x18)
  ;
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140d11cc0(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// ============================================================
// Function: FUN_140d118b0 @ 140d118b0
// ============================================================

ushort FUN_140d118b0(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

{
  bool bVar1;
  ushort uVar2;
  CMsg local_418 [1040];
  
  if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else if (param_4 < *param_3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3[1];
    if (uVar2 == 0x3eb) {
      FUN_140d131a0(local_418);
      bVar1 = FUN_140d13260(local_418,(char *)param_3,param_4);
      if (bVar1) {
        FUN_140d13290(local_418,param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_140d131f0((undefined8 *)local_418);
    }
    else if (uVar2 == 0x91a) {
      FUN_140d12520(local_418);
      bVar1 = FUN_140d125f0(local_418,(char *)param_3,param_4);
      if (bVar1) {
        FUN_140d12620((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_140d12570((undefined8 *)local_418);
    }
    else if (uVar2 == 0x91d) {
      FUN_140d12850(local_418);
      bVar1 = FUN_140d12940(local_418,(char *)param_3,param_4);
      if (bVar1) {
        FUN_140d12970((longlong)local_418,param_2,*(longlong **)(param_1 + 0x10),
                      *(longlong **)(param_1 + 0x18));
      }
      FUN_140d128a0((undefined8 *)local_418);
    }
    else {
      log_InlineLogWARNING("faction match:: Recv fault MsgType:%d");
    }
    uVar2 = *param_3;
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d11a20 @ 140d11a20
// ============================================================

void FUN_140d11a20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d11a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer faction match module doesn\'t have provider");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d11a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x10))();
  return;
}



// ============================================================
// Function: FUN_140d11a40 @ 140d11a40
// ============================================================

bool FUN_140d11a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140d123e0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x91a,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x91d,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x3eb,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                    (*(longlong **)(param_1 + 0x28),0x18,*(undefined8 *)(param_1 + 0x10));
  return cVar1 != '\0';
}



// ============================================================
// Function: FUN_140d11ad0 @ 140d11ad0
// ============================================================

undefined8 FUN_140d11ad0(void)

{
  return 1;
}



// ============================================================
// Function: FUN_140d11ae0 @ 140d11ae0
// ============================================================

void FUN_140d11ae0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d11b10 @ 140d11b10
// ============================================================

void FUN_140d11b10(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d11b40 @ 140d11b40
// ============================================================

undefined8 * FUN_140d11b40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = factionmatch::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  return param_1;
}



// ============================================================
// Function: FUN_140d11b90 @ 140d11b90
// ============================================================

void FUN_140d11b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = factionmatch::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: ModuleCreate @ 140d11be0
// ============================================================

longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x11be0  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)factionmatch::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    plVar2[5] = param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140d11a40((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// ============================================================
// Function: FUN_140d11c80 @ 140d11c80
// ============================================================

undefined8 *
FUN_140d11c80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d11b90(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d11cc0 @ 140d11cc0
// ============================================================

ulonglong FUN_140d11cc0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_140d11610(param_2);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_140d11d50 @ 140d11d50
// ============================================================

void FUN_140d11d50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140d108b0(*(longlong *)(param_1 + 0x10));
  }
  return;
}



// ============================================================
// Function: FUN_140d11d70 @ 140d11d70
// ============================================================

void FUN_140d11d70(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d09df0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}



// ============================================================
// Function: FUN_140d11dc0 @ 140d11dc0
// ============================================================

void FUN_140d11dc0(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d022c0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d11e10 @ 140d11e10
// ============================================================

ulonglong FUN_140d11e10(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140d023d0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d11e60 @ 140d11e60
// ============================================================

void * FUN_140d11e60(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  void *pvVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return (void *)(extraout_RAX & 0xffffffffffffff00);
  }
  pvVar1 = FUN_140d0a760(*(longlong *)(param_1 + 0x10),param_2);
  return pvVar1;
}



// ============================================================
// Function: FUN_140d11eb0 @ 140d11eb0
// ============================================================

uint FUN_140d11eb0(longlong param_1,int param_2)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_EAX & 0xffffff00;
  }
  uVar1 = FUN_140d0f460(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d11f00 @ 140d11f00
// ============================================================

void FUN_140d11f00(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d0f850(*(longlong *)(param_1 + 0x10),param_2);
  return;
}



// ============================================================
// Function: FUN_140d11f50 @ 140d11f50
// ============================================================

ulonglong FUN_140d11f50(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140d02af0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d11fa0 @ 140d11fa0
// ============================================================

ulonglong FUN_140d11fa0(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140d02c30(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d11ff0 @ 140d11ff0
// ============================================================

void FUN_140d11ff0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d02660(*(longlong *)(param_1 + 0x10),param_2);
  return;
}



// ============================================================
// Function: FUN_140d12040 @ 140d12040
// ============================================================

void FUN_140d12040(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d02ce0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d12090 @ 140d12090
// ============================================================

void FUN_140d12090(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d11460(*(longlong *)(param_1 + 0x10));
  return;
}



// ============================================================
// Function: FUN_140d120e0 @ 140d120e0
// ============================================================

void FUN_140d120e0(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d0daa0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d12130 @ 140d12130
// ============================================================

void FUN_140d12130(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d0dd20(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d12180 @ 140d12180
// ============================================================

undefined4 FUN_140d12180(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return 0;
  }
  uVar1 = FUN_140d0c240(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d121d0 @ 140d121d0
// ============================================================

ulonglong FUN_140d121d0(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_140d0df80(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d121f0 @ 140d121f0
// ============================================================

void FUN_140d121f0(longlong param_1,int param_2,int param_3)

{
  FUN_140d02f10(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d12200 @ 140d12200
// ============================================================

void FUN_140d12200(longlong param_1,int param_2,int param_3,short param_4,int param_5)

{
  FUN_140d0e260(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return;
}



// ============================================================
// Function: FUN_140d12220 @ 140d12220
// ============================================================

void FUN_140d12220(longlong param_1,int param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d0fa40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d12270 @ 140d12270
// ============================================================

void FUN_140d12270(longlong param_1,int param_2,char param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d0ff20(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140d122c0 @ 140d122c0
// ============================================================

ulonglong FUN_140d122c0(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140d080d0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d12310 @ 140d12310
// ============================================================

ulonglong FUN_140d12310(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140d08220(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}



// ============================================================
// Function: FUN_140d12360 @ 140d12360
// ============================================================

void FUN_140d12360(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  FUN_140d10580(*(longlong *)(param_1 + 0x10),param_2);
  return;
}



// ============================================================
// Function: FUN_140d123b0 @ 140d123b0
// ============================================================

void FUN_140d123b0(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140d01e10((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d123e0 @ 140d123e0
// ============================================================

undefined8 * FUN_140d123e0(undefined8 *param_1)

{
  *param_1 = factionmatch::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d12400 @ 140d12400
// ============================================================

void FUN_140d12400(undefined8 *param_1)

{
  *param_1 = factionmatch::CProvider::vftable;
  if (param_1[2] != 0) {
    FUN_140d01e10((undefined8 *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d12440 @ 140d12440
// ============================================================

undefined8 * FUN_140d12440(undefined8 *param_1,uint param_2)

{
  FUN_140d12400(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d12470 @ 140d12470
// ============================================================

CMsg * FUN_140d12470(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d124a0 @ 140d124a0
// ============================================================

void FUN_140d124a0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d124c0 @ 140d124c0
// ============================================================

void FUN_140d124c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d124c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140d124d0 @ 140d124d0
// ============================================================

void FUN_140d124d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d124d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}



// ============================================================
// Function: FUN_140d124e0 @ 140d124e0
// ============================================================

void FUN_140d124e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d124e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140d124f0 @ 140d124f0
// ============================================================

undefined8 * FUN_140d124f0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d12520 @ 140d12520
// ============================================================

CMsg * FUN_140d12520(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = factionmatch::CMsgFactionMatch::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d12570 @ 140d12570
// ============================================================

void FUN_140d12570(undefined8 *param_1)

{
  *param_1 = factionmatch::CMsgFactionMatch::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d125a0 @ 140d125a0
// ============================================================

undefined8 FUN_140d125a0(CMsg *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x91a;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x6c;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_140d125f0 @ 140d125f0
// ============================================================

bool FUN_140d125f0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x91a;
}



// ============================================================
// Function: FUN_140d12620 @ 140d12620
// ============================================================

void FUN_140d12620(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d18368);
    return;
  }
  if (*(short *)(*(longlong *)(param_1 + 0x408) + 4) == 0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140d12680 @ 140d12680
// ============================================================

undefined8
FUN_140d12680(CMsg *param_1,undefined2 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x91a;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 6) = 0;
  *(undefined8 *)(lVar1 + 0xe) = 0;
  *(undefined8 *)(lVar1 + 0x16) = 0;
  *(undefined8 *)(lVar1 + 0x1e) = 0;
  *(undefined4 *)(lVar1 + 0x26) = 0;
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined8 *)(lVar1 + 6) = *param_3;
    *(undefined8 *)(lVar1 + 0xe) = param_3[1];
    *(undefined8 *)(lVar1 + 0x16) = param_3[2];
    *(undefined8 *)(lVar1 + 0x1e) = param_3[3];
    *(undefined2 *)(lVar1 + 0x26) = *(undefined2 *)(param_3 + 4);
    *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)((longlong)param_3 + 0x22);
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0x2a) = 0;
  *(undefined8 *)(lVar1 + 0x32) = 0;
  *(undefined8 *)(lVar1 + 0x3a) = 0;
  *(undefined8 *)(lVar1 + 0x42) = 0;
  *(undefined4 *)(lVar1 + 0x4a) = 0;
  if (param_4 != (undefined8 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined8 *)(lVar1 + 0x2a) = *param_4;
    *(undefined8 *)(lVar1 + 0x32) = param_4[1];
    *(undefined8 *)(lVar1 + 0x3a) = param_4[2];
    *(undefined8 *)(lVar1 + 0x42) = param_4[3];
    *(undefined2 *)(lVar1 + 0x4a) = *(undefined2 *)(param_4 + 4);
    *(undefined1 *)(lVar1 + 0x4c) = *(undefined1 *)((longlong)param_4 + 0x22);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x50) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x54) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x58) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x5c) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x60) = param_9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 100) = param_10;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x68) = param_11;
  puVar2 = *(undefined2 **)(param_1 + 0x408);
  *puVar2 = 0x6c;
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}



// ============================================================
// Function: FUN_140d12800 @ 140d12800
// ============================================================

undefined8 * FUN_140d12800(undefined8 *param_1,byte param_2)

{
  *param_1 = factionmatch::CMsgFactionMatch::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d12850 @ 140d12850
// ============================================================

CMsg * FUN_140d12850(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = factionmatch::CMsgFactionMatchWitness::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d128a0 @ 140d128a0
// ============================================================

void FUN_140d128a0(undefined8 *param_1)

{
  *param_1 = factionmatch::CMsgFactionMatchWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d128d0 @ 140d128d0
// ============================================================

undefined8 FUN_140d128d0(CMsg *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x91d;
  **(undefined2 **)(param_1 + 0x408) = 0xe;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// ============================================================
// Function: FUN_140d12940 @ 140d12940
// ============================================================

bool FUN_140d12940(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x91d;
}



// ============================================================
// Function: FUN_140d12970 @ 140d12970
// ============================================================

void FUN_140d12970(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  
  if (((param_3 != (longlong *)0x0) && (param_4 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*param_4 + 0xd0))(param_4), cVar2 != '\0')) {
    cVar2 = (**(code **)(*param_4 + 0xe0))(param_4,param_2);
    if (cVar2 == '\0') {
      pIVar3 = theInstance();
      lVar1 = *param_4;
      uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_DIE");
      (**(code **)(lVar1 + 0x10))(param_4,param_2,uVar4);
    }
    else {
      cVar2 = (**(code **)(*param_4 + 0xe8))(param_4,param_2);
      if ((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*param_4 + 0xf0))(param_4,param_2), cVar2 == '\0')) {
        lVar1 = *(longlong *)(param_1 + 0x408);
        if (*(short *)(lVar1 + 4) == 0) {
          (**(code **)(*param_3 + 0x90))(param_3,param_2,*(undefined4 *)(lVar1 + 6));
        }
        else if (*(short *)(lVar1 + 4) == 1) {
          (**(code **)(*param_3 + 0x98))(param_3,param_2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
        }
        else {
          log_InlineLogERROR("CMsgArenicWitness::Process invalid action:%d");
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d12a70 @ 140d12a70
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d12a70(longlong param_1,uint param_2,char *param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140d23350 ^ (ulonglong)auStack_48;
  if (0x3ff < (ulonglong)**(ushort **)(param_1 + 0x408) + 0x14) {
    return (ulonglong)*(ushort **)(param_1 + 0x408) & 0xffffffffffffff00;
  }
  local_28 = (ulonglong)param_2;
  local_20 = 0;
  local_18 = 0;
  if (param_3 != (char *)0x0) {
    tq::SafeCopy((char *)((longlong)&local_28 + 4),param_3,0x10);
  }
  lVar3 = *(longlong *)(param_1 + 0x408);
  lVar4 = (longlong)*(int *)(lVar3 + 10);
  *(ulonglong *)(lVar3 + 0xe + lVar4 * 0x14) = local_28;
  *(undefined8 *)(lVar3 + 0x16 + lVar4 * 0x14) = local_20;
  *(undefined4 *)(lVar3 + 0x1e + lVar4 * 0x14) = local_18;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 10);
  *piVar1 = *piVar1 + 1;
  sVar2 = (*(short **)(param_1 + 0x408))[5];
  **(short **)(param_1 + 0x408) = sVar2 * 0x14 + 0x22;
  return CONCAT71((uint7)(byte)((ushort)(sVar2 * 4) >> 8),1);
}



// ============================================================
// Function: FUN_140d12b50 @ 140d12b50
// ============================================================

undefined8 * FUN_140d12b50(undefined8 *param_1,byte param_2)

{
  *param_1 = factionmatch::CMsgFactionMatchWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d12ba0 @ 140d12ba0
// ============================================================

CMsg * FUN_140d12ba0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = factionmatch::CMsgFMMatch::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d12bf0 @ 140d12bf0
// ============================================================

void FUN_140d12bf0(undefined8 *param_1)

{
  *param_1 = factionmatch::CMsgFMMatch::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d12c20 @ 140d12c20
// ============================================================

undefined8 FUN_140d12c20(CMsg *param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined2 *puVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x91c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x10;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_140d12cb0 @ 140d12cb0
// ============================================================

bool FUN_140d12cb0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x91c;
}



// ============================================================
// Function: FUN_140d12ce0 @ 140d12ce0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d12ce0(longlong param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                       undefined4 param_5,void *param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined8 param_12,undefined8 param_13)

{
  short *psVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  void *pvVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [36];
  undefined1 local_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_140d23350 ^ (ulonglong)auStack_e8;
  psVar1 = *(short **)(param_1 + 0x408);
  if ((ulonglong)(ushort)psVar1[5] * 0x78 + 0x88 < 0x3fd) {
    *psVar1 = psVar1[5] * 0x78 + 0x88;
    memset(&local_b8,0,0x78);
    local_b8 = param_2;
    if (param_4 != (void *)0x0) {
      memmove(local_ac,param_4,0x23);
    }
    if (param_6 != (void *)0x0) {
      memmove(local_88,param_6,0x23);
    }
    local_64 = param_7;
    local_60 = param_8;
    local_5c = param_9;
    local_58 = param_10;
    local_54 = param_11;
    local_50 = param_12;
    local_48 = param_13;
    local_b0 = param_5;
    local_b4 = param_3;
    pvVar3 = memcpy((void *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 10) * 0x78 +
                             0x10 + *(longlong *)(param_1 + 0x408)),&local_b8,0x78);
    uVar2 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
    psVar1 = (short *)(*(longlong *)(param_1 + 0x408) + 10);
    *psVar1 = *psVar1 + 1;
  }
  else {
    local_c8 = 0x3f;
    log_InlineLogERROR(&DAT_140d18368);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d12e90 @ 140d12e90
// ============================================================

undefined8 * FUN_140d12e90(undefined8 *param_1,byte param_2)

{
  *param_1 = factionmatch::CMsgFMMatch::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d12ee0 @ 140d12ee0
// ============================================================

CMsg * FUN_140d12ee0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = factionmatch::CMsgFMRoundRobin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d12f30 @ 140d12f30
// ============================================================

void FUN_140d12f30(undefined8 *param_1)

{
  *param_1 = factionmatch::CMsgFMRoundRobin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d12f60 @ 140d12f60
// ============================================================

undefined8 FUN_140d12f60(CMsg *param_1)

{
  undefined2 *puVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x91b;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 0;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 8;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_140d12fb0 @ 140d12fb0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d12fb0(longlong param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                       undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  short *psVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  void *pvVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [36];
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140d23350 ^ (ulonglong)auStack_a8;
  if ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 4) * 0x50 + 0x58 < 0x3fd) {
    **(short **)(param_1 + 0x408) = (*(short **)(param_1 + 0x408))[2] * 0x50 + 0x58;
    memset(&local_78,0,0x50);
    local_78 = param_2;
    if (param_4 != (void *)0x0) {
      memmove(local_70,param_4,0x23);
    }
    local_4c = param_5;
    local_48 = param_6;
    local_40 = param_7;
    local_38 = param_8;
    local_30 = param_9;
    local_74 = param_3;
    pvVar3 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 8 +
                            (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 4) * 0x50),
                    &local_78,0x50);
    uVar2 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
    psVar1 = (short *)(*(longlong *)(param_1 + 0x408) + 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    local_88 = 0x2b;
    log_InlineLogERROR(&DAT_140d18368);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d13120 @ 140d13120
// ============================================================

bool FUN_140d13120(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x91b;
}



// ============================================================
// Function: FUN_140d13150 @ 140d13150
// ============================================================

undefined8 * FUN_140d13150(undefined8 *param_1,byte param_2)

{
  *param_1 = factionmatch::CMsgFMRoundRobin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d131a0 @ 140d131a0
// ============================================================

CMsg * FUN_140d131a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = factionmatch::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d131f0 @ 140d131f0
// ============================================================

void FUN_140d131f0(undefined8 *param_1)

{
  *param_1 = factionmatch::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d13260 @ 140d13260
// ============================================================

bool FUN_140d13260(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}



// ============================================================
// Function: FUN_140d13290 @ 140d13290
// ============================================================

void FUN_140d13290(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0xb0))(param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140d132b0 @ 140d132b0
// ============================================================

undefined8 * FUN_140d132b0(undefined8 *param_1,byte param_2)

{
  *param_1 = factionmatch::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: Init @ 140d1333a
// ============================================================

void __thiscall tq::CMsg::Init(CMsg *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140d1333a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Init(this);
  return;
}



// ============================================================
// Function: Create @ 140d13340
// ============================================================

bool __thiscall tq::CMsg::Create(CMsg *this,char *param_1,ushort param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



// ============================================================
// Function: __CxxFrameHandler3 @ 140d1336a
// ============================================================

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d1336a. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// ============================================================
// Function: _onexit @ 140d13370
// ============================================================

/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_140d23930);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140d23930);
    local_res18[0] = _decode_pointer(DAT_140d23928);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140d23930 = _encode_pointer(local_res10);
    DAT_140d23928 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// ============================================================
// Function: atexit @ 140d13420
// ============================================================

/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ============================================================
// Function: FID_conflict:`vector_deleting_destructor' @ 140d13454
// ============================================================

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl exception::`vector deleting destructor'(unsigned int)
   __ptr64
    public: virtual void * __ptr64 __cdecl std::exception::`vector deleting destructor'(unsigned
   int) __ptr64
    public: virtual void * __ptr64 __cdecl logic_error::`vector deleting destructor'(unsigned int)
   __ptr64
    public: virtual void * __ptr64 __cdecl type_info::`vector deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2008 Release */

type_info * FID_conflict__vector_deleting_destructor_(type_info *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (param_1,0x18,*(int *)(param_1 + -8),type_info::_type_info_dtor_internal_method);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}



// ============================================================
// Function: what @ 140d134c4
// ============================================================

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d134c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



// ============================================================
// Function: operator_delete @ 140d134ca
// ============================================================

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d134ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ============================================================
// Function: FUN_140d134d8 @ 140d134d8
// ============================================================

undefined8 FUN_140d134d8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  uVar1 = *(uint *)(lVar2 + 4);
  uVar3 = uVar1 & 2;
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    uVar3 = uVar1 & 1;
  }
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return 1;
}



// ============================================================
// Function: __security_check_cookie @ 140d13580
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140d23350) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// ============================================================
// Function: _CxxThrowException @ 140d135b2
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000140d135b2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: operator_new @ 140d135be
// ============================================================

void * __cdecl operator_new(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d135be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// ============================================================
// Function: FUN_140d135cc @ 140d135cc
// ============================================================

undefined8 FUN_140d135cc(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: __ArrayUnwind @ 140d135e8
// ============================================================

/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl __ArrayUnwind(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



// ============================================================
// Function: `eh_vector_destructor_iterator' @ 140d13634
// ============================================================

/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void
   (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  pvVar1 = (void *)(uVar3 * param_2 + (longlong)param_1);
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
  }
  return;
}



// ============================================================
// Function: `eh_vector_constructor_iterator' @ 140d13694
// ============================================================

/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,int,void
   (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4,
          _func_void_void_ptr *param_5)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}



// ============================================================
// Function: memset @ 140d13702
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: _purecall @ 140d13708
// ============================================================

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// ============================================================
// Function: __GSHandlerCheckCommon @ 140d13710
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

longlong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar2 + 3) & 0xf) != 0) {
    lVar1 = (longlong)(int)(*(byte *)(lVar2 + 3) & 0xfffffff0);
  }
  return lVar1;
}



// ============================================================
// Function: __GSHandlerCheck @ 140d13774
// ============================================================

/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}



// ============================================================
// Function: memcpy @ 140d13792
// ============================================================

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// ============================================================
// Function: FUN_140d137a4 @ 140d137a4
// ============================================================

bool FUN_140d137a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140d23928 = _encode_pointer(puVar1);
  DAT_140d23930 = DAT_140d23928;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140d13d58();
    atexit(FUN_140d13d90);
    atexit((_func_5014 *)&LAB_140d13d4c);
  }
  return puVar1 == (undefined8 *)0x0;
}



// ============================================================
// Function: _CRT_INIT @ 140d13804
// ============================================================

/* Library Function - Single Match
    _CRT_INIT
   
   Library: Visual Studio 2008 Release */

undefined8 _CRT_INIT(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *_Memory;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  bVar1 = false;
  if (param_2 == 0) {
    if (DAT_140d2338c < 1) {
      return 0;
    }
    DAT_140d2338c = DAT_140d2338c + -1;
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_140d23918 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140d23918;
        lVar2 = DAT_140d23918;
      }
      DAT_140d23918 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140d1387e;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140d1387e:
    if (DAT_140d23910 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140d23930);
      if (_Memory != (longlong *)0x0) {
        plVar6 = (longlong *)_decode_pointer(DAT_140d23928);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = (code *)_decode_pointer(*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = (longlong *)_decode_pointer(DAT_140d23930);
            plVar11 = (longlong *)_decode_pointer(DAT_140d23928);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_140d23928 = _encoded_null();
        DAT_140d23930 = DAT_140d23928;
      }
      DAT_140d23910 = 0;
      if (!bVar1) {
        LOCK();
        DAT_140d23918 = 0;
        UNLOCK();
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  else if (param_2 == 1) {
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_140d23918 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140d23918;
        lVar2 = DAT_140d23918;
      }
      DAT_140d23918 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140d139a7;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140d139a7:
    if (DAT_140d23910 == 0) {
      DAT_140d23910 = 1;
      iVar3 = _initterm_e(&DAT_140d18268,&DAT_140d18278);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_140d18258,&DAT_140d18260);
      DAT_140d23910 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_140d23918 = 0;
      UNLOCK();
    }
    if ((DAT_140d23920 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140d23920), BVar4 != 0)) {
      (*DAT_140d23920)(param_1,2,param_3);
    }
    DAT_140d2338c = DAT_140d2338c + 1;
  }
  return 1;
}



// ============================================================
// Function: __DllMainCRTStartup @ 140d13a60
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_140d2338c == 0)) {
    uVar4 = 0;
  }
  else {
    _DAT_140d23360 = param_2;
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_140d1b728 != (undefined *)0x0) {
        iVar1 = (*(code *)PTR_140d1b728)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        uVar3 = _CRT_INIT(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        _DAT_140d23360 = 0xffffffff;
        return 0;
      }
    }
    uVar3 = FUN_140d11ad0();
    uVar4 = (uint)uVar3;
    if ((param_2 == 1) && (uVar4 == 0)) {
      FUN_140d11ad0();
      _CRT_INIT(param_1,0,param_3);
      if (PTR_140d1b728 != (undefined *)0x0) {
        (*(code *)PTR_140d1b728)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = _CRT_INIT(param_1,param_2,param_3);
      uVar4 = -(uint)((int)uVar3 != 0) & uVar4;
      if ((uVar4 != 0) && (PTR_140d1b728 != (undefined *)0x0)) {
        uVar4 = (*(code *)PTR_140d1b728)(param_1,param_2,param_3);
      }
    }
  }
  _DAT_140d23360 = 0xffffffff;
  return uVar4;
}



// ============================================================
// Function: entry @ 140d13b98
// ============================================================

void entry(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  __DllMainCRTStartup(param_1,param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: _unlock @ 140d13bdc
// ============================================================

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



// ============================================================
// Function: __dllonexit @ 140d13be2
// ============================================================

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



// ============================================================
// Function: _lock @ 140d13bee
// ============================================================

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



// ============================================================
// Function: __report_gsfailure @ 140d13bfc
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_140d23430);
  local_30 = DAT_140d23528;
  local_38 = RtlLookupFunctionEntry(DAT_140d23528,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140d234c8 = local_res8;
    DAT_140d23528 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140d23430,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140d233a0 = DAT_140d23528;
  _DAT_140d234b0 = local_res8[0];
  _DAT_140d23390 = 0xc0000409;
  _DAT_140d23394 = 1;
  local_20 = DAT_140d23350;
  local_18 = DAT_140d23358;
  DAT_140d23428 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140d1b730);
  if (DAT_140d23428 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// ============================================================
// Function: terminate @ 140d13d46
// ============================================================

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13d46. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: FUN_140d13d58 @ 140d13d58
// ============================================================

void FUN_140d13d58(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140d1bfe8; puVar1 < &DAT_140d1bfe8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d13d90 @ 140d13d90
// ============================================================

void FUN_140d13d90(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140d1bff8; puVar1 < &DAT_140d1bff8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: _ValidateImageBase @ 140d13dd0
// ============================================================

/* Library Function - Single Match
    _ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                  0x20b);
  }
  return uVar1;
}



// ============================================================
// Function: _FindPESection @ 140d13e00
// ============================================================

/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// ============================================================
// Function: _IsNonwritableInCurrentImage @ 140d13e50
// ============================================================

/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140d00000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140d00000);
  uVar2 = 0;
  if (BVar1 != 0) {
    p_Var3 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}



// ============================================================
// Function: _initterm @ 140d13e92
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 140d13e98
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: _amsg_exit @ 140d13eaa
// ============================================================

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



// ============================================================
// Function: __CppXcptFilter @ 140d13eb0
// ============================================================

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// ============================================================
// Function: __security_init_cookie @ 140d13eb8
// ============================================================

/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_140d23350 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140d23350 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140d23350 == 0x2b992ddfa232) {
      DAT_140d23350 = 0x2b992ddfa233;
    }
  }
  DAT_140d23358 = ~DAT_140d23350;
  return;
}



// ============================================================
// Function: _type_info_dtor_internal_method @ 140d13f6c
// ============================================================

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



// ============================================================
// Function: __crt_debugger_hook @ 140d13f72
// ============================================================

void __cdecl __crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d13f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crt_debugger_hook(param_1);
  return;
}



// ============================================================
// Function: RtlVirtualUnwind @ 140d13fa2
// ============================================================

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



// ============================================================
// Function: RtlLookupFunctionEntry @ 140d13fa8
// ============================================================

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d13fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// ============================================================
// Function: Unwind@140d13fe0 @ 140d13fe0
// ============================================================

void Unwind_140d13fe0(void)

{
  DAT_140d23378 = DAT_140d23378 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14000 @ 140d14000
// ============================================================

void Unwind_140d14000(void)

{
  DAT_140d23378 = DAT_140d23378 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14020 @ 140d14020
// ============================================================

void Unwind_140d14020(void)

{
  DAT_140d23378 = DAT_140d23378 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14040 @ 140d14040
// ============================================================

void Unwind_140d14040(void)

{
  DAT_140d23378 = DAT_140d23378 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14060 @ 140d14060
// ============================================================

void Unwind_140d14060(void)

{
  DAT_140d23378 = DAT_140d23378 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14080 @ 140d14080
// ============================================================

void Unwind_140d14080(undefined8 param_1,longlong param_2)

{
  FUN_140d01630(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Catch@140d140a0 @ 140d140a0
// ============================================================

undefined * Catch_140d140a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return &DAT_140d018b4;
}



// ============================================================
// Function: Unwind@140d140e0 @ 140d140e0
// ============================================================

void Unwind_140d140e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14100 @ 140d14100
// ============================================================

void Unwind_140d14100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14120 @ 140d14120
// ============================================================

void Unwind_140d14120(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14140 @ 140d14140
// ============================================================

void Unwind_140d14140(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14160 @ 140d14160
// ============================================================

void Unwind_140d14160(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14180 @ 140d14180
// ============================================================

void Unwind_140d14180(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d141a0 @ 140d141a0
// ============================================================

void Unwind_140d141a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d141c0 @ 140d141c0
// ============================================================

void Unwind_140d141c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d141e0 @ 140d141e0
// ============================================================

void Unwind_140d141e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14200 @ 140d14200
// ============================================================

void Unwind_140d14200(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14220 @ 140d14220
// ============================================================

void Unwind_140d14220(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14240 @ 140d14240
// ============================================================

void Unwind_140d14240(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14260 @ 140d14260
// ============================================================

void Unwind_140d14260(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14280 @ 140d14280
// ============================================================

void Unwind_140d14280(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d142a0 @ 140d142a0
// ============================================================

void Unwind_140d142a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d142c0 @ 140d142c0
// ============================================================

void Unwind_140d142c0(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d142e0 @ 140d142e0
// ============================================================

void Unwind_140d142e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14300 @ 140d14300
// ============================================================

void Unwind_140d14300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14320 @ 140d14320
// ============================================================

void Unwind_140d14320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14340 @ 140d14340
// ============================================================

void Unwind_140d14340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14360 @ 140d14360
// ============================================================

void Unwind_140d14360(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14380 @ 140d14380
// ============================================================

void Unwind_140d14380(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d143a0 @ 140d143a0
// ============================================================

void Unwind_140d143a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d143c0 @ 140d143c0
// ============================================================

void Unwind_140d143c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d143e0 @ 140d143e0
// ============================================================

void Unwind_140d143e0(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14400 @ 140d14400
// ============================================================

void Unwind_140d14400(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14420 @ 140d14420
// ============================================================

void Unwind_140d14420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Catch@140d14440 @ 140d14440
// ============================================================

undefined * Catch_140d14440(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::IsAllFinalMatchOver crash. @%s,%d");
  return &DAT_140d021a4;
}



// ============================================================
// Function: Catch@140d14480 @ 140d14480
// ============================================================

undefined8 Catch_140d14480(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnAllFinalMatchOver crash. @%s,%d");
  return 0x140d02212;
}



// ============================================================
// Function: Catch@140d144c0 @ 140d144c0
// ============================================================

undefined * Catch_140d144c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::IsAllRoundMatchOver crash. @%s,%d");
  return &DAT_140d022b4;
}



// ============================================================
// Function: Catch@140d14500 @ 140d14500
// ============================================================

undefined8 Catch_140d14500(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::AddMatchPointOnce crash. @%s,%d");
  return 0x140d023be;
}



// ============================================================
// Function: Catch@140d14540 @ 140d14540
// ============================================================

undefined * Catch_140d14540(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::FetchFinalMatchResult crash. @%s,%d");
  return &DAT_140d0262c;
}



// ============================================================
// Function: Unwind@140d14580 @ 140d14580
// ============================================================

void Unwind_140d14580(undefined8 param_1,longlong param_2)

{
  FUN_140d12570((undefined8 *)(param_2 + 0x490));
  return;
}



// ============================================================
// Function: Unwind@140d145a0 @ 140d145a0
// ============================================================

void Unwind_140d145a0(undefined8 param_1,longlong param_2)

{
  FUN_140d12570((undefined8 *)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Catch@140d145c0 @ 140d145c0
// ============================================================

undefined8 Catch_140d145c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::BroadcastMatchBattleInfo crash. @%s,%d");
  return 0x140d02acf;
}



// ============================================================
// Function: Catch@140d14600 @ 140d14600
// ============================================================

undefined8 Catch_140d14600(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::IsInvited crash. @%s,%d");
  return 0x140d02c10;
}



// ============================================================
// Function: Catch@140d14640 @ 140d14640
// ============================================================

undefined8 Catch_140d14640(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::DecMemberCount crash. @%s,%d");
  return 0x140d02e6c;
}



// ============================================================
// Function: Catch@140d14680 @ 140d14680
// ============================================================

undefined8 Catch_140d14680(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnOneMatchBegin crash. @%s,%d");
  return 0x140d02efd;
}



// ============================================================
// Function: Unwind@140d146c0 @ 140d146c0
// ============================================================

void Unwind_140d146c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d146e0 @ 140d146e0
// ============================================================

void Unwind_140d146e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d14700 @ 140d14700
// ============================================================

void Unwind_140d14700(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d14720 @ 140d14720
// ============================================================

void Unwind_140d14720(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d14740 @ 140d14740
// ============================================================

void Unwind_140d14740(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14760 @ 140d14760
// ============================================================

void Unwind_140d14760(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d14780 @ 140d14780
// ============================================================

void Unwind_140d14780(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d147a0 @ 140d147a0
// ============================================================

void Unwind_140d147a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d147c0 @ 140d147c0
// ============================================================

void Unwind_140d147c0(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d147e0 @ 140d147e0
// ============================================================

void Unwind_140d147e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14800 @ 140d14800
// ============================================================

void Unwind_140d14800(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d14820 @ 140d14820
// ============================================================

void Unwind_140d14820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d14840 @ 140d14840
// ============================================================

void Unwind_140d14840(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d14860 @ 140d14860
// ============================================================

void Unwind_140d14860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14880 @ 140d14880
// ============================================================

void Unwind_140d14880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d148a0 @ 140d148a0
// ============================================================

void Unwind_140d148a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d148c0 @ 140d148c0
// ============================================================

void Unwind_140d148c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d148e0 @ 140d148e0
// ============================================================

void Unwind_140d148e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14900 @ 140d14900
// ============================================================

void Unwind_140d14900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14920 @ 140d14920
// ============================================================

void Unwind_140d14920(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14940 @ 140d14940
// ============================================================

void Unwind_140d14940(void)

{
  DAT_140d23388 = DAT_140d23388 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14960 @ 140d14960
// ============================================================

void Unwind_140d14960(void)

{
  DAT_140d23388 = DAT_140d23388 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d14980 @ 140d14980
// ============================================================

void Unwind_140d14980(void)

{
  DAT_140d23388 = DAT_140d23388 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d149a0 @ 140d149a0
// ============================================================

void Unwind_140d149a0(void)

{
  DAT_140d23388 = DAT_140d23388 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d149c0 @ 140d149c0
// ============================================================

void Unwind_140d149c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d149e0 @ 140d149e0
// ============================================================

void Unwind_140d149e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14a00 @ 140d14a00
// ============================================================

void Unwind_140d14a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14a20 @ 140d14a20
// ============================================================

void Unwind_140d14a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14a40 @ 140d14a40
// ============================================================

void Unwind_140d14a40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14a60 @ 140d14a60
// ============================================================

void Unwind_140d14a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d14a80 @ 140d14a80
// ============================================================

void Unwind_140d14a80(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14aa0 @ 140d14aa0
// ============================================================

void Unwind_140d14aa0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14ac0 @ 140d14ac0
// ============================================================

void Unwind_140d14ac0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14ae0 @ 140d14ae0
// ============================================================

void Unwind_140d14ae0(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14b00 @ 140d14b00
// ============================================================

void Unwind_140d14b00(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14b20 @ 140d14b20
// ============================================================

void Unwind_140d14b20(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14b40 @ 140d14b40
// ============================================================

void Unwind_140d14b40(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14b60 @ 140d14b60
// ============================================================

void Unwind_140d14b60(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14b80 @ 140d14b80
// ============================================================

void Unwind_140d14b80(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14ba0 @ 140d14ba0
// ============================================================

void Unwind_140d14ba0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Catch@140d14bc0 @ 140d14bc0
// ============================================================

void Catch_140d14bc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d14bf0 @ 140d14bf0
// ============================================================

void Unwind_140d14bf0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Catch@140d14c10 @ 140d14c10
// ============================================================

void Catch_140d14c10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d14c40 @ 140d14c40
// ============================================================

void Unwind_140d14c40(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Catch@140d14c60 @ 140d14c60
// ============================================================

void Catch_140d14c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d14c90 @ 140d14c90
// ============================================================

void Unwind_140d14c90(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Catch@140d14cb0 @ 140d14cb0
// ============================================================

void Catch_140d14cb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140d14ce0 @ 140d14ce0
// ============================================================

void Catch_140d14ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140d14d10 @ 140d14d10
// ============================================================

void Catch_140d14d10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d14d40 @ 140d14d40
// ============================================================

void Unwind_140d14d40(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14d60 @ 140d14d60
// ============================================================

void Unwind_140d14d60(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14d80 @ 140d14d80
// ============================================================

void Unwind_140d14d80(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14da0 @ 140d14da0
// ============================================================

void Unwind_140d14da0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14dc0 @ 140d14dc0
// ============================================================

void Unwind_140d14dc0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14de0 @ 140d14de0
// ============================================================

void Unwind_140d14de0(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14e00 @ 140d14e00
// ============================================================

void Unwind_140d14e00(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14e20 @ 140d14e20
// ============================================================

void Unwind_140d14e20(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14e40 @ 140d14e40
// ============================================================

void Unwind_140d14e40(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14e60 @ 140d14e60
// ============================================================

void Unwind_140d14e60(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14e80 @ 140d14e80
// ============================================================

void Unwind_140d14e80(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14ea0 @ 140d14ea0
// ============================================================

void Unwind_140d14ea0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14ec0 @ 140d14ec0
// ============================================================

void Unwind_140d14ec0(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14ee0 @ 140d14ee0
// ============================================================

void Unwind_140d14ee0(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14f00 @ 140d14f00
// ============================================================

void Unwind_140d14f00(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14f20 @ 140d14f20
// ============================================================

void Unwind_140d14f20(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14f40 @ 140d14f40
// ============================================================

void Unwind_140d14f40(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d14f60 @ 140d14f60
// ============================================================

void Unwind_140d14f60(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d14f80 @ 140d14f80
// ============================================================

void Unwind_140d14f80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d14fa0 @ 140d14fa0
// ============================================================

void Unwind_140d14fa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d14fc0 @ 140d14fc0
// ============================================================

void Unwind_140d14fc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d14fe0 @ 140d14fe0
// ============================================================

void Unwind_140d14fe0(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d15000 @ 140d15000
// ============================================================

void Unwind_140d15000(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15020 @ 140d15020
// ============================================================

void Unwind_140d15020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d15040 @ 140d15040
// ============================================================

void Unwind_140d15040(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15060 @ 140d15060
// ============================================================

void Unwind_140d15060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d15080 @ 140d15080
// ============================================================

void Unwind_140d15080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d150a0 @ 140d150a0
// ============================================================

void Unwind_140d150a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d150c0 @ 140d150c0
// ============================================================

void Unwind_140d150c0(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d150e0 @ 140d150e0
// ============================================================

void Unwind_140d150e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d15100 @ 140d15100
// ============================================================

void Unwind_140d15100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d15120 @ 140d15120
// ============================================================

void Unwind_140d15120(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d15140 @ 140d15140
// ============================================================

void Unwind_140d15140(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d15160 @ 140d15160
// ============================================================

void Unwind_140d15160(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15180 @ 140d15180
// ============================================================

void Unwind_140d15180(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d151a0 @ 140d151a0
// ============================================================

void Unwind_140d151a0(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d151c0 @ 140d151c0
// ============================================================

void Unwind_140d151c0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d151e0 @ 140d151e0
// ============================================================

void Unwind_140d151e0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15200 @ 140d15200
// ============================================================

void Unwind_140d15200(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15220 @ 140d15220
// ============================================================

void Unwind_140d15220(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15240 @ 140d15240
// ============================================================

void Unwind_140d15240(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15260 @ 140d15260
// ============================================================

void Unwind_140d15260(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15280 @ 140d15280
// ============================================================

void Unwind_140d15280(undefined8 param_1,longlong param_2)

{
  FUN_140d06780((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140d152a0 @ 140d152a0
// ============================================================

void Unwind_140d152a0(undefined8 param_1,longlong param_2)

{
  FUN_140d06780((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d152c0 @ 140d152c0
// ============================================================

void Unwind_140d152c0(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140d152e0 @ 140d152e0
// ============================================================

void Unwind_140d152e0(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140d15300 @ 140d15300
// ============================================================

void Unwind_140d15300(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15320 @ 140d15320
// ============================================================

void Unwind_140d15320(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15340 @ 140d15340
// ============================================================

void Unwind_140d15340(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15360 @ 140d15360
// ============================================================

void Unwind_140d15360(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15380 @ 140d15380
// ============================================================

void Unwind_140d15380(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d153a0 @ 140d153a0
// ============================================================

void Unwind_140d153a0(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d153c0 @ 140d153c0
// ============================================================

void Unwind_140d153c0(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d153e0 @ 140d153e0
// ============================================================

void Unwind_140d153e0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15400 @ 140d15400
// ============================================================

void Unwind_140d15400(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15420 @ 140d15420
// ============================================================

void Unwind_140d15420(undefined8 param_1,longlong param_2)

{
  FUN_140d05820(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15440 @ 140d15440
// ============================================================

void Unwind_140d15440(undefined8 param_1,longlong param_2)

{
  FUN_140d05820(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15460 @ 140d15460
// ============================================================

void Unwind_140d15460(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15480 @ 140d15480
// ============================================================

void Unwind_140d15480(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d154a0 @ 140d154a0
// ============================================================

void Unwind_140d154a0(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d154c0 @ 140d154c0
// ============================================================

void Unwind_140d154c0(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d154e0 @ 140d154e0
// ============================================================

void Unwind_140d154e0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15500 @ 140d15500
// ============================================================

void Unwind_140d15500(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15520 @ 140d15520
// ============================================================

void Unwind_140d15520(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15540 @ 140d15540
// ============================================================

void Unwind_140d15540(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15560 @ 140d15560
// ============================================================

void Unwind_140d15560(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15580 @ 140d15580
// ============================================================

void Unwind_140d15580(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d155a0 @ 140d155a0
// ============================================================

void Unwind_140d155a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d155c0 @ 140d155c0
// ============================================================

void Unwind_140d155c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d155e0 @ 140d155e0
// ============================================================

void Unwind_140d155e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d15600 @ 140d15600
// ============================================================

void Unwind_140d15600(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d15620 @ 140d15620
// ============================================================

void Unwind_140d15620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d15640 @ 140d15640
// ============================================================

void Unwind_140d15640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d15660 @ 140d15660
// ============================================================

void Unwind_140d15660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d15680 @ 140d15680
// ============================================================

void Unwind_140d15680(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d156a0 @ 140d156a0
// ============================================================

void Unwind_140d156a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d156c0 @ 140d156c0
// ============================================================

void Unwind_140d156c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d156e0 @ 140d156e0
// ============================================================

void Unwind_140d156e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d15700 @ 140d15700
// ============================================================

void Unwind_140d15700(undefined8 param_1,longlong param_2)

{
  FUN_140d01b00((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d15720 @ 140d15720
// ============================================================

void Unwind_140d15720(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15740 @ 140d15740
// ============================================================

void Unwind_140d15740(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15760 @ 140d15760
// ============================================================

void Unwind_140d15760(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15780 @ 140d15780
// ============================================================

void Unwind_140d15780(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d157a0 @ 140d157a0
// ============================================================

void Unwind_140d157a0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d157c0 @ 140d157c0
// ============================================================

void Unwind_140d157c0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d157e0 @ 140d157e0
// ============================================================

void Unwind_140d157e0(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15800 @ 140d15800
// ============================================================

void Unwind_140d15800(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15820 @ 140d15820
// ============================================================

void Unwind_140d15820(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15840 @ 140d15840
// ============================================================

void Unwind_140d15840(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15860 @ 140d15860
// ============================================================

void Unwind_140d15860(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15880 @ 140d15880
// ============================================================

void Unwind_140d15880(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d158a0 @ 140d158a0
// ============================================================

void Unwind_140d158a0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d158c0 @ 140d158c0
// ============================================================

void Unwind_140d158c0(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140d158e0 @ 140d158e0
// ============================================================

void Unwind_140d158e0(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140d15900 @ 140d15900
// ============================================================

void Unwind_140d15900(undefined8 param_1,longlong param_2)

{
  FUN_140d06780((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140d15920 @ 140d15920
// ============================================================

void Unwind_140d15920(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15940 @ 140d15940
// ============================================================

void Unwind_140d15940(undefined8 param_1,longlong param_2)

{
  FUN_140d047b0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140d15960 @ 140d15960
// ============================================================

void Unwind_140d15960(undefined8 param_1,longlong param_2)

{
  FUN_140d05800(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140d15980 @ 140d15980
// ============================================================

void Unwind_140d15980(undefined8 param_1,longlong param_2)

{
  FUN_140d06780((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d159a0 @ 140d159a0
// ============================================================

void Unwind_140d159a0(undefined8 param_1,longlong param_2)

{
  FUN_140d12570((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d159c0 @ 140d159c0
// ============================================================

void Unwind_140d159c0(undefined8 param_1,longlong param_2)

{
  FUN_140d12bf0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d159e0 @ 140d159e0
// ============================================================

void Unwind_140d159e0(undefined8 param_1,longlong param_2)

{
  FUN_140d12f30((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d15a00 @ 140d15a00
// ============================================================

void Unwind_140d15a00(undefined8 param_1,longlong param_2)

{
  FUN_140d12bf0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Catch@140d15a20 @ 140d15a20
// ============================================================

undefined8 Catch_140d15a20(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::SendFactionMatchInfo crash. @%s,%d");
  return 0x140d0a542;
}



// ============================================================
// Function: Catch@140d15a60 @ 140d15a60
// ============================================================

undefined8 Catch_140d15a60(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ClearFacitonMatchData crash. @%s,%d");
  return 0x140d0a69d;
}



// ============================================================
// Function: Catch@140d15aa0 @ 140d15aa0
// ============================================================

undefined8 Catch_140d15aa0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ProcessCrossDayEvent crash. @%s,%d");
  return 0x140d0a74f;
}



// ============================================================
// Function: Catch@140d15ae0 @ 140d15ae0
// ============================================================

undefined8 Catch_140d15ae0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::HaveMatchToday crash. @%s,%d");
  return 0x140d0a9ad;
}



// ============================================================
// Function: Unwind@140d15b20 @ 140d15b20
// ============================================================

void Unwind_140d15b20(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15b40 @ 140d15b40
// ============================================================

void Unwind_140d15b40(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15b60 @ 140d15b60
// ============================================================

void Unwind_140d15b60(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15b80 @ 140d15b80
// ============================================================

void Unwind_140d15b80(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15ba0 @ 140d15ba0
// ============================================================

void Unwind_140d15ba0(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15bc0 @ 140d15bc0
// ============================================================

void Unwind_140d15bc0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15be0 @ 140d15be0
// ============================================================

void Unwind_140d15be0(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15c00 @ 140d15c00
// ============================================================

void Unwind_140d15c00(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15c20 @ 140d15c20
// ============================================================

void Unwind_140d15c20(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15c40 @ 140d15c40
// ============================================================

void Unwind_140d15c40(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15c60 @ 140d15c60
// ============================================================

void Unwind_140d15c60(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15c80 @ 140d15c80
// ============================================================

void Unwind_140d15c80(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140d15ca0 @ 140d15ca0
// ============================================================

void Catch_140d15ca0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140d15cd0 @ 140d15cd0
// ============================================================

void Catch_140d15cd0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d15cf0 @ 140d15cf0
// ============================================================

void Unwind_140d15cf0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15d10 @ 140d15d10
// ============================================================

void Unwind_140d15d10(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15d30 @ 140d15d30
// ============================================================

void Unwind_140d15d30(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15d50 @ 140d15d50
// ============================================================

void Unwind_140d15d50(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15d70 @ 140d15d70
// ============================================================

void Unwind_140d15d70(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15d90 @ 140d15d90
// ============================================================

void Unwind_140d15d90(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15db0 @ 140d15db0
// ============================================================

void Unwind_140d15db0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15dd0 @ 140d15dd0
// ============================================================

void Unwind_140d15dd0(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15df0 @ 140d15df0
// ============================================================

void Unwind_140d15df0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15e10 @ 140d15e10
// ============================================================

void Unwind_140d15e10(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15e30 @ 140d15e30
// ============================================================

void Unwind_140d15e30(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d15e50 @ 140d15e50
// ============================================================

void Unwind_140d15e50(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15e70 @ 140d15e70
// ============================================================

void Unwind_140d15e70(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15e90 @ 140d15e90
// ============================================================

void Unwind_140d15e90(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d15eb0 @ 140d15eb0
// ============================================================

void Unwind_140d15eb0(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140d15ed0 @ 140d15ed0
// ============================================================

void Catch_140d15ed0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140d15f00 @ 140d15f00
// ============================================================

void Catch_140d15f00(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140d15f20 @ 140d15f20
// ============================================================

undefined8 Catch_140d15f20(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::SetRoundMatchResult crash. @%s,%d");
  return 0x140d0bec7;
}



// ============================================================
// Function: Catch@140d15f60 @ 140d15f60
// ============================================================

undefined8 Catch_140d15f60(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::AddRoundMatchPoint crash. @%s,%d");
  return 0x140d0bff9;
}



// ============================================================
// Function: Catch@140d15fa0 @ 140d15fa0
// ============================================================

undefined * Catch_140d15fa0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnOneMatchOver DistributeSynMeed crash. @%s,%d");
  return &DAT_140d0c1eb;
}



// ============================================================
// Function: Catch@140d15fe0 @ 140d15fe0
// ============================================================

undefined8 Catch_140d15fe0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnOneMatchOver ProcessAwardCompete crash. @%s,%d");
  return 0x140d0c223;
}



// ============================================================
// Function: Catch@140d16020 @ 140d16020
// ============================================================

undefined8 Catch_140d16020(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnOneMatchOver crash. @%s,%d");
  return 0x140d0c223;
}



// ============================================================
// Function: Unwind@140d16060 @ 140d16060
// ============================================================

void Unwind_140d16060(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16080 @ 140d16080
// ============================================================

void Unwind_140d16080(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d160a0 @ 140d160a0
// ============================================================

void Unwind_140d160a0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d160c0 @ 140d160c0
// ============================================================

void Unwind_140d160c0(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d160e0 @ 140d160e0
// ============================================================

void Unwind_140d160e0(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16100 @ 140d16100
// ============================================================

void Unwind_140d16100(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16120 @ 140d16120
// ============================================================

void Unwind_140d16120(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16140 @ 140d16140
// ============================================================

void Unwind_140d16140(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16160 @ 140d16160
// ============================================================

void Unwind_140d16160(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16180 @ 140d16180
// ============================================================

void Unwind_140d16180(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d161a0 @ 140d161a0
// ============================================================

void Unwind_140d161a0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d161c0 @ 140d161c0
// ============================================================

void Unwind_140d161c0(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d161e0 @ 140d161e0
// ============================================================

void Unwind_140d161e0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16200 @ 140d16200
// ============================================================

void Unwind_140d16200(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16220 @ 140d16220
// ============================================================

void Unwind_140d16220(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16240 @ 140d16240
// ============================================================

void Unwind_140d16240(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16260 @ 140d16260
// ============================================================

void Unwind_140d16260(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16280 @ 140d16280
// ============================================================

void Unwind_140d16280(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d162a0 @ 140d162a0
// ============================================================

void Unwind_140d162a0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d162c0 @ 140d162c0
// ============================================================

void Unwind_140d162c0(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d162e0 @ 140d162e0
// ============================================================

void Unwind_140d162e0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16300 @ 140d16300
// ============================================================

void Unwind_140d16300(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16320 @ 140d16320
// ============================================================

void Unwind_140d16320(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16340 @ 140d16340
// ============================================================

void Unwind_140d16340(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16360 @ 140d16360
// ============================================================

void Unwind_140d16360(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16380 @ 140d16380
// ============================================================

void Unwind_140d16380(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d163a0 @ 140d163a0
// ============================================================

void Unwind_140d163a0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d163c0 @ 140d163c0
// ============================================================

void Unwind_140d163c0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d163e0 @ 140d163e0
// ============================================================

void Unwind_140d163e0(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16400 @ 140d16400
// ============================================================

void Unwind_140d16400(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16420 @ 140d16420
// ============================================================

void Unwind_140d16420(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16440 @ 140d16440
// ============================================================

void Unwind_140d16440(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16460 @ 140d16460
// ============================================================

void Unwind_140d16460(undefined8 param_1,longlong param_2)

{
  FUN_140d0b210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16480 @ 140d16480
// ============================================================

void Unwind_140d16480(undefined8 param_1,longlong param_2)

{
  FUN_140d0c460(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d164a0 @ 140d164a0
// ============================================================

void Unwind_140d164a0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d164c0 @ 140d164c0
// ============================================================

void Unwind_140d164c0(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d164e0 @ 140d164e0
// ============================================================

void Unwind_140d164e0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16500 @ 140d16500
// ============================================================

void Unwind_140d16500(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16520 @ 140d16520
// ============================================================

void Unwind_140d16520(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16540 @ 140d16540
// ============================================================

void Unwind_140d16540(undefined8 param_1,longlong param_2)

{
  FUN_140d0c490(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16560 @ 140d16560
// ============================================================

void Unwind_140d16560(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16580 @ 140d16580
// ============================================================

void Unwind_140d16580(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d165a0 @ 140d165a0
// ============================================================

void Unwind_140d165a0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d165c0 @ 140d165c0
// ============================================================

void Unwind_140d165c0(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d165e0 @ 140d165e0
// ============================================================

void Unwind_140d165e0(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16600 @ 140d16600
// ============================================================

void Unwind_140d16600(undefined8 param_1,longlong param_2)

{
  FUN_140d0c4c0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16620 @ 140d16620
// ============================================================

void Unwind_140d16620(undefined8 param_1,longlong param_2)

{
  FUN_140d0b210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16640 @ 140d16640
// ============================================================

void Unwind_140d16640(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16660 @ 140d16660
// ============================================================

void Unwind_140d16660(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16680 @ 140d16680
// ============================================================

void Unwind_140d16680(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d166a0 @ 140d166a0
// ============================================================

void Unwind_140d166a0(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d166c0 @ 140d166c0
// ============================================================

void Unwind_140d166c0(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca00((longlong *)(*(longlong *)(param_2 + 0xb0) + 8));
  return;
}



// ============================================================
// Function: Unwind@140d166e0 @ 140d166e0
// ============================================================

void Unwind_140d166e0(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca30((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140d16700 @ 140d16700
// ============================================================

void Unwind_140d16700(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca60((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x88));
  return;
}



// ============================================================
// Function: Unwind@140d16730 @ 140d16730
// ============================================================

void Unwind_140d16730(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0xb0) + 200),0x90,4,FUN_140d08030);
  return;
}



// ============================================================
// Function: Unwind@140d16770 @ 140d16770
// ============================================================

void Unwind_140d16770(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0xb0) + 0x308),0x90,4,FUN_140d08030);
  return;
}



// ============================================================
// Function: Unwind@140d167b0 @ 140d167b0
// ============================================================

void Unwind_140d167b0(undefined8 param_1,longlong param_2)

{
  FUN_140d0c4c0(*(longlong **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d167d0 @ 140d167d0
// ============================================================

void Unwind_140d167d0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b210(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d167f0 @ 140d167f0
// ============================================================

void Unwind_140d167f0(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16810 @ 140d16810
// ============================================================

void Unwind_140d16810(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16830 @ 140d16830
// ============================================================

void Unwind_140d16830(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16850 @ 140d16850
// ============================================================

void Unwind_140d16850(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16870 @ 140d16870
// ============================================================

void Unwind_140d16870(undefined8 param_1,longlong param_2)

{
  FUN_140d0c490(*(longlong **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16890 @ 140d16890
// ============================================================

void Unwind_140d16890(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1f0(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d168b0 @ 140d168b0
// ============================================================

void Unwind_140d168b0(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d168d0 @ 140d168d0
// ============================================================

void Unwind_140d168d0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d168f0 @ 140d168f0
// ============================================================

void Unwind_140d168f0(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16910 @ 140d16910
// ============================================================

void Unwind_140d16910(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@140d16930 @ 140d16930
// ============================================================

void Unwind_140d16930(undefined8 param_1,longlong param_2)

{
  FUN_140d0c460(*(longlong **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d16950 @ 140d16950
// ============================================================

void Unwind_140d16950(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1d0(*(undefined8 **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d16970 @ 140d16970
// ============================================================

void Unwind_140d16970(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d16990 @ 140d16990
// ============================================================

void Unwind_140d16990(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d169b0 @ 140d169b0
// ============================================================

void Unwind_140d169b0(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140d169d0 @ 140d169d0
// ============================================================

void Unwind_140d169d0(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Catch@140d169f0 @ 140d169f0
// ============================================================

undefined8 Catch_140d169f0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ProcessFinalMatchFastOver crash. @%s,%d");
  return 0x140d0cf7f;
}



// ============================================================
// Function: Catch@140d16a30 @ 140d16a30
// ============================================================

undefined8 Catch_140d16a30(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ProcessFinalMatchOver crash. @%s,%d");
  return 0x140d0d1d9;
}



// ============================================================
// Function: Catch@140d16a70 @ 140d16a70
// ============================================================

undefined8 Catch_140d16a70(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ProcessRoundMatchFastOver crash. @%s,%d");
  return 0x140d0d4c1;
}



// ============================================================
// Function: Catch@140d16ab0 @ 140d16ab0
// ============================================================

undefined8 Catch_140d16ab0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ProcessRoundMatchOver crash. @%s,%d");
  return 0x140d0d7f7;
}



// ============================================================
// Function: Unwind@140d16af0 @ 140d16af0
// ============================================================

void Unwind_140d16af0(undefined8 param_1,longlong param_2)

{
  FUN_140d12570((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Catch@140d16b10 @ 140d16b10
// ============================================================

undefined8 Catch_140d16b10(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::SendMatchBattleInfoToUser crash. @%s,%d");
  return 0x140d0da82;
}



// ============================================================
// Function: Unwind@140d16b50 @ 140d16b50
// ============================================================

void Unwind_140d16b50(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16b70 @ 140d16b70
// ============================================================

void Unwind_140d16b70(undefined8 param_1,longlong param_2)

{
  FUN_140d047e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16b90 @ 140d16b90
// ============================================================

void Unwind_140d16b90(undefined8 param_1,longlong param_2)

{
  FUN_140d05840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16bb0 @ 140d16bb0
// ============================================================

void Unwind_140d16bb0(undefined8 param_1,longlong param_2)

{
  FUN_140d06a30(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16bd0 @ 140d16bd0
// ============================================================

void Unwind_140d16bd0(undefined8 param_1,longlong param_2)

{
  FUN_140d08980(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16bf0 @ 140d16bf0
// ============================================================

void Unwind_140d16bf0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16c10 @ 140d16c10
// ============================================================

void Unwind_140d16c10(undefined8 param_1,longlong param_2)

{
  FUN_140d0c460(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16c30 @ 140d16c30
// ============================================================

void Unwind_140d16c30(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16c50 @ 140d16c50
// ============================================================

void Unwind_140d16c50(undefined8 param_1,longlong param_2)

{
  FUN_140d04810(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16c70 @ 140d16c70
// ============================================================

void Unwind_140d16c70(undefined8 param_1,longlong param_2)

{
  FUN_140d05860(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16c90 @ 140d16c90
// ============================================================

void Unwind_140d16c90(undefined8 param_1,longlong param_2)

{
  FUN_140d06a50(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16cb0 @ 140d16cb0
// ============================================================

void Unwind_140d16cb0(undefined8 param_1,longlong param_2)

{
  FUN_140d089a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16cd0 @ 140d16cd0
// ============================================================

void Unwind_140d16cd0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b1f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16cf0 @ 140d16cf0
// ============================================================

void Unwind_140d16cf0(undefined8 param_1,longlong param_2)

{
  FUN_140d0c490(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16d10 @ 140d16d10
// ============================================================

void Unwind_140d16d10(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16d30 @ 140d16d30
// ============================================================

void Unwind_140d16d30(undefined8 param_1,longlong param_2)

{
  FUN_140d04840(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16d50 @ 140d16d50
// ============================================================

void Unwind_140d16d50(undefined8 param_1,longlong param_2)

{
  FUN_140d05880(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16d70 @ 140d16d70
// ============================================================

void Unwind_140d16d70(undefined8 param_1,longlong param_2)

{
  FUN_140d06a70(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16d90 @ 140d16d90
// ============================================================

void Unwind_140d16d90(undefined8 param_1,longlong param_2)

{
  FUN_140d089c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16db0 @ 140d16db0
// ============================================================

void Unwind_140d16db0(undefined8 param_1,longlong param_2)

{
  FUN_140d0b210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16dd0 @ 140d16dd0
// ============================================================

void Unwind_140d16dd0(undefined8 param_1,longlong param_2)

{
  FUN_140d0c4c0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d16df0 @ 140d16df0
// ============================================================

void Unwind_140d16df0(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca00((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@140d16e10 @ 140d16e10
// ============================================================

void Unwind_140d16e10(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca30((longlong *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140d16e30 @ 140d16e30
// ============================================================

void Unwind_140d16e30(undefined8 param_1,longlong param_2)

{
  FUN_140d0ca60((longlong *)(*(longlong *)(param_2 + 0x50) + 0x88));
  return;
}



// ============================================================
// Function: Unwind@140d16e50 @ 140d16e50
// ============================================================

void Unwind_140d16e50(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x50) + 200),0x90,4,FUN_140d08030);
  return;
}



// ============================================================
// Function: Unwind@140d16e90 @ 140d16e90
// ============================================================

void Unwind_140d16e90(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x50) + 0x308),0x90,4,FUN_140d08030);
  return;
}



// ============================================================
// Function: Unwind@140d16ed0 @ 140d16ed0
// ============================================================

void Unwind_140d16ed0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16f00 @ 140d16f00
// ============================================================

void Unwind_140d16f00(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d16f20 @ 140d16f20
// ============================================================

void Unwind_140d16f20(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d16f40 @ 140d16f40
// ============================================================

void Unwind_140d16f40(undefined8 param_1,longlong param_2)

{
  FUN_140d088a0((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d16f60 @ 140d16f60
// ============================================================

void Unwind_140d16f60(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d16f90 @ 140d16f90
// ============================================================

void Unwind_140d16f90(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d16fb0 @ 140d16fb0
// ============================================================

void Unwind_140d16fb0(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d16fd0 @ 140d16fd0
// ============================================================

void Unwind_140d16fd0(undefined8 param_1,longlong param_2)

{
  FUN_140d088a0((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d16ff0 @ 140d16ff0
// ============================================================

void Unwind_140d16ff0(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d17010 @ 140d17010
// ============================================================

void Unwind_140d17010(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d17030 @ 140d17030
// ============================================================

void Unwind_140d17030(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d17050 @ 140d17050
// ============================================================

void Unwind_140d17050(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Catch@140d17070 @ 140d17070
// ============================================================

undefined8 Catch_140d17070(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::GenerateFinalBattleInfo crash. @%s,%d");
  return 0x140d0efe7;
}



// ============================================================
// Function: Unwind@140d170b0 @ 140d170b0
// ============================================================

void Unwind_140d170b0(void)

{
  FUN_140d01aa0();
  return;
}



// ============================================================
// Function: Unwind@140d170e0 @ 140d170e0
// ============================================================

void Unwind_140d170e0(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17100 @ 140d17100
// ============================================================

void Unwind_140d17100(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17120 @ 140d17120
// ============================================================

void Unwind_140d17120(undefined8 param_1,longlong param_2)

{
  FUN_140d088a0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17140 @ 140d17140
// ============================================================

void Unwind_140d17140(undefined8 param_1,longlong param_2)

{
  FUN_140d05820((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17160 @ 140d17160
// ============================================================

void Unwind_140d17160(undefined8 param_1,longlong param_2)

{
  FUN_140d048d0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140d17180 @ 140d17180
// ============================================================

undefined8 Catch_140d17180(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::GenerateFinalLessBattleInfo crash. @%s,%d");
  return 0x140d0f3e0;
}



// ============================================================
// Function: Catch@140d171c0 @ 140d171c0
// ============================================================

undefined8 Catch_140d171c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnAllRoundMatchOver crash. @%s,%d");
  return 0x140d0f455;
}



// ============================================================
// Function: Catch@140d17200 @ 140d17200
// ============================================================

undefined8 Catch_140d17200(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::EnterBattle crash. @%s,%d");
  return 0x140d0f82a;
}



// ============================================================
// Function: Catch@140d17240 @ 140d17240
// ============================================================

undefined8 Catch_140d17240(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::IncMemberCount crash. @%s,%d");
  return 0x140d0fa1c;
}



// ============================================================
// Function: Unwind@140d17280 @ 140d17280
// ============================================================

void Unwind_140d17280(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d172a0 @ 140d172a0
// ============================================================

void Unwind_140d172a0(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d172c0 @ 140d172c0
// ============================================================

void Unwind_140d172c0(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d172e0 @ 140d172e0
// ============================================================

void Unwind_140d172e0(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@140d17300 @ 140d17300
// ============================================================

undefined * Catch_140d17300(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRecordSet) @%s,%d");
  return &DAT_140d10791;
}



// ============================================================
// Function: Catch@140d17340 @ 140d17340
// ============================================================

undefined * Catch_140d17340(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::Init() crash. @%s,%d");
  return &DAT_140d10876;
}



// ============================================================
// Function: Catch@140d17380 @ 140d17380
// ============================================================

undefined * Catch_140d17380(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer Round Prepare Crash. @%s,%d");
  return &DAT_140d10ecf;
}



// ============================================================
// Function: Catch@140d173c0 @ 140d173c0
// ============================================================

undefined * Catch_140d173c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer Round running Crash. @%s,%d");
  return &DAT_140d10f4e;
}



// ============================================================
// Function: Catch@140d17400 @ 140d17400
// ============================================================

undefined * Catch_140d17400(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer Round fast over Crash. @%s,%d");
  return &DAT_140d10fab;
}



// ============================================================
// Function: Catch@140d17440 @ 140d17440
// ============================================================

undefined * Catch_140d17440(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer Round over Crash. @%s,%d");
  return &DAT_140d10ff8;
}



// ============================================================
// Function: Catch@140d17480 @ 140d17480
// ============================================================

undefined * Catch_140d17480(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer final prepare Crash. @%s,%d");
  return &DAT_140d11311;
}



// ============================================================
// Function: Catch@140d174c0 @ 140d174c0
// ============================================================

undefined * Catch_140d174c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer final running Crash. @%s,%d");
  return &DAT_140d11394;
}



// ============================================================
// Function: Catch@140d17500 @ 140d17500
// ============================================================

undefined * Catch_140d17500(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer final fast over Crash. @%s,%d");
  return &DAT_140d113ee;
}



// ============================================================
// Function: Catch@140d17540 @ 140d17540
// ============================================================

undefined * Catch_140d17540(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer final over Crash. @%s,%d");
  return &DAT_140d11431;
}



// ============================================================
// Function: Catch@140d17580 @ 140d17580
// ============================================================

undefined8 Catch_140d17580(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::OnTimer crash. @%s,%d");
  return 0x140d11442;
}



// ============================================================
// Function: Catch@140d175c0 @ 140d175c0
// ============================================================

undefined8 Catch_140d175c0(void)

{
  log_InlineLogCATCH_ERROR("CFactionMatchMgr::ReloadFactionMatchData crash. @%s,%d");
  return 0x140d115e7;
}



// ============================================================
// Function: Unwind@140d17600 @ 140d17600
// ============================================================

void Unwind_140d17600(void)

{
  DAT_140d23388 = DAT_140d23388 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d17620 @ 140d17620
// ============================================================

void Unwind_140d17620(undefined8 param_1,longlong param_2)

{
  FUN_140d045b0(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d17640 @ 140d17640
// ============================================================

void Unwind_140d17640(undefined8 param_1,longlong param_2)

{
  FUN_140d12570((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140d17660 @ 140d17660
// ============================================================

void Unwind_140d17660(undefined8 param_1,longlong param_2)

{
  FUN_140d128a0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140d17680 @ 140d17680
// ============================================================

void Unwind_140d17680(undefined8 param_1,longlong param_2)

{
  FUN_140d131f0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140d176a0 @ 140d176a0
// ============================================================

undefined * Catch_140d176a0(void)

{
  log_InlineLogCATCH_ERROR("faction match::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140d119f3;
}



// ============================================================
// Function: Unwind@140d176f0 @ 140d176f0
// ============================================================

void Unwind_140d176f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17710 @ 140d17710
// ============================================================

void Unwind_140d17710(undefined8 param_1,longlong param_2)

{
  FUN_140d11720(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d17730 @ 140d17730
// ============================================================

void Unwind_140d17730(undefined8 param_1,longlong param_2)

{
  FUN_140d11720(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140d17750 @ 140d17750
// ============================================================

undefined * Catch_140d17750(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140d11bca;
}



// ============================================================
// Function: Unwind@140d17790 @ 140d17790
// ============================================================

void Unwind_140d17790(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d177b0 @ 140d177b0
// ============================================================

void Unwind_140d177b0(undefined8 param_1,longlong param_2)

{
  FUN_140d11720(*(undefined8 **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Catch@140d177d0 @ 140d177d0
// ============================================================

undefined8 Catch_140d177d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140d11c63;
}



// ============================================================
// Function: Catch@140d17810 @ 140d17810
// ============================================================

undefined8 Catch_140d17810(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pFactionMatchMgr) @%s,%d");
  return 0x140d12434;
}



// ============================================================
// Function: Unwind@140d17850 @ 140d17850
// ============================================================

void Unwind_140d17850(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17870 @ 140d17870
// ============================================================

void Unwind_140d17870(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d17890 @ 140d17890
// ============================================================

void Unwind_140d17890(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d178b0 @ 140d178b0
// ============================================================

void Unwind_140d178b0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d178d0 @ 140d178d0
// ============================================================

void Unwind_140d178d0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d178f0 @ 140d178f0
// ============================================================

void Unwind_140d178f0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17910 @ 140d17910
// ============================================================

void Unwind_140d17910(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17930 @ 140d17930
// ============================================================

void Unwind_140d17930(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d17950 @ 140d17950
// ============================================================

void Unwind_140d17950(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17970 @ 140d17970
// ============================================================

void Unwind_140d17970(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d17990 @ 140d17990
// ============================================================

void Unwind_140d17990(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d179b0 @ 140d179b0
// ============================================================

void Unwind_140d179b0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d179d0 @ 140d179d0
// ============================================================

void Unwind_140d179d0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d179f0 @ 140d179f0
// ============================================================

void Unwind_140d179f0(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@140d17a10 @ 140d17a10
// ============================================================

void Unwind_140d17a10(undefined8 param_1,longlong param_2)

{
  FUN_140d124a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: FUN_140d17a28 @ 140d17a28
// ============================================================

void FUN_140d17a28(void)

{
  _unlock(8);
  return;
}



// ============================================================
// Function: filt$0 @ 140d17a41
// ============================================================

/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void *
   __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4
`void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::
__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x28);
  if (**(int **)(param_2 + 0x30) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: fin$0 @ 140d17a80
// ============================================================

/* Library Function - Single Match
    int `void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void
   (__cdecl*)(void * __ptr64))'::`1'::fin$0
   
   Library: Visual Studio 2005 Release */

void `void___cdecl_`eh_vector_destructor_iterator'(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'
     ::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),*(int *)(param_2 + 0x70),
                  *(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}



// ============================================================
// Function: FUN_140d17aaa @ 140d17aaa
// ============================================================

void FUN_140d17aaa(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x50),*(__uint64 *)(param_2 + 0x58),*(int *)(param_2 + 0x24),
                  *(_func_void_void_ptr **)(param_2 + 0x70));
  }
  return;
}



// ============================================================
// Function: FUN_140d17ad7 @ 140d17ad7
// ============================================================

void FUN_140d17ad7(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// ============================================================
// Function: FUN_140d17b07 @ 140d17b07
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d17b07(void)

{
  _DAT_140d23360 = 0xffffffff;
  return;
}



// ============================================================
// Function: FUN_140d17b20 @ 140d17b20
// ============================================================

bool FUN_140d17b20(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




// Total functions: 863, failed: 0
