// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: Guide.dll

// ============================================================
// Function: FUN_140e01000 @ 140e01000
// ============================================================

exception * FUN_140e01000(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140e01040 @ 140e01040
// ============================================================

void FUN_140e01040(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140e01060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140e01070 @ 140e01070
// ============================================================

exception * FUN_140e01070(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e010d0 @ 140e010d0
// ============================================================

void FUN_140e010d0(void)

{
  return;
}



// ============================================================
// Function: FUN_140e01170 @ 140e01170
// ============================================================

exception *
FUN_140e01170(exception *param_1,
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
// Function: FUN_140e011c0 @ 140e011c0
// ============================================================

void FUN_140e011c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e011f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140e01200 @ 140e01200
// ============================================================

longlong FUN_140e01200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}



// ============================================================
// Function: FUN_140e01220 @ 140e01220
// ============================================================

exception * FUN_140e01220(exception *param_1,uint param_2)

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
// Function: FUN_140e01280 @ 140e01280
// ============================================================

exception *
FUN_140e01280(exception *param_1,
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
// Function: FUN_140e012e0 @ 140e012e0
// ============================================================

void FUN_140e012e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e0131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140e01330 @ 140e01330
// ============================================================

exception * FUN_140e01330(exception *param_1,uint param_2)

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
// Function: FUN_140e013a0 @ 140e013a0
// ============================================================

exception *
FUN_140e013a0(exception *param_1,
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
// Function: FUN_140e01400 @ 140e01400
// ============================================================

void FUN_140e01400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140e0143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140e01450 @ 140e01450
// ============================================================

exception * FUN_140e01450(exception *param_1,uint param_2)

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
// Function: FUN_140e014c0 @ 140e014c0
// ============================================================

void FUN_140e014c0(void)

{
  log_InlineLogERROR(&DAT_140e23698);
  return;
}



// ============================================================
// Function: FUN_140e01510 @ 140e01510
// ============================================================

void FUN_140e01510(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// ============================================================
// Function: FUN_140e01530 @ 140e01530
// ============================================================

void FUN_140e01530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_140e33990 != (undefined8 *)0x0) {
    if (DAT_140e33990 != (undefined8 *)0x0) {
      (**(code **)*DAT_140e33990)(DAT_140e33990,1,param_3,param_4,0xfffffffffffffffe);
    }
    DAT_140e33990 = (undefined8 *)0x0;
  }
  return;
}



// ============================================================
// Function: FUN_140e01580 @ 140e01580
// ============================================================

undefined1 FUN_140e01580(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}



// ============================================================
// Function: FUN_140e015a0 @ 140e015a0
// ============================================================

bool FUN_140e015a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e015e0 @ 140e015e0
// ============================================================

bool FUN_140e015e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e01710 @ 140e01710
// ============================================================

void FUN_140e01710(longlong param_1,longlong *param_2)

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
// Function: FUN_140e01810 @ 140e01810
// ============================================================

longlong FUN_140e01810(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e01832;
  }
  lVar2 = *plVar1;
LAB_140e01832:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e01850 @ 140e01850
// ============================================================

void FUN_140e01850(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e01874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e01900 @ 140e01900
// ============================================================

void FUN_140e01900(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e01932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e01a30 @ 140e01a30
// ============================================================

void FUN_140e01a30(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e01ad0 @ 140e01ad0
// ============================================================

void FUN_140e01ad0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140e01b40 @ 140e01b40
// ============================================================

exception * FUN_140e01b40(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140e01b70 @ 140e01b70
// ============================================================

ulonglong FUN_140e01b70(longlong param_1)

{
  ulonglong uVar1;
  CMySingleLock local_res8 [32];
  
  tq::CMySingleLock::CMySingleLock(local_res8,(ILockObj *)(param_1 + 0x50));
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  tq::CMySingleLock::~CMySingleLock(local_res8);
  return uVar1 & 0xffffffff;
}



// ============================================================
// Function: FUN_140e01bc0 @ 140e01bc0
// ============================================================

void FUN_140e01bc0(longlong param_1,longlong param_2)

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
// Function: FUN_140e01c20 @ 140e01c20
// ============================================================

void FUN_140e01c20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e01c40 @ 140e01c40
// ============================================================

longlong FUN_140e01c40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e01c62;
  }
  lVar2 = *plVar1;
LAB_140e01c62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e01c80 @ 140e01c80
// ============================================================

longlong * FUN_140e01c80(longlong *param_1)

{
  FUN_140e01850(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e01cf0 @ 140e01cf0
// ============================================================

longlong * FUN_140e01cf0(longlong *param_1)

{
  FUN_140e01900(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e01d20 @ 140e01d20
// ============================================================

void FUN_140e01d20(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e01d90 @ 140e01d90
// ============================================================

longlong * FUN_140e01d90(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e01850(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140e01dd0 @ 140e01dd0
// ============================================================

void FUN_140e01dd0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140e01e40 @ 140e01e40
// ============================================================

longlong FUN_140e01e40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e01e62;
  }
  lVar2 = *plVar1;
LAB_140e01e62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e01e80 @ 140e01e80
// ============================================================

void FUN_140e01e80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e01ea0 @ 140e01ea0
// ============================================================

void FUN_140e01ea0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e01ea0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140e01ef0 @ 140e01ef0
// ============================================================

longlong * FUN_140e01ef0(longlong *param_1)

{
  FUN_140e01900(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e01f10 @ 140e01f10
// ============================================================

undefined8 *
FUN_140e01f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_5[1];
    *(undefined4 *)(puVar1 + 4) = param_5[2];
    *(undefined4 *)((longlong)puVar1 + 0x24) = param_5[3];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140e01fa0 @ 140e01fa0
// ============================================================

undefined8 * FUN_140e01fa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e01fe0 @ 140e01fe0
// ============================================================

void FUN_140e01fe0(void)

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
// Function: FUN_140e02040 @ 140e02040
// ============================================================

undefined8 * FUN_140e02040(undefined8 *param_1)

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
// Function: FUN_140e02080 @ 140e02080
// ============================================================

void FUN_140e02080(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e01ea0(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_140e02100 @ 140e02100
// ============================================================

void FUN_140e02100(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e02120 @ 140e02120
// ============================================================

undefined8 * FUN_140e02120(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e02160 @ 140e02160
// ============================================================

void FUN_140e02160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e01fe0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140e021a0 @ 140e021a0
// ============================================================

undefined8 * FUN_140e021a0(undefined8 *param_1)

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
// Function: FUN_140e02210 @ 140e02210
// ============================================================

void FUN_140e02210(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e02250 @ 140e02250
// ============================================================

undefined8 * FUN_140e02250(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e022e0 @ 140e022e0
// ============================================================

undefined8 *
FUN_140e022e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
  }
  plVar5 = FUN_140e01f10(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_140e02620 @ 140e02620
// ============================================================

exception * FUN_140e02620(exception *param_1,exception *param_2)

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
// Function: FUN_140e02670 @ 140e02670
// ============================================================

exception * FUN_140e02670(exception *param_1,exception *param_2)

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
// Function: FUN_140e026d0 @ 140e026d0
// ============================================================

undefined8 * FUN_140e026d0(undefined8 *param_1)

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
// Function: FUN_140e02720 @ 140e02720
// ============================================================

longlong * FUN_140e02720(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e0287d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e028ac;
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
      goto LAB_140e0287d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e022e0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e028ac:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140e028d0 @ 140e028d0
// ============================================================

undefined8 * FUN_140e028d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e31410);
  }
  FUN_140e01850(param_3);
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
        goto LAB_140e02abc;
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
LAB_140e02abc:
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
            FUN_140e01bc0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e01710((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140e01bc0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140e01710((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e01bc0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140e01710((longlong)param_1,plVar7);
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
// Function: FUN_140e02c90 @ 140e02c90
// ============================================================

exception * FUN_140e02c90(exception *param_1,exception *param_2)

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
// Function: FUN_140e02cf0 @ 140e02cf0
// ============================================================

longlong * FUN_140e02cf0(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_140e02dc0 @ 140e02dc0
// ============================================================

void FUN_140e02dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e02de0 @ 140e02de0
// ============================================================

longlong * FUN_140e02de0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e02080((longlong)param_1);
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
    FUN_140e028d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140e02f90 @ 140e02f90
// ============================================================

undefined8 * FUN_140e02f90(undefined8 *param_1)

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
// Function: FUN_140e02fe0 @ 140e02fe0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e02fe0(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 extraout_RAX;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_4a8 [32];
  uint local_488;
  undefined *local_480;
  longlong *local_478;
  longlong local_470;
  uint *local_468;
  longlong *local_460;
  longlong local_458;
  longlong *local_450;
  undefined8 local_440;
  char local_438;
  undefined1 local_437 [1022];
  undefined1 local_39;
  ulonglong local_38;
  
  local_440 = 0xfffffffffffffffe;
  local_38 = DAT_140e33968 ^ (ulonglong)auStack_4a8;
  if (*param_2 == 0) {
    local_38 = local_38 & 0xffffffffffffff00;
  }
  else {
    local_470 = param_1;
    local_468 = param_2;
    tq::CMySingleLock::CMySingleLock((CMySingleLock *)&local_478,(ILockObj *)(param_1 + 0x50));
    FUN_140e02cf0((longlong *)(param_1 + 0x10),(longlong *)&local_460,param_2);
    plVar3 = local_460;
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar8 = 0;
    local_450 = *(longlong **)(param_1 + 0x10);
    if ((local_460 == (longlong *)0x0) || (local_460 != local_450)) {
      _invalid_parameter_noinfo();
    }
    if (local_458 == lVar5) {
      tq::CMySingleLock::~CMySingleLock((CMySingleLock *)&local_478);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x110))
                        (*(longlong **)(param_1 + 8),*param_2,0x10);
      if ((char)uVar2 == '\0') {
        local_438 = '\0';
        memset(local_437,0,0x3ff);
        plVar3 = (longlong *)InstanceGet();
        _snprintf(&local_438,0x400,PTR_s_SELECT_cq_tutor____A_name_AS_tut_140e33098,
                  (ulonglong)*param_2);
        local_39 = 0;
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_438,2);
        local_478 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
          if (lVar5 != 0) {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
            if (plVar6 != (longlong *)0x0) {
              plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,1);
              uVar1 = (**(code **)(*plVar7 + 0x40))(plVar7);
              param_2[1] = uVar1;
              _snprintf(&local_438,0x400,PTR_s_SELECT_level__metempsychosis_FRO_140e330b8,
                        (ulonglong)uVar1);
              local_39 = 0;
              plVar7 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_438,2);
              local_460 = plVar7;
              if (plVar7 == (longlong *)0x0) {
                param_2[1] = 0;
                (**(code **)*plVar6)(plVar6,1);
              }
              else {
                lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
                if (lVar5 == 0) {
                  local_488 = param_2[1];
                  _snprintf(&local_438,0x400,
                            "DELETE FROM cq_tutor WHERE tutor_id = %u || Student_id = %u");
                  local_39 = 0;
                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_438,0,0);
                  _snprintf(&local_438,0x400,"DELETE FROM cq_tutor_access WHERE tutor_id = %u",
                            (ulonglong)param_2[1]);
                  local_39 = 0;
                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_438,0,0);
                  local_488 = param_2[1];
                  _snprintf(&local_438,0x400,
                            "DELETE FROM cq_tutor_contributions WHERE tutor_id = %u || Student_id = %u"
                           );
                  local_39 = 0;
                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_438,0,0);
                  local_488 = param_2[1];
                  _snprintf(&local_438,0x400,
                            "DELETE FROM cq_tutor_contributions2 WHERE tutor_id = %u || Student_id = %u"
                           );
                  local_39 = 0;
                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_438,0,0);
                  param_2[1] = 0;
                  (**(code **)*plVar6)(plVar6,1);
                }
                else {
                  lVar5 = **(longlong **)(param_1 + 8);
                  uVar2 = (**(code **)(*plVar7 + 0x38))(plVar7);
                  (**(code **)(lVar5 + 0x108))(*(undefined8 *)(param_1 + 8),*param_2,0x14,uVar2);
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
                            (*(longlong **)(param_1 + 8),*param_2,0x10,plVar6);
                }
                (**(code **)*plVar7)(plVar7);
              }
            }
          }
          (**(code **)*plVar4)(plVar4);
        }
        local_480 = PTR_s_SELECT___FROM_cq_tutor_access_WH_140e330b0;
        local_488 = 0x13;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                  (*(longlong **)(param_1 + 8),*param_2,0,1);
        local_480 = PTR_s_SELECT_cq_tutor_contributions____140e330a0;
        local_488 = 0x11;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                  (*(longlong **)(param_1 + 8),*param_2,0,1);
        local_480 = PTR_s_SELECT_cq_tutor_contributions2___140e330a8;
        local_488 = 0x12;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                          (*(longlong **)(param_1 + 8),*param_2,0,1);
        local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      }
      else {
        local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      }
    }
    else {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = lVar8;
      }
      else {
        lVar5 = *plVar3;
      }
      if (local_458 == *(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      param_2[1] = *(uint *)(local_458 + 0x20);
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar8 = *plVar3;
      }
      if (local_458 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      *(undefined1 *)(local_458 + 0x24) = 1;
      tq::CMySingleLock::~CMySingleLock((CMySingleLock *)&local_478);
      local_38 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  return local_38;
}



// ============================================================
// Function: FUN_140e03470 @ 140e03470
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e03470(longlong param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  uint local_478;
  uint local_470 [2];
  longlong *local_468;
  longlong *local_460;
  int *local_458;
  longlong local_450;
  undefined8 local_448;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_448 = 0xfffffffffffffffe;
  local_38 = DAT_140e33968 ^ (ulonglong)auStack_4a8;
  if (*param_2 != 0) {
    local_458 = param_2;
    local_450 = param_1;
    _snprintf(local_438,0x400,PTR_s_SELECT_cq_tutor____A_name_AS_tut_140e33090);
    local_39 = 0;
    plVar1 = (longlong *)InstanceGet();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,local_438,2);
    local_460 = plVar1;
    if (plVar1 == (longlong *)0x0) {
      local_488 = 0xad;
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      uVar6 = 0;
      local_478 = 0;
      while( true ) {
        uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
        if (uVar2 <= uVar6) break;
        (**(code **)(*plVar1 + 0x30))(plVar1,uVar6);
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x38))(plVar1);
        local_468 = plVar3;
        if (plVar3 == (longlong *)0x0) {
          local_488 = 0xb7;
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
          local_470[0] = (**(code **)(*plVar4 + 0x40))(plVar4);
          local_470[1] = 0;
          uVar5 = FUN_140e02fe0(param_1,local_470);
          if ((char)uVar5 == '\0') {
            (**(code **)*plVar3)(plVar3,1);
            local_468 = (longlong *)0x0;
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
                      (*(longlong **)(param_1 + 8),*param_2,0xf,plVar3);
          }
        }
        local_478 = (int)uVar6 + 1;
        uVar6 = (ulonglong)local_478;
      }
      (**(code **)*plVar1)(plVar1);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e03670 @ 140e03670
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e03670(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  uint local_488;
  longlong *local_480;
  uint local_478;
  uint local_470 [3];
  uint local_464;
  longlong *local_460;
  uint local_458;
  int local_454;
  longlong local_450;
  undefined8 local_448;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_448 = 0xfffffffffffffffe;
  local_38 = DAT_140e33968 ^ (ulonglong)auStack_4b8;
  local_478 = param_2;
  local_450 = param_1;
  if (param_2 == 0) {
    local_498 = 0xd4;
    log_InlineLogERROR(&DAT_140e23698);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar8 = 0;
    local_454 = 0;
    local_458 = param_2;
    uVar2 = FUN_140e02fe0(param_1,&local_458);
    if ((char)uVar2 != '\0') {
      if (local_454 != 0) {
        local_464 = 0;
        local_470[2] = local_454;
        uVar3 = FUN_140e02fe0(param_1,local_470 + 2);
        if ((char)uVar3 != '\0') {
          local_480 = (longlong *)(ulonglong)local_464;
          FUN_140e02fe0(param_1,(uint *)&local_480);
        }
      }
      _snprintf(local_438,0x400,PTR_s_SELECT_cq_tutor____A_name_AS_tut_140e33090);
      local_39 = 0;
      plVar4 = (longlong *)InstanceGet();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_438,2);
      uVar3 = 0;
      if (plVar4 != (longlong *)0x0) {
        local_480 = plVar4;
        lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if (lVar5 != 0) {
          local_488 = 0;
          while( true ) {
            uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
            if (uVar2 <= uVar8) break;
            (**(code **)(*plVar4 + 0x30))(plVar4,uVar8);
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
            local_460 = plVar6;
            if (plVar6 == (longlong *)0x0) {
              local_498 = 0xfc;
              log_InlineLogERROR(&DAT_140e23698);
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,2);
              uVar1 = (**(code **)(*plVar7 + 0x40))(plVar7);
              if (uVar1 == 0) {
                local_498 = 0x103;
                log_InlineLogERROR(&DAT_140e23698);
                (**(code **)*plVar6)(plVar6,1);
                local_460 = (longlong *)0x0;
              }
              else {
                local_470[1] = 0;
                local_470[0] = uVar1;
                uVar3 = FUN_140e02fe0(param_1,local_470);
                if ((char)uVar3 == '\0') {
                  (**(code **)*plVar6)(plVar6,1);
                  local_460 = (longlong *)0x0;
                }
                else {
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
                            (*(longlong **)(param_1 + 8),param_2,0xf,plVar6);
                  FUN_140e03470(param_1,(int *)local_470);
                }
              }
            }
            local_488 = (int)uVar8 + 1;
            uVar8 = (ulonglong)local_488;
          }
        }
        uVar3 = (**(code **)*plVar4)(plVar4);
      }
      uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140e03960 @ 140e03960
// ============================================================

void FUN_140e03960(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  CMySingleLock local_res8 [8];
  ulonglong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 *local_20;
  
  tq::CMySingleLock::CMySingleLock(local_res8,(ILockObj *)(param_1 + 0x50));
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  cVar1 = *(char *)((longlong)puVar2[1] + 0x29);
  puVar4 = puVar2;
  puVar7 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  local_48 = puVar4;
  local_50 = uVar3;
  if (uVar3 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar2) || (param_2 < *(uint *)(puVar4 + 3))) {
    local_38 = *(undefined8 *)(param_1 + 0x40);
    local_40 = *(ulonglong *)(param_1 + 0x10);
    puVar6 = &local_40;
  }
  else {
    puVar6 = &local_50;
  }
  local_28 = *puVar6;
  local_20 = (undefined8 *)puVar6[1];
  if ((local_28 == 0) || (local_28 != uVar3)) {
    _invalid_parameter_noinfo();
  }
  if (local_20 == puVar2) {
    local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffffffffff00);
    local_50 = (ulonglong)param_2;
    local_28 = CONCAT44(param_2,param_2);
    local_20 = (undefined8 *)((longlong)local_48 << 0x20);
    FUN_140e02720((longlong *)(param_1 + 0x10),(longlong *)&local_40,(uint *)&local_28);
  }
  tq::CMySingleLock::~CMySingleLock(local_res8);
  return;
}



// ============================================================
// Function: FUN_140e03ab0 @ 140e03ab0
// ============================================================

void FUN_140e03ab0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint local_res10 [4];
  CMySingleLock local_res20 [8];
  longlong *local_30;
  longlong local_28;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    tq::CMySingleLock::CMySingleLock(local_res20,(ILockObj *)(param_1 + 0x50));
    FUN_140e02cf0((longlong *)(param_1 + 0x10),(longlong *)&local_30,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_30 == (longlong *)0x0) || (local_30 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_28 != lVar1) {
      if (local_30 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar1 = 0;
      }
      else {
        lVar1 = *local_30;
      }
      if (local_28 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      *(undefined4 *)(local_28 + 0x20) = param_3;
    }
    tq::CMySingleLock::~CMySingleLock(local_res20);
  }
  return;
}



// ============================================================
// Function: FUN_140e03b60 @ 140e03b60
// ============================================================

ulonglong FUN_140e03b60(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  CMySingleLock local_res8 [8];
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  
  tq::CMySingleLock::CMySingleLock(local_res8,(ILockObj *)(param_1 + 0x50));
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  local_38 = puVar3;
  local_40 = *(longlong *)(param_1 + 0x10);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    local_28 = *(undefined8 *)(param_1 + 0x40);
    local_30 = *(longlong *)(param_1 + 0x10);
    plVar6 = &local_30;
  }
  else {
    plVar6 = &local_40;
  }
  plVar2 = (longlong *)*plVar6;
  local_20 = plVar2;
  local_18 = plVar6[1];
  lVar8 = *(longlong *)(param_1 + 0x40);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_18;
  if (local_18 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)(lVar4 + 0x24) == '\x01') {
      tq::CMySingleLock::~CMySingleLock(local_res8);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  tq::CMySingleLock::~CMySingleLock(local_res8);
  return extraout_RAX_00 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e03c90 @ 140e03c90
// ============================================================

void FUN_140e03c90(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  CMySingleLock local_res8 [8];
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  
  tq::CMySingleLock::CMySingleLock(local_res8,(ILockObj *)(param_1 + 0x50));
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  local_38 = puVar3;
  local_40 = *(longlong *)(param_1 + 0x10);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    local_28 = *(undefined8 *)(param_1 + 0x40);
    local_30 = *(longlong *)(param_1 + 0x10);
    plVar6 = &local_30;
  }
  else {
    plVar6 = &local_40;
  }
  plVar2 = (longlong *)*plVar6;
  local_20 = plVar2;
  local_18 = plVar6[1];
  lVar8 = *(longlong *)(param_1 + 0x40);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_18;
  if (local_18 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    *(undefined1 *)(lVar4 + 0x24) = 0;
  }
  tq::CMySingleLock::~CMySingleLock(local_res8);
  return;
}



// ============================================================
// Function: FUN_140e03db0 @ 140e03db0
// ============================================================

void FUN_140e03db0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  CMySingleLock local_res8 [8];
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_18;
  longlong local_10;
  
  tq::CMySingleLock::CMySingleLock(local_res8,(ILockObj *)(param_1 + 0x50));
  puVar5 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar5 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar5 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar5[2];
      puVar5 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar3 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x29);
  }
  local_38 = puVar3;
  local_40 = *(longlong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar5) || (param_2 < *(uint *)(puVar3 + 3))) {
    local_28 = *(undefined8 *)(param_1 + 0x40);
    local_30 = *(longlong *)(param_1 + 0x10);
    plVar6 = &local_30;
  }
  else {
    plVar6 = &local_40;
  }
  local_18 = *plVar6;
  local_10 = plVar6[1];
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar2) {
    local_18 = *plVar6;
    local_10 = plVar6[1];
    FUN_140e028d0((undefined8 *)(param_1 + 0x10),&local_30,&local_18);
  }
  tq::CMySingleLock::~CMySingleLock(local_res8);
  return;
}



// ============================================================
// Function: FUN_140e03ed0 @ 140e03ed0
// ============================================================

void FUN_140e03ed0(longlong *param_1)

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
  FUN_140e02de0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140e03f40 @ 140e03f40
// ============================================================

undefined8 * FUN_140e03f40(undefined8 *param_1)

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
// Function: FUN_140e03f90 @ 140e03f90
// ============================================================

void FUN_140e03f90(longlong *param_1)

{
  FUN_140e03ed0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e03fc0 @ 140e03fc0
// ============================================================

undefined8 * FUN_140e03fc0(undefined8 *param_1)

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
  lVar2 = FUN_140e01fe0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e04040 @ 140e04040
// ============================================================

void FUN_140e04040(longlong *param_1)

{
  FUN_140e03ed0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e04070 @ 140e04070
// ============================================================

void FUN_140e04070(undefined8 *param_1)

{
  *param_1 = guide::CAsynGuideMgr::vftable;
  tq::CMyCriticalSection::~CMyCriticalSection((CMyCriticalSection *)(param_1 + 10));
  FUN_140e03ed0(param_1 + 2);
  operator_delete((void *)param_1[2]);
  return;
}



// ============================================================
// Function: FUN_140e040c0 @ 140e040c0
// ============================================================

undefined8 * FUN_140e040c0(undefined8 *param_1)

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
  lVar2 = FUN_140e01fe0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e04140 @ 140e04140
// ============================================================

undefined8 * FUN_140e04140(undefined8 *param_1)

{
  *param_1 = guide::CAsynGuideMgr::vftable;
  FUN_140e040c0(param_1 + 2);
  tq::CMyCriticalSection::CMyCriticalSection((CMyCriticalSection *)(param_1 + 10),2000);
  FUN_140e02080((longlong)(param_1 + 2));
  param_1[1] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e041a0 @ 140e041a0
// ============================================================

undefined8 * FUN_140e041a0(undefined8 *param_1,uint param_2)

{
  *param_1 = guide::CAsynGuideMgr::vftable;
  tq::CMyCriticalSection::~CMyCriticalSection((CMyCriticalSection *)(param_1 + 10));
  FUN_140e03ed0(param_1 + 2);
  operator_delete((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e04220 @ 140e04220
// ============================================================

undefined8 * FUN_140e04220(void)

{
  undefined8 *puVar1;
  
  if (DAT_140e33990 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x80);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_140e33990 = (undefined8 *)0x0;
    }
    else {
      DAT_140e33990 = FUN_140e04140(puVar1);
    }
    if (DAT_140e33990 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
  }
  return DAT_140e33990;
}



// ============================================================
// Function: FUN_140e042a0 @ 140e042a0
// ============================================================

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140e042a0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1068 [32];
  undefined8 *local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  char local_1028;
  undefined1 local_1027 [4094];
  undefined1 local_29;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x140e042bb;
  local_1040 = 0xfffffffffffffffe;
  local_28 = DAT_140e33968 ^ (ulonglong)auStack_1068;
  local_res18 = param_3;
  local_res20 = param_4;
  local_1048 = param_1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  if (param_2 != (char *)0x0) {
    local_1028 = '\0';
    memset(local_1027,0,0xfff);
    vsprintf_s(&local_1028,0xfff,param_2,(va_list)&local_res18);
    local_1038 = 0;
    local_29 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),
               &local_1028);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e04390 @ 140e04390
// ============================================================

void FUN_140e04390(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140e043b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}



// ============================================================
// Function: FUN_140e043e0 @ 140e043e0
// ============================================================

undefined8 * FUN_140e043e0(undefined8 *param_1,uint param_2)

{
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e044a0 @ 140e044a0
// ============================================================

undefined8 FUN_140e044a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// Function: FUN_140e044b0 @ 140e044b0
// ============================================================

void FUN_140e044b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  CMsg local_438 [1072];
  
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
                        (*(longlong **)(param_1 + 8),param_3), cVar2 != '\0')) {
    return;
  }
  FUN_140e19a50(local_438);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_3);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    pcVar4 = (char *)(**(code **)(*plVar1 + 0x70))(plVar1,param_2);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    uVar5 = FUN_140e19b10(local_438,'\x06',param_2,param_3,uVar3,pcVar4);
    if ((char)uVar5 == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                (*(longlong **)(param_1 + 8),param_2,param_3);
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                (*(longlong **)(param_1 + 8),param_3,local_438);
    }
  }
  FUN_140e19ad0((undefined8 *)local_438);
  return;
}



// ============================================================
// Function: FUN_140e045f0 @ 140e045f0
// ============================================================

void FUN_140e045f0(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_140e04220();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_140e04220();
    FUN_140e03670((longlong)puVar1,param_2);
  }
  return;
}



// ============================================================
// Function: FUN_140e04620 @ 140e04620
// ============================================================

void FUN_140e04620(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if ((param_2 != 0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(), cVar1 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}



// ============================================================
// Function: FUN_140e04680 @ 140e04680
// ============================================================

longlong FUN_140e04680(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong in_RAX;
  undefined8 uVar7;
  uint7 uVar9;
  longlong lVar8;
  
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar2 = *param_3;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),uVar1);
    if (cVar3 == '\0') {
      uVar4 = param_2[0x1f];
      uVar5 = param_2[0x1e];
    }
    else {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar1);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),uVar1);
      param_2[0x1f] = uVar4;
      param_2[0x1e] = uVar5;
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar2);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),uVar2);
    param_3[0x1f] = uVar6;
    param_3[0x1e] = (uint)uVar7;
    uVar9 = (uint7)((ulonglong)uVar7 >> 8);
    if ((uVar4 < uVar6) || ((uVar6 == uVar4 && (uVar5 < (uint)uVar7)))) {
      lVar8 = (ulonglong)uVar9 << 8;
    }
    else {
      lVar8 = CONCAT71(uVar9,1);
    }
    return lVar8;
  }
  return in_RAX & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e04760 @ 140e04760
// ============================================================

void FUN_140e04760(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  CMsg local_438 [1072];
  
  FUN_140e19720(local_438);
  uVar1 = FUN_140e197e0(local_438,'\b',0,0,0,0,0,0,(char *)0x0,(char *)0x0);
  if ((char)uVar1 == '\0') {
    log_InlineLogERROR(&DAT_140e23698);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
              (*(longlong **)(param_1 + 8),param_2,local_438);
  }
  FUN_140e197a0((undefined8 *)local_438);
  return;
}



// ============================================================
// Function: FUN_140e04820 @ 140e04820
// ============================================================

void FUN_140e04820(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    pIVar3 = theInstance();
    lVar1 = **(longlong **)(param_1 + 8);
    uVar4 = (**(code **)(lVar1 + 0x70))(*(longlong **)(param_1 + 8),param_3);
    uVar5 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_GUIDE_STUDENT_AUTO_REFUSE");
    (**(code **)(lVar1 + 0x120))(*(undefined8 *)(param_1 + 8),param_2,uVar5,uVar4);
    pIVar3 = theInstance();
    plVar2 = *(longlong **)(param_1 + 8);
    lVar1 = *plVar2;
    uVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
    uVar5 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_GUIDE_TUTOR_AUTO_REFUSE");
    (**(code **)(lVar1 + 0x120))(*(undefined8 *)(param_1 + 8),param_3,uVar5,uVar4);
  }
  return;
}



// ============================================================
// Function: FUN_140e048f0 @ 140e048f0
// ============================================================

void FUN_140e048f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e048f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x128))();
  return;
}



// ============================================================
// Function: FUN_140e04900 @ 140e04900
// ============================================================

void FUN_140e04900(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                     (*(longlong **)(param_1 + 0x10),0x23);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e0499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,300,0x6a);
  return;
}



// ============================================================
// Function: FUN_140e04a20 @ 140e04a20
// ============================================================

bool FUN_140e04a20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e04a60 @ 140e04a60
// ============================================================

bool FUN_140e04a60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e04ab0 @ 140e04ab0
// ============================================================

longlong FUN_140e04ab0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e04ad2;
  }
  lVar2 = *plVar1;
LAB_140e04ad2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e04af0 @ 140e04af0
// ============================================================

longlong * FUN_140e04af0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e04b12;
  }
  lVar2 = *plVar1;
LAB_140e04b12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e04b30 @ 140e04b30
// ============================================================

bool FUN_140e04b30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e04b70 @ 140e04b70
// ============================================================

bool FUN_140e04b70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e04be0 @ 140e04be0
// ============================================================

bool FUN_140e04be0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e04c20 @ 140e04c20
// ============================================================

bool FUN_140e04c20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e04d80 @ 140e04d80
// ============================================================

longlong FUN_140e04d80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e04da2;
  }
  lVar2 = *plVar1;
LAB_140e04da2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e04dc0 @ 140e04dc0
// ============================================================

longlong * FUN_140e04dc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e04de2;
  }
  lVar2 = *plVar1;
LAB_140e04de2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}



// ============================================================
// Function: FUN_140e04e00 @ 140e04e00
// ============================================================

bool FUN_140e04e00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e04e60 @ 140e04e60
// ============================================================

void FUN_140e04e60(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
}



// ============================================================
// Function: FUN_140e04fc0 @ 140e04fc0
// ============================================================

void FUN_140e04fc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x21) == '\0') {
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
// Function: FUN_140e05060 @ 140e05060
// ============================================================

bool FUN_140e05060(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e05130 @ 140e05130
// ============================================================

longlong FUN_140e05130(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e05152;
  }
  lVar2 = *plVar1;
LAB_140e05152:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e05170 @ 140e05170
// ============================================================

longlong * FUN_140e05170(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e05192;
  }
  lVar2 = *plVar1;
LAB_140e05192:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e051b0 @ 140e051b0
// ============================================================

bool FUN_140e051b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140e05250 @ 140e05250
// ============================================================

void FUN_140e05250(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
}



// ============================================================
// Function: FUN_140e05390 @ 140e05390
// ============================================================

longlong FUN_140e05390(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}



// ============================================================
// Function: FUN_140e05410 @ 140e05410
// ============================================================

longlong * FUN_140e05410(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e05440;
  }
  else {
LAB_140e05440:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140e05468;
  }
  _invalid_parameter_noinfo();
LAB_140e05468:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e05480 @ 140e05480
// ============================================================

longlong FUN_140e05480(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_140e054c0 @ 140e054c0
// ============================================================

void FUN_140e054c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x21) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x21) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x21);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x21);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x21);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x21);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e054e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e05550 @ 140e05550
// ============================================================

void FUN_140e05550(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
}



// ============================================================
// Function: FUN_140e055c0 @ 140e055c0
// ============================================================

longlong FUN_140e055c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_140e05730 @ 140e05730
// ============================================================

void FUN_140e05730(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e05762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e057d0 @ 140e057d0
// ============================================================

longlong * FUN_140e057d0(longlong *param_1,longlong param_2)

{
  FUN_140e05410(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140e057f0 @ 140e057f0
// ============================================================

void FUN_140e057f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e05822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e05890 @ 140e05890
// ============================================================

void FUN_140e05890(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x21) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x21);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x21);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x21);
    }
    if (*(char *)(param_1[1] + 0x21) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x21) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e058c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e05a50 @ 140e05a50
// ============================================================

longlong * FUN_140e05a50(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e05a80;
  }
  else {
LAB_140e05a80:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140e05aa8;
  }
  _invalid_parameter_noinfo();
LAB_140e05aa8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}



// ============================================================
// Function: FUN_140e05ac0 @ 140e05ac0
// ============================================================

longlong * FUN_140e05ac0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140e05af0;
  }
  else {
LAB_140e05af0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140e05b18;
  }
  _invalid_parameter_noinfo();
LAB_140e05b18:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e05b50 @ 140e05b50
// ============================================================

void FUN_140e05b50(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140e05bd0 @ 140e05bd0
// ============================================================

void FUN_140e05bd0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 << 2);
  return;
}



// ============================================================
// Function: FUN_140e05c70 @ 140e05c70
// ============================================================

void FUN_140e05c70(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140e05d20 @ 140e05d20
// ============================================================

void FUN_140e05d20(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e05db0 @ 140e05db0
// ============================================================

void FUN_140e05db0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e05e40 @ 140e05e40
// ============================================================

void FUN_140e05e40(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_1 * 0x28);
  return;
}



// ============================================================
// Function: FUN_140e060c0 @ 140e060c0
// ============================================================

void * FUN_140e060c0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e06110 @ 140e06110
// ============================================================

void * FUN_140e06110(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e061e0 @ 140e061e0
// ============================================================

void * FUN_140e061e0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e06280 @ 140e06280
// ============================================================

void * FUN_140e06280(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e062c0 @ 140e062c0
// ============================================================

longlong FUN_140e062c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e062e2;
  }
  lVar2 = *plVar1;
LAB_140e062e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e06300 @ 140e06300
// ============================================================

longlong * FUN_140e06300(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e06322;
  }
  lVar2 = *plVar1;
LAB_140e06322:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}



// ============================================================
// Function: FUN_140e06340 @ 140e06340
// ============================================================

bool FUN_140e06340(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e06380 @ 140e06380
// ============================================================

longlong FUN_140e06380(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e063a2;
  }
  lVar2 = *plVar1;
LAB_140e063a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e063c0 @ 140e063c0
// ============================================================

longlong FUN_140e063c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e063e2;
  }
  lVar2 = *plVar1;
LAB_140e063e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e06400 @ 140e06400
// ============================================================

longlong * FUN_140e06400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e06422;
  }
  lVar2 = *plVar1;
LAB_140e06422:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e06440 @ 140e06440
// ============================================================

bool FUN_140e06440(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e06480 @ 140e06480
// ============================================================

longlong FUN_140e06480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e064a2;
  }
  lVar2 = *plVar1;
LAB_140e064a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140e064c0 @ 140e064c0
// ============================================================

longlong * FUN_140e064c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e064e2;
  }
  lVar2 = *plVar1;
LAB_140e064e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e06500 @ 140e06500
// ============================================================

bool FUN_140e06500(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140e06540 @ 140e06540
// ============================================================

void FUN_140e06540(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e06570 @ 140e06570
// ============================================================

void FUN_140e06570(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e065a0 @ 140e065a0
// ============================================================

void FUN_140e065a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e065e0 @ 140e065e0
// ============================================================

void FUN_140e065e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e065f0 @ 140e065f0
// ============================================================

void FUN_140e065f0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140e06670 @ 140e06670
// ============================================================

void FUN_140e06670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x21) == '\0') {
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
// Function: FUN_140e066d0 @ 140e066d0
// ============================================================

void FUN_140e066d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e06700 @ 140e06700
// ============================================================

longlong FUN_140e06700(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e06722;
  }
  lVar2 = *plVar1;
LAB_140e06722:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e06740 @ 140e06740
// ============================================================

longlong FUN_140e06740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e06762;
  }
  lVar2 = *plVar1;
LAB_140e06762:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e06780 @ 140e06780
// ============================================================

longlong * FUN_140e06780(longlong *param_1)

{
  FUN_140e054c0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e067a0 @ 140e067a0
// ============================================================

void FUN_140e067a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e067d0 @ 140e067d0
// ============================================================

void FUN_140e067d0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 4);
  return;
}



// ============================================================
// Function: FUN_140e06890 @ 140e06890
// ============================================================

void FUN_140e06890(longlong param_1,longlong param_2)

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
// Function: FUN_140e068f0 @ 140e068f0
// ============================================================

void FUN_140e068f0(longlong param_1,longlong *param_2)

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
// Function: FUN_140e069b0 @ 140e069b0
// ============================================================

void FUN_140e069b0(longlong param_1,longlong param_2)

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
// Function: FUN_140e06a10 @ 140e06a10
// ============================================================

void FUN_140e06a10(longlong param_1,longlong *param_2)

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
// Function: FUN_140e06a80 @ 140e06a80
// ============================================================

void FUN_140e06a80(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140e06b40 @ 140e06b40
// ============================================================

longlong * FUN_140e06b40(longlong *param_1)

{
  FUN_140e05730(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e06b60 @ 140e06b60
// ============================================================

void FUN_140e06b60(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e06b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e06bf0 @ 140e06bf0
// ============================================================

longlong * FUN_140e06bf0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e06c5a;
  }
  _invalid_parameter_noinfo();
LAB_140e06c5a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e06c90 @ 140e06c90
// ============================================================

longlong * FUN_140e06c90(longlong *param_1)

{
  FUN_140e057f0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e06cb0 @ 140e06cb0
// ============================================================

void FUN_140e06cb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140e06cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140e06d40 @ 140e06d40
// ============================================================

longlong * FUN_140e06d40(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e054c0(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140e06d70 @ 140e06d70
// ============================================================

longlong * FUN_140e06d70(longlong *param_1)

{
  FUN_140e05890(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e06de0 @ 140e06de0
// ============================================================

void FUN_140e06de0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e06e60 @ 140e06e60
// ============================================================

void FUN_140e06e60(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140e06ee0 @ 140e06ee0
// ============================================================

longlong * FUN_140e06ee0(longlong *param_1,longlong param_2)

{
  FUN_140e05a50(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140e06f00 @ 140e06f00
// ============================================================

void FUN_140e06f00(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140e06f00(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}



// ============================================================
// Function: FUN_140e06f50 @ 140e06f50
// ============================================================

void FUN_140e06f50(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140e312f8);
  }
  operator_new(param_2 * 0x28);
  return;
}



// ============================================================
// Function: FUN_140e06fc0 @ 140e06fc0
// ============================================================

longlong * FUN_140e06fc0(longlong *param_1,longlong param_2)

{
  FUN_140e05ac0(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140e07010 @ 140e07010
// ============================================================

undefined8 * FUN_140e07010(undefined8 *param_1)

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
// Function: FUN_140e07050 @ 140e07050
// ============================================================

undefined8 * FUN_140e07050(undefined8 *param_1)

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
// Function: FUN_140e07090 @ 140e07090
// ============================================================

undefined8 * FUN_140e07090(undefined8 *param_1)

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
// Function: FUN_140e07100 @ 140e07100
// ============================================================

void * FUN_140e07100(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e07150 @ 140e07150
// ============================================================

void * FUN_140e07150(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e071c0 @ 140e071c0
// ============================================================

longlong * FUN_140e071c0(longlong *param_1)

{
  FUN_140e054c0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e07230 @ 140e07230
// ============================================================

void * FUN_140e07230(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e072d0 @ 140e072d0
// ============================================================

void * FUN_140e072d0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e07310 @ 140e07310
// ============================================================

undefined8 * FUN_140e07310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// ============================================================
// Function: FUN_140e07350 @ 140e07350
// ============================================================

longlong FUN_140e07350(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e07372;
  }
  lVar2 = *plVar1;
LAB_140e07372:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e07390 @ 140e07390
// ============================================================

longlong * FUN_140e07390(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * -8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e073fd;
  }
  _invalid_parameter_noinfo();
LAB_140e073fd:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e07430 @ 140e07430
// ============================================================

longlong FUN_140e07430(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e07452;
  }
  lVar2 = *plVar1;
LAB_140e07452:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e07470 @ 140e07470
// ============================================================

longlong FUN_140e07470(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140e07492;
  }
  lVar2 = *plVar1;
LAB_140e07492:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140e074b0 @ 140e074b0
// ============================================================

void FUN_140e074b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e074d0 @ 140e074d0
// ============================================================

void FUN_140e074d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e074f0 @ 140e074f0
// ============================================================

void FUN_140e074f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e07510 @ 140e07510
// ============================================================

void FUN_140e07510(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e07530 @ 140e07530
// ============================================================

void FUN_140e07530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e07550 @ 140e07550
// ============================================================

void FUN_140e07550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e07570 @ 140e07570
// ============================================================

undefined8 FUN_140e07570(longlong param_1,ulonglong param_2)

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
      FUN_140e05250();
    }
    lVar1 = FUN_140e067d0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140e075d0 @ 140e075d0
// ============================================================

undefined8 FUN_140e075d0(longlong param_1,ulonglong param_2)

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
      FUN_140e04e60();
    }
    lVar1 = FUN_140e065f0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140e07640 @ 140e07640
// ============================================================

void FUN_140e07640(longlong param_1)

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
// Function: FUN_140e07670 @ 140e07670
// ============================================================

longlong * FUN_140e07670(longlong *param_1)

{
  FUN_140e05730(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e07690 @ 140e07690
// ============================================================

undefined8 * FUN_140e07690(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e076d0 @ 140e076d0
// ============================================================

longlong * FUN_140e076d0(longlong *param_1)

{
  FUN_140e06b60(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e076f0 @ 140e076f0
// ============================================================

undefined8 * FUN_140e076f0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e07750 @ 140e07750
// ============================================================

longlong * FUN_140e07750(longlong *param_1)

{
  FUN_140e057f0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e07770 @ 140e07770
// ============================================================

longlong * FUN_140e07770(longlong *param_1)

{
  FUN_140e06cb0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e07790 @ 140e07790
// ============================================================

longlong * FUN_140e07790(longlong *param_1)

{
  FUN_140e05890(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e077b0 @ 140e077b0
// ============================================================

undefined8 FUN_140e077b0(longlong param_1,ulonglong param_2)

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
      FUN_140e05550();
    }
    lVar1 = FUN_140e06a80(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140e07820 @ 140e07820
// ============================================================

undefined8 * FUN_140e07820(undefined8 *param_1)

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
// Function: FUN_140e07860 @ 140e07860
// ============================================================

undefined8 *
FUN_140e07860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
// Function: FUN_140e078e0 @ 140e078e0
// ============================================================

undefined8 *
FUN_140e078e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
// Function: FUN_140e07960 @ 140e07960
// ============================================================

longlong * FUN_140e07960(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e079ca;
  }
  _invalid_parameter_noinfo();
LAB_140e079ca:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e07a00 @ 140e07a00
// ============================================================

undefined8 * FUN_140e07a00(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e07a60 @ 140e07a60
// ============================================================

undefined8 * FUN_140e07a60(undefined8 *param_1)

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
// Function: FUN_140e07aa0 @ 140e07aa0
// ============================================================

void FUN_140e07aa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140e06f00(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x21);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}



// ============================================================
// Function: FUN_140e07b20 @ 140e07b20
// ============================================================

undefined8 *
FUN_140e07b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    *(undefined1 *)(puVar1 + 4) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140e07ba0 @ 140e07ba0
// ============================================================

longlong * FUN_140e07ba0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e06b60(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140e07bd0 @ 140e07bd0
// ============================================================

undefined8 * FUN_140e07bd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e07c10 @ 140e07c10
// ============================================================

longlong * FUN_140e07c10(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140e06cb0(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140e07c40 @ 140e07c40
// ============================================================

undefined8 * FUN_140e07c40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e07c80 @ 140e07c80
// ============================================================

undefined8 * FUN_140e07c80(undefined8 *param_1)

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
// Function: FUN_140e07cc0 @ 140e07cc0
// ============================================================

longlong * FUN_140e07cc0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e07d2a;
  }
  _invalid_parameter_noinfo();
LAB_140e07d2a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e07d60 @ 140e07d60
// ============================================================

undefined8 * FUN_140e07d60(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e07dc0 @ 140e07dc0
// ============================================================

void FUN_140e07dc0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e07dc0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140e07e10 @ 140e07e10
// ============================================================

void FUN_140e07e10(void)

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
// Function: FUN_140e07e70 @ 140e07e70
// ============================================================

void FUN_140e07e70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e07e70(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140e07ec0 @ 140e07ec0
// ============================================================

void FUN_140e07ec0(void)

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
// Function: FUN_140e07f20 @ 140e07f20
// ============================================================

void FUN_140e07f20(void)

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
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  return;
}



// ============================================================
// Function: FUN_140e07f80 @ 140e07f80
// ============================================================

undefined8 * FUN_140e07f80(undefined8 *param_1)

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
// Function: FUN_140e07fd0 @ 140e07fd0
// ============================================================

undefined8 * FUN_140e07fd0(undefined8 *param_1)

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
// Function: FUN_140e08020 @ 140e08020
// ============================================================

undefined8 * FUN_140e08020(undefined8 *param_1)

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
// Function: FUN_140e080a0 @ 140e080a0
// ============================================================

void * FUN_140e080a0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e08110 @ 140e08110
// ============================================================

void * FUN_140e08110(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_140e08180 @ 140e08180
// ============================================================

void FUN_140e08180(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x21) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x21);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x21);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x21);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x21);
        }
        param_1[1] = lVar2;
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e08250 @ 140e08250
// ============================================================

void FUN_140e08250(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// Function: FUN_140e082f0 @ 140e082f0
// ============================================================

void * FUN_140e082f0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e08390 @ 140e08390
// ============================================================

void * FUN_140e08390(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e083d0 @ 140e083d0
// ============================================================

void FUN_140e083d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140e07310(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140e08410 @ 140e08410
// ============================================================

void FUN_140e08410(undefined8 *param_1)

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
// Function: FUN_140e08450 @ 140e08450
// ============================================================

undefined8 * FUN_140e08450(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e084a0 @ 140e084a0
// ============================================================

undefined8 * FUN_140e084a0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e084f0 @ 140e084f0
// ============================================================

longlong * FUN_140e084f0(longlong *param_1)

{
  FUN_140e06b60(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e08510 @ 140e08510
// ============================================================

longlong * FUN_140e08510(longlong *param_1)

{
  FUN_140e06cb0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e08530 @ 140e08530
// ============================================================

void FUN_140e08530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e08550 @ 140e08550
// ============================================================

void FUN_140e08550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e08570 @ 140e08570
// ============================================================

void FUN_140e08570(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e08590 @ 140e08590
// ============================================================

void FUN_140e08590(longlong param_1)

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
// Function: FUN_140e085c0 @ 140e085c0
// ============================================================

undefined8 * FUN_140e085c0(undefined8 *param_1)

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
// Function: FUN_140e08650 @ 140e08650
// ============================================================

undefined8 * FUN_140e08650(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e086b0 @ 140e086b0
// ============================================================

undefined8 * FUN_140e086b0(undefined8 *param_1)

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
// Function: FUN_140e08700 @ 140e08700
// ============================================================

undefined8 * FUN_140e08700(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e08740 @ 140e08740
// ============================================================

undefined8 * FUN_140e08740(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e087a0 @ 140e087a0
// ============================================================

undefined8 * FUN_140e087a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e087e0 @ 140e087e0
// ============================================================

undefined8 * FUN_140e087e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140e08820 @ 140e08820
// ============================================================

undefined8 * FUN_140e08820(undefined8 *param_1)

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
// Function: FUN_140e08870 @ 140e08870
// ============================================================

undefined8 * FUN_140e08870(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140e088d0 @ 140e088d0
// ============================================================

undefined8 * FUN_140e088d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e08920 @ 140e08920
// ============================================================

undefined8 * FUN_140e08920(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e31410);
  }
  FUN_140e06b60(param_3);
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
        goto LAB_140e08b0c;
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
LAB_140e08b0c:
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
            FUN_140e06890((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e068f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140e06890((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140e068f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e06890((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140e068f0((longlong)param_1,plVar7);
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
// Function: FUN_140e08ce0 @ 140e08ce0
// ============================================================

void FUN_140e08ce0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e07dc0(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_140e08d60 @ 140e08d60
// ============================================================

undefined8 * FUN_140e08d60(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}



// ============================================================
// Function: FUN_140e08e40 @ 140e08e40
// ============================================================

void FUN_140e08e40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e07e10();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140e08e80 @ 140e08e80
// ============================================================

undefined8 * FUN_140e08e80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e08ed0 @ 140e08ed0
// ============================================================

undefined8 * FUN_140e08ed0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e31410);
  }
  FUN_140e06cb0(param_3);
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
        goto LAB_140e090bc;
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
LAB_140e090bc:
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
            FUN_140e069b0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e06a10((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140e069b0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140e06a10((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140e069b0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140e06a10((longlong)param_1,plVar7);
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
// Function: FUN_140e09290 @ 140e09290
// ============================================================

void FUN_140e09290(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140e07e70(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_140e09310 @ 140e09310
// ============================================================

undefined8 * FUN_140e09310(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[6];
  puVar6 = puVar5;
  if (*(char *)((longlong)puVar5[1] + 0x29) == '\0') {
    uVar1 = *param_3;
    puVar3 = (undefined8 *)puVar5[1];
    do {
      if ((*(uint *)(puVar3 + 3) < uVar1) ||
         ((*(uint *)(puVar3 + 3) <= uVar1 && (*(uint *)((longlong)puVar3 + 0x1c) < param_3[1])))) {
        puVar4 = (undefined8 *)puVar3[2];
      }
      else {
        if ((*(char *)((longlong)puVar6 + 0x29) != '\0') &&
           ((uVar1 < *(uint *)(puVar3 + 3) ||
            ((uVar1 <= *(uint *)(puVar3 + 3) && (param_3[1] < *(uint *)((longlong)puVar3 + 0x1c)))))
           )) {
          puVar6 = puVar3;
        }
        puVar4 = (undefined8 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
    puVar3 = (undefined8 *)*puVar6;
  }
  else {
    puVar3 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
    do {
      if ((*param_3 < *(uint *)(puVar3 + 3)) ||
         ((*param_3 <= *(uint *)(puVar3 + 3) && (param_3[1] < *(uint *)((longlong)puVar3 + 0x1c)))))
      {
        puVar4 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      else {
        puVar4 = (undefined8 *)puVar3[2];
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  }
  uVar2 = *param_1;
  *param_2 = uVar2;
  param_2[1] = puVar5;
  param_2[2] = uVar2;
  param_2[3] = puVar6;
  return param_2;
}



// ============================================================
// Function: FUN_140e09420 @ 140e09420
// ============================================================

void FUN_140e09420(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e07ec0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140e09460 @ 140e09460
// ============================================================

undefined8 * FUN_140e09460(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x21) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x21) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x21) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x21) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x21) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}



// ============================================================
// Function: FUN_140e09540 @ 140e09540
// ============================================================

void FUN_140e09540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e07f20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140e09580 @ 140e09580
// ============================================================

undefined8 * FUN_140e09580(undefined8 *param_1)

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
// Function: FUN_140e095d0 @ 140e095d0
// ============================================================

undefined8 * FUN_140e095d0(undefined8 *param_1)

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
// Function: FUN_140e09620 @ 140e09620
// ============================================================

undefined8 * FUN_140e09620(undefined8 *param_1)

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
// Function: FUN_140e09670 @ 140e09670
// ============================================================

void FUN_140e09670(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x21) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x21);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x21);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x21);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x21);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e09760 @ 140e09760
// ============================================================

void FUN_140e09760(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140e08250(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140e09790 @ 140e09790
// ============================================================

longlong FUN_140e09790(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = param_2 - param_1;
  if (param_1 != param_2) {
    lVar3 = param_3 - param_2;
    do {
      puVar1 = (undefined8 *)(param_2 + -8);
      param_2 = param_2 + -8;
      *(undefined8 *)(lVar3 + param_2) = *puVar1;
    } while (param_2 != param_1);
  }
  return param_3 - (uVar2 & 0xfffffffffffffff8);
}



// ============================================================
// Function: FUN_140e097d0 @ 140e097d0
// ============================================================

void FUN_140e097d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
        }
        param_1[1] = lVar2;
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e098a0 @ 140e098a0
// ============================================================

void FUN_140e098a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
        }
        param_1[1] = lVar2;
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e09970 @ 140e09970
// ============================================================

void * FUN_140e09970(longlong param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,*(void **)(param_1 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140e09a10 @ 140e09a10
// ============================================================

void * FUN_140e09a10(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e09a50 @ 140e09a50
// ============================================================

void * FUN_140e09a50(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e09a90 @ 140e09a90
// ============================================================

void FUN_140e09a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140e07310(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140e09ab0 @ 140e09ab0
// ============================================================

longlong * FUN_140e09ab0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x38) < plVar7) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar1 < *(longlong **)(param_1 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar1) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)*plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,1);
      uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
      if (uVar5 <= param_2) {
        plVar6 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,2);
        uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
        if (param_2 <= uVar5) {
          return plVar4;
        }
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar7 = plVar7 + 1;
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e09bc0 @ 140e09bc0
// ============================================================

longlong * FUN_140e09bc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x98) < plVar7) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar1 < *(longlong **)(param_1 + 0x90)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar1) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)*plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,0);
      iVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
      if (iVar5 == param_2) {
        return plVar4;
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar7 = plVar7 + 1;
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e09cb0 @ 140e09cb0
// ============================================================

longlong * FUN_140e09cb0(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x60);
  if (*(longlong **)(param_1 + 0x68) < plVar8) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar1 < *(longlong **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar1) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)*plVar8;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,3);
      uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
      if (uVar5 <= param_2) {
        plVar7 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,4);
        uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
        if (param_2 <= uVar5) {
          plVar7 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,2);
          iVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
          if (iVar6 == param_3) {
            return plVar4;
          }
        }
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar8 = plVar8 + 1;
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e09df0 @ 140e09df0
// ============================================================

undefined8 * FUN_140e09df0(undefined8 *param_1)

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
// Function: FUN_140e09e50 @ 140e09e50
// ============================================================

void FUN_140e09e50(undefined8 *param_1)

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
// Function: FUN_140e09e90 @ 140e09e90
// ============================================================

undefined8 * FUN_140e09e90(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e09ee0 @ 140e09ee0
// ============================================================

undefined8 * FUN_140e09ee0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e09f70 @ 140e09f70
// ============================================================

longlong * FUN_140e09f70(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_140e0a080 @ 140e0a080
// ============================================================

undefined8 * FUN_140e0a080(undefined8 *param_1)

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
// Function: FUN_140e0a0e0 @ 140e0a0e0
// ============================================================

undefined8 * FUN_140e0a0e0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e0a130 @ 140e0a130
// ============================================================

undefined8 * FUN_140e0a130(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e0a1a0 @ 140e0a1a0
// ============================================================

undefined8 * FUN_140e0a1a0(undefined8 *param_1)

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
// Function: FUN_140e0a200 @ 140e0a200
// ============================================================

undefined8 * FUN_140e0a200(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e0a250 @ 140e0a250
// ============================================================

undefined8 * FUN_140e0a250(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e0a2a0 @ 140e0a2a0
// ============================================================

void FUN_140e0a2a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0a2c0 @ 140e0a2c0
// ============================================================

void FUN_140e0a2c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0a2e0 @ 140e0a2e0
// ============================================================

void FUN_140e0a2e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0a300 @ 140e0a300
// ============================================================

longlong * FUN_140e0a300(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e08ce0((longlong)param_1);
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
    FUN_140e08920(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140e0a4f0 @ 140e0a4f0
// ============================================================

undefined8 * FUN_140e0a4f0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140e08d60(param_1,param_2,param_3);
  return param_2;
}



// ============================================================
// Function: FUN_140e0a510 @ 140e0a510
// ============================================================

undefined8 *
FUN_140e0a510(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
  }
  plVar5 = FUN_140e07860(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_140e0a850 @ 140e0a850
// ============================================================

void FUN_140e0a850(longlong *param_1)

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
  FUN_140e0a300(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140e0a8c0 @ 140e0a8c0
// ============================================================

longlong * FUN_140e0a8c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e09290((longlong)param_1);
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
    FUN_140e08ed0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140e0aac0 @ 140e0aac0
// ============================================================

undefined8 * FUN_140e0aac0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140e09310(param_1,param_2,param_3);
  return param_2;
}



// ============================================================
// Function: FUN_140e0aae0 @ 140e0aae0
// ============================================================

undefined8 *
FUN_140e0aae0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
  }
  plVar5 = FUN_140e078e0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_140e0ae20 @ 140e0ae20
// ============================================================

void FUN_140e0ae20(longlong *param_1)

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
  FUN_140e0a8c0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140e0aeb0 @ 140e0aeb0
// ============================================================

undefined8 * FUN_140e0aeb0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e0af40 @ 140e0af40
// ============================================================

undefined8 * FUN_140e0af40(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140e09460(param_1,param_2,param_3);
  return param_2;
}



// ============================================================
// Function: FUN_140e0af60 @ 140e0af60
// ============================================================

undefined8 *
FUN_140e0af60(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x1ffffffffffffffd < (ulonglong)param_1[7]) {
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140e31380);
  }
  plVar5 = FUN_140e07b20(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x20);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x20) == '\0') {
        *(undefined1 *)(plVar2 + 4) = 1;
        *(undefined1 *)(lVar4 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x21) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x21) == '\0') {
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
      if (*(char *)(lVar4 + 0x20) == '\0') {
        *(undefined1 *)(plVar2 + 4) = 1;
        *(undefined1 *)(lVar4 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x21) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x21) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x20);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x20) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_140e0b2a0 @ 140e0b2a0
// ============================================================

undefined8 *
FUN_140e0b2a0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140e08250(param_2,param_3,param_4);
  return param_2 + param_3;
}



// ============================================================
// Function: FUN_140e0b300 @ 140e0b300
// ============================================================

undefined8 * FUN_140e0b300(undefined8 *param_1)

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
// Function: FUN_140e0b350 @ 140e0b350
// ============================================================

undefined8 * FUN_140e0b350(undefined8 *param_1)

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
// Function: FUN_140e0b3a0 @ 140e0b3a0
// ============================================================

undefined8 * FUN_140e0b3a0(undefined8 *param_1)

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
// Function: FUN_140e0b3f0 @ 140e0b3f0
// ============================================================

void FUN_140e0b3f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e0b4e0 @ 140e0b4e0
// ============================================================

void FUN_140e0b4e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e0b5d0 @ 140e0b5d0
// ============================================================

void * FUN_140e0b5d0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 8) - (longlong)*(void **)(param_2 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,*(void **)(param_2 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}



// ============================================================
// Function: FUN_140e0b6a0 @ 140e0b6a0
// ============================================================

void * FUN_140e0b6a0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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
// Function: FUN_140e0b6e0 @ 140e0b6e0
// ============================================================

void * FUN_140e0b6e0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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
// Function: FUN_140e0b720 @ 140e0b720
// ============================================================

void FUN_140e0b720(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140e07310(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_140e0b740 @ 140e0b740
// ============================================================

undefined8 * FUN_140e0b740(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  if (uVar1 < *(ulonglong *)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if (*(ulonglong *)(param_1 + 0x68) < uVar3) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e0b7d0 @ 140e0b7d0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e0b7d0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 extraout_RAX;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong extraout_RAX_00;
  longlong lVar7;
  longlong *plVar8;
  undefined8 extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *plVar9;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  longlong *local_4a8 [3];
  longlong *local_490;
  longlong *local_488;
  undefined8 local_480;
  undefined4 local_478;
  longlong *local_470;
  longlong *local_468;
  longlong *local_460;
  undefined8 local_458;
  char local_448;
  undefined1 local_447 [1022];
  undefined1 local_49;
  ulonglong local_48;
  
  local_458 = 0xfffffffffffffffe;
  local_48 = DAT_140e33968 ^ (ulonglong)auStack_4d8;
  plVar6 = (longlong *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  local_478 = param_2;
  local_470 = operator_new(8);
  local_4a8[0] = plVar6;
  if (local_470 != (longlong *)0x0) {
    *local_470 = (longlong)local_4a8;
    local_4a8[0] = local_470;
  }
  local_490 = (longlong *)0x0;
  local_488 = (longlong *)0x0;
  local_480 = 0;
  local_460 = local_470;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x118))
            (*(longlong **)(param_1 + 8),local_4a8,param_2,0x14);
  plVar8 = local_490;
  if ((longlong)local_488 - (longlong)local_490 >> 3 == 0) {
    local_448 = '\0';
    memset(local_447,0,0x3ff);
    _snprintf(&local_448,0x400,PTR_s_SELECT_level__metempsychosis_FRO_140e33450);
    local_49 = 0;
    plVar6 = (longlong *)InstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_448,2);
    if (plVar6 == (longlong *)0x0) {
      local_4b8 = 0x742;
      log_InlineLogERROR(&DAT_140e23698);
      if (local_490 != (longlong *)0x0) {
        operator_delete(local_490);
      }
      local_490 = (longlong *)0x0;
      local_488 = (longlong *)0x0;
      local_480 = 0;
      operator_delete(local_4a8[0]);
      uVar5 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (lVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        log_InlineLogERROR("CGuideMgr no user info [GetUserInfoRecord] [UserID:%u]");
        if (local_490 != (longlong *)0x0) {
          operator_delete(local_490);
        }
        local_490 = (longlong *)0x0;
        local_488 = (longlong *)0x0;
        local_480 = 0;
        operator_delete(local_4a8[0]);
        uVar5 = extraout_RAX_02 & 0xffffffffffffff00;
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,0);
        uVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
        *param_3 = uVar3;
        plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,1);
        uVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
        *param_4 = uVar3;
        (**(code **)*plVar6)(plVar6);
        if (local_490 != (longlong *)0x0) {
          operator_delete(local_490);
        }
        local_490 = (longlong *)0x0;
        local_488 = (longlong *)0x0;
        local_480 = 0;
        operator_delete(local_4a8[0]);
        uVar5 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
      }
    }
  }
  else {
    if (local_488 < local_490) {
      _invalid_parameter_noinfo();
    }
    plVar2 = local_4a8[0];
    local_470 = local_4a8[0];
    local_468 = plVar8;
    if (local_4a8[0] == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar4 = plVar6;
    }
    else {
      plVar4 = (longlong *)*local_4a8[0];
    }
    if ((longlong *)plVar4[4] <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar4 = local_490;
    if (*plVar8 != 0) {
      if (local_488 < local_490) {
        _invalid_parameter_noinfo();
      }
      if (local_4a8[0] == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar9 = plVar6;
      }
      else {
        plVar9 = (longlong *)*local_4a8[0];
      }
      if ((longlong *)plVar9[4] <= plVar4) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar4;
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,0);
      uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
      plVar4 = local_490;
      *param_3 = uVar3;
      if (local_488 < local_490) {
        _invalid_parameter_noinfo();
      }
      if (local_4a8[0] == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar9 = plVar6;
      }
      else {
        plVar9 = (longlong *)*local_4a8[0];
      }
      if ((longlong *)plVar9[4] <= plVar4) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*plVar4;
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,1);
      uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
      *param_4 = uVar3;
    }
    while( true ) {
      plVar4 = local_488;
      if (local_488 < local_490) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_4a8[0])) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar4) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar4 = plVar6;
      }
      else {
        plVar4 = (longlong *)*plVar2;
      }
      if ((longlong *)plVar4[4] <= plVar8) {
        _invalid_parameter_noinfo();
      }
      puVar1 = (undefined8 *)*plVar8;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar4 = plVar6;
      }
      else {
        plVar4 = (longlong *)*plVar2;
      }
      if ((longlong *)plVar4[4] <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar8 = plVar8 + 1;
      local_468 = plVar8;
    }
    if (local_490 != (longlong *)0x0) {
      operator_delete(local_490);
    }
    local_490 = (longlong *)0x0;
    local_488 = (longlong *)0x0;
    local_480 = 0;
    operator_delete(local_4a8[0]);
    uVar5 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  return uVar5;
}



// ============================================================
// Function: FUN_140e0bbf0 @ 140e0bbf0
// ============================================================

undefined8 FUN_140e0bbf0(longlong param_1,int param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = FUN_140e09cb0(param_1,param_3,param_4);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 == 5) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,5);
                    /* WARNING: Could not recover jumptable at 0x000140e0bc6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
      return uVar2;
    }
    if (param_2 == 6) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,6);
                    /* WARNING: Could not recover jumptable at 0x000140e0bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
      return uVar2;
    }
    if (param_2 == 7) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,7);
                    /* WARNING: Could not recover jumptable at 0x000140e0bc33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_140e0bc80 @ 140e0bc80
// ============================================================

undefined8 FUN_140e0bc80(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_140e09f70((longlong *)(param_1 + 0xa8),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0xa8))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar1) {
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar1 = 0;
    }
    else {
      lVar1 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar1 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    return *(undefined8 *)(local_10 + 0x20);
  }
  return 0;
}



// ============================================================
// Function: FUN_140e0bd30 @ 140e0bd30
// ============================================================

ulonglong FUN_140e0bd30(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint *puVar6;
  ulonglong extraout_RAX;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong extraout_RAX_00;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint local_res10;
  longlong *local_58;
  uint *local_50;
  longlong *local_48;
  uint *local_40;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if ((char)uVar7 != '\0') {
    return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  uVar7 = FUN_140e17740(param_2,0);
  lVar8 = FUN_140e0bc80(param_1,(uint)uVar7);
  if (lVar8 == 0) {
LAB_140e0be12:
    puVar1 = *(uint **)(param_2 + 0x68);
    if (puVar1 < *(uint **)(param_2 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    puVar13 = *(uint **)(param_2 + 0x60);
    plVar2 = *(longlong **)(param_2 + 0x48);
    if (*(uint **)(param_2 + 0x68) < puVar13) {
      _invalid_parameter_noinfo();
    }
    plVar3 = *(longlong **)(param_2 + 0x48);
    uVar9 = 0;
    local_res10 = 0;
    while( true ) {
      if ((plVar3 == (longlong *)0x0) || (plVar3 != plVar2)) {
        _invalid_parameter_noinfo();
        uVar9 = (ulonglong)local_res10;
      }
      if (puVar13 == puVar1) goto LAB_140e0c08b;
      local_res10 = (int)uVar9 + 1;
      if (10000 < local_res10) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(uint **)(lVar8 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar10 = (undefined4 *)FUN_140e0bc80(param_1,*puVar13);
      if (puVar10 != (undefined4 *)0x0) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                          (*(longlong **)(param_1 + 8),*puVar10);
        if ((char)uVar7 != '\0') {
LAB_140e0c05d:
          return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_140e0b740((longlong)puVar10,&local_58);
        puVar6 = local_40;
        plVar5 = local_48;
        plVar4 = local_58;
        uVar12 = 0;
        puVar11 = local_50;
        while( true ) {
          if ((plVar4 == (longlong *)0x0) || (plVar4 != plVar5)) {
            _invalid_parameter_noinfo();
          }
          if (puVar11 == puVar6) goto LAB_140e0c025;
          uVar12 = uVar12 + 1;
          if (10000 < uVar12) break;
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar4;
          }
          if (*(uint **)(lVar8 + 0x20) <= puVar11) {
            _invalid_parameter_noinfo();
          }
          puVar10 = (undefined4 *)FUN_140e0bc80(param_1,*puVar11);
          if ((puVar10 != (undefined4 *)0x0) &&
             (uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                                (*(longlong **)(param_1 + 8),*puVar10), (char)uVar7 != '\0'))
          goto LAB_140e0c05d;
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar4;
          }
          if (*(uint **)(lVar8 + 0x20) <= puVar11) {
            _invalid_parameter_noinfo();
          }
          puVar11 = puVar11 + 1;
        }
        log_InlineLogERROR(&DAT_140e23698);
      }
LAB_140e0c025:
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(uint **)(lVar8 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      uVar9 = (ulonglong)local_res10;
      puVar13 = puVar13 + 1;
    }
    log_InlineLogERROR(&DAT_140e23698);
    uVar9 = extraout_RAX_00;
LAB_140e0c08b:
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
    if ((char)uVar7 == '\0') {
      uVar9 = FUN_140e17740(lVar8,0);
      lVar8 = FUN_140e0bc80(param_1,(uint)uVar9);
      if ((lVar8 == 0) ||
         (uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                            (*(longlong **)(param_1 + 8),uVar9 & 0xffffffff), (char)uVar7 == '\0'))
      goto LAB_140e0be12;
    }
    uVar9 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  return uVar9;
}



// ============================================================
// Function: FUN_140e0c0c0 @ 140e0c0c0
// ============================================================

int FUN_140e0c0c0(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  puVar2 = *(uint **)(param_2 + 0x1a);
  if (puVar2 < *(uint **)(param_2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  puVar8 = *(uint **)(param_2 + 0x18);
  plVar3 = *(longlong **)(param_2 + 0x12);
  if (*(uint **)(param_2 + 0x1a) < puVar8) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_2 + 0x12);
  iVar9 = 0;
  uVar7 = 0;
  while( true ) {
    if ((plVar4 == (longlong *)0x0) || (plVar4 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar2) break;
    uVar7 = uVar7 + 1;
    if (10000 < uVar7) {
      log_InlineLogERROR(&DAT_140e23698);
      return iVar9;
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
    if (*(uint **)(lVar5 + 0x20) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    lVar5 = FUN_140e0bc80(param_1,*puVar8);
    if ((lVar5 != 0) &&
       (iVar1 = *param_2, uVar6 = FUN_140e17740(lVar5,param_3), (int)uVar6 == iVar1)) {
      iVar9 = iVar9 + 1;
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
    if (*(uint **)(lVar5 + 0x20) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    puVar8 = puVar8 + 1;
  }
  return iVar9;
}



// ============================================================
// Function: FUN_140e0c250 @ 140e0c250
// ============================================================

void FUN_140e0c250(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *local_38 [3];
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  uVar5 = 0xfffffffffffffffe;
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  local_38[0] = plVar2;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)local_38;
    local_38[0] = plVar1;
  }
  local_20 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x118))
            (*(longlong **)(param_1 + 8),local_38,param_2,param_3,uVar5,plVar1);
  plVar3 = local_20;
  plVar1 = local_38[0];
  if (local_18 < local_20) {
    _invalid_parameter_noinfo();
    plVar1 = local_38[0];
  }
  while( true ) {
    plVar4 = local_18;
    if (local_18 < local_20) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_38[0])) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar4) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar4 = plVar2;
    }
    else {
      plVar4 = (longlong *)*plVar1;
    }
    if ((longlong *)plVar4[4] <= plVar3) {
      _invalid_parameter_noinfo();
    }
    if (*plVar3 != 0) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar4 = plVar2;
      }
      else {
        plVar4 = (longlong *)*plVar1;
      }
      if ((longlong *)plVar4[4] <= plVar3) {
        _invalid_parameter_noinfo();
      }
      (*(code *)**(undefined8 **)*plVar3)((undefined8 *)*plVar3,1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar4 = plVar2;
    }
    else {
      plVar4 = (longlong *)*plVar1;
    }
    if ((longlong *)plVar4[4] <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    operator_delete(local_20);
  }
  local_20 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  operator_delete(local_38[0]);
  return;
}



// ============================================================
// Function: FUN_140e0c3d0 @ 140e0c3d0
// ============================================================

longlong * FUN_140e0c3d0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140e0c52d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e0c55c;
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
      goto LAB_140e0c52d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e0a510(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e0c55c:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140e0c580 @ 140e0c580
// ============================================================

longlong FUN_140e0c580(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_140e08d60(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_140e0a300(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}



// ============================================================
// Function: FUN_140e0c6c0 @ 140e0c6c0
// ============================================================

longlong * FUN_140e0c6c0(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_140e0c790 @ 140e0c790
// ============================================================

longlong * FUN_140e0c790(longlong *param_1,longlong *param_2,uint *param_3)

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
  
  plVar5 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar5[1] + 0x29) == '\0') {
    plVar6 = (longlong *)plVar5[1];
    do {
      plVar5 = plVar6;
      if ((*param_3 < *(uint *)(plVar5 + 3)) ||
         ((*param_3 <= *(uint *)(plVar5 + 3) && (param_3[1] < *(uint *)((longlong)plVar5 + 0x1c)))))
      {
        plVar6 = (longlong *)*plVar5;
        bVar7 = true;
      }
      else {
        plVar6 = (longlong *)plVar5[2];
        bVar7 = false;
      }
    } while (*(char *)((longlong)plVar6 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar6 = plVar5;
  local_38 = lVar2;
  plVar4 = plVar5;
  if (bVar7) {
    plVar6 = *(longlong **)param_1[6];
    local_30 = plVar5;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 != plVar6) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        plVar6 = (longlong *)*plVar5;
        if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar6[2] + 0x29);
          plVar3 = (longlong *)plVar6[2];
          while (plVar4 = plVar6, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar6 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((plVar6 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar6))) {
            cVar1 = *(char *)(plVar6[1] + 0x29);
            plVar4 = (longlong *)plVar6[1];
            plVar3 = plVar6;
            local_30 = plVar6;
          }
          plVar4 = plVar6;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar6 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar6 = (longlong *)plVar5[2];
        plVar4 = plVar6;
        if (*(char *)((longlong)plVar6 + 0x29) != '\0') {
          local_30 = plVar6;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140e0c8cd;
    }
    bVar7 = true;
  }
  else {
LAB_140e0c8cd:
    local_30 = plVar4;
    if ((*param_3 <= *(uint *)(plVar6 + 3)) &&
       ((*param_3 < *(uint *)(plVar6 + 3) || (param_3[1] <= *(uint *)((longlong)plVar6 + 0x1c))))) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e0c923;
    }
  }
  plVar5 = FUN_140e0aae0(param_1,&local_38,bVar7,plVar5,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar5[1];
  *param_2 = *plVar5;
LAB_140e0c923:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140e0c950 @ 140e0c950
// ============================================================

longlong FUN_140e0c950(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_140e09310(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_140e0a8c0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}



// ============================================================
// Function: FUN_140e0ca90 @ 140e0ca90
// ============================================================

longlong * FUN_140e0ca90(longlong *param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar2 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar2[1] + 0x29) == '\0') {
    puVar3 = (undefined8 *)puVar2[1];
    do {
      if ((*(uint *)(puVar3 + 3) < *param_3) ||
         ((*(uint *)(puVar3 + 3) <= *param_3 && (*(uint *)((longlong)puVar3 + 0x1c) < param_3[1]))))
      {
        puVar4 = (undefined8 *)puVar3[2];
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  }
  puVar3 = (undefined8 *)param_1[6];
  local_20 = puVar2;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (((puVar2 == puVar3) || (*param_3 < *(uint *)(puVar2 + 3))) ||
     ((*param_3 <= *(uint *)(puVar2 + 3) && (param_3[1] < *(uint *)((longlong)puVar2 + 0x1c))))) {
    plVar1 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar1 = &local_28;
  }
  *param_2 = *plVar1;
  param_2[1] = plVar1[1];
  return param_2;
}



// ============================================================
// Function: FUN_140e0cb80 @ 140e0cb80
// ============================================================

void FUN_140e0cb80(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong uStack_10;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140e04e60();
  }
  if (param_1[3] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (longlong)(param_1[5] - param_1[3]) >> 3;
  }
  if (uVar3 < param_2) {
    pvVar4 = (void *)FUN_140e065f0(param_1 + 2,param_2);
    uVar3 = param_1[4];
    if (uVar3 < (ulonglong)param_1[3]) {
      _invalid_parameter_noinfo();
    }
    local_48 = (undefined4)*param_1;
    uStack_44 = (undefined4)((ulonglong)*param_1 >> 0x20);
    uStack_40 = (undefined4)uVar3;
    uStack_3c = (undefined4)(uVar3 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uVar3 = param_1[3];
    if ((ulonglong)param_1[4] < uVar3) {
      _invalid_parameter_noinfo();
    }
    local_18 = *param_1;
    uStack_10 = uVar3;
    FUN_140e0b5d0(param_1,(longlong)&local_18,(longlong)&local_28,pvVar4);
    pvVar1 = (void *)param_1[3];
    lVar2 = param_1[4];
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[5] = (void *)((longlong)pvVar4 + param_2 * 8);
    param_1[4] = (void *)((longlong)pvVar4 + (lVar2 - (longlong)pvVar1 >> 3) * 8);
    param_1[3] = pvVar4;
  }
  return;
}



// ============================================================
// Function: FUN_140e0ccb0 @ 140e0ccb0
// ============================================================

longlong * FUN_140e0ccb0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x21) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x21) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_140e0ce0d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140e0ce3c;
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
      if (*(char *)((longlong)plVar6 + 0x21) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x21) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x21);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x21);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x21);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x21);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x21) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x21) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_140e0ce0d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140e0af60(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140e0ce3c:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140e0ce60 @ 140e0ce60
// ============================================================

undefined8 * FUN_140e0ce60(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x21) != '\0') {
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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140e31410);
  }
  FUN_140e054c0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x21) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
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
        plVar3 = plVar2 + 4;
        plVar7 = plVar7 + 4;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140e0d04c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x21);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x21);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x21);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x21);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140e0d04c:
  if ((char)plVar2[4] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[4] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140e06670((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140e04fc0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_140e06670((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140e04fc0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140e06670((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_140e04fc0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 4) = 1;
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
// Function: FUN_140e0d220 @ 140e0d220
// ============================================================

longlong * FUN_140e0d220(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x21) == '\0');
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
// Function: FUN_140e0d2f0 @ 140e0d2f0
// ============================================================

void FUN_140e0d2f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0d310 @ 140e0d310
// ============================================================

void FUN_140e0d310(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0d330 @ 140e0d330
// ============================================================

void FUN_140e0d330(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0d3b0 @ 140e0d3b0
// ============================================================

longlong * FUN_140e0d3b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140e07aa0((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x21) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x21);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x21);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x21);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x21);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_140e0ce60(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140e0d560 @ 140e0d560
// ============================================================

void FUN_140e0d560(longlong *param_1)

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
  FUN_140e0d3b0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140e0d5d0 @ 140e0d5d0
// ============================================================

void FUN_140e0d5d0(longlong param_1)

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
// Function: FUN_140e0d600 @ 140e0d600
// ============================================================

void FUN_140e0d600(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140e05250();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140e067d0(param_1 + 0x10,uVar8);
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
      FUN_140e0b6a0(param_1,*(void **)(param_2 + 8),lVar6,
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
      pvVar2 = FUN_140e0b6a0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140e080a0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
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
// Function: FUN_140e0d8a0 @ 140e0d8a0
// ============================================================

undefined8 * FUN_140e0d8a0(undefined8 *param_1)

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
// Function: FUN_140e0d8f0 @ 140e0d8f0
// ============================================================

undefined8 * FUN_140e0d8f0(undefined8 *param_1)

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
// Function: FUN_140e0d940 @ 140e0d940
// ============================================================

void FUN_140e0d940(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140e04e60();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140e065f0(param_1 + 0x10,uVar8);
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
      FUN_140e0b6e0(param_1,*(void **)(param_2 + 8),lVar6,
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
      pvVar2 = FUN_140e0b6e0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140e08110(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
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
// Function: FUN_140e0dbf0 @ 140e0dbf0
// ============================================================

undefined8 * FUN_140e0dbf0(undefined8 *param_1)

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
// Function: FUN_140e0dc40 @ 140e0dc40
// ============================================================

void FUN_140e0dc40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_140e07310(param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_140e0dc80 @ 140e0dc80
// ============================================================

void FUN_140e0dc80(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  __time32_t _Var2;
  longlong lVar3;
  undefined8 uVar4;
  IStringManager *pIVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined **local_4c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4b8 [40];
  undefined **local_490;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_488 [48];
  CMsg local_458 [1072];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  if (cVar1 != '\0') {
    lVar3 = FUN_140e0bc80(param_1,param_2);
    if (lVar3 != 0) {
      uVar4 = FUN_140e17740(lVar3,2);
      if ((int)uVar4 == param_3) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                          (*(longlong **)(param_1 + 8),param_2,50000);
        if (cVar1 != '\0') {
          _Var2 = _time32((__time32_t *)0x0);
          FUN_140e177e0(lVar3,_Var2 / 0xe10);
          FUN_140e17ac0(lVar3);
          pIVar5 = theInstance();
          lVar6 = FUN_140e17930(lVar3);
          pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_GUIDE_BETRAY");
          puVar8 = FUN_140e042a0(&local_4c0,pcVar7,lVar6,param_4);
          if ((ulonglong)puVar8[5] < 0x10) {
            puVar8 = puVar8 + 2;
          }
          else {
            puVar8 = (undefined8 *)puVar8[2];
          }
          uVar4 = 0xffff00;
          (**(code **)(**(longlong **)(param_1 + 8) + 200))
                    (*(longlong **)(param_1 + 8),param_2,puVar8,0xffff00,0x7d5);
          local_4c0 = tq::CString::vftable;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4b8);
          pIVar5 = theInstance();
          lVar3 = FUN_140e17940(lVar3);
          pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_GUIDE_BETRAY_TUTOR");
          puVar8 = FUN_140e042a0(&local_490,pcVar7,lVar3,uVar4);
          if ((ulonglong)puVar8[5] < 0x10) {
            puVar8 = puVar8 + 2;
          }
          else {
            puVar8 = (undefined8 *)puVar8[2];
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 200))
                    (*(longlong **)(param_1 + 8),param_3,puVar8,0xffff00,0x7d5);
          local_490 = tq::CString::vftable;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_488);
          FUN_140e04620(param_1,param_2,0,0);
          FUN_140e19a50(local_458);
          uVar9 = FUN_140e19b10(local_458,'\x12',param_2,param_3,_Var2 / 0xe10,(char *)0x0);
          if ((char)uVar9 == '\0') {
            log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                               "msg.Create(MSG_GUIDE_BETRAY_SUCCESS, idActor, idTarget, nBetrayTime, NULL)"
                               ,
                               "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                               ,0x12f);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                      (*(longlong **)(param_1 + 8),param_2,local_458);
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                      (*(longlong **)(param_1 + 8),param_3,local_458);
          }
          FUN_140e19ad0((undefined8 *)local_458);
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e0df20 @ 140e0df20
// ============================================================

void FUN_140e0df20(longlong param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5)

{
  undefined **ppuVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  IStringManager *pIVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined **local_490;
  uint *local_488;
  undefined **local_480;
  uint *local_478;
  undefined8 local_460;
  CMsg local_458 [1072];
  
  local_460 = 0xfffffffffffffffe;
  cVar2 = (char)param_4;
  lVar3 = FUN_140e0bc80(param_1,param_2);
  lVar4 = FUN_140e0bc80(param_1,param_3);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    if (param_5 != 1) {
      pcVar14 = "False";
      pcVar8 = "False";
      if (lVar4 == 0) {
        pcVar8 = "True";
      }
      if (lVar3 == 0) {
        pcVar14 = "True";
      }
      log_InlineLogERROR("CGuideMgr::ExpelStudent. Call Func is %d, Tutor[%u] NULL[%s] Target[%u] NULL[%s]"
                         ,(ulonglong)param_5,(ulonglong)param_2,pcVar14,param_3,pcVar8);
    }
  }
  else if ((cVar2 == '\0') ||
          ((cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                              (*(longlong **)(param_1 + 8),param_2), cVar2 != '\0' &&
           (uVar5 = FUN_140e17740(lVar4,2), param_2 == (uint)uVar5)))) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_2);
    if (cVar2 != '\0') {
      pIVar6 = theInstance();
      lVar7 = FUN_140e17940(lVar4);
      pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_GUIDE_EXPEL_TUTOR");
      puVar9 = FUN_140e042a0(&local_490,pcVar8,lVar7,param_4);
      if ((ulonglong)puVar9[5] < 0x10) {
        puVar9 = puVar9 + 2;
      }
      else {
        puVar9 = (undefined8 *)puVar9[2];
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 200))
                (*(longlong **)(param_1 + 8),param_2,puVar9,0xffff00,0x7d5);
      local_490 = tq::CString::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_488);
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_3);
    if (cVar2 != '\0') {
      FUN_140e19a50(local_458);
      uVar10 = FUN_140e19b10(local_458,'\x13',param_2,param_3,0,(char *)0x0);
      if ((char)uVar10 == '\0') {
        log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                           "msg.Create(MSG_GUIDE_EXPEL_SUCCESS, idActor, idTarget, 0, NULL)",
                           "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                           0x157);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                  (*(longlong **)(param_1 + 8),param_3,local_458);
      }
      pIVar6 = theInstance();
      lVar7 = **(longlong **)(param_1 + 8);
      uVar5 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_GUIDE_EXPEL_STUDENT");
      (**(code **)(lVar7 + 200))(*(undefined8 *)(param_1 + 8),param_3,uVar5,0xffff00,0x7d5);
      FUN_140e19ad0((undefined8 *)local_458);
    }
    uVar10 = FUN_140e17740(lVar3,2);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                      (*(longlong **)(param_1 + 8),uVar10 & 0xffffffff);
    if (cVar2 != '\0') {
      FUN_140e19a50(local_458);
      pcVar8 = (char *)FUN_140e17940(lVar4);
      uVar11 = FUN_140e19b10(local_458,'\x14',param_2,param_3,0,pcVar8);
      if ((char)uVar11 == '\0') {
        log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                           "msg.Create(MSG_GUIDE_EXPEL_SUCCESS_G2, idActor, idTarget, 0, pStudent->GetName())"
                           ,"f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                           0x164);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                  (*(longlong **)(param_1 + 8),uVar10 & 0xffffffff);
      }
      FUN_140e19ad0((undefined8 *)local_458);
    }
    FUN_140e04620(param_1,param_3,0,0);
    FUN_140e0b740(lVar4,&local_490);
    ppuVar1 = local_490;
    uVar12 = 0;
    puVar13 = local_488;
    while( true ) {
      if ((ppuVar1 == (undefined **)0x0) || (ppuVar1 != local_480)) {
        _invalid_parameter_noinfo();
      }
      if (puVar13 == local_478) goto LAB_140e0e2e9;
      uVar12 = uVar12 + 1;
      if (10000 < uVar12) break;
      if (ppuVar1 == (undefined **)0x0) {
        _invalid_parameter_noinfo();
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = *ppuVar1;
      }
      if (*(uint **)(puVar15 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      lVar7 = FUN_140e0bc80(param_1,*puVar13);
      if (lVar7 != 0) {
        FUN_140e175c0(lVar7);
      }
      if (ppuVar1 == (undefined **)0x0) {
        _invalid_parameter_noinfo();
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = *ppuVar1;
      }
      if (*(uint **)(puVar15 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar13 = puVar13 + 1;
    }
    log_InlineLogERROR(&DAT_140e23698,"DEAD_LOOP_BREAK","unLoopCount",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",0x173
                      );
LAB_140e0e2e9:
    FUN_140e17850(lVar4);
    FUN_140e18d90(lVar3,param_3);
  }
  return;
}



// ============================================================
// Function: FUN_140e0e370 @ 140e0e370
// ============================================================

void FUN_140e0e370(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_140e0bc80(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_140e0c0c0(param_1,piVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_140e0e3b0 @ 140e0e3b0
// ============================================================

void FUN_140e0e3b0(longlong param_1,uint param_2)

{
  char cVar1;
  IStringManager *pIVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
  FUN_140e0c6c0((longlong *)(param_1 + 0xa8),(longlong *)&local_28,local_res10);
  lVar5 = *(longlong *)(param_1 + 0xd8);
  if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0xa8))) {
    _invalid_parameter_noinfo();
  }
  if (local_20 == lVar5) {
    FUN_140e04900(param_1,param_2);
    return;
  }
  if (local_28 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = 0;
  }
  else {
    lVar5 = *local_28;
  }
  if (local_20 == *(longlong *)(lVar5 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  lVar5 = *(longlong *)(local_20 + 0x20);
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_2);
  if (cVar1 != '\0') {
    pIVar2 = theInstance();
    lVar5 = **(longlong **)(param_1 + 8);
    uVar3 = (*(code *)**(undefined8 **)pIVar2)(pIVar2,"STR_CONTRIBUTE_EXP_DISABLE_AT_NO_EXP_MAP");
    (**(code **)(lVar5 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar3,0xffff00,0x7d5);
    return;
  }
  lVar4 = FUN_140e173c0(lVar5);
  if (lVar4 != 0) {
    tq::MyLogSave("gmlog/playerexpaward","Player[%u] ExpType[GuideExp] Amount[%I64d]");
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2,lVar4);
    FUN_140e17450(lVar5);
    FUN_140e17ac0(lVar5);
  }
  return;
}



// ============================================================
// Function: FUN_140e0e580 @ 140e0e580
// ============================================================

void FUN_140e0e580(longlong param_1,uint param_2,ulonglong param_3)

{
  char cVar1;
  IStringManager *pIVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_3 != 0) {
      FUN_140e0c6c0((longlong *)(param_1 + 0xa8),(longlong *)&local_28,local_res10);
      lVar5 = *(longlong *)(param_1 + 0xd8);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0xa8))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 == lVar5) {
        FUN_140e04900(param_1,param_2);
      }
      else {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar5 = *(longlong *)(local_20 + 0x20);
        if (lVar5 == 0) {
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_2)
          ;
          if (cVar1 == '\0') {
            uVar4 = FUN_140e173c0(lVar5);
            if ((uVar4 != 0) && (param_3 <= uVar4)) {
              tq::MyLogSave("gmlog/playerexpaward","Player[%u] ExpType[GuidePartExp] Amount[%I64d]")
              ;
              (**(code **)(**(longlong **)(param_1 + 8) + 8))
                        (*(longlong **)(param_1 + 8),param_2,param_3);
              FUN_140e17480(lVar5,uVar4 - param_3);
              FUN_140e17ac0(lVar5);
            }
          }
          else {
            pIVar2 = theInstance();
            lVar5 = **(longlong **)(param_1 + 8);
            uVar3 = (*(code *)**(undefined8 **)pIVar2)
                              (pIVar2,"STR_CONTRIBUTE_EXP_DISABLE_AT_NO_EXP_MAP");
            (**(code **)(lVar5 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar3,0xffff00,0x7d5);
          }
        }
      }
    }
    return;
  }
  log_InlineLogERROR(&DAT_140e23698);
  return;
}



// ============================================================
// Function: FUN_140e0e750 @ 140e0e750
// ============================================================

void FUN_140e0e750(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_140e0bc80(param_1,param_2);
  if (lVar1 == 0) {
    FUN_140e04900(param_1,param_2);
    return;
  }
  uVar2 = FUN_140e173f0(lVar1);
  if ((short)uVar2 == 0) {
    pIVar3 = theInstance();
    lVar1 = **(longlong **)(param_1 + 8);
    uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_GUIDE_CONTRIBUTE_NOGODTIME");
    (**(code **)(lVar1 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar4,0xffff00,0x7d5);
  }
  else {
    tq::MyLogSave("gmlog/playerexpaward","Player[%u] ExpType[GodTime] Amount[%u]");
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),param_2,uVar2 & 0xffff);
    FUN_140e174c0(lVar1);
    FUN_140e17ac0(lVar1);
  }
  return;
}



// ============================================================
// Function: FUN_140e0e830 @ 140e0e830
// ============================================================

void FUN_140e0e830(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  IStringManager *pIVar4;
  char *pcVar5;
  
  lVar2 = FUN_140e0bc80(param_1,param_2);
  if (lVar2 == 0) {
    FUN_140e04900(param_1,param_2);
    return;
  }
  uVar3 = FUN_140e17420(lVar2);
  if ((ushort)uVar3 < 100) {
    pIVar4 = theInstance();
    pcVar5 = "STR_GUIDE_CONTRIBUTE_NOADDLEVEL";
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    if (cVar1 == '\0') {
      tq::MyLogSave("gmlog/playerexpaward","Player[%u] ExpType[AddLevel] Amount[%u]");
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
      FUN_140e174f0(lVar2);
      FUN_140e17ac0(lVar2);
      return;
    }
    pIVar4 = theInstance();
    pcVar5 = "STR_GUIDE_CONTRIBUTE_BAGFULL";
  }
  lVar2 = **(longlong **)(param_1 + 8);
  uVar3 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,pcVar5);
  (**(code **)(lVar2 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar3,0xffff00,0x7d5);
  return;
}



// ============================================================
// Function: FUN_140e0e930 @ 140e0e930
// ============================================================

void FUN_140e0e930(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  CMsg local_438 [1072];
  
  lVar1 = FUN_140e0bc80(param_1,param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_140e173c0(lVar1);
    uVar3 = FUN_140e173f0(lVar1);
    uVar4 = FUN_140e17420(lVar1);
    FUN_140e19720(local_438);
    uVar5 = FUN_140e197e0(local_438,'\x05',param_2,0,0,uVar2,(short)uVar3,(short)uVar4,(char *)0x0,
                          (char *)0x0);
    if ((char)uVar5 == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                (*(longlong **)(param_1 + 8),param_2,local_438);
    }
    FUN_140e197a0((undefined8 *)local_438);
  }
  return;
}



// ============================================================
// Function: FUN_140e0ea40 @ 140e0ea40
// ============================================================

void FUN_140e0ea40(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c8 [48];
  CMsg local_898 [1072];
  CMsg local_468 [1072];
  
  FUN_140e19720(local_898);
  uVar9 = FUN_140e197e0(local_898,'\a',0,0,0,0,0,0,(char *)0x0,(char *)0x0);
  if ((char)uVar9 == '\0') {
    log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                       "msg.Create(MSG_CONTRIBUTE_ONLINE_CONTRIBUTE_BEGIN, 0, 0, 0, 0, 0, 0, NULL, NULL)"
                       ,"f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                       0x3cd);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
              (*(longlong **)(param_1 + 8),param_2,local_898);
  }
  lVar10 = FUN_140e0bc80(param_1,param_2);
  if (lVar10 == 0) {
    FUN_140e04760(param_1,param_2);
    FUN_140e197a0((undefined8 *)local_898);
  }
  else {
    pcVar11 = (char *)(**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                                (*(longlong **)(param_1 + 8),param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    puVar14 = (undefined8 *)*puVar2;
    plVar3 = *(longlong **)(param_1 + 0xe8);
    while( true ) {
      lVar10 = 0;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (puVar14 == puVar2) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar15 = lVar10;
      }
      else {
        lVar15 = *plVar3;
      }
      if (puVar14 == *(undefined8 **)(lVar15 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(uint *)(puVar14 + 3) == param_2) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar15 = lVar10;
        }
        else {
          lVar15 = *plVar3;
        }
        if (puVar14 == *(undefined8 **)(lVar15 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar4 = (undefined8 *)puVar14[4];
        if (puVar4 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_140e23698,"IF_NOT","pOnlineCon != NULL",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                             ,0x3e5);
        }
        else {
          FUN_140e19720(local_468);
          pbVar12 = FUN_140e16c40((longlong)puVar4,local_8c8);
          if (*(ulonglong *)(pbVar12 + 0x20) < 0x10) {
            pbVar12 = pbVar12 + 8;
          }
          else {
            pbVar12 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                       (pbVar12 + 8);
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar10 = *plVar3;
          }
          if (puVar14 == *(undefined8 **)(lVar10 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          uVar6 = FUN_140e16b90((longlong)puVar4);
          uVar7 = FUN_140e16b80((longlong)puVar4);
          uVar13 = FUN_140e16b70(puVar4);
          uVar8 = FUN_140e16c80((longlong)puVar4);
          uVar9 = FUN_140e197e0(local_468,'\x06',param_2,*(undefined4 *)((longlong)puVar14 + 0x1c),
                                uVar8,uVar13,uVar7,uVar6,pcVar11,(char *)pbVar12);
          bVar16 = (char)uVar9 == '\0';
          if (bVar16) {
            log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                               "msg.Create(MSG_CONTRIBUTE_ONLINE_CONTRIBUTE, idActor, (*iter).first.second, pOnlineCon->GetGenation(), (I64)pOnlineCon->GetOnlineExp(), pOnlineCon->GetOnlineGodTime(), pOnlineCon->GetOnlineAddLevel(), pszActorName, pOnlineCon->GetUserName().c_str())"
                               ,
                               "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                               ,0x3eb);
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8c8);
          if (!bVar16) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                      (*(longlong **)(param_1 + 8),param_2,local_468);
          }
          FUN_140e197a0((undefined8 *)local_468);
        }
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar14 + 0x29) == '\0') {
        puVar4 = (undefined8 *)puVar14[2];
        if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x29);
          puVar14 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0x29);
            puVar14 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar14[1] + 0x29);
          puVar5 = (undefined8 *)puVar14[1];
          puVar4 = puVar14;
          while ((puVar14 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar14[2]))) {
            cVar1 = *(char *)((longlong)puVar14[1] + 0x29);
            puVar5 = (undefined8 *)puVar14[1];
            puVar4 = puVar14;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    FUN_140e04760(param_1,param_2);
    FUN_140e197a0((undefined8 *)local_898);
  }
  return;
}



// ============================================================
// Function: FUN_140e0edf0 @ 140e0edf0
// ============================================================

bool FUN_140e0edf0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  
  uVar1 = 0;
  piVar4 = (int *)FUN_140e0bc80(param_1,param_2);
  if (piVar4 != (int *)0x0) {
    uVar1 = FUN_140e0c0c0(param_1,piVar4,2);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  uVar3 = 0;
  if (param_3 < uVar2) {
    param_3 = uVar2;
  }
  plVar5 = FUN_140e09ab0(param_1,param_3);
  if (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,3);
    uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  }
  return uVar1 < uVar3;
}



// ============================================================
// Function: FUN_140e0eea0 @ 140e0eea0
// ============================================================

ulonglong FUN_140e0eea0(longlong param_1,uint param_2,uint param_3,char param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong *local_48;
  uint *local_40;
  ulonglong *local_38;
  uint *local_30;
  ulonglong uVar11;
  
  lVar5 = FUN_140e0bc80(param_1,param_2);
  if (lVar5 == 0) {
    return 0;
  }
  lVar6 = FUN_140e0bc80(param_1,param_3);
  if (lVar6 == 0) {
    return 0;
  }
  uVar12 = 0;
  if (param_4 == '\0') {
    uVar7 = FUN_140e17740(lVar6,0);
    if ((uint)uVar7 != param_2) {
      FUN_140e17740(lVar6,0);
      log_InlineLogERROR("2Student[%u] is not student for Tutor[%u], Tutor[%u]");
      return 0;
    }
  }
  else {
    uVar7 = FUN_140e17740(lVar6,0);
    if ((uint)uVar7 != param_2) {
      FUN_140e17740(lVar6,0);
      log_InlineLogERROR("1Student[%u] is not student for Tutor[%u], Tutor[%u]");
      return 0;
    }
    FUN_140e0b740(lVar5,&local_48);
    uVar11 = uVar12;
    puVar13 = local_40;
    while( true ) {
      if ((local_48 == (ulonglong *)0x0) || (local_48 != local_38)) {
        _invalid_parameter_noinfo();
      }
      if (puVar13 == local_30) {
        return 0;
      }
      if (local_48 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *local_48;
      }
      if (*(uint **)(uVar9 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      if (*puVar13 == param_3) break;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if (local_48 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *local_48;
      }
      if (*(uint **)(uVar9 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar13 = puVar13 + 1;
      if (9 < (int)uVar10) {
        return 0;
      }
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_3);
  if (iVar2 - iVar3 < 1) {
    return 0;
  }
  uVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  plVar8 = FUN_140e09ab0(param_1,uVar10);
  uVar11 = uVar12;
  if (plVar8 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,4);
    iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
    uVar11 = (ulonglong)(uint)((iVar4 * (iVar2 - iVar3)) / 100);
  }
  plVar8 = FUN_140e09bc0(param_1,iVar3);
  if (plVar8 == (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) & 0xfffffffffffffff8U) == 0)
    {
      log_InlineLogERROR(&DAT_140e23698);
      return uVar11;
    }
    uVar9 = *(ulonglong *)(param_1 + 0x98);
    if (uVar9 < *(ulonglong *)(param_1 + 0x90)) {
      _invalid_parameter_noinfo();
    }
    puVar1 = *(ulonglong **)(param_1 + 0x78);
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar14 = uVar12;
    }
    else {
      uVar14 = *puVar1;
    }
    plVar8 = (longlong *)(uVar9 - 8);
    if (*(longlong **)(uVar14 + 0x20) < plVar8) {
LAB_140e0f157:
      _invalid_parameter_noinfo();
    }
    else {
      uVar9 = uVar12;
      if (puVar1 != (ulonglong *)0x0) {
        uVar9 = *puVar1;
      }
      if (plVar8 < *(longlong **)(uVar9 + 0x18)) goto LAB_140e0f157;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar9 = uVar12;
    }
    else {
      uVar9 = *puVar1;
    }
    if (*(longlong **)(uVar9 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar8 = (longlong *)*plVar8;
    if (plVar8 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
      goto LAB_140e0f1d0;
    }
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,1);
  uVar10 = (**(code **)(*plVar8 + 0x48))(plVar8);
  uVar12 = (ulonglong)uVar10;
LAB_140e0f1d0:
  if ((int)uVar12 < (int)uVar11) {
    return uVar12;
  }
  return uVar11;
}



// ============================================================
// Function: FUN_140e0f200 @ 140e0f200
// ============================================================

ulonglong FUN_140e0f200(longlong param_1,uint param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  if (((char)uVar6 == '\0') ||
     (uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                        (*(longlong **)(param_1 + 8),param_3), (char)uVar6 == '\0')) {
    return uVar6 & 0xffffffffffffff00;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_3);
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_3);
  if ((uVar3 < 0x46) && (uVar2 == 0)) {
    if (param_4 != '\0') {
      pIVar7 = theInstance();
      lVar10 = **(longlong **)(param_1 + 8);
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_GUIDE_TUTOR_LOW_LEVEL");
      uVar6 = (**(code **)(lVar10 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar8,0xffff00,0x7d5)
      ;
      return uVar6 & 0xffffffffffffff00;
    }
    pIVar7 = theInstance();
    pcVar9 = "STR_GUIDE_TUTOR_LOW_LEVEL1";
    lVar10 = **(longlong **)(param_1 + 8);
    puVar11 = *(undefined8 **)pIVar7;
    goto LAB_140e0f433;
  }
  if (uVar4 <= uVar2) {
    if (uVar2 == 0) {
      if (0x1d < (int)(uVar3 - iVar5)) goto LAB_140e0f38f;
    }
    else if (uVar2 == 1) {
      if ((0x13 < (int)(uVar3 - iVar5)) || (uVar4 == 0)) goto LAB_140e0f38f;
    }
    else if ((1 < uVar2) && ((9 < (int)(uVar3 - iVar5) || (uVar4 < 2)))) {
LAB_140e0f38f:
      bVar1 = FUN_140e0edf0(param_1,param_2,uVar3);
      if (bVar1) {
        return CONCAT71(extraout_var,1);
      }
      if (param_4 != '\0') {
        pIVar7 = theInstance();
        lVar10 = **(longlong **)(param_1 + 8);
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_GUIDE_TOO_MANY_STUDENTS");
        uVar6 = (**(code **)(lVar10 + 200))
                          (*(undefined8 *)(param_1 + 8),param_2,uVar8,0xffff00,0x7d5);
        return uVar6 & 0xffffffffffffff00;
      }
      pIVar7 = theInstance();
      pcVar9 = "STR_GUIDE_TOO_MANY_STUDENTS1";
      lVar10 = **(longlong **)(param_1 + 8);
      puVar11 = *(undefined8 **)pIVar7;
      goto LAB_140e0f433;
    }
  }
  if (param_4 != '\0') {
    pIVar7 = theInstance();
    lVar10 = **(longlong **)(param_1 + 8);
    uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_GUIDE_STUDENT_HIGH_LEVEL");
    uVar6 = (**(code **)(lVar10 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar8,0xffff00,0x7d5);
    return uVar6 & 0xffffffffffffff00;
  }
  pIVar7 = theInstance();
  pcVar9 = "STR_GUIDE_STUDENT_HIGH_LEVEL1";
  lVar10 = **(longlong **)(param_1 + 8);
  puVar11 = *(undefined8 **)pIVar7;
LAB_140e0f433:
  uVar8 = (*(code *)*puVar11)(pIVar7,pcVar9);
  uVar6 = (**(code **)(lVar10 + 200))(*(undefined8 *)(param_1 + 8),param_3,uVar8,0xffff00,0x7d5);
  return uVar6 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e0f470 @ 140e0f470
// ============================================================

longlong * FUN_140e0f470(longlong param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  tm *ptVar6;
  __time32_t local_res20 [2];
  
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_tutor");
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140e23698);
    return (longlong *)0x0;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_3);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    log_InlineLogERROR(&DAT_140e23698);
    (**(code **)*plVar2)(plVar2,1);
  }
  else {
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
    (**(code **)(*plVar5 + 0xa8))(plVar5,0);
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
    (**(code **)(*plVar5 + 0xb8))(plVar5,param_2);
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
    (**(code **)(*plVar5 + 0xb8))(plVar5,param_3);
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
    (**(code **)(*plVar5 + 200))(plVar5,0);
    local_res20[0] = _time32((__time32_t *)0x0);
    ptVar6 = _localtime32(local_res20);
    if (ptVar6 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
      (**(code **)(*plVar5 + 0xa8))
                (plVar5,(ptVar6->tm_year * 100 + 0x2e631 + ptVar6->tm_mon) * 100 + ptVar6->tm_mday);
      cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,1);
      if (cVar1 != '\0') {
        return plVar2;
      }
      log_InlineLogERROR(&DAT_140e23698);
      lVar3 = FUN_140e0bc80(param_1,param_3);
      if (lVar3 == 0) {
        log_InlineLogERROR("Student[%u] is exist, NewTutorID[%u]");
        (**(code **)*plVar2)(plVar2,1);
      }
      else {
        FUN_140e17740(lVar3,0);
        log_InlineLogERROR("Student[%u] is exist, OldTutorID[%u] NewTutorID[%u]");
        (**(code **)*plVar2)(plVar2,1);
      }
    }
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e0f6f0 @ 140e0f6f0
// ============================================================

undefined8
FUN_140e0f6f0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (cVar1 == '\0') {
    uVar3 = FUN_140e0b7d0(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
    *param_4 = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
    *param_3 = uVar2;
    uVar3 = FUN_140e0c250(param_1,param_2,0x14);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar3;
}



// ============================================================
// Function: FUN_140e0f780 @ 140e0f780
// ============================================================

void FUN_140e0f780(longlong param_1,uint param_2,undefined4 *param_3,int param_4,longlong param_5,
                  int param_6,int param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  char *pcVar7;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined8 *local_40 [3];
  
  local_58 = 0xfffffffffffffffe;
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (cVar5 == '\0') {
    return;
  }
  uStack_5c = *param_3;
  plVar1 = (longlong *)(param_1 + 0xe8);
  local_60 = param_2;
  FUN_140e0ca90(plVar1,(longlong *)&local_50,&local_60);
  puVar3 = local_50;
  plVar2 = *(longlong **)(param_1 + 0x118);
  plVar6 = (longlong *)0x0;
  local_40[0] = (undefined8 *)*plVar1;
  if ((local_50 == (undefined8 *)0x0) || (local_50 != local_40[0])) {
    _invalid_parameter_noinfo();
  }
  plVar4 = local_48;
  if (local_48 == plVar2) {
    local_50 = operator_new(0x48);
    if (local_50 != (undefined8 *)0x0) {
      plVar6 = FUN_140e16a80(local_50);
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140e0f8b0;
    pcVar7 = (char *)FUN_140e17940((longlong)param_3);
    FUN_140e16ba0((longlong)plVar6,param_4,pcVar7);
    local_50 = (undefined8 *)CONCAT44(uStack_5c,local_60);
    local_48 = plVar6;
    FUN_140e0c790(plVar1,(longlong *)local_40,(uint *)&local_50);
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      plVar6 = (longlong *)*puVar3;
    }
    if (plVar4 == (longlong *)plVar6[6]) {
      _invalid_parameter_noinfo();
    }
    plVar6 = (longlong *)plVar4[4];
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_140e16b40(plVar6,param_5);
    FUN_140e16b50((longlong)plVar6,param_6);
    FUN_140e16b60((longlong)plVar6,param_7);
    return;
  }
LAB_140e0f8b0:
  log_InlineLogERROR(&DAT_140e23698);
  return;
}



// ============================================================
// Function: FUN_140e0f930 @ 140e0f930
// ============================================================

void FUN_140e0f930(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140e0bc80(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140e17740(lVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_140e0f960 @ 140e0f960
// ============================================================

void FUN_140e0f960(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res10;
  longlong *local_18;
  longlong local_10;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  local_res10 = param_2;
  FUN_140e0ca90(plVar1,(longlong *)&local_18,(uint *)&local_res10);
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((local_18 == (longlong *)0x0) || (local_18 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar2) {
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar2 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(void **)(local_10 + 0x20) != (void *)0x0) {
      FUN_140e16c90(*(void **)(local_10 + 0x20));
    }
  }
  FUN_140e0c950(plVar1,(uint *)&local_res10);
  return;
}



// ============================================================
// Function: FUN_140e0fa10 @ 140e0fa10
// ============================================================

uint * FUN_140e0fa10(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_48 [2];
  uint *local_40;
  longlong local_38 [4];
  
  puVar5 = (uint *)FUN_140e0bc80(param_1,param_2);
  if (puVar5 != (uint *)0x0) {
    return puVar5;
  }
  puVar5 = FUN_140e18ad0(param_1);
  if (puVar5 != (uint *)0x0) {
    uVar7 = (ulonglong)param_2;
    bVar1 = FUN_140e190a0(puVar5,param_2);
    if (bVar1) {
      local_res18[0] = 0;
      local_res20[0] = 0;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                        (*(longlong **)(param_1 + 8),param_2);
      if (cVar2 == '\0') {
        puVar9 = local_res20;
        puVar8 = local_res18;
        uVar7 = (ulonglong)param_2;
        uVar6 = FUN_140e0b7d0(param_1,param_2,puVar8,puVar9);
        uVar4 = local_res18[0];
        uVar3 = local_res20[0];
        if ((char)uVar6 == '\0') {
          FUN_140e18b50(puVar5,uVar7,puVar8,puVar9);
          return (uint *)0x0;
        }
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                          (*(longlong **)(param_1 + 8),param_2);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                          (*(longlong **)(param_1 + 8),param_2);
        FUN_140e0c250(param_1,param_2,0x14);
      }
      puVar5[0x1e] = uVar4;
      puVar5[0x1f] = uVar3;
      local_48[0] = param_2;
      local_40 = puVar5;
      FUN_140e0c3d0((longlong *)(param_1 + 0xa8),local_38,local_48);
      return puVar5;
    }
    FUN_140e18b50(puVar5,uVar7,param_3,param_4);
  }
  return (uint *)0x0;
}



// ============================================================
// Function: FUN_140e0fb40 @ 140e0fb40
// ============================================================

void FUN_140e0fb40(longlong *param_1)

{
  FUN_140e0a850(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0fb70 @ 140e0fb70
// ============================================================

void FUN_140e0fb70(longlong *param_1)

{
  FUN_140e0ae20(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0fba0 @ 140e0fba0
// ============================================================

void FUN_140e0fba0(longlong *param_1)

{
  FUN_140e0d560(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e0fbd0 @ 140e0fbd0
// ============================================================

longlong FUN_140e0fbd0(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_140e09460(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x21) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x21);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x21);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x21);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x21);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_140e0d3b0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}



// ============================================================
// Function: FUN_140e0fd10 @ 140e0fd10
// ============================================================

void FUN_140e0fd10(undefined8 *param_1)

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
// Function: FUN_140e0fd50 @ 140e0fd50
// ============================================================

longlong * FUN_140e0fd50(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140e0d600((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140e0fe44;
  }
  _invalid_parameter_noinfo();
LAB_140e0fe44:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e0fe80 @ 140e0fe80
// ============================================================

undefined8 * FUN_140e0fe80(undefined8 *param_1)

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
  lVar2 = FUN_140e07e10();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e0ff00 @ 140e0ff00
// ============================================================

undefined8 * FUN_140e0ff00(undefined8 *param_1)

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
  lVar2 = FUN_140e07ec0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e0ff80 @ 140e0ff80
// ============================================================

longlong * FUN_140e0ff80(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140e0d940((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140e10074;
  }
  _invalid_parameter_noinfo();
LAB_140e10074:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e100b0 @ 140e100b0
// ============================================================

undefined8 * FUN_140e100b0(undefined8 *param_1)

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
  lVar2 = FUN_140e07f20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e10130 @ 140e10130
// ============================================================

void FUN_140e10130(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(longlong *)(param_1 + 0x28) - lVar5 >> 3;
  }
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    lVar5 = (longlong)puVar3 - lVar5 >> 3;
    if (0x1fffffffffffffffU - lVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140e05550();
    }
    uVar7 = param_3 + lVar5;
    if (uVar6 < uVar7) {
      if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar7) {
        uVar6 = uVar7;
      }
      puVar3 = (undefined8 *)FUN_140e06a80(param_1 + 0x10,uVar6);
      lVar5 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 3;
      local_res8 = puVar3;
      FUN_140e08250(puVar3 + lVar5,param_3,param_4);
      FUN_140e07310(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar3);
      FUN_140e07310(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),
                    puVar3 + lVar5 + param_3);
      pvVar1 = *(void **)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3 + uVar6;
      *(undefined8 **)(param_1 + 0x20) = puVar3 + param_3 + (lVar5 - (longlong)pvVar1 >> 3);
      *(undefined8 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)((longlong)puVar3 - *(longlong *)(param_2 + 8) >> 3) < param_3) {
      puVar4 = (undefined8 *)*param_4;
      local_res8 = puVar4;
      FUN_140e07310(*(undefined8 **)(param_2 + 8),puVar3,*(undefined8 **)(param_2 + 8) + param_3);
      FUN_140e08250(*(undefined8 **)(param_1 + 0x20),
                    param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) -
                               *(longlong *)(param_2 + 8) >> 3),&local_res8);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 8;
      lVar5 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined8 **)(param_2 + 8); puVar3 != (undefined8 *)(lVar5 + param_3 * -8);
          puVar3 = puVar3 + 1) {
        *puVar3 = puVar4;
      }
    }
    else {
      uVar2 = *param_4;
      puVar4 = FUN_140e07310(puVar3 + -param_3,puVar3,puVar3);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      FUN_140e09790(*(longlong *)(param_2 + 8),(longlong)(puVar3 + -param_3),(longlong)puVar3);
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar3 = puVar4 + param_3;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
        *puVar4 = uVar2;
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e103e0 @ 140e103e0
// ============================================================

void FUN_140e103e0(longlong *param_1)

{
  FUN_140e0a850(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e10410 @ 140e10410
// ============================================================

void FUN_140e10410(longlong *param_1)

{
  FUN_140e0ae20(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e10440 @ 140e10440
// ============================================================

void FUN_140e10440(longlong *param_1)

{
  FUN_140e0d560(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140e10470 @ 140e10470
// ============================================================

void FUN_140e10470(uint *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  
  *(undefined ***)param_1 = guide::CGuideMgr::vftable;
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x36);
  plVar2 = *(longlong **)(param_1 + 0x2a);
  lVar11 = 0;
  puVar8 = param_1;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x36);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x2a))) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar2;
    }
    if (plVar9 == *(longlong **)(lVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (uint *)plVar9[4];
    if (puVar8 == (uint *)0x0) {
      param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
      param_3 = "NULL != pPlayer";
      param_2 = "IF_OK";
      puVar8 = (uint *)&DAT_140e23698;
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      FUN_140e17ac0((longlong)puVar8);
      FUN_140e18b50(puVar8,param_2,param_3,param_4);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar9 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar9 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar7 = (longlong *)plVar9[1];
        plVar3 = plVar9;
        while ((plVar9 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar7 = (longlong *)plVar9[1];
          plVar3 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0xc);
  if (*(undefined8 **)(param_1 + 0xe) < puVar4) {
    _invalid_parameter_noinfo();
  }
  local_58 = *(longlong **)(param_1 + 6);
  puVar10 = *(undefined8 **)(param_1 + 0xe);
  puStack_50 = puVar4;
  if (puVar10 < *(undefined8 **)(param_1 + 0xc)) {
    local_48 = local_58;
    puStack_40 = puVar4;
    _invalid_parameter_noinfo();
  }
  plVar9 = local_58;
  local_48 = *(longlong **)(param_1 + 6);
  puStack_40 = puVar10;
  while( true ) {
    puVar4 = puStack_50;
    if ((plVar9 == (longlong *)0x0) || (plVar9 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puStack_40) break;
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (uint *)*puVar4;
    if (puVar8 != (uint *)0x0) {
      param_2 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      (*(code *)**(undefined8 **)puVar8)();
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puStack_50 = puVar4 + 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x1a) < puVar4) {
    _invalid_parameter_noinfo();
  }
  local_58 = *(longlong **)(param_1 + 0x12);
  puVar10 = *(undefined8 **)(param_1 + 0x1a);
  puStack_50 = puVar4;
  if (puVar10 < *(undefined8 **)(param_1 + 0x18)) {
    local_38 = local_58;
    puStack_30 = puVar4;
    _invalid_parameter_noinfo();
  }
  plVar9 = local_58;
  local_48 = *(longlong **)(param_1 + 0x12);
  puStack_40 = puVar10;
  local_38 = local_48;
  puStack_30 = puVar10;
  while( true ) {
    puVar4 = puStack_50;
    if ((plVar9 == (longlong *)0x0) || (plVar9 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puStack_40) break;
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (uint *)*puVar4;
    if (puVar8 != (uint *)0x0) {
      param_2 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      (*(code *)**(undefined8 **)puVar8)();
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puStack_50 = puVar4 + 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x24);
  if (*(undefined8 **)(param_1 + 0x26) < puVar4) {
    _invalid_parameter_noinfo();
  }
  local_58 = *(longlong **)(param_1 + 0x1e);
  puVar10 = *(undefined8 **)(param_1 + 0x26);
  puStack_50 = puVar4;
  if (puVar10 < *(undefined8 **)(param_1 + 0x24)) {
    local_38 = local_58;
    puStack_30 = puVar4;
    _invalid_parameter_noinfo();
  }
  plVar9 = local_58;
  local_48 = *(longlong **)(param_1 + 0x1e);
  puStack_40 = puVar10;
  local_38 = local_48;
  puStack_30 = puVar10;
  while( true ) {
    puVar4 = puStack_50;
    if ((plVar9 == (longlong *)0x0) || (plVar9 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puStack_40) break;
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (uint *)*puVar4;
    if (puVar8 != (uint *)0x0) {
      param_2 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      (*(code *)**(undefined8 **)puVar8)();
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (*(undefined8 **)(lVar12 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puStack_50 = puVar4 + 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x46);
  puVar10 = (undefined8 *)*puVar4;
  plVar9 = *(longlong **)(param_1 + 0x3a);
  local_58 = plVar9;
  puStack_50 = puVar4;
  local_48 = plVar9;
  puStack_40 = puVar10;
  while( true ) {
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar10 == puVar4) break;
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = lVar11;
    }
    else {
      lVar12 = *plVar9;
    }
    if (puVar10 == *(undefined8 **)(lVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (uint *)puVar10[4];
    if (puVar8 != (uint *)0x0) {
      FUN_140e16c90(puVar8);
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar10 + 0x29) == '\0') {
      puVar5 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar5 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar5 + 0x29);
        puVar10 = puVar5;
        puVar5 = (undefined8 *)*puVar5;
        while (puStack_40 = puVar10, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar5 + 0x29);
          puVar10 = puVar5;
          puVar5 = (undefined8 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar10[1] + 0x29);
        puVar6 = (undefined8 *)puVar10[1];
        puVar5 = puVar10;
        while ((puVar10 = puVar6, puStack_40 = puVar10, cVar1 == '\0' &&
               (puVar5 == (undefined8 *)puVar10[2]))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x29);
          puVar6 = (undefined8 *)puVar10[1];
          puVar5 = puVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_140e01530(puVar8,param_2,param_3,param_4);
  puVar8 = param_1 + 0x5a;
  puStack_30 = *(undefined8 **)(param_1 + 0x66);
  local_48 = *(longlong **)puVar8;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_140e0d3b0((longlong *)puVar8,(longlong *)&local_58,(longlong *)&local_48,(longlong *)&local_38
               );
  operator_delete(*(void **)(param_1 + 0x66));
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  operator_delete(*(void **)puVar8);
  puVar8 = param_1 + 0x4a;
  puStack_30 = *(undefined8 **)(param_1 + 0x56);
  local_48 = *(longlong **)puVar8;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_140e0d3b0((longlong *)puVar8,(longlong *)&local_58,(longlong *)&local_48,(longlong *)&local_38
               );
  operator_delete(*(void **)(param_1 + 0x56));
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  operator_delete(*(void **)puVar8);
  puVar8 = param_1 + 0x3a;
  puStack_30 = *(undefined8 **)(param_1 + 0x46);
  local_48 = *(longlong **)puVar8;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_140e0a8c0((longlong *)puVar8,(longlong *)&local_58,(longlong *)&local_48,(longlong *)&local_38
               );
  operator_delete(*(void **)(param_1 + 0x46));
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  operator_delete(*(void **)puVar8);
  puVar8 = param_1 + 0x2a;
  puStack_30 = *(undefined8 **)(param_1 + 0x36);
  local_48 = *(longlong **)puVar8;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_140e0a300((longlong *)puVar8,(longlong *)&local_58,(longlong *)&local_48,(longlong *)&local_38
               );
  operator_delete(*(void **)(param_1 + 0x36));
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  operator_delete(*(void **)puVar8);
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x24));
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  operator_delete(*(void **)(param_1 + 0x1e));
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  operator_delete(*(void **)(param_1 + 0x12));
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  operator_delete(*(void **)(param_1 + 6));
  return;
}



// ============================================================
// Function: FUN_140e10c00 @ 140e10c00
// ============================================================

void FUN_140e10c00(longlong *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *plVar9;
  IStringManager *pIVar10;
  undefined7 uVar11;
  uint local_res10 [2];
  uint local_res18;
  uint local_res20;
  uint local_res24;
  longlong local_8b8 [3];
  undefined8 local_8a0;
  CMsg local_898 [1072];
  CMsg local_468 [1072];
  
  local_8a0 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  if (((param_1[1] != 0) && (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf0))(), cVar2 != '\0')
      ) && (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf8))((longlong *)param_1[1],param_3),
           cVar2 != '\0')) {
    return;
  }
  uVar11 = (undefined7)((ulonglong)param_4 >> 8);
  uVar5 = FUN_140e0f200((longlong)param_1,param_2,param_3,'\x01');
  if ((char)uVar5 == '\0') {
    return;
  }
  lVar6 = FUN_140e0bc80((longlong)param_1,param_3);
  if (lVar6 != 0) {
    uVar5 = FUN_140e17740(lVar6,2);
    if ((int)uVar5 != 0) {
      FUN_140e19a50(local_898);
      pcVar7 = (char *)FUN_140e17940(lVar6);
      uVar8 = FUN_140e19b10(local_898,'\n',param_2,param_3,0,pcVar7);
      if ((char)uVar8 == '\0') {
        log_InlineLogERROR(&DAT_140e23698);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_898);
      }
      FUN_140e19ad0((undefined8 *)local_898);
      return;
    }
    uVar5 = FUN_140e17600(lVar6);
    iVar3 = FUN_140e17630(lVar6);
    if (iVar3 < 1) {
      if (0 < (int)uVar5) {
        (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,CONCAT71(uVar11,1),2);
      }
    }
    else {
      uVar5 = FUN_140e17740(lVar6,1);
      if ((uint)uVar5 == param_2) {
        FUN_140e19a50(local_898);
        pcVar7 = (char *)FUN_140e17940(lVar6);
        uVar8 = FUN_140e19b10(local_898,'\f',param_2,param_3,0,pcVar7);
        if ((char)uVar8 == '\0') {
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_898);
        }
        FUN_140e19ad0((undefined8 *)local_898);
        return;
      }
      if ((uint)uVar5 != 0) {
        FUN_140e19a50(local_898);
        pcVar7 = (char *)FUN_140e17940(lVar6);
        uVar8 = FUN_140e19b10(local_898,'\r',param_2,param_3,iVar3,pcVar7);
        if ((char)uVar8 == '\0') {
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_898);
        }
        FUN_140e19ad0((undefined8 *)local_898);
        return;
      }
    }
  }
  FUN_140e19a50(local_468);
  plVar9 = (longlong *)param_1[1];
  pcVar7 = (char *)(**(code **)(*plVar9 + 0x70))(plVar9,param_2);
  uVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2);
  uVar8 = FUN_140e19b10(local_468,'\b',param_2,param_3,uVar4,pcVar7);
  if ((char)uVar8 == '\0') {
    log_InlineLogERROR(&DAT_140e23698);
  }
  else {
    (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_2,param_3);
    (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_3,local_468);
  }
  lVar6 = param_1[0x2b];
  lVar1 = param_1[0x25];
  local_8b8[0] = lVar1;
  plVar9 = FUN_140e0d220(param_1 + 0x25,local_8b8,local_res10);
  if ((*plVar9 == 0) || (*plVar9 != lVar1)) {
    _invalid_parameter_noinfo();
  }
  if (plVar9[1] != lVar6) {
    FUN_140e0fbd0(param_1 + 0x25,local_res10);
  }
  local_res20 = param_2;
  local_res24 = param_3;
  FUN_140e0ccb0(param_1 + 0x25,local_8b8,&local_res20);
  pIVar10 = theInstance();
  lVar6 = *(longlong *)param_1[1];
  uVar5 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_GUIDE_SENDSTUDENT");
  (**(code **)(lVar6 + 200))(param_1[1],param_2,uVar5,0xffff00,0x7d5);
  FUN_140e19ad0((undefined8 *)local_468);
  return;
}



// ============================================================
// Function: FUN_140e11030 @ 140e11030
// ============================================================

void FUN_140e11030(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *plVar9;
  IStringManager *pIVar10;
  uint local_res10 [2];
  uint local_res18;
  uint local_res20;
  uint local_res24;
  longlong local_8b8 [3];
  undefined8 local_8a0;
  CMsg local_898 [1072];
  CMsg local_468 [1072];
  
  local_8a0 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
                        (*(longlong **)(param_1 + 8),param_3), cVar2 != '\0')) {
    return;
  }
  uVar5 = FUN_140e0f200(param_1,param_3,param_2,'\0');
  if ((char)uVar5 == '\0') {
    return;
  }
  lVar6 = FUN_140e0bc80(param_1,param_3);
  if ((lVar6 == 0) ||
     ((uVar5 = FUN_140e17740(lVar6,2), (uint)uVar5 != param_2 &&
      (uVar5 = FUN_140e17740(lVar6,1), (uint)uVar5 != param_2)))) {
    lVar6 = FUN_140e0bc80(param_1,param_2);
    if (lVar6 != 0) {
      uVar5 = FUN_140e17740(lVar6,2);
      if ((int)uVar5 != 0) {
        FUN_140e19a50(local_898);
        uVar8 = FUN_140e19b10(local_898,'\v',param_2,param_3,0,(char *)0x0);
        if ((char)uVar8 == '\0') {
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                    (*(longlong **)(param_1 + 8),param_2,local_898);
        }
        FUN_140e19ad0((undefined8 *)local_898);
        return;
      }
      FUN_140e17600(lVar6);
      iVar3 = FUN_140e17630(lVar6);
      if ((0 < iVar3) && (uVar5 = FUN_140e17740(lVar6,1), (int)uVar5 != 0)) {
        FUN_140e19a50(local_898);
        uVar8 = FUN_140e19b10(local_898,'\x0e',param_2,param_3,iVar3,(char *)0x0);
        if ((char)uVar8 == '\0') {
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                    (*(longlong **)(param_1 + 8),param_2,local_898);
        }
        FUN_140e19ad0((undefined8 *)local_898);
        return;
      }
    }
    FUN_140e19a50(local_468);
    plVar9 = *(longlong **)(param_1 + 8);
    pcVar7 = (char *)(**(code **)(*plVar9 + 0x70))(plVar9,param_2);
    uVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2);
    uVar8 = FUN_140e19b10(local_468,'\t',param_2,param_3,uVar4,pcVar7);
    if ((char)uVar8 == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                (*(longlong **)(param_1 + 8),param_2,param_3);
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                (*(longlong **)(param_1 + 8),param_3,local_468);
    }
    lVar6 = *(longlong *)(param_1 + 0x198);
    lVar1 = *(longlong *)(param_1 + 0x168);
    local_8b8[0] = lVar1;
    plVar9 = FUN_140e0d220((longlong *)(param_1 + 0x168),local_8b8,local_res10);
    if ((*plVar9 == 0) || (*plVar9 != lVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9[1] != lVar6) {
      FUN_140e0fbd0((longlong *)(param_1 + 0x168),local_res10);
    }
    local_res20 = param_2;
    local_res24 = param_3;
    FUN_140e0ccb0((longlong *)(param_1 + 0x168),local_8b8,&local_res20);
    pIVar10 = theInstance();
    lVar6 = **(longlong **)(param_1 + 8);
    uVar5 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_GUIDE_SENDTUTOR");
    (**(code **)(lVar6 + 200))(*(undefined8 *)(param_1 + 8),param_2,uVar5,0xffff00,0x7d5);
    FUN_140e19ad0((undefined8 *)local_468);
  }
  else {
    FUN_140e19a50(local_898);
    pcVar7 = (char *)FUN_140e17940(lVar6);
    uVar8 = FUN_140e19b10(local_898,'\x0f',param_2,param_3,0,pcVar7);
    if ((char)uVar8 == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                (*(longlong **)(param_1 + 8),param_2,local_898);
    }
    FUN_140e19ad0((undefined8 *)local_898);
  }
  return;
}



// ============================================================
// Function: FUN_140e11450 @ 140e11450
// ============================================================

void FUN_140e11450(longlong param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined **local_4c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4b8 [40];
  undefined **local_490;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_488 [48];
  CMsg local_458 [1072];
  
  if (param_2 == 0) {
    pIVar4 = theInstance();
    lVar6 = **(longlong **)(param_1 + 8);
    uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_GUIDE_RETUTOR_FAIL");
    (**(code **)(lVar6 + 200))(*(undefined8 *)(param_1 + 8),param_3,uVar5,0xffff00,0x7d5);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_3);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                          (*(longlong **)(param_1 + 8),param_4), cVar1 != '\0')) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                        (*(longlong **)(param_1 + 8),param_3);
      bVar2 = FUN_140e0edf0(param_1,param_3,uVar3);
      if ((bVar2) &&
         (((lVar6 = FUN_140e0bc80(param_1,param_4), lVar6 != 0 &&
           (uVar5 = FUN_140e17740(lVar6,2), (int)uVar5 == 0)) &&
          (uVar5 = FUN_140e17740(lVar6,1), (uint)uVar5 == param_3)))) {
        FUN_140e178d0(lVar6);
        FUN_140e17ac0(lVar6);
        pIVar4 = theInstance();
        lVar7 = FUN_140e17940(lVar6);
        lVar8 = FUN_140e17930(lVar6);
        pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_GUIDE_RETUTOR_SUCCESS");
        puVar10 = FUN_140e042a0(&local_4c0,pcVar9,lVar8,lVar7);
        if ((ulonglong)puVar10[5] < 0x10) {
          puVar10 = puVar10 + 2;
        }
        else {
          puVar10 = (undefined8 *)puVar10[2];
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 200))
                  (*(longlong **)(param_1 + 8),param_3,puVar10,0xffff00,0x7d5);
        local_4c0 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4b8);
        pIVar4 = theInstance();
        lVar7 = FUN_140e17940(lVar6);
        lVar8 = FUN_140e17930(lVar6);
        pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_GUIDE_RETUTOR_SUCCESS");
        puVar10 = FUN_140e042a0(&local_490,pcVar9,lVar8,lVar7);
        if ((ulonglong)puVar10[5] < 0x10) {
          puVar10 = puVar10 + 2;
        }
        else {
          puVar10 = (undefined8 *)puVar10[2];
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 200))
                  (*(longlong **)(param_1 + 8),param_4,puVar10,0xffff00,0x7d5);
        local_490 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_488);
        FUN_140e19a50(local_458);
        pcVar9 = (char *)FUN_140e17940(lVar6);
        uVar11 = FUN_140e19b10(local_458,'\a',param_3,param_4,0,pcVar9);
        if ((char)uVar11 == '\0') {
          log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                             "msg.Create(MSG_GUIDE_RESTUDENT_SUCCESS, idTutor, idStudent, 0, pStudent->GetName())"
                             ,
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                             ,0x1cb);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                    (*(longlong **)(param_1 + 8),param_3,local_458);
        }
        FUN_140e19ad0((undefined8 *)local_458);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e11740 @ 140e11740
// ============================================================

void FUN_140e11740(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint local_4a8;
  int local_4a4;
  ulonglong *local_480;
  uint *local_478;
  ulonglong *local_470;
  uint *local_468;
  CMsg local_458 [1072];
  
  lVar4 = FUN_140e0bc80(param_1,param_2);
  if (lVar4 != 0) {
    uVar5 = FUN_140e17740(lVar4,2);
    uVar2 = (uint)uVar5;
    if ((uVar2 != 0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                          (*(longlong **)(param_1 + 8),uVar5 & 0xffffffff), cVar1 != '\0')) {
      uVar6 = FUN_140e0eea0(param_1,uVar2,param_2,'\x01');
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),uVar5 & 0xffffffff);
      FUN_140e04620(param_1,param_2,(int)uVar6,uVar3);
      FUN_140e19e60(local_458);
      uVar5 = FUN_140e19f20(local_458,'\x06',uVar2,param_2,0,(int)uVar6,uVar3,0,0,0,0,0,0,0,0,0,1,0,
                            0,0,(char *)0x0,(char *)0x0,(char *)0x0);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                  (*(longlong **)(param_1 + 8),param_2,local_458);
      }
      FUN_140e19ee0((undefined8 *)local_458);
    }
    uVar6 = 0;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    FUN_140e0b740(lVar4,&local_480);
    local_4a8 = 0;
    local_4a4 = 0;
    uVar5 = uVar6;
    puVar9 = local_478;
    while( true ) {
      if ((local_480 == (ulonglong *)0x0) || (uVar2 = (uint)uVar5, local_480 != local_470)) {
        _invalid_parameter_noinfo();
        uVar2 = local_4a8;
      }
      if (puVar9 == local_468) {
        return;
      }
      local_4a8 = uVar2 + 1;
      if (10000 < local_4a8) break;
      if (local_480 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar5 = uVar6;
      }
      else {
        uVar5 = *local_480;
      }
      if (*(uint **)(uVar5 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      puVar7 = (uint *)FUN_140e0bc80(param_1,*puVar9);
      if (puVar7 == (uint *)0x0) {
        if (local_480 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar5 = uVar6;
        }
        else {
          uVar5 = *local_480;
        }
        if (*(uint **)(uVar5 + 0x20) <= puVar9) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR(
                          "CGuideMgr::BattleEffectChange, student not found, student_id=%u tutor_id=%u"
                          );
      }
      else {
        uVar2 = *puVar7;
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                          (*(longlong **)(param_1 + 8),uVar2);
        if (cVar1 != '\0') {
          uVar8 = FUN_140e17600((longlong)puVar7);
          uVar5 = uVar6;
          if (((int)uVar8 < 1) && (uVar5 = 0, local_4a4 < 10)) {
            uVar5 = FUN_140e0eea0(param_1,param_2,uVar2,'\0');
            uVar5 = uVar5 & 0xffffffff;
          }
          FUN_140e04620(param_1,uVar2,(int)uVar5,uVar3);
          FUN_140e19e60(local_458);
          uVar5 = FUN_140e19f20(local_458,'\x06',param_2,uVar2,0,(int)uVar5,uVar3,0,0,0,0,0,0,0,0,0,
                                1,0,0,0,(char *)0x0,(char *)0x0,(char *)0x0);
          if ((char)uVar5 == '\0') {
            log_InlineLogERROR(&DAT_140e23698);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                      (*(longlong **)(param_1 + 8),uVar2,local_458);
          }
          FUN_140e19ee0((undefined8 *)local_458);
        }
      }
      local_4a4 = local_4a4 + 1;
      if (local_480 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar5 = uVar6;
      }
      else {
        uVar5 = *local_480;
      }
      if (*(uint **)(uVar5 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      puVar9 = puVar9 + 1;
      uVar5 = (ulonglong)local_4a8;
    }
    log_InlineLogERROR(&DAT_140e23698);
  }
  return;
}



// ============================================================
// Function: FUN_140e11ba0 @ 140e11ba0
// ============================================================

void FUN_140e11ba0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (param_3 < 1) {
    log_InlineLogERROR(&DAT_140e23698);
  }
  else {
    puVar4 = (undefined4 *)FUN_140e0bc80(param_1,param_2);
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                        (*(longlong **)(param_1 + 8),param_2);
      uVar5 = FUN_140e17740((longlong)puVar4,2);
      uVar2 = (uint)uVar5;
      puVar6 = (undefined4 *)FUN_140e0bc80(param_1,uVar2);
      if (puVar6 != (undefined4 *)0x0) {
        uVar7 = FUN_140e0bbf0(param_1,7,uVar1,0);
        uVar3 = (uint)uVar7;
        if (uVar3 != 0) {
          uVar5 = FUN_140e04680(param_1,puVar6,puVar4);
          if ((char)uVar5 != '\0') {
            FUN_140e0f780(param_1,uVar2,puVar4,0,0,0,uVar3);
            FUN_140e16d30((longlong)puVar4,5,uVar3,uVar2);
            FUN_140e17ee0(puVar6,4,uVar7 & 0xffffffff);
            FUN_140e17ac0((longlong)puVar6);
          }
        }
        uVar5 = FUN_140e17740((longlong)puVar6,2);
        uVar2 = (uint)uVar5;
        puVar6 = (undefined4 *)FUN_140e0bc80(param_1,uVar2);
        uVar7 = FUN_140e0bbf0(param_1,7,uVar1,1);
        uVar1 = (uint)uVar7;
        if ((puVar6 != (undefined4 *)0x0) && (uVar1 != 0)) {
          uVar5 = FUN_140e04680(param_1,puVar6,puVar4);
          if ((char)uVar5 != '\0') {
            FUN_140e0f780(param_1,uVar2,puVar4,1,0,0,uVar1);
            FUN_140e17070((longlong)puVar4,5,uVar1,uVar2);
            FUN_140e17ee0(puVar6,4,uVar7 & 0xffffffff);
            FUN_140e17ac0((longlong)puVar6);
          }
        }
      }
      FUN_140e17ac0((longlong)puVar4);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e11d90 @ 140e11d90
// ============================================================

void FUN_140e11d90(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (param_3 < 1) {
    log_InlineLogERROR(&DAT_140e23698);
  }
  else {
    puVar3 = (undefined4 *)FUN_140e0bc80(param_1,param_2);
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                        (*(longlong **)(param_1 + 8),param_2);
      uVar4 = FUN_140e17740((longlong)puVar3,2);
      uVar2 = (uint)uVar4;
      puVar5 = (undefined4 *)FUN_140e0bc80(param_1,uVar2);
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = FUN_140e0bbf0(param_1,6,uVar1,0);
        uVar6 = (uint)((int)uVar4 * param_3) / 100;
        if (uVar6 != 0) {
          uVar4 = FUN_140e04680(param_1,puVar5,puVar3);
          if ((char)uVar4 != '\0') {
            FUN_140e0f780(param_1,uVar2,puVar3,0,0,uVar6,0);
            FUN_140e16d30((longlong)puVar3,3,uVar6,uVar2);
            FUN_140e17ee0(puVar5,3,(ulonglong)uVar6);
            FUN_140e17ac0((longlong)puVar5);
          }
        }
        uVar4 = FUN_140e17740((longlong)puVar5,2);
        uVar2 = (uint)uVar4;
        puVar5 = (undefined4 *)FUN_140e0bc80(param_1,uVar2);
        uVar4 = FUN_140e0bbf0(param_1,6,uVar1,1);
        uVar1 = (uint)((int)uVar4 * param_3) / 100;
        if ((uVar1 != 0) && (puVar5 != (undefined4 *)0x0)) {
          uVar4 = FUN_140e04680(param_1,puVar5,puVar3);
          if ((char)uVar4 != '\0') {
            FUN_140e0f780(param_1,uVar2,puVar3,1,0,uVar1,0);
            FUN_140e17070((longlong)puVar3,3,uVar1,uVar2);
            FUN_140e17ee0(puVar5,3,(ulonglong)uVar1);
            FUN_140e17ac0((longlong)puVar5);
          }
        }
      }
      FUN_140e17ac0((longlong)puVar3);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e11fb0 @ 140e11fb0
// ============================================================

void FUN_140e11fb0(longlong *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  __time32_t _Var10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulonglong uVar20;
  char *pcVar21;
  char *pcVar22;
  IStringManager *pIVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined4 local_934;
  int local_930;
  undefined **local_8d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8d0 [40];
  CMsg local_8a8 [1072];
  CMsg local_478 [1080];
  
  lVar16 = FUN_140e0bc80((longlong)param_1,param_2);
  if (lVar16 != 0) {
    uVar17 = FUN_140e17740(lVar16,0);
    uVar8 = (uint)uVar17;
    if (uVar8 != 0) {
      uVar18 = FUN_140e17600(lVar16);
      iVar9 = FUN_140e17630(lVar16);
      local_934 = 0;
      if ((int)uVar18 < 1) {
        local_930 = 999999;
        uVar20 = FUN_140e0eea0((longlong)param_1,uVar8,param_2,'\x01');
        local_934 = (undefined4)uVar20;
      }
      else {
        _Var10 = _time32((__time32_t *)0x0);
        local_930 = _Var10 / 0xe10 - (int)uVar18;
        if (iVar9 < 1) {
          FUN_140e19a50(local_8a8);
          pcVar19 = (char *)FUN_140e17940(lVar16);
          uVar20 = FUN_140e19b10(local_8a8,'\x10',uVar8,param_2,0,pcVar19);
          if ((char)uVar20 == '\0') {
            log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                               "msg.Create(MSG_GUIDE_BETRAY_OVER, idTutor, idActor, 0, pStudent->GetName())"
                               ,
                               "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                               ,0x494);
          }
          else {
            (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_8a8);
          }
          (**(code **)(*param_1 + 0x80))(param_1,uVar17 & 0xffffffff,param_2,0,4);
          FUN_140e19ad0((undefined8 *)local_8a8);
          return;
        }
      }
      uVar11 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                         ((longlong *)param_1[1],uVar17 & 0xffffffff);
      FUN_140e04620((longlong)param_1,param_2,local_934,uVar11);
      FUN_140e19e60(local_478);
      plVar1 = (longlong *)param_1[1];
      pcVar19 = (char *)(**(code **)(*plVar1 + 0x68))(plVar1,uVar17 & 0xffffffff);
      pcVar21 = (char *)FUN_140e17940(lVar16);
      pcVar22 = (char *)FUN_140e17930(lVar16);
      uVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,uVar17 & 0xffffffff);
      uVar11 = (**(code **)(*plVar1 + 0x90))(plVar1,uVar17 & 0xffffffff);
      uVar12 = (**(code **)(*plVar1 + 0x78))(plVar1,uVar17 & 0xffffffff);
      bVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1,uVar17 & 0xffffffff);
      uVar13 = (**(code **)(*plVar1 + 0xa0))(plVar1,uVar17 & 0xffffffff);
      uVar14 = (**(code **)(*plVar1 + 0x98))(plVar1,uVar17 & 0xffffffff);
      uVar7 = (**(code **)(*plVar1 + 0x80))(plVar1,uVar17 & 0xffffffff);
      uVar4 = (**(code **)(*plVar1 + 0x88))(plVar1,uVar17 & 0xffffffff);
      uVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,uVar17 & 0xffffffff);
      uVar18 = FUN_140e17950(lVar16);
      uVar15 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar17 & 0xffffffff);
      pcVar25 = (char *)(ulonglong)param_2;
      uVar17 = FUN_140e19f20(local_478,'\x01',uVar8,param_2,uVar15,local_934,local_930,(int)uVar18,
                             uVar5,uVar4,uVar7,uVar14,uVar13,(ushort)bVar3,uVar12,uVar11,uVar2,0,0,0
                             ,pcVar22,pcVar21,pcVar19);
      if ((char)uVar17 == '\0') {
        pcVar25 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
        log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                           "msg.Create(MSG_GUIDEINFO_TUTOR, idTutor, idActor, m_pConsumer->GetUserLookFace(idTutor), unShareBattleEffect, nTime, pStudent->GetTutorDate(), m_pConsumer->GetUserLevel(idTutor), m_pConsumer->GetUserProfession(idTutor), m_pConsumer->GetUserPk(idTutor), m_pConsumer->GetUserSynID(idTutor), m_pConsumer->GetUserSynRank(idTutor), m_pConsumer->GetUserSynMemberTitle(idTutor), m_pConsumer->GetUserPeerage(idTutor), m_pConsumer->GetUserSex(idTutor), m_pConsumer->IsOnline(idTutor), 0, 0, 0, pStudent->GetTutorName(), pStudent->GetName(), m_pConsumer->GetUserMateName(idTutor))"
                           ,"f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                           0x4ac);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_478);
      }
      if (param_3 != '\0') {
        uVar17 = FUN_140e17740(lVar16,0);
        if (((int)uVar17 != 0) &&
           (cVar6 = (**(code **)(*(longlong *)param_1[1] + 0xb8))
                              ((longlong *)param_1[1],uVar17 & 0xffffffff), cVar6 != '\0')) {
          pIVar23 = theInstance();
          lVar16 = FUN_140e17940(lVar16);
          pcVar19 = (char *)(*(code *)**(undefined8 **)pIVar23)(pIVar23,"STR_GUIDE_STUDENT_LOGIN");
          puVar24 = FUN_140e042a0(&local_8d8,pcVar19,lVar16,pcVar25);
          if ((ulonglong)puVar24[5] < 0x10) {
            puVar24 = puVar24 + 2;
          }
          else {
            puVar24 = (undefined8 *)puVar24[2];
          }
          (**(code **)(*(longlong *)param_1[1] + 200))
                    ((longlong *)param_1[1],uVar17 & 0xffffffff,puVar24,0xffff00,0x7d5);
          local_8d8 = tq::CString::vftable;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8d0);
        }
      }
      FUN_140e19ee0((undefined8 *)local_478);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e124b0 @ 140e124b0
// ============================================================

void FUN_140e124b0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if ((0 < param_3) &&
     (puVar3 = (undefined4 *)FUN_140e0bc80(param_1,param_2), puVar3 != (undefined4 *)0x0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
    if (param_4 == '\0') {
      lVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                        (*(longlong **)(param_1 + 8),param_2);
      if (lVar8 == 0) {
        return;
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
                        (*(longlong **)(param_1 + 8),param_2);
      uVar4 = FUN_140e0bbf0(param_1,5,uVar1,0);
      uVar4 = (longlong)((uVar4 & 0xffffffff) * (longlong)iVar2 * param_3) / (lVar8 * 100);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
                        (*(longlong **)(param_1 + 8),param_2);
      uVar5 = FUN_140e0bbf0(param_1,5,uVar1,1);
      uVar5 = (longlong)((uVar5 & 0xffffffff) * (longlong)iVar2 * param_3) / (lVar8 * 100);
    }
    else {
      uVar4 = FUN_140e0bbf0(param_1,5,uVar1,0);
      lVar8 = (uVar4 & 0xffffffff) * param_3;
      lVar8 = lVar8 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar8),8);
      uVar4 = (lVar8 >> 6) - (lVar8 >> 0x3f);
      uVar5 = FUN_140e0bbf0(param_1,5,uVar1,1);
      lVar8 = (uVar5 & 0xffffffff) * param_3;
      lVar8 = lVar8 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar8),8);
      uVar5 = (lVar8 >> 6) - (lVar8 >> 0x3f);
    }
    uVar6 = FUN_140e17740((longlong)puVar3,2);
    uVar1 = (uint)uVar6;
    puVar7 = (undefined4 *)FUN_140e0bc80(param_1,uVar1);
    if (puVar7 != (undefined4 *)0x0) {
      if ((uVar4 != 0) && (uVar6 = FUN_140e04680(param_1,puVar7,puVar3), (char)uVar6 != '\0')) {
        FUN_140e0f780(param_1,uVar1,puVar3,0,uVar4,0,0);
        FUN_140e16d30((longlong)puVar3,4,(uint)uVar4,uVar1);
        FUN_140e17ee0(puVar7,2,uVar4 & 0xffffffff);
        FUN_140e17ac0((longlong)puVar7);
      }
      uVar6 = FUN_140e17740((longlong)puVar7,2);
      uVar1 = (uint)uVar6;
      puVar7 = (undefined4 *)FUN_140e0bc80(param_1,uVar1);
      if (((uVar5 != 0) && (puVar7 != (undefined4 *)0x0)) &&
         (uVar6 = FUN_140e04680(param_1,puVar7,puVar3), (char)uVar6 != '\0')) {
        FUN_140e0f780(param_1,uVar1,puVar3,1,uVar5,0,0);
        FUN_140e17070((longlong)puVar3,4,(uint)uVar5,uVar1);
        FUN_140e17ee0(puVar7,2,uVar5 & 0xffffffff);
        FUN_140e17ac0((longlong)puVar7);
      }
    }
    FUN_140e17ac0((longlong)puVar3);
  }
  return;
}



// ============================================================
// Function: FUN_140e127a0 @ 140e127a0
// ============================================================

void FUN_140e127a0(longlong *param_1,uint param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  IStringManager *pIVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined **local_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_88 [40];
  undefined **local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [48];
  
  uVar9 = param_3;
  puVar1 = FUN_140e0fa10((longlong)param_1,param_2,param_3,param_4);
  puVar2 = FUN_140e0fa10((longlong)param_1,(uint)param_3,uVar9,param_4);
  if ((puVar2 != (uint *)0x0) && (puVar1 != (uint *)0x0)) {
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[1] + 0x70))
                       ((longlong *)param_1[1],param_3 & 0xffffffff);
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],param_2);
    if ((puVar3 != (undefined8 *)0x0) &&
       ((puVar4 != (undefined8 *)0x0 &&
        (plVar5 = FUN_140e0f470((longlong)param_1,param_2,(uint)param_3), plVar5 != (longlong *)0x0)
        ))) {
      FUN_140e17e50(puVar2,plVar5,puVar3,puVar4);
      FUN_140e19640((longlong)puVar1,(int *)puVar2);
      pIVar6 = theInstance();
      pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_GUIDE_TUTOR_SUCCESS");
      puVar8 = FUN_140e042a0(&local_90,pcVar7,puVar4,puVar3);
      if ((ulonglong)puVar8[5] < 0x10) {
        puVar8 = puVar8 + 2;
      }
      else {
        puVar8 = (undefined8 *)puVar8[2];
      }
      (**(code **)(*(longlong *)param_1[1] + 200))
                ((longlong *)param_1[1],param_2,puVar8,0xffff00,0x7d5);
      local_90 = tq::CString::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_88);
      pIVar6 = theInstance();
      pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_GUIDE_TUTOR_SUCCESS");
      puVar3 = FUN_140e042a0(&local_60,pcVar7,puVar4,puVar3);
      if ((ulonglong)puVar3[5] < 0x10) {
        puVar3 = puVar3 + 2;
      }
      else {
        puVar3 = (undefined8 *)puVar3[2];
      }
      (**(code **)(*(longlong *)param_1[1] + 200))
                ((longlong *)param_1[1],param_3 & 0xffffffff,puVar3,0xffff00,0x7d5);
      local_60 = tq::CString::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
      (**(code **)(*param_1 + 0xb8))(param_1,param_3 & 0xffffffff,0);
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,2);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e12990 @ 140e12990
// ============================================================

void FUN_140e12990(longlong *param_1,undefined4 *param_2)

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
  FUN_140e0fd50(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_140e12a40 @ 140e12a40
// ============================================================

undefined8 * FUN_140e12a40(undefined8 *param_1)

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
  lVar2 = FUN_140e07e10();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e12ac0 @ 140e12ac0
// ============================================================

undefined8 * FUN_140e12ac0(undefined8 *param_1)

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
  lVar2 = FUN_140e07ec0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e12b40 @ 140e12b40
// ============================================================

void FUN_140e12b40(longlong *param_1,undefined8 *param_2)

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
  FUN_140e0ff80(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_140e12bf0 @ 140e12bf0
// ============================================================

undefined8 * FUN_140e12bf0(undefined8 *param_1)

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
  lVar2 = FUN_140e07f20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e12c70 @ 140e12c70
// ============================================================

longlong * FUN_140e12c70(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140e10130((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140e12d64;
  }
  _invalid_parameter_noinfo();
LAB_140e12d64:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e12da0 @ 140e12da0
// ============================================================

undefined8 * FUN_140e12da0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = guide::CGuideMgr::vftable;
  plVar3 = (longlong *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 3);
    plVar2 = plVar1;
  }
  param_1[3] = plVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 9);
    plVar2 = plVar1;
  }
  param_1[9] = plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0xf);
    plVar3 = plVar2;
  }
  param_1[0xf] = plVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_140e12a40(param_1 + 0x15);
  FUN_140e12ac0(param_1 + 0x1d);
  FUN_140e12bf0(param_1 + 0x25);
  FUN_140e12bf0(param_1 + 0x2d);
  tq::CTimer::CTimer((CTimer *)(param_1 + 0x35),0);
  return param_1;
}



// ============================================================
// Function: FUN_140e12ed0 @ 140e12ed0
// ============================================================

uint * FUN_140e12ed0(uint *param_1,char *param_2,char *param_3,char *param_4)

{
  FUN_140e10470(param_1,param_2,param_3,param_4);
  if (((ulonglong)param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e12f00 @ 140e12f00
// ============================================================

undefined8 * FUN_140e12f00(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x1b8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_140e12da0(puVar1);
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140e12f40 @ 140e12f40
// ============================================================

void FUN_140e12f40(longlong *param_1,int param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res18 [2];
  uint local_res20;
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38 [2];
  
  uVar7 = (uint)param_4;
  local_res18[0] = param_3;
  local_res20 = uVar7;
  if (param_2 == 0) {
    pIVar4 = theInstance();
    lVar6 = *(longlong *)param_1[1];
    uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_GUIDE_STUDENT_FAIL");
    (**(code **)(lVar6 + 200))(param_1[1],param_3,uVar5,0xffff00,0x7d5);
  }
  else {
    uVar8 = param_4;
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],param_3);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xb0))
                          ((longlong *)param_1[1],param_4 & 0xffffffff), cVar1 != '\0')) {
      FUN_140e0d220(param_1 + 0x25,(longlong *)&local_48,local_res18);
      lVar6 = param_1[0x2b];
      lVar9 = 0;
      local_38[0] = (longlong *)param_1[0x25];
      if ((local_48 == (longlong *)0x0) || (local_48 != local_38[0])) {
        _invalid_parameter_noinfo();
      }
      if (lStack_40 != lVar6) {
        if (local_48 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *local_48;
        }
        if (lStack_40 == *(longlong *)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(uint *)(lStack_40 + 0x1c) == uVar7) {
          FUN_140e0ce60(param_1 + 0x25,local_38,(longlong *)&local_48);
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],param_3);
          bVar2 = FUN_140e0edf0((longlong)param_1,param_3,uVar3);
          if (bVar2) {
            lVar6 = FUN_140e0bc80((longlong)param_1,uVar7);
            if ((lVar6 != 0) && (uVar5 = FUN_140e17740(lVar6,0), (int)uVar5 != 0)) {
              return;
            }
            FUN_140e127a0(param_1,param_3,param_4 & 0xffffffff,uVar8);
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e130f0 @ 140e130f0
// ============================================================

void FUN_140e130f0(longlong *param_1,int param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint local_res20 [2];
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38 [2];
  
  uVar3 = (uint)param_4;
  uVar7 = param_4 & 0xffffffff;
  local_res20[0] = uVar3;
  if (param_2 == 0) {
    pIVar4 = theInstance();
    lVar6 = *(longlong *)param_1[1];
    uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_GUIDE_TUTOR_FAIL");
    (**(code **)(lVar6 + 200))(param_1[1],uVar7,uVar5,0xffff00,0x7d5);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],param_3);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],uVar7),
       cVar1 != '\0')) {
      FUN_140e0d220(param_1 + 0x2d,(longlong *)&local_48,local_res20);
      lVar6 = param_1[0x33];
      lVar8 = 0;
      local_38[0] = (longlong *)param_1[0x2d];
      if ((local_48 == (longlong *)0x0) || (local_48 != local_38[0])) {
        _invalid_parameter_noinfo();
      }
      if (lStack_40 != lVar6) {
        if (local_48 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar8 = *local_48;
        }
        if (lStack_40 == *(longlong *)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(uint *)(lStack_40 + 0x1c) == param_3) {
          FUN_140e0ce60(param_1 + 0x2d,local_38,(longlong *)&local_48);
          lVar6 = FUN_140e0bc80((longlong)param_1,uVar3);
          if ((lVar6 != 0) && (uVar5 = FUN_140e17740(lVar6,0), (int)uVar5 != 0)) {
            return;
          }
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],param_3);
          bVar2 = FUN_140e0edf0((longlong)param_1,param_3,uVar3);
          if (bVar2) {
            FUN_140e127a0(param_1,param_3,uVar7,param_4);
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e132a0 @ 140e132a0
// ============================================================

void FUN_140e132a0(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  __time32_t _Var9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint *puVar22;
  IStringManager *pIVar23;
  longlong lVar24;
  char *pcVar25;
  undefined8 *puVar26;
  uint *puVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  undefined2 local_e18 [2];
  undefined2 local_e14 [2];
  undefined1 local_e10;
  uint local_e0c;
  undefined4 local_e08;
  uint local_e04;
  ushort local_e00;
  int local_dfc;
  ulonglong *local_df8;
  ulonglong *local_df0 [3];
  uint *local_dd8;
  uint *local_dd0;
  longlong local_dc8;
  ulonglong *local_db8;
  uint *puStack_db0;
  uint *local_da8;
  undefined4 local_da0;
  undefined4 local_d9c;
  undefined8 local_d98;
  uint *local_d90;
  ulonglong *local_d88;
  uint *local_d80;
  ulonglong *local_d78;
  ulonglong *local_d68;
  uint *puStack_d60;
  char *local_d50;
  char *local_d48;
  longlong *local_d38;
  ulonglong *local_d28;
  uint *puStack_d20;
  undefined8 local_d18;
  undefined **local_d10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d08 [48];
  CMsg local_cd8 [1072];
  CMsg local_8a8 [1072];
  CMsg local_478 [1080];
  
  local_d18 = 0xfffffffffffffffe;
  if ((param_3 == 2) || (param_3 == 4)) {
    puVar14 = (ulonglong *)FUN_140e0bc80((longlong)param_1,param_2);
    if (puVar14 != (ulonglong *)0x0) {
      local_df8 = puVar14;
      local_d88 = operator_new(8);
      puVar21 = (ulonglong *)0x0;
      local_df0[0] = puVar21;
      if (local_d88 != (ulonglong *)0x0) {
        *local_d88 = (ulonglong)local_df0;
        local_df0[0] = local_d88;
      }
      local_dd8 = (uint *)0x0;
      local_dd0 = (uint *)0x0;
      local_dc8 = 0;
      puVar22 = (uint *)puVar14[0xd];
      local_da8 = puVar22;
      if (puVar22 < (uint *)puVar14[0xc]) {
        _invalid_parameter_noinfo();
      }
      local_d78 = (ulonglong *)puVar14[9];
      puVar27 = (uint *)puVar14[0xc];
      if ((uint *)puVar14[0xd] < puVar27) {
        _invalid_parameter_noinfo();
      }
      puVar28 = (ulonglong *)puVar14[9];
      local_e04 = 0;
      local_db8 = puVar28;
      puStack_db0 = puVar27;
      while( true ) {
        local_d80 = puVar27;
        if ((puVar28 == (ulonglong *)0x0) || (uVar13 = (uint)puVar21, puVar28 != local_d78)) {
          _invalid_parameter_noinfo();
          uVar13 = local_e04;
        }
        if (puVar27 == puVar22) goto LAB_140e13add;
        local_e04 = uVar13 + 1;
        if (10000 < local_e04) break;
        if (puVar28 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = 0;
        }
        else {
          uVar20 = *puVar28;
        }
        if (*(uint **)(uVar20 + 0x20) <= puVar27) {
          _invalid_parameter_noinfo();
        }
        puVar15 = (uint *)FUN_140e0bc80((longlong)param_1,*puVar27);
        local_d90 = puVar15;
        if (puVar15 == (uint *)0x0) {
          if (puVar28 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar20 = 0;
          }
          else {
            uVar20 = *puVar28;
          }
          if (*(uint **)(uVar20 + 0x20) <= puVar27) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CGuideMgr::SendMyStudentInfo, student not found, student_id=%u tutor_id=%u"
                             ,(ulonglong)*puVar27);
        }
        else {
          uVar13 = *puVar15;
          local_e0c = uVar13;
          uVar16 = FUN_140e17600((longlong)puVar15);
          iVar8 = FUN_140e17630((longlong)puVar15);
          if ((int)uVar16 < 1) {
            local_dfc = 999999;
          }
          else {
            _Var9 = _time32((__time32_t *)0x0);
            local_dfc = _Var9 / 0xe10 - (int)uVar16;
            if (iVar8 < 1) {
              FUN_140e19a50(local_cd8);
              pcVar17 = (char *)FUN_140e17940((longlong)puVar15);
              uVar20 = 0;
              uVar18 = FUN_140e19b10(local_cd8,'\x10',param_2,uVar13,0,pcVar17);
              if ((char)uVar18 == '\0') {
                log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                                   "msg.Create(MSG_GUIDE_BETRAY_OVER, idActor, idStudent, 0, pStudent->GetName())"
                                   ,
                                   "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                                   ,0x41e);
              }
              else {
                (**(code **)(*(longlong *)param_1[1] + 0xd0))
                          ((longlong *)param_1[1],param_2,local_cd8);
              }
              puVar22 = local_dd0;
              uVar18 = uVar20;
              if (local_dd8 != (uint *)0x0) {
                uVar18 = local_dc8 - (longlong)local_dd8 >> 2;
              }
              if ((ulonglong)((longlong)local_dd0 - (longlong)local_dd8 >> 2) < uVar18) {
                *local_dd0 = uVar13;
                local_dd0 = local_dd0 + 1;
              }
              else {
                if (local_dd0 < local_dd8) {
                  _invalid_parameter_noinfo();
                }
                puVar27 = local_dd8;
                puVar21 = local_df0[0];
                local_d68 = local_df0[0];
                puStack_d60 = puVar22;
                uVar18 = uVar20;
                if (((longlong)local_dd0 - (longlong)local_dd8 & 0xfffffffffffffffcU) != 0) {
                  if (local_dd0 < local_dd8) {
                    _invalid_parameter_noinfo();
                  }
                  if ((puVar21 == (ulonglong *)0x0) || (puVar21 != local_df0[0])) {
                    _invalid_parameter_noinfo();
                  }
                  uVar18 = (longlong)puVar22 - (longlong)puVar27 >> 2;
                }
                local_d28 = local_d68;
                puStack_d20 = puStack_d60;
                FUN_140e0d600((longlong)local_df0,(longlong)&local_d28,1,&local_e0c);
                puVar22 = local_dd8;
                if (local_dd0 < local_dd8) {
                  _invalid_parameter_noinfo();
                }
                puVar21 = local_df0[0];
                if (local_df0[0] == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar29 = uVar20;
                }
                else {
                  uVar29 = *local_df0[0];
                }
                if (puVar22 + uVar18 <= *(uint **)(uVar29 + 0x20)) {
                  if (puVar21 != (ulonglong *)0x0) {
                    uVar20 = *puVar21;
                  }
                  if (*(uint **)(uVar20 + 0x18) <= puVar22 + uVar18) goto LAB_140e136cc;
                }
                _invalid_parameter_noinfo();
              }
LAB_140e136cc:
              FUN_140e19ad0((undefined8 *)local_cd8);
              puVar15 = local_d90;
            }
          }
          local_d98 = 0;
          local_e14[0] = 0;
          local_e18[0] = 0;
          local_e08 = 0;
          if (param_3 == 2) {
            uVar16 = FUN_140e17740((longlong)puVar15,0);
            local_e08 = (undefined4)uVar16;
            FUN_140e17980((longlong)puVar15,&local_d98,local_e14,local_e18);
          }
          else if (param_3 == 4) {
            uVar16 = FUN_140e17740((longlong)puVar14,0);
            local_e08 = (undefined4)uVar16;
            FUN_140e17a20((longlong)puVar15,&local_d98,local_e14,local_e18);
          }
          else {
            log_InlineLogERROR("CGuideMgr::SendMyStudentInfo, forbidden arguments [SendMyStudentInfo] [nAction:%u]"
                               ,(ulonglong)param_3);
          }
          FUN_140e19e60(local_8a8);
          plVar2 = (longlong *)param_1[1];
          local_d38 = plVar2;
          local_d50 = (char *)(**(code **)(*plVar2 + 0x68))(plVar2,local_e0c);
          puVar22 = local_d90;
          local_d48 = (char *)FUN_140e17940((longlong)local_d90);
          local_d88 = (ulonglong *)FUN_140e17930((longlong)puVar22);
          local_e10 = (**(code **)(*plVar2 + 0xb8))(plVar2,local_e0c);
          uVar13 = local_e0c;
          local_d9c = (**(code **)(*plVar2 + 0x90))(plVar2,local_e0c);
          local_da0 = (**(code **)(*plVar2 + 0x78))(plVar2,uVar13);
          bVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,uVar13);
          local_e00 = (ushort)bVar3;
          uVar10 = (**(code **)(*plVar2 + 0xa0))(plVar2,uVar13);
          uVar11 = (**(code **)(*plVar2 + 0x98))(plVar2,uVar13);
          uVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,uVar13);
          uVar4 = (**(code **)(*plVar2 + 0x88))(plVar2,uVar13);
          uVar5 = (**(code **)(*plVar2 + 0x38))(plVar2,uVar13);
          puVar22 = local_d90;
          uVar16 = FUN_140e17950((longlong)local_d90);
          uVar12 = (**(code **)(*local_d38 + 0x58))(local_d38);
          uVar19 = FUN_140e17740((longlong)puVar22,0);
          uVar20 = FUN_140e19f20(local_8a8,(char)param_3,(int)uVar19,local_e0c,uVar12,0,local_dfc,
                                 (int)uVar16,uVar5,uVar4,uVar7,uVar11,uVar10,local_e00,local_da0,
                                 local_d9c,local_e10,local_d98,local_e14[0],local_e18[0],
                                 (char *)local_d88,local_d48,local_d50);
          if ((char)uVar20 == '\0') {
            log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                               "msg.Create(nAction, pStudent->FindTutor(TUTORTYPE_NONE), idStudent, m_pConsumer->GetUserLookFace(idStudent), 0, nTime, pStudent->GetTutorDate(), m_pConsumer->GetUserLevel(idStudent), m_pConsumer->GetUserProfession(idStudent), m_pConsumer->GetUserPk(idStudent), m_pConsumer->GetUserSynID(idStudent), m_pConsumer->GetUserSynRank(idStudent), m_pConsumer->GetUserSynMemberTitle(idStudent), m_pConsumer->GetUserPeerage(idStudent), m_pConsumer->GetUserSex(idStudent), m_pConsumer->IsOnline(idStudent), (I64)u64Exp, usGodTime, usAddLevel, pStudent->GetTutorName(), pStudent->GetName(), m_pConsumer->GetUserMateName(idStudent))"
                               ,
                               "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                               ,0x44d);
          }
          else {
            (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],local_e08);
          }
          FUN_140e19ee0((undefined8 *)local_8a8);
          puVar27 = local_d80;
          puVar28 = local_db8;
          puVar22 = local_da8;
          puVar14 = local_df8;
        }
        if (puVar28 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = 0;
        }
        else {
          uVar20 = *puVar28;
        }
        if (*(uint **)(uVar20 + 0x20) <= puVar27) {
          _invalid_parameter_noinfo();
        }
        puVar27 = puVar27 + 1;
        puVar21 = (ulonglong *)(ulonglong)local_e04;
      }
      log_InlineLogERROR(&DAT_140e23698,"DEAD_LOOP_BREAK","unLoopCount",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                         0x40a);
LAB_140e13add:
      puVar22 = local_dd8;
      if (local_dd0 < local_dd8) {
        _invalid_parameter_noinfo();
      }
      puVar14 = local_df0[0];
      while( true ) {
        puVar27 = local_dd0;
        if (local_dd0 < local_dd8) {
          _invalid_parameter_noinfo();
        }
        if ((puVar14 == (ulonglong *)0x0) || (puVar14 != local_df0[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar22 == puVar27) break;
        if (puVar14 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = 0;
        }
        else {
          uVar20 = *puVar14;
        }
        if (*(uint **)(uVar20 + 0x20) <= puVar22) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(*param_1 + 0x80))(param_1,param_2,*puVar22,0,3);
        if (puVar14 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = 0;
        }
        else {
          uVar20 = *puVar14;
        }
        if (*(uint **)(uVar20 + 0x20) <= puVar22) {
          _invalid_parameter_noinfo();
        }
        puVar22 = puVar22 + 1;
      }
      FUN_140e19e60(local_478);
      pcVar17 = (char *)0x0;
      uVar20 = FUN_140e19f20(local_478,(char)param_3 + '\x01',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                             (char *)0x0,(char *)0x0,(char *)0x0);
      if ((char)uVar20 == '\0') {
        pcVar17 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
        log_InlineLogERROR(&DAT_140e23698,"IF_OK",
                           "msg.Create(nAction+1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, NULL)"
                           ,"f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                           0x45b);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_478);
      }
      puVar14 = local_df8;
      if (param_4 != '\0') {
        uVar13 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],param_2);
        puVar22 = (uint *)puVar14[0xd];
        local_da8 = puVar22;
        if (puVar22 < (uint *)puVar14[0xc]) {
          _invalid_parameter_noinfo();
        }
        local_df8 = (ulonglong *)puVar14[9];
        puVar27 = (uint *)puVar14[0xc];
        if ((uint *)puVar14[0xd] < puVar27) {
          _invalid_parameter_noinfo();
        }
        puVar14 = (ulonglong *)puVar14[9];
        uVar30 = 0;
        uVar31 = uVar30;
        local_db8 = puVar14;
        puStack_db0 = puVar27;
        local_d68 = puVar14;
        puStack_d60 = puVar27;
        while( true ) {
          uVar20 = 0;
          if ((puVar14 == (ulonglong *)0x0) || (puVar14 != local_df8)) {
            _invalid_parameter_noinfo();
          }
          if (puVar27 == puVar22) goto LAB_140e13f17;
          uVar31 = uVar31 + 1;
          if (10000 < uVar31) break;
          if (puVar14 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar18 = uVar20;
          }
          else {
            uVar18 = *puVar14;
          }
          if (*(uint **)(uVar18 + 0x20) <= puVar27) {
            _invalid_parameter_noinfo();
          }
          puVar22 = (uint *)FUN_140e0bc80((longlong)param_1,*puVar27);
          if (puVar22 == (uint *)0x0) {
            pcVar17 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
            log_InlineLogERROR(&DAT_140e23698,"IF_NOT","pStudent != NULL",
                               "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp"
                               ,0x468);
          }
          else {
            uVar1 = *puVar22;
            uVar16 = FUN_140e17600((longlong)puVar22);
            if (((int)uVar16 < 1) &&
               (cVar6 = (**(code **)(*(longlong *)param_1[1] + 0xb8))((longlong *)param_1[1],uVar1),
               cVar6 != '\0')) {
              if ((int)uVar30 < 10) {
                pcVar17 = (char *)0x0;
                uVar20 = FUN_140e0eea0((longlong)param_1,param_2,uVar1,'\0');
                uVar20 = uVar20 & 0xffffffff;
              }
              if ((uVar1 != 0) &&
                 (cVar6 = (**(code **)(*(longlong *)param_1[1] + 0xb8))
                                    ((longlong *)param_1[1],uVar1), cVar6 != '\0')) {
                pcVar17 = (char *)(ulonglong)uVar13;
                (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],uVar1,uVar20);
              }
              pIVar23 = theInstance();
              lVar24 = FUN_140e17930((longlong)puVar22);
              pcVar25 = (char *)(*(code *)**(undefined8 **)pIVar23)(pIVar23,"STR_GUIDE_TUTOR_LOGIN")
              ;
              puVar26 = FUN_140e042a0(&local_d10,pcVar25,lVar24,pcVar17);
              if ((ulonglong)puVar26[5] < 0x10) {
                puVar26 = puVar26 + 2;
              }
              else {
                puVar26 = (undefined8 *)puVar26[2];
              }
              pcVar17 = (char *)0xffff00;
              (**(code **)(*(longlong *)param_1[1] + 200))
                        ((longlong *)param_1[1],uVar1,puVar26,0xffff00,0x7d5);
              local_d10 = tq::CString::vftable;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d08);
            }
          }
          uVar20 = 0;
          if (puVar14 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            uVar20 = *puVar14;
          }
          if (*(uint **)(uVar20 + 0x20) <= puVar27) {
            _invalid_parameter_noinfo();
          }
          puVar27 = puVar27 + 1;
          uVar30 = uVar30 + 1;
          puVar22 = local_da8;
        }
        log_InlineLogERROR(&DAT_140e23698,"DEAD_LOOP_BREAK","unLoopCount",
                           "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",
                           0x466);
      }
LAB_140e13f17:
      FUN_140e19ee0((undefined8 *)local_478);
      if (local_dd8 != (uint *)0x0) {
        operator_delete(local_dd8);
      }
      local_dd8 = (uint *)0x0;
      local_dd0 = (uint *)0x0;
      local_dc8 = 0;
      operator_delete(local_df0[0]);
    }
  }
  else {
    log_InlineLogERROR(&DAT_140e23698,"IF_NOT",
                       "MSG_GUIDEINFO_STUDENT==nAction || MSG_GUIDEINFO_STUDENT_G2==nAction",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",0x3f8
                      );
  }
  return;
}



// ============================================================
// Function: FUN_140e13f70 @ 140e13f70
// ============================================================

ulonglong FUN_140e13f70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar1 = (longlong *)InstanceGet();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2,1);
    if (plVar1 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
      uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      FUN_140e0cb80(param_3,uVar2);
      uVar4 = 0;
      while( true ) {
        uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
        if (uVar2 <= uVar4) break;
        (**(code **)(*plVar1 + 0x30))(plVar1,(ulonglong)uVar4);
        local_20 = (**(code **)(*plVar1 + 0x38))(plVar1);
        FUN_140e12b40(param_3,&local_20);
        uVar4 = uVar4 + 1;
      }
      uVar3 = (**(code **)*plVar1)(plVar1);
      uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140e140b0 @ 140e140b0
// ============================================================

void FUN_140e140b0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  char *pcVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong **pplVar13;
  char *pcVar14;
  char *pcVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint local_res10 [2];
  longlong *local_res18;
  longlong **local_res20;
  longlong *local_158 [3];
  longlong **local_140;
  longlong **local_138;
  longlong local_130;
  longlong *local_128 [3];
  longlong **local_110;
  longlong **local_108;
  longlong local_100;
  longlong *local_f8;
  longlong **pplStack_f0;
  longlong *local_e8 [3];
  longlong **local_d0;
  longlong **local_c8;
  undefined8 local_c0;
  uint *local_b8;
  longlong *local_b0 [3];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_78;
  longlong **pplStack_70;
  longlong *local_68;
  uint *local_60;
  longlong *local_58;
  longlong **pplStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140e23698);
  }
  else {
    puVar3 = FUN_140e04220();
    FUN_140e03c90((longlong)puVar3,param_2);
    puVar4 = FUN_140e0fa10(param_1,param_2,param_3,param_4);
    if (puVar4 != (uint *)0x0) {
      local_b8 = puVar4;
      uVar5 = FUN_140e17740((longlong)puVar4,0);
      uVar2 = (uint)uVar5;
      if (uVar2 != 0) {
        puVar3 = FUN_140e04220();
        FUN_140e03c90((longlong)puVar3,uVar2);
        puVar6 = FUN_140e0fa10(param_1,uVar2,param_3,param_4);
        if (puVar6 != (uint *)0x0) {
          FUN_140e19640((longlong)puVar6,(int *)puVar4);
          uVar5 = FUN_140e17740((longlong)puVar6,0);
          uVar2 = (uint)uVar5;
          if (uVar2 != 0) {
            puVar3 = FUN_140e04220();
            FUN_140e03c90((longlong)puVar3,uVar2);
            puVar4 = FUN_140e0fa10(param_1,uVar2,param_3,param_4);
            if (puVar4 != (uint *)0x0) {
              FUN_140e19640((longlong)puVar4,(int *)puVar6);
            }
          }
        }
      }
      local_res18 = operator_new(8);
      if (local_res18 == (longlong *)0x0) {
        local_b0[0] = (longlong *)0x0;
      }
      else {
        *local_res18 = (longlong)local_b0;
        local_b0[0] = local_res18;
      }
      plVar18 = (longlong *)0x0;
      local_98 = (longlong *)0x0;
      local_90 = (longlong *)0x0;
      local_88 = 0;
      local_res20 = (longlong **)local_res18;
      local_res18 = operator_new(8);
      local_158[0] = plVar18;
      if (local_res18 != (longlong *)0x0) {
        *local_res18 = (longlong)local_158;
        local_158[0] = local_res18;
      }
      local_140 = (longlong **)0x0;
      local_138 = (longlong **)0x0;
      local_130 = 0;
      pcVar15 = (char *)0xf;
      pcVar14 = (char *)(ulonglong)param_2;
      pcVar10 = (char *)local_b0;
      local_res20 = (longlong **)local_res18;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))();
      plVar12 = local_98;
      plVar1 = local_b0[0];
      if (local_90 < local_98) {
        _invalid_parameter_noinfo();
        plVar1 = local_b0[0];
      }
      while( true ) {
        plVar17 = local_90;
        if (local_90 < local_98) {
          _invalid_parameter_noinfo();
        }
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_b0[0])) {
          _invalid_parameter_noinfo();
        }
        pplVar9 = local_140;
        if (plVar12 == plVar17) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar17 = plVar18;
        }
        else {
          plVar17 = (longlong *)*plVar1;
        }
        if ((longlong *)plVar17[4] <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar17 = (longlong *)*plVar12;
        if (plVar17 != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17,2);
          uVar2 = (**(code **)(*plVar7 + 0x40))(plVar7);
          pplVar9 = local_138;
          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar2);
          pcVar14 = (char *)((longlong)local_138 - (longlong)local_140 >> 2);
          if ((local_140 == (longlong **)0x0) ||
             ((char *)(local_130 - (longlong)local_140 >> 2) <= pcVar14)) {
            if (local_138 < local_140) {
              _invalid_parameter_noinfo();
            }
            pplVar11 = local_140;
            plVar7 = local_158[0];
            local_f8 = local_158[0];
            pplStack_f0 = pplVar9;
            plVar8 = plVar18;
            if (((longlong)local_138 - (longlong)local_140 & 0xfffffffffffffffcU) != 0) {
              if (local_138 < local_140) {
                _invalid_parameter_noinfo();
              }
              if ((plVar7 == (longlong *)0x0) || (plVar7 != local_158[0])) {
                _invalid_parameter_noinfo();
              }
              plVar8 = (longlong *)((longlong)pplVar9 - (longlong)pplVar11 >> 2);
            }
            local_78 = local_f8;
            pplStack_70 = pplStack_f0;
            pcVar15 = (char *)&local_res18;
            pcVar14 = (char *)0x1;
            pplVar9 = &local_78;
            FUN_140e0d600((longlong)local_158,(longlong)pplVar9,1,(undefined4 *)pcVar15);
            pplVar11 = local_140;
            if (local_138 < local_140) {
              _invalid_parameter_noinfo();
            }
            plVar7 = local_158[0];
            if (local_158[0] == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar16 = plVar18;
            }
            else {
              plVar16 = (longlong *)*local_158[0];
            }
            puVar4 = (uint *)((longlong)pplVar11 + (longlong)plVar8 * 4);
            if (puVar4 <= (uint *)plVar16[4]) {
              plVar8 = plVar18;
              if (plVar7 != (longlong *)0x0) {
                plVar8 = (longlong *)*plVar7;
              }
              if ((uint *)plVar8[3] <= puVar4) goto LAB_140e14434;
            }
            _invalid_parameter_noinfo();
          }
          else {
            *(uint *)local_138 = uVar2;
            local_138 = (longlong **)((longlong)local_138 + 4);
          }
LAB_140e14434:
          pcVar10 = (char *)CONCAT71((int7)((ulonglong)pplVar9 >> 8),1);
          (**(code **)*plVar17)(plVar17);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar17 = plVar18;
        }
        else {
          plVar17 = (longlong *)*plVar1;
        }
        if ((longlong *)plVar17[4] <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar12 = plVar12 + 1;
      }
      local_res20 = local_140;
      plVar1 = local_158[0];
      if (local_138 < local_140) {
        _invalid_parameter_noinfo();
        plVar1 = local_158[0];
      }
      while( true ) {
        pplVar11 = local_138;
        if (local_138 < local_140) {
          _invalid_parameter_noinfo();
        }
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_158[0])) {
          _invalid_parameter_noinfo();
        }
        puVar4 = local_b8;
        if (pplVar9 == pplVar11) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar12 = plVar18;
        }
        else {
          plVar12 = (longlong *)*plVar1;
        }
        if ((longlong **)plVar12[4] <= pplVar9) {
          _invalid_parameter_noinfo();
        }
        uVar2 = *(uint *)pplVar9;
        if (uVar2 == 0) {
          pcVar15 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
          pcVar14 = "idStudent != ID_NONE";
          pcVar10 = "IF_NOT";
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          puVar3 = FUN_140e04220();
          FUN_140e03c90((longlong)puVar3,uVar2);
          pcVar10 = (char *)(ulonglong)uVar2;
          local_60 = FUN_140e0fa10(param_1,uVar2,pcVar14,pcVar15);
          if (local_60 != (uint *)0x0) {
            FUN_140e19640((longlong)local_b8,(int *)local_60);
            local_res18 = operator_new(8);
            local_e8[0] = plVar18;
            if (local_res18 != (longlong *)0x0) {
              *local_res18 = (longlong)local_e8;
              local_e8[0] = local_res18;
            }
            local_d0 = (longlong **)0x0;
            local_c8 = (longlong **)0x0;
            local_c0 = 0;
            local_68 = local_res18;
            local_res18 = operator_new(8);
            local_128[0] = plVar18;
            if (local_res18 != (longlong *)0x0) {
              *local_res18 = (longlong)local_128;
              local_128[0] = local_res18;
            }
            local_110 = (longlong **)0x0;
            local_108 = (longlong **)0x0;
            local_100 = 0;
            pcVar15 = (char *)0xf;
            pcVar14 = (char *)(ulonglong)uVar2;
            pcVar10 = (char *)local_e8;
            local_68 = local_res18;
            (**(code **)(**(longlong **)(param_1 + 8) + 0x118))();
            pplVar9 = local_d0;
            if (local_c8 < local_d0) {
              _invalid_parameter_noinfo();
            }
            plVar12 = local_e8[0];
            local_f8 = local_e8[0];
            while( true ) {
              pplVar11 = local_c8;
              pplStack_f0 = pplVar9;
              if (local_c8 < local_d0) {
                _invalid_parameter_noinfo();
              }
              if ((plVar12 == (longlong *)0x0) || (plVar12 != local_e8[0])) {
                _invalid_parameter_noinfo();
              }
              pplVar13 = local_110;
              if (pplVar9 == pplVar11) break;
              if (plVar12 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar18;
              }
              else {
                plVar17 = (longlong *)*plVar12;
              }
              if ((longlong **)plVar17[4] <= pplVar9) {
                _invalid_parameter_noinfo();
              }
              plVar17 = *pplVar9;
              if (plVar17 == (longlong *)0x0) {
                pcVar15 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
                pcVar14 = "pRecord != NULL";
                pcVar10 = "IF_NOT";
                log_InlineLogERROR(&DAT_140e23698);
              }
              else {
                plVar7 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17,2);
                uVar2 = (**(code **)(*plVar7 + 0x40))(plVar7);
                pplVar11 = local_108;
                local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar2);
                pcVar14 = (char *)((longlong)local_108 - (longlong)local_110 >> 2);
                if ((local_110 == (longlong **)0x0) ||
                   ((char *)(local_100 - (longlong)local_110 >> 2) <= pcVar14)) {
                  if (local_108 < local_110) {
                    _invalid_parameter_noinfo();
                  }
                  pplVar13 = local_110;
                  plVar7 = local_128[0];
                  local_78 = local_128[0];
                  pplStack_70 = pplVar11;
                  plVar8 = plVar18;
                  if (((longlong)local_108 - (longlong)local_110 & 0xfffffffffffffffcU) != 0) {
                    if (local_108 < local_110) {
                      _invalid_parameter_noinfo();
                    }
                    if ((plVar7 == (longlong *)0x0) || (plVar7 != local_128[0])) {
                      _invalid_parameter_noinfo();
                    }
                    plVar8 = (longlong *)((longlong)pplVar11 - (longlong)pplVar13 >> 2);
                  }
                  local_58 = local_78;
                  pplStack_50 = pplStack_70;
                  pcVar15 = (char *)&local_res18;
                  pcVar14 = (char *)0x1;
                  pplVar11 = &local_58;
                  FUN_140e0d600((longlong)local_128,(longlong)pplVar11,1,(undefined4 *)pcVar15);
                  pplVar13 = local_110;
                  if (local_108 < local_110) {
                    _invalid_parameter_noinfo();
                  }
                  plVar7 = local_128[0];
                  if (local_128[0] == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    plVar16 = plVar18;
                  }
                  else {
                    plVar16 = (longlong *)*local_128[0];
                  }
                  puVar4 = (uint *)((longlong)pplVar13 + (longlong)plVar8 * 4);
                  if (puVar4 <= (uint *)plVar16[4]) {
                    plVar8 = plVar18;
                    if (plVar7 != (longlong *)0x0) {
                      plVar8 = (longlong *)*plVar7;
                    }
                    if ((uint *)plVar8[3] <= puVar4) goto LAB_140e1484a;
                  }
                  _invalid_parameter_noinfo();
                }
                else {
                  *(uint *)local_108 = uVar2;
                  local_108 = (longlong **)((longlong)local_108 + 4);
                }
LAB_140e1484a:
                pcVar10 = (char *)CONCAT71((int7)((ulonglong)pplVar11 >> 8),1);
                (**(code **)*plVar17)(plVar17);
              }
              if (plVar12 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar18;
              }
              else {
                plVar17 = (longlong *)*plVar12;
              }
              if ((longlong **)plVar17[4] <= pplVar9) {
                _invalid_parameter_noinfo();
              }
              pplVar9 = pplVar9 + 1;
            }
            puVar4 = local_60;
            plVar12 = local_128[0];
            if (local_108 < local_110) {
              _invalid_parameter_noinfo();
              puVar4 = local_60;
              plVar12 = local_128[0];
            }
            while( true ) {
              pplVar9 = local_108;
              if (local_108 < local_110) {
                _invalid_parameter_noinfo();
              }
              if ((plVar12 == (longlong *)0x0) || (plVar12 != local_128[0])) {
                _invalid_parameter_noinfo();
              }
              if (pplVar13 == pplVar9) break;
              if (plVar12 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar18;
              }
              else {
                plVar17 = (longlong *)*plVar12;
              }
              if ((longlong **)plVar17[4] <= pplVar13) {
                _invalid_parameter_noinfo();
              }
              uVar2 = *(uint *)pplVar13;
              if (uVar2 == 0) {
                pcVar15 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
                pcVar14 = "idGrandStudent != ID_NONE";
                pcVar10 = "IF_NOT";
                log_InlineLogERROR(&DAT_140e23698);
              }
              else {
                puVar3 = FUN_140e04220();
                FUN_140e03c90((longlong)puVar3,uVar2);
                pcVar10 = (char *)(ulonglong)uVar2;
                pplVar9 = (longlong **)FUN_140e0fa10(param_1,uVar2,pcVar14,pcVar15);
                if (pplVar9 != (longlong **)0x0) {
                  FUN_140e19640((longlong)puVar4,(int *)pplVar9);
                  pcVar10 = (char *)pplVar9;
                }
              }
              if (plVar12 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar18;
              }
              else {
                plVar17 = (longlong *)*plVar12;
              }
              if ((longlong **)plVar17[4] <= pplVar13) {
                _invalid_parameter_noinfo();
              }
              pplVar13 = (longlong **)((longlong)pplVar13 + 4);
            }
            if (local_110 != (longlong **)0x0) {
              operator_delete(local_110);
            }
            local_110 = (longlong **)0x0;
            local_108 = (longlong **)0x0;
            local_100 = 0;
            operator_delete(local_128[0]);
            if (local_d0 != (longlong **)0x0) {
              operator_delete(local_d0);
            }
            local_d0 = (longlong **)0x0;
            local_c8 = (longlong **)0x0;
            local_c0 = 0;
            operator_delete(local_e8[0]);
            pplVar9 = local_res20;
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar12 = plVar18;
        }
        else {
          plVar12 = (longlong *)*plVar1;
        }
        if ((longlong **)plVar12[4] <= pplVar9) {
          _invalid_parameter_noinfo();
        }
        pplVar9 = (longlong **)((longlong)pplVar9 + 4);
        local_res20 = pplVar9;
      }
      uVar5 = FUN_140e18210((longlong)local_b8);
      if ((char)uVar5 != '\0') {
        FUN_140e18b50(puVar4,pcVar10,pcVar14,pcVar15);
        FUN_140e0c580((longlong *)(param_1 + 0xa8),local_res10);
      }
      if (local_140 != (longlong **)0x0) {
        operator_delete(local_140);
      }
      local_140 = (longlong **)0x0;
      local_138 = (longlong **)0x0;
      local_130 = 0;
      operator_delete(local_158[0]);
      if (local_98 != (longlong *)0x0) {
        operator_delete(local_98);
      }
      local_98 = (longlong *)0x0;
      local_90 = (longlong *)0x0;
      local_88 = 0;
      operator_delete(local_b0[0]);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e14b40 @ 140e14b40
// ============================================================

void FUN_140e14b40(longlong param_1,undefined8 param_2,ulonglong param_3,longlong **param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  longlong *local_78;
  uint *puStack_70;
  longlong *local_68 [3];
  uint *local_50;
  uint *local_48;
  longlong local_40;
  
  bVar6 = tq::CTimer::ToNextTime((CTimer *)(param_1 + 0x1a8));
  if (bVar6) {
    uVar7 = tq::TimeGet(0);
    local_res10 = *(undefined8 *)(param_1 + 0xe0);
    local_res8 = operator_new(8);
    if (local_res8 == (longlong *)0x0) {
      local_68[0] = (longlong *)0x0;
    }
    else {
      *local_res8 = (longlong)local_68;
      local_68[0] = local_res8;
    }
    local_50 = (uint *)0x0;
    local_48 = (uint *)0x0;
    local_40 = 0;
    plVar16 = (longlong *)**(undefined8 **)(param_1 + 0xd8);
    plVar3 = *(longlong **)(param_1 + 0xa8);
    local_res18 = local_res8;
    while( true ) {
      plVar4 = *(longlong **)(param_1 + 0xd8);
      if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 0xa8))) {
        _invalid_parameter_noinfo();
      }
      puVar15 = local_50;
      if (plVar16 == plVar4) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar3;
      }
      if (plVar16 == *(longlong **)(lVar14 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar15 = (uint *)plVar16[4];
      if ((puVar15 != (uint *)0x0) &&
         (uVar9 = FUN_140e0bd30(param_1,(longlong)puVar15), (char)uVar9 == '\0')) {
        uVar2 = *puVar15;
        puVar10 = FUN_140e04220();
        uVar9 = FUN_140e03b60((longlong)puVar10,uVar2);
        puVar12 = local_48;
        if ((char)uVar9 == '\0') {
          uVar2 = *puVar15;
          param_3 = (ulonglong)uVar2;
          local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar2);
          if (local_50 == (uint *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = local_40 - (longlong)local_50 >> 2;
          }
          if ((ulonglong)((longlong)local_48 - (longlong)local_50 >> 2) < uVar13) {
            *local_48 = uVar2;
            local_48 = local_48 + 1;
          }
          else {
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            puVar15 = local_50;
            plVar4 = local_68[0];
            if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) == 0) {
              lVar14 = 0;
            }
            else {
              if (local_48 < local_50) {
                _invalid_parameter_noinfo();
              }
              if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68[0])) {
                _invalid_parameter_noinfo();
              }
              lVar14 = (longlong)puVar12 - (longlong)puVar15 >> 2;
            }
            local_78 = plVar4;
            puStack_70 = puVar12;
            param_4 = &local_res8;
            param_3 = 1;
            FUN_140e0d600((longlong)local_68,(longlong)&local_78,1,(undefined4 *)param_4);
            puVar15 = local_50;
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            plVar4 = local_68[0];
            if (local_68[0] == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *local_68[0];
            }
            if (puVar15 + lVar14 <= *(uint **)(lVar11 + 0x20)) {
              if (plVar4 == (longlong *)0x0) {
                lVar11 = 0;
              }
              else {
                lVar11 = *plVar4;
              }
              if (*(uint **)(lVar11 + 0x18) <= puVar15 + lVar14) goto LAB_140e14dc2;
            }
            _invalid_parameter_noinfo();
          }
        }
        else {
          log_InlineLogWARNING("CGuideMgr::OnTimer1. User[%u] is loading!",(ulonglong)*puVar15);
        }
      }
LAB_140e14dc2:
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar16 + 0x29) == '\0') {
        plVar4 = (longlong *)plVar16[2];
        if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar16 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x29);
            plVar16 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar16[1] + 0x29);
          plVar5 = (longlong *)plVar16[1];
          plVar4 = plVar16;
          while ((plVar16 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar16[2]))) {
            cVar1 = *(char *)(plVar16[1] + 0x29);
            plVar5 = (longlong *)plVar16[1];
            plVar4 = plVar16;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    plVar16 = local_68[0];
    if (local_48 < local_50) {
      _invalid_parameter_noinfo();
      plVar16 = local_68[0];
    }
    while( true ) {
      puVar12 = local_48;
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
      }
      if ((plVar16 == (longlong *)0x0) || (plVar16 != local_68[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar15 == puVar12) break;
      if (plVar16 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar16;
      }
      if (*(uint **)(lVar14 + 0x20) <= puVar15) {
        _invalid_parameter_noinfo();
      }
      puVar12 = (uint *)FUN_140e0bc80(param_1,*puVar15);
      if (puVar12 != (uint *)0x0) {
        uVar2 = *puVar12;
        puVar10 = FUN_140e04220();
        uVar13 = (ulonglong)uVar2;
        uVar9 = FUN_140e03b60((longlong)puVar10,uVar2);
        if ((char)uVar9 == '\0') {
          FUN_140e17ac0((longlong)puVar12);
          FUN_140e18b50(puVar12,uVar13,param_3,param_4);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = 0;
          }
          else {
            lVar14 = *plVar16;
          }
          if (*(uint **)(lVar14 + 0x20) <= puVar15) {
            _invalid_parameter_noinfo();
          }
          FUN_140e0c580((longlong *)(param_1 + 0xa8),puVar15);
        }
        else {
          log_InlineLogWARNING("CGuideMgr::OnTimer2. User[%u] is loading!",(ulonglong)*puVar12);
        }
      }
      if (plVar16 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar16;
      }
      if (*(uint **)(lVar14 + 0x20) <= puVar15) {
        _invalid_parameter_noinfo();
      }
      puVar15 = puVar15 + 1;
    }
    uVar9 = *(undefined8 *)(param_1 + 0xe0);
    puVar10 = FUN_140e04220();
    uVar13 = FUN_140e01b70((longlong)puVar10);
    uVar8 = tq::TimeGet(0);
    log_InlineLogMessage
              ("CGuideMgr::OnTimer OldSize=%d, NewSize=%d, time=%u AsynSet[%d]",local_res10,uVar9,
               (ulonglong)(uVar8 - uVar7),(int)uVar13);
    if (local_50 != (uint *)0x0) {
      operator_delete(local_50);
    }
    local_50 = (uint *)0x0;
    local_48 = (uint *)0x0;
    local_40 = 0;
    operator_delete(local_68[0]);
  }
  return;
}



// ============================================================
// Function: FUN_140e14ff0 @ 140e14ff0
// ============================================================

void FUN_140e14ff0(longlong *param_1,undefined8 *param_2)

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
    FUN_140e08250(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140e12c70(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_140e150c0 @ 140e150c0
// ============================================================

ulonglong FUN_140e150c0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  ulonglong extraout_RAX;
  char *pcVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    uVar5 = 99;
    pcVar4 = "pConsumer != NULL";
  }
  else if (param_3 == 0) {
    uVar5 = 0x66;
    pcVar4 = "pRoot != NULL";
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_3;
    tq::CTimer::Startup((CTimer *)(param_1 + 0x1a8),0x708);
    uVar2 = FUN_140e13f70(param_1,(longlong)PTR_s_SELECT___FROM_cq_tutor_battle_li_140e33438,
                          (longlong *)(param_1 + 0x78));
    if ((char)uVar2 == '\0') {
      uVar5 = 0x6e;
      pcVar4 = 
      "this->LoadConfigData(SQL_SELECT_TUTOR_BATTLE_LIMIT_TYPE, m_vecTutorBattleLimitType, TABLETYPE_BATTLE_LIMIT_TYPE)"
      ;
    }
    else {
      uVar2 = FUN_140e13f70(param_1,(longlong)PTR_s_SELECT___FROM_cq_tutor_type_ORDE_140e33440,
                            (longlong *)(param_1 + 0x18));
      if ((char)uVar2 == '\0') {
        uVar5 = 0x72;
        pcVar4 = "this->LoadConfigData(SQL_SELECT_TUTOR_TYPE, m_vecTutorType, TABLETYPE_TUTOR_TYPE)"
        ;
      }
      else {
        uVar2 = FUN_140e13f70(param_1,(longlong)PTR_s_SELECT___FROM_cq_student_type_140e33448,
                              (longlong *)(param_1 + 0x48));
        if ((char)uVar2 == '\0') {
          uVar5 = 0x76;
          pcVar4 = 
          "this->LoadConfigData(SQL_SELECT_STUDENT_TYPE, m_vecStudentType, TABLETYPE_STUDENT_TYPE)";
        }
        else {
          puVar3 = FUN_140e04220();
          if (puVar3 != (undefined8 *)0x0) {
            puVar3 = FUN_140e04220();
            cVar1 = FUN_140e01580((longlong)puVar3,*(longlong *)(param_1 + 8));
            if (cVar1 != '\0') {
              return CONCAT71(extraout_var,1);
            }
          }
          uVar5 = 0x79;
          pcVar4 = 
          "CAsynGuideMgr::GetInstance() && CAsynGuideMgr::GetInstance()->Create(m_pConsumer)";
        }
      }
    }
  }
  log_InlineLogERROR(&DAT_140e23698,"IF_NOT",pcVar4,
                     "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp",uVar5);
  return extraout_RAX & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e15200 @ 140e15200
// ============================================================

void FUN_140e15200(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  __time32_t _Var6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint local_928;
  uint local_924;
  longlong local_920;
  ulonglong *local_918 [3];
  undefined4 *local_900;
  undefined4 *local_8f8;
  undefined8 local_8f0;
  ulonglong *local_8e8;
  uint *local_8e0;
  ulonglong *local_8d8;
  uint *local_8d0;
  ulonglong *local_8c8;
  uint *local_8c0;
  undefined8 local_8b8;
  ulonglong *local_8b0;
  CMsg local_898 [1072];
  CMsg local_468 [1072];
  
  local_8b8 = 0xfffffffffffffffe;
  FUN_140e140b0((longlong)param_1,param_2,param_3,param_4);
  lVar7 = FUN_140e0bc80((longlong)param_1,param_2);
  if (lVar7 != 0) {
    local_920 = lVar7;
    local_918[0] = operator_new(8);
    if (local_918[0] == (ulonglong *)0x0) {
      local_918[0] = (ulonglong *)0x0;
    }
    else {
      *local_918[0] = (ulonglong)local_918;
    }
    uVar12 = 0;
    local_900 = (undefined4 *)0x0;
    local_8f8 = (undefined4 *)0x0;
    local_8f0 = 0;
    FUN_140e0b740(lVar7,&local_8d8);
    local_8e8 = local_8d8;
    local_8e0 = local_8d0;
    local_928 = 0;
    uVar9 = uVar12;
    puVar14 = local_8d0;
    while( true ) {
      if ((local_8d8 == (ulonglong *)0x0) || (uVar3 = (uint)uVar9, local_8d8 != local_8c8)) {
        _invalid_parameter_noinfo();
        uVar3 = local_928;
      }
      if (puVar14 == local_8c0) goto LAB_140e15562;
      local_928 = uVar3 + 1;
      if (10000 < local_928) break;
      if (local_8d8 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *local_8d8;
      }
      if (*(uint **)(uVar9 + 0x20) <= puVar14) {
        _invalid_parameter_noinfo();
      }
      puVar8 = (uint *)FUN_140e0bc80((longlong)param_1,*puVar14);
      if (puVar8 == (uint *)0x0) {
        if (local_8d8 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar12;
        }
        else {
          uVar9 = *local_8d8;
        }
        if (*(uint **)(uVar9 + 0x20) <= puVar14) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CGuideMgr::OnUserLogin, student not found, student_id=%u tutor_id=%u");
      }
      else {
        uVar3 = *puVar8;
        local_924 = uVar3;
        uVar10 = FUN_140e17600((longlong)puVar8);
        iVar4 = FUN_140e17630((longlong)puVar8);
        if (0 < (int)uVar10) {
          _Var6 = _time32((__time32_t *)0x0);
          if (iVar4 < 1) {
            FUN_140e19a50(local_468);
            pcVar11 = (char *)FUN_140e17940((longlong)puVar8);
            uVar9 = FUN_140e19b10(local_468,'\x10',param_2,uVar3,0,pcVar11);
            if ((char)uVar9 == '\0') {
              log_InlineLogERROR(&DAT_140e23698);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0xd0))
                        ((longlong *)param_1[1],param_2,local_468);
            }
            FUN_140e12990((longlong *)local_918,&local_924);
            FUN_140e19ad0((undefined8 *)local_468);
          }
          else {
            FUN_140e19a50(local_898);
            pcVar11 = (char *)FUN_140e17940((longlong)puVar8);
            uVar9 = FUN_140e19b10(local_898,'\x11',param_2,uVar3,_Var6 / 0xe10 - (int)uVar10,pcVar11
                                 );
            if ((char)uVar9 == '\0') {
              log_InlineLogERROR(&DAT_140e23698);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0xd0))
                        ((longlong *)param_1[1],param_2,local_898);
            }
            FUN_140e19ad0((undefined8 *)local_898);
          }
        }
      }
      if (local_8d8 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *local_8d8;
      }
      if (*(uint **)(uVar9 + 0x20) <= puVar14) {
        _invalid_parameter_noinfo();
      }
      puVar14 = puVar14 + 1;
      uVar9 = (ulonglong)local_928;
    }
    log_InlineLogERROR(&DAT_140e23698);
LAB_140e15562:
    puVar13 = local_900;
    local_8b0 = (ulonglong *)0x0;
    if (local_8f8 < local_900) {
      _invalid_parameter_noinfo();
    }
    puVar1 = local_918[0];
    local_8b0 = local_918[0];
    while( true ) {
      puVar2 = local_8f8;
      local_8d8 = (ulonglong *)0x0;
      if (local_8f8 < local_900) {
        _invalid_parameter_noinfo();
      }
      local_8d8 = local_918[0];
      if ((puVar1 == (ulonglong *)0x0) || (puVar1 != local_918[0])) {
        _invalid_parameter_noinfo();
      }
      lVar7 = local_920;
      if (puVar13 == puVar2) break;
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *puVar1;
      }
      if (*(undefined4 **)(uVar9 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(*param_1 + 0x80))(param_1,param_2,*puVar13,0,5);
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *puVar1;
      }
      if (*(undefined4 **)(uVar9 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar13 = puVar13 + 1;
    }
    uVar9 = FUN_140e17740(local_920,0);
    iVar4 = (int)uVar9;
    if (iVar4 != 0) {
      uVar10 = FUN_140e17600(lVar7);
      iVar5 = FUN_140e17630(lVar7);
      if (0 < (int)uVar10) {
        _Var6 = _time32((__time32_t *)0x0);
        if (iVar5 < 1) {
          FUN_140e19a50(local_898);
          pcVar11 = (char *)FUN_140e17940(local_920);
          uVar12 = FUN_140e19b10(local_898,'\x10',iVar4,param_2,0,pcVar11);
          if ((char)uVar12 == '\0') {
            log_InlineLogERROR(&DAT_140e23698);
          }
          else {
            (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_898);
          }
          (**(code **)(*param_1 + 0x80))(param_1,uVar9 & 0xffffffff,param_2,0,6);
          FUN_140e19ad0((undefined8 *)local_898);
        }
        else {
          FUN_140e19a50(local_898);
          pcVar11 = (char *)FUN_140e17940(local_920);
          uVar9 = FUN_140e19b10(local_898,'\x11',iVar4,param_2,_Var6 / 0xe10 - (int)uVar10,pcVar11);
          if ((char)uVar9 == '\0') {
            log_InlineLogERROR(&DAT_140e23698);
          }
          else {
            (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,local_898);
          }
          FUN_140e19ad0((undefined8 *)local_898);
        }
      }
    }
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,1);
    (**(code **)(*param_1 + 0xb0))(param_1,param_2,2,1);
    if (local_900 != (undefined4 *)0x0) {
      operator_delete(local_900);
    }
    local_900 = (undefined4 *)0x0;
    local_8f8 = (undefined4 *)0x0;
    local_8f0 = 0;
    operator_delete(local_918[0]);
  }
  return;
}



// ============================================================
// Function: FUN_140e15860 @ 140e15860
// ============================================================

void FUN_140e15860(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong *local_res18;
  ulonglong *local_res20;
  ulonglong *local_78;
  undefined8 *puStack_70;
  ulonglong *local_68 [3];
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  if (param_2 != 0) {
    local_res18 = operator_new(8);
    local_68[0] = (ulonglong *)0x0;
    if (local_res18 != (ulonglong *)0x0) {
      *local_res18 = (ulonglong)local_68;
      local_68[0] = local_res18;
    }
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x118);
    puVar2 = *(ulonglong **)(param_1 + 0xe8);
    local_res20 = local_res18;
    while( true ) {
      uVar7 = 0;
      plVar3 = *(longlong **)(param_1 + 0x118);
      if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 0xe8))) {
        _invalid_parameter_noinfo();
      }
      puVar9 = local_50;
      if (plVar10 == plVar3) break;
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar11 = uVar7;
      }
      else {
        uVar11 = *puVar2;
      }
      if (plVar10 == *(longlong **)(uVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (param_2 == (int)plVar10[3]) {
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar11 = uVar7;
        }
        else {
          uVar11 = *puVar2;
        }
        if (plVar10 == *(longlong **)(uVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar11 = uVar7;
        }
        else {
          uVar11 = *puVar2;
        }
        if (plVar10 == *(longlong **)(uVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar9 = local_48;
        local_res18 = (ulonglong *)plVar10[3];
        if (local_50 != (undefined8 *)0x0) {
          uVar7 = local_40 - (longlong)local_50 >> 3;
        }
        if ((ulonglong)((longlong)local_48 - (longlong)local_50 >> 3) < uVar7) {
          FUN_140e08250(local_48,1,&local_res18);
          local_48 = puVar9 + 1;
        }
        else {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          puVar5 = local_50;
          puVar4 = local_68[0];
          if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffff8U) == 0) {
            lVar8 = 0;
          }
          else {
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            if ((puVar4 == (ulonglong *)0x0) || (puVar4 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            lVar8 = (longlong)puVar9 - (longlong)puVar5 >> 3;
          }
          local_78 = puVar4;
          puStack_70 = puVar9;
          FUN_140e10130((longlong)local_68,(longlong)&local_78,1,&local_res18);
          puVar9 = local_50;
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          puVar4 = local_68[0];
          if (local_68[0] == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar7 = 0;
          }
          else {
            uVar7 = *local_68[0];
          }
          if (puVar9 + lVar8 <= *(undefined8 **)(uVar7 + 0x20)) {
            if (puVar4 == (ulonglong *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *puVar4;
            }
            if (*(undefined8 **)(uVar7 + 0x18) <= puVar9 + lVar8) goto LAB_140e15aea;
          }
          _invalid_parameter_noinfo();
        }
      }
LAB_140e15aea:
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar10[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar10 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar10 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar10[1] + 0x29);
          plVar6 = (longlong *)plVar10[1];
          plVar3 = plVar10;
          while ((plVar10 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
            cVar1 = *(char *)(plVar10[1] + 0x29);
            plVar6 = (longlong *)plVar10[1];
            plVar3 = plVar10;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    if (local_48 < local_50) {
      _invalid_parameter_noinfo();
    }
    puVar5 = local_48;
    puVar4 = local_68[0];
    puVar2 = local_68[0];
    if (local_48 < local_50) {
      _invalid_parameter_noinfo();
      puVar2 = local_68[0];
    }
    while( true ) {
      if ((puVar4 == (ulonglong *)0x0) || (puVar4 != puVar2)) {
        _invalid_parameter_noinfo();
      }
      if (puVar9 == puVar5) break;
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar11 = uVar7;
      }
      else {
        uVar11 = *puVar4;
      }
      if (*(undefined8 **)(uVar11 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      FUN_140e0f960(param_1,*puVar9);
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar11 = uVar7;
      }
      else {
        uVar11 = *puVar4;
      }
      if (*(undefined8 **)(uVar11 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      puVar9 = puVar9 + 1;
    }
    if (local_50 != (undefined8 *)0x0) {
      operator_delete(local_50);
    }
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    operator_delete(local_68[0]);
  }
  return;
}



// ============================================================
// Function: FUN_140e15c40 @ 140e15c40
// ============================================================

void FUN_140e15c40(longlong param_1,uint param_2,char *param_3,char *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint local_res10 [2];
  uint *local_res18;
  uint *local_res20;
  uint local_4d8;
  uint local_4d4;
  longlong *local_4b0;
  uint *local_4a8;
  longlong *local_4a0;
  uint *local_498;
  longlong *local_490;
  uint *local_488;
  longlong *local_480;
  uint *local_478;
  undefined8 local_470;
  CMsg local_468 [1072];
  
  local_470 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  puVar6 = (uint *)FUN_140e0bc80(param_1,param_2);
  if (puVar6 != (uint *)0x0) {
    local_res20 = puVar6;
    uVar7 = FUN_140e17740((longlong)puVar6,0);
    uVar5 = (uint)uVar7;
    if (uVar5 != 0) {
      param_3 = (char *)**(longlong **)(param_1 + 8);
      cVar4 = (**(code **)(param_3 + 0xb8))(*(longlong **)(param_1 + 8),uVar7 & 0xffffffff);
      if (cVar4 != '\0') {
        FUN_140e19a50(local_468);
        pcVar8 = (char *)FUN_140e17940((longlong)puVar6);
        param_4 = (char *)(ulonglong)param_2;
        uVar9 = FUN_140e19b10(local_468,'\x15',uVar5,param_2,1,pcVar8);
        if ((char)uVar9 == '\0') {
          param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
          param_3 = 
          "msg.Create(MSG_GUIDE_DEL_SUCCESS, idTutor, idActor, ACTOR_STUDENT, pActor->GetName())";
          log_InlineLogERROR(&DAT_140e23698);
        }
        else {
          param_3 = (char *)local_468;
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                    (*(longlong **)(param_1 + 8),uVar7 & 0xffffffff);
        }
        FUN_140e19ad0((undefined8 *)local_468);
      }
      lVar10 = FUN_140e0bc80(param_1,uVar5);
      if (lVar10 != 0) {
        uVar7 = FUN_140e17740(lVar10,2);
        if ((int)uVar7 != 0) {
          param_3 = (char *)**(longlong **)(param_1 + 8);
          cVar4 = (**(code **)(param_3 + 0xb8))(*(longlong **)(param_1 + 8),uVar7 & 0xffffffff);
          if (cVar4 != '\0') {
            FUN_140e19a50(local_468);
            pcVar8 = (char *)FUN_140e17940((longlong)puVar6);
            param_4 = (char *)(ulonglong)param_2;
            uVar9 = FUN_140e19b10(local_468,'\x15',uVar5,param_2,2,pcVar8);
            if ((char)uVar9 == '\0') {
              param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
              param_3 = 
              "msg.Create(MSG_GUIDE_DEL_SUCCESS, idTutor, idActor, ACTOR_STUDENT_G2, pActor->GetName())"
              ;
              log_InlineLogERROR(&DAT_140e23698);
            }
            else {
              param_3 = (char *)local_468;
              (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                        (*(longlong **)(param_1 + 8),uVar7 & 0xffffffff);
            }
            FUN_140e19ad0((undefined8 *)local_468);
          }
        }
        FUN_140e18d90(lVar10,param_2);
      }
    }
    FUN_140e0b740((longlong)puVar6,&local_4b0);
    local_4d8 = 0;
    puVar13 = local_4a8;
    while( true ) {
      local_res18 = puVar13;
      if ((local_4b0 == (longlong *)0x0) || (local_4b0 != local_4a0)) {
        _invalid_parameter_noinfo();
      }
      if (puVar13 == local_498) goto LAB_140e16101;
      local_4d8 = local_4d8 + 1;
      if (10000 < local_4d8) break;
      if (local_4b0 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *local_4b0;
      }
      if (*(uint **)(lVar10 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      piVar11 = (int *)FUN_140e0bc80(param_1,*puVar13);
      if (piVar11 != (int *)0x0) {
        iVar1 = *piVar11;
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                          (*(longlong **)(param_1 + 8),iVar1);
        if (cVar4 != '\0') {
          FUN_140e19a50(local_468);
          pcVar8 = (char *)FUN_140e17940((longlong)puVar6);
          param_4 = (char *)(ulonglong)param_2;
          uVar7 = FUN_140e19b10(local_468,'\x15',iVar1,param_2,0,pcVar8);
          if ((char)uVar7 == '\0') {
            param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
            param_3 = 
            "msg.Create(MSG_GUIDE_DEL_SUCCESS, idStudent, idActor, ACTOR_TUTOR, pActor->GetName())";
            log_InlineLogERROR(&DAT_140e23698);
          }
          else {
            param_3 = (char *)local_468;
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),iVar1);
          }
          uVar12 = FUN_140e17600((longlong)piVar11);
          if ((int)uVar12 < 1) {
            param_4 = (char *)0x0;
            param_3 = (char *)0x0;
            FUN_140e04620(param_1,iVar1,0,0);
          }
          FUN_140e19ad0((undefined8 *)local_468);
        }
        FUN_140e0b740((longlong)piVar11,&local_490);
        puVar6 = local_478;
        plVar3 = local_480;
        plVar2 = local_490;
        local_4d4 = 0;
        puVar13 = local_488;
        while( true ) {
          if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
            _invalid_parameter_noinfo();
          }
          if (puVar13 == puVar6) goto LAB_140e160a8;
          local_4d4 = local_4d4 + 1;
          if (10000 < local_4d4) break;
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar2;
          }
          if (*(uint **)(lVar10 + 0x20) <= puVar13) {
            _invalid_parameter_noinfo();
          }
          lVar10 = FUN_140e0bc80(param_1,*puVar13);
          if (lVar10 != 0) {
            FUN_140e175c0(lVar10);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar2;
          }
          if (*(uint **)(lVar10 + 0x20) <= puVar13) {
            _invalid_parameter_noinfo();
          }
          puVar13 = puVar13 + 1;
        }
        param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
        param_3 = "unLoopCount2";
        log_InlineLogERROR(&DAT_140e23698);
LAB_140e160a8:
        FUN_140e17850((longlong)piVar11);
        puVar13 = local_res18;
        puVar6 = local_res20;
        param_2 = local_res10[0];
      }
      if (local_4b0 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *local_4b0;
      }
      if (*(uint **)(lVar10 + 0x20) <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar13 = puVar13 + 1;
    }
    param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\guidemgr.cpp";
    param_3 = "unLoopCount";
    log_InlineLogERROR(&DAT_140e23698);
LAB_140e16101:
    FUN_140e18ea0((longlong)puVar6);
    uVar7 = (ulonglong)param_2;
    FUN_140e15860(param_1,param_2);
    FUN_140e17850((longlong)puVar6);
    FUN_140e18b50(puVar6,uVar7,param_3,param_4);
    FUN_140e0c580((longlong *)(param_1 + 0xa8),local_res10);
  }
  return;
}



// ============================================================
// Function: FUN_140e16150 @ 140e16150
// ============================================================

void FUN_140e16150(longlong param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong *local_480;
  uint *local_478;
  longlong *local_470;
  uint *local_468;
  undefined8 local_460;
  CMsg local_458 [1072];
  
  local_460 = 0xfffffffffffffffe;
  lVar3 = FUN_140e0bc80(param_1,param_2);
  if (lVar3 != 0) {
    FUN_140e0b740(lVar3,&local_480);
    uVar13 = 0;
    puVar11 = local_478;
    while( true ) {
      lVar10 = 0;
      if ((local_480 == (longlong *)0x0) || (local_480 != local_470)) {
        _invalid_parameter_noinfo();
      }
      if (puVar11 == local_468) goto LAB_140e16417;
      uVar13 = uVar13 + 1;
      if (10000 < uVar13) break;
      if (local_480 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = lVar10;
      }
      else {
        lVar12 = *local_480;
      }
      if (*(uint **)(lVar12 + 0x20) <= puVar11) {
        _invalid_parameter_noinfo();
      }
      piVar4 = (int *)FUN_140e0bc80(param_1,*puVar11);
      if (piVar4 == (int *)0x0) {
        if (local_480 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar10 = *local_480;
        }
        if (*(uint **)(lVar10 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CGuideMgr::OnUserLogout, student not found, student_id=%u tutor_id=%u");
      }
      else {
        iVar1 = *piVar4;
        uVar5 = FUN_140e17600((longlong)piVar4);
        if (((int)uVar5 < 1) &&
           (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                              (*(longlong **)(param_1 + 8),iVar1), cVar2 != '\0')) {
          FUN_140e19e60(local_458);
          pcVar7 = (char *)FUN_140e17940((longlong)piVar4);
          pcVar8 = (char *)FUN_140e17930((longlong)piVar4);
          uVar6 = FUN_140e19f20(local_458,'\x16',param_2,iVar1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                                pcVar8,pcVar7,(char *)0x0);
          if ((char)uVar6 == '\0') {
            log_InlineLogERROR(&DAT_140e23698);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),iVar1);
          }
          FUN_140e04620(param_1,iVar1,0,0);
          FUN_140e19ee0((undefined8 *)local_458);
        }
      }
      lVar10 = 0;
      if (local_480 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar10 = *local_480;
      }
      if (*(uint **)(lVar10 + 0x20) <= puVar11) {
        _invalid_parameter_noinfo();
      }
      puVar11 = puVar11 + 1;
    }
    log_InlineLogERROR(&DAT_140e23698);
LAB_140e16417:
    uVar6 = FUN_140e17740(lVar3,2);
    if (((int)uVar6 != 0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                          (*(longlong **)(param_1 + 8),uVar6 & 0xffffffff), cVar2 != '\0')) {
      FUN_140e19e60(local_458);
      pcVar7 = (char *)FUN_140e17940(lVar3);
      pcVar8 = (char *)FUN_140e17930(lVar3);
      uVar9 = FUN_140e19f20(local_458,'\x17',(int)uVar6,param_2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            pcVar8,pcVar7,(char *)0x0);
      if ((char)uVar9 == '\0') {
        log_InlineLogERROR(&DAT_140e23698);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))
                  (*(longlong **)(param_1 + 8),uVar6 & 0xffffffff,local_458);
      }
      FUN_140e19ee0((undefined8 *)local_458);
    }
    FUN_140e15860(param_1,param_2);
    FUN_140e17ac0(lVar3);
  }
  return;
}



// ============================================================
// Function: FUN_140e16580 @ 140e16580
// ============================================================

void FUN_140e16580(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_140e16590 @ 140e16590
// ============================================================

undefined8 FUN_140e16590(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140e165a0 @ 140e165a0
// ============================================================

undefined8 FUN_140e165a0(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140e165b0 @ 140e165b0
// ============================================================

undefined8 FUN_140e165b0(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140e165c0 @ 140e165c0
// ============================================================

undefined8 FUN_140e165c0(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140e165d0 @ 140e165d0
// ============================================================

undefined8 * FUN_140e165d0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e16630 @ 140e16630
// ============================================================

void FUN_140e16630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = guide::CModule::vftable;
  plVar1 = (longlong *)param_1[0x109];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_140e197a0(param_1 + 0x212);
  FUN_140e19ee0(param_1 + 0x18d);
  FUN_140e1a470(param_1 + 0x10a);
  FUN_140e1a2d0(param_1 + 0x87);
  FUN_140e19ad0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_140e166c0 @ 140e166c0
// ============================================================

ulonglong FUN_140e166c0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}



// ============================================================
// Function: FUN_140e166e0 @ 140e166e0
// ============================================================

ulonglong FUN_140e166e0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    uVar3 = extraout_RAX;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0xc60) + 0x30))
                      (*(longlong **)(param_1 + 0xc60),0x10);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_140e150c0(lVar1,lVar2,*(longlong *)(param_1 + 0xc60));
      return uVar3;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e16770 @ 140e16770
// ============================================================

longlong * FUN_140e16770(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 == 0x3ea) {
      plVar3 = (longlong *)(param_1 + 0x438);
    }
    else if (uVar1 == 0x3eb) {
      plVar3 = (longlong *)(param_1 + 0x850);
    }
    else if (uVar1 == 0x811) {
      plVar3 = (longlong *)(param_1 + 0x10);
    }
    else if (uVar1 == 0x812) {
      plVar3 = (longlong *)(param_1 + 0xc68);
    }
    else {
      if (uVar1 != 0x813) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x1090);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e16800 @ 140e16800
// ============================================================

void FUN_140e16800(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1680a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x848))();
  return;
}



// ============================================================
// Function: FUN_140e16810 @ 140e16810
// ============================================================

bool FUN_140e16810(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_140e12f00();
  *(undefined8 **)(param_1 + 0x848) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0xc60) + 8))(*(longlong **)(param_1 + 0xc60),0x811,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xc60) + 8))(*(longlong **)(param_1 + 0xc60),0x812,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xc60) + 8))(*(longlong **)(param_1 + 0xc60),0x813,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xc60) + 8))(*(longlong **)(param_1 + 0xc60),0x3ea,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xc60) + 8))(*(longlong **)(param_1 + 0xc60),0x3eb,param_1)
  ;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc60) + 0x18))
                    (*(longlong **)(param_1 + 0xc60),0x10,*(undefined8 *)(param_1 + 0x848));
  return cVar1 != '\0';
}



// ============================================================
// Function: FUN_140e168c0 @ 140e168c0
// ============================================================

undefined8 FUN_140e168c0(void)

{
  return 1;
}



// ============================================================
// Function: FUN_140e168d0 @ 140e168d0
// ============================================================

undefined8 * FUN_140e168d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = guide::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_140e19a50((CMsg *)(param_1 + 2));
  FUN_140e1a280((CMsg *)(param_1 + 0x87));
  param_1[0x109] = 0;
  FUN_140e1a420((CMsg *)(param_1 + 0x10a));
  param_1[0x18c] = param_2;
  FUN_140e19e60((CMsg *)(param_1 + 0x18d));
  FUN_140e19720((CMsg *)(param_1 + 0x212));
  return param_1;
}



// ============================================================
// Function: FUN_140e16970 @ 140e16970
// ============================================================

undefined8 *
FUN_140e16970(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e16630(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e169a0 @ 140e169a0
// ============================================================

undefined2 FUN_140e169a0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_140e16770(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x848));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}



// ============================================================
// Function: ModuleCreate @ 140e16a10
// ============================================================

longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x16a10  1  ModuleCreate */
  puVar2 = operator_new(0x14b8);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_140e168d0(puVar2,param_1,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    bVar1 = FUN_140e16810((longlong)plVar3);
    if (bVar1) {
      return plVar3;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140e16a80 @ 140e16a80
// ============================================================

undefined8 * FUN_140e16a80(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 3));
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// ============================================================
// Function: FUN_140e16ac0 @ 140e16ac0
// ============================================================

void FUN_140e16ac0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e16ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}



// ============================================================
// Function: FUN_140e16af0 @ 140e16af0
// ============================================================

void * FUN_140e16af0(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)param_1 + 0x18));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e16b40 @ 140e16b40
// ============================================================

void FUN_140e16b40(longlong *param_1,longlong param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}



// ============================================================
// Function: FUN_140e16b50 @ 140e16b50
// ============================================================

void FUN_140e16b50(longlong param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}



// ============================================================
// Function: FUN_140e16b60 @ 140e16b60
// ============================================================

void FUN_140e16b60(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  return;
}



// ============================================================
// Function: FUN_140e16b70 @ 140e16b70
// ============================================================

undefined8 FUN_140e16b70(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// Function: FUN_140e16b80 @ 140e16b80
// ============================================================

undefined2 FUN_140e16b80(longlong param_1)

{
  return *(undefined2 *)(param_1 + 8);
}



// ============================================================
// Function: FUN_140e16b90 @ 140e16b90
// ============================================================

undefined2 FUN_140e16b90(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



// ============================================================
// Function: FUN_140e16ba0 @ 140e16ba0
// ============================================================

void FUN_140e16ba0(longlong param_1,int param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (((param_2 == 0) || (param_2 == 1)) && (param_3 != (char *)0x0)) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      *(int *)(param_1 + 0x10) = param_2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18)
                 ,param_3);
      *(undefined1 *)(param_1 + 0x40) = 0;
      return;
    }
    if ((*(int *)(param_1 + 0x10) == param_2) &&
       (bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (param_1 + 0x18),param_3), bVar1)) {
      return;
    }
    uVar4 = 0x42;
    pcVar3 = "m_eGeneration==eGeneration && m_strUserName==pszName";
    pcVar2 = "IF_OK";
  }
  else {
    uVar4 = 0x38;
    pcVar3 = 
    "(eGeneration==CONTRIBUTETYPE_GENERATION1 || eGeneration==CONTRIBUTETYPE_GENERATION2) && pszName!=NULL"
    ;
    pcVar2 = "IF_NOT";
  }
  log_InlineLogERROR(&DAT_140e23698,pcVar2,pcVar3,
                     "f:\\version\\cqserver-78.0.11-1204\\modules\\guide\\src\\onlinecontribute.cpp"
                     ,uVar4);
  return;
}



// ============================================================
// Function: FUN_140e16c40 @ 140e16c40
// ============================================================

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_140e16c40(longlong param_1,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x18));
  return param_2;
}



// ============================================================
// Function: FUN_140e16c80 @ 140e16c80
// ============================================================

undefined4 FUN_140e16c80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// Function: FUN_140e16c90 @ 140e16c90
// ============================================================

void FUN_140e16c90(void *param_1)

{
  if (param_1 != (void *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)param_1 + 0x18));
    operator_delete(param_1);
  }
  return;
}



// ============================================================
// Function: FUN_140e16d30 @ 140e16d30
// ============================================================

ulonglong FUN_140e16d30(longlong param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (((param_2 != 3) && (param_2 != 4)) && (param_2 != 5)) {
    log_InlineLogERROR(&DAT_140e23698);
    in_RAX = extraout_RAX;
LAB_140e16d83:
    return in_RAX & 0xffffffffffffff00;
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 == (longlong *)0x0) goto LAB_140e16d83;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,1);
  in_RAX = (**(code **)(*plVar4 + 0x40))(plVar4);
  if ((int)in_RAX != param_4) goto LAB_140e16d83;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar4 = (longlong *)InstanceGet();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,"cq_tutor_contributions");
    *(longlong **)(param_1 + 0x18) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,0);
    (**(code **)(*plVar4 + 0xa8))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1)
    ;
    (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),2)
    ;
    lVar1 = *plVar5;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
    (**(code **)(lVar1 + 0xb8))(plVar5,uVar3);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),3)
    ;
    (**(code **)(*plVar4 + 200))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),4)
    ;
    (**(code **)(*plVar4 + 0x98))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),5)
    ;
    (**(code **)(*plVar4 + 200))(plVar4,0);
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))(*(longlong **)(param_1 + 0x18),1)
    ;
    if ((char)in_RAX == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
      (**(code **)(*plVar4 + 0x40))(plVar4);
      (**(code **)(*plVar5 + 0x40))(plVar5);
      log_InlineLogERROR("Contributions1 Student[%u] is exist, OldTutorID[%u] NewTutorID[%u]");
      in_RAX = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_140e16f9d;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
LAB_140e16f9d:
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 3) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,3);
    uVar7 = 3;
  }
  else {
    if (param_2 == 4) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,4);
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                         (*(longlong **)(param_1 + 0x18),4);
      lVar1 = *plVar5;
      lVar6 = (**(code **)(*plVar4 + 0x60))(plVar4);
      uVar7 = (**(code **)(lVar1 + 0x98))(plVar5,lVar6 + (ulonglong)param_3);
      goto LAB_140e1704a;
    }
    if (param_2 != 5) goto LAB_140e16f9d;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
    uVar7 = 5;
  }
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                     (*(longlong **)(param_1 + 0x18),uVar7);
  lVar1 = *plVar5;
  uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
  uVar7 = (**(code **)(lVar1 + 0xb0))(plVar5,(uint)uVar2 + (param_3 & 0xffff));
LAB_140e1704a:
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
}



// ============================================================
// Function: FUN_140e17070 @ 140e17070
// ============================================================

ulonglong FUN_140e17070(longlong param_1,int param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar4;
  ulonglong extraout_RAX_01;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong extraout_RAX_02;
  longlong lVar7;
  undefined8 uVar8;
  
  if (((param_2 != 3) && (param_2 != 4)) && (param_2 != 5)) {
    log_InlineLogERROR(&DAT_140e23698);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar4 = (longlong *)InstanceGet();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,"cq_tutor_contributions2");
    *(longlong **)(param_1 + 0x20) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,0);
    (**(code **)(*plVar4 + 0xa8))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1)
    ;
    (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),2)
    ;
    lVar1 = *plVar5;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
    (**(code **)(lVar1 + 0xb8))(plVar5,uVar3);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),3)
    ;
    (**(code **)(*plVar4 + 200))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),4)
    ;
    (**(code **)(*plVar4 + 0x98))(plVar4,0);
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),5)
    ;
    (**(code **)(*plVar4 + 200))(plVar4,0);
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),1)
    ;
    if ((char)in_RAX == '\0') {
      log_InlineLogERROR(&DAT_140e23698);
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
      (**(code **)(*plVar4 + 0x40))(plVar4);
      log_InlineLogERROR("Contributions2 Student[%u] is exist, NewGrandMaster[%u]");
      uVar6 = (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
      *(undefined8 *)(param_1 + 0x20) = 0;
      return uVar6 & 0xffffffffffffff00;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 == (longlong *)0x0) {
LAB_140e17303:
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 3) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,3);
    uVar8 = 3;
  }
  else {
    if (param_2 == 4) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,4);
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                         (*(longlong **)(param_1 + 0x20),4);
      lVar1 = *plVar5;
      lVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
      uVar8 = (**(code **)(lVar1 + 0x98))(plVar5,lVar7 + (ulonglong)param_3);
      goto LAB_140e17399;
    }
    if (param_2 != 5) {
      tq::GmLogSave("guide","forbidden arguments [AddContribute2] [STUDENTTYPE_DATA:%u]");
      in_RAX = extraout_RAX_02;
      goto LAB_140e17303;
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
    uVar8 = 5;
  }
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                     (*(longlong **)(param_1 + 0x20),uVar8);
  lVar1 = *plVar5;
  uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
  uVar8 = (**(code **)(lVar1 + 0xb0))(plVar5,(uint)uVar2 + (param_3 & 0xffff));
LAB_140e17399:
  return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
}



// ============================================================
// Function: FUN_140e173c0 @ 140e173c0
// ============================================================

undefined8 FUN_140e173c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),2)
    ;
                    /* WARNING: Could not recover jumptable at 0x000140e173e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    return uVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e173f0 @ 140e173f0
// ============================================================

undefined8 FUN_140e173f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),3)
    ;
                    /* WARNING: Could not recover jumptable at 0x000140e17414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    return uVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17420 @ 140e17420
// ============================================================

undefined8 FUN_140e17420(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),4)
    ;
                    /* WARNING: Could not recover jumptable at 0x000140e17444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    return uVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17450 @ 140e17450
// ============================================================

void FUN_140e17450(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),2)
    ;
    (**(code **)(*plVar1 + 0x98))(plVar1,0);
  }
  return;
}



// ============================================================
// Function: FUN_140e17480 @ 140e17480
// ============================================================

void FUN_140e17480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),2)
    ;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  }
  return;
}



// ============================================================
// Function: FUN_140e174c0 @ 140e174c0
// ============================================================

void FUN_140e174c0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),3)
    ;
    (**(code **)(*plVar1 + 200))(plVar1,0);
  }
  return;
}



// ============================================================
// Function: FUN_140e174f0 @ 140e174f0
// ============================================================

void FUN_140e174f0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),4)
    ;
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if (99 < uVar2) {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                         (*(longlong **)(param_1 + 0x10),4);
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                         (*(longlong **)(param_1 + 0x10),4);
      lVar1 = *plVar4;
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      (**(code **)(lVar1 + 0xb0))(plVar4,uVar2 - 100);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e17580 @ 140e17580
// ============================================================

void FUN_140e17580(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140e175c0 @ 140e175c0
// ============================================================

void FUN_140e175c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140e17600 @ 140e17600
// ============================================================

undefined8 FUN_140e17600(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x000140e17624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
    return uVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17630 @ 140e17630
// ============================================================

int FUN_140e17630(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (0 < iVar1) {
      _Var2 = _time32((__time32_t *)0x0);
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      iVar1 = _Var2 / 0xe10 - iVar1;
      if (iVar1 < 0) {
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
        (**(code **)(*plVar3 + 0x40))(plVar3);
        (**(code **)(*plVar4 + 0x40))(plVar4);
        tq::GmLogSave("guide","redundancy BetraTime record [guide:%u] [student:%u]");
        return 0x48;
      }
      if (0x47 < iVar1) {
        return 0;
      }
      return 0x48 - iVar1;
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17740 @ 140e17740
// ============================================================

undefined8 FUN_140e17740(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_2 == 0) {
      plVar2 = *(longlong **)(param_1 + 8);
LAB_140e177b7:
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000140e177cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
      return uVar3;
    }
    if (param_2 == 1) {
      iVar1 = FUN_140e17630(param_1);
      if (0 < iVar1) {
        plVar2 = *(longlong **)(param_1 + 8);
        goto LAB_140e177b7;
      }
    }
    else if (param_2 == 2) {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
      iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
      if (iVar1 == 0) {
        plVar2 = *(longlong **)(param_1 + 8);
        goto LAB_140e177b7;
      }
    }
    else {
      tq::GmLogSave("guide","forbidden create arguments [TUTOR_TYPE:%u]");
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_140e177e0 @ 140e177e0
// ============================================================

void FUN_140e177e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x000140e1783b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  return;
}



// ============================================================
// Function: FUN_140e17850 @ 140e17850
// ============================================================

void FUN_140e17850(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
    plVar1 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e178d0 @ 140e178d0
// ============================================================

void FUN_140e178d0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140e23698);
    return;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x000140e17925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,0);
  return;
}



// ============================================================
// Function: FUN_140e17930 @ 140e17930
// ============================================================

longlong FUN_140e17930(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return param_1 + 0x38;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17940 @ 140e17940
// ============================================================

longlong FUN_140e17940(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return param_1 + 0x28;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17950 @ 140e17950
// ============================================================

undefined8 FUN_140e17950(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x000140e17974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
    return uVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e17980 @ 140e17980
// ============================================================

void FUN_140e17980(longlong param_1,undefined8 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),4)
    ;
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    *param_2 = uVar3;
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),3)
    ;
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    *param_3 = uVar1;
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),5)
    ;
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    *param_4 = uVar1;
  }
  return;
}



// ============================================================
// Function: FUN_140e17a20 @ 140e17a20
// ============================================================

void FUN_140e17a20(longlong param_1,undefined8 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),4)
    ;
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    *param_2 = uVar3;
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),3)
    ;
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    *param_3 = uVar1;
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),5)
    ;
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    *param_4 = uVar1;
  }
  return;
}



// ============================================================
// Function: FUN_140e17ac0 @ 140e17ac0
// ============================================================

void FUN_140e17ac0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      log_InlineLogERROR(&DAT_140e23698);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18),0);
      (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,0);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      log_InlineLogERROR(&DAT_140e23698);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(*(longlong **)(param_1 + 0x20),0);
      (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  return;
}



// ============================================================
// Function: FUN_140e17bc0 @ 140e17bc0
// ============================================================

void FUN_140e17bc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18),0);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(*(longlong **)(param_1 + 0x20),0);
  }
  return;
}



// ============================================================
// Function: FUN_140e17c40 @ 140e17c40
// ============================================================

void * FUN_140e17c40(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e17c80 @ 140e17c80
// ============================================================

void * FUN_140e17c80(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140e17cd0 @ 140e17cd0
// ============================================================

undefined * FUN_140e17cd0(void)

{
  if ((DAT_140e339a0 & 1) == 0) {
    DAT_140e339a0 = DAT_140e339a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140e33998,"CPlayer");
    atexit((_func_5014 *)&LAB_140e21020);
  }
  return &DAT_140e33998;
}



// ============================================================
// Function: FUN_140e17d30 @ 140e17d30
// ============================================================

void FUN_140e17d30(__uint64 param_1)

{
  if ((DAT_140e339a0 & 1) == 0) {
    DAT_140e339a0 = DAT_140e339a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140e33998,"CPlayer");
    atexit((_func_5014 *)&LAB_140e21020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e17d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140e33998,param_1);
  return;
}



// ============================================================
// Function: FUN_140e17d90 @ 140e17d90
// ============================================================

void FUN_140e17d90(void *param_1)

{
  if ((DAT_140e339a0 & 1) == 0) {
    DAT_140e339a0 = DAT_140e339a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140e33998,"CPlayer");
    atexit((_func_5014 *)&LAB_140e21020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e17de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140e33998,param_1);
  return;
}



// ============================================================
// Function: FUN_140e17df0 @ 140e17df0
// ============================================================

void FUN_140e17df0(void *param_1)

{
  if ((DAT_140e339a0 & 1) == 0) {
    DAT_140e339a0 = DAT_140e339a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140e33998,"CPlayer");
    atexit((_func_5014 *)&LAB_140e21020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e17e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140e33998,param_1);
  return;
}



// ============================================================
// Function: FUN_140e17e50 @ 140e17e50
// ============================================================

void FUN_140e17e50(uint *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if ((((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 2) == 0)) &&
      (param_3 != (undefined8 *)0x0)) && (param_4 != (undefined8 *)0x0)) {
    *(longlong **)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 10) = *param_3;
    *(undefined8 *)(param_1 + 0xc) = param_3[1];
    *(undefined1 *)((longlong)param_1 + 0x37) = 0;
    *(undefined8 *)(param_1 + 0xe) = *param_4;
    *(undefined8 *)(param_1 + 0x10) = param_4[1];
    *(undefined1 *)((longlong)param_1 + 0x47) = 0;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,1);
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    puVar3 = FUN_140e04220();
    FUN_140e03ab0((longlong)puVar3,*param_1,uVar1);
  }
  return;
}



// ============================================================
// Function: FUN_140e17ee0 @ 140e17ee0
// ============================================================

ulonglong FUN_140e17ee0(undefined4 *param_1,int param_2,ulonglong param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX_00;
  longlong *plVar2;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
    uVar1 = *(longlong *)(param_1 + 0x1a) - *(longlong *)(param_1 + 0x18) >> 2;
    if (uVar1 == 0) {
      log_InlineLogERROR(&DAT_140e23698);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      plVar2 = (longlong *)InstanceGet();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_tutor_access");
      *(longlong **)(param_1 + 4) = plVar2;
      if (plVar2 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_140e23698);
        return extraout_RAX_01 & 0xffffffffffffff00;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
      (**(code **)(*plVar2 + 0xa8))(plVar2,0);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),1);
      (**(code **)(*plVar2 + 0xb8))(plVar2,*param_1);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),3);
      (**(code **)(*plVar2 + 200))(plVar2,0);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),2);
      (**(code **)(*plVar2 + 0x98))(plVar2,0);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),4);
      (**(code **)(*plVar2 + 200))(plVar2,0);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 4) + 0x50))(*(longlong **)(param_1 + 4),1);
      if ((char)uVar1 == '\0') {
        log_InlineLogERROR(&DAT_140e23698);
        uVar1 = (**(code **)**(undefined8 **)(param_1 + 4))(*(undefined8 **)(param_1 + 4),1);
        *(undefined8 *)(param_1 + 4) = 0;
        return uVar1 & 0xffffffffffffff00;
      }
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      if (param_2 == 2) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
        lVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
        uVar1 = (param_3 & 0xffffffff) + lVar3;
        if (800000000000 < uVar1) {
          uVar1 = 800000000000;
        }
        plVar2 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),2);
        uVar4 = (**(code **)(*plVar2 + 0x98))(plVar2,uVar1);
        return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      if (param_2 == 3) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
        lVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
        uVar4 = 3;
        uVar1 = 0x5a0;
      }
      else {
        if (param_2 != 4) {
          tq::GmLogSave("guide","forbidden arguments [AddAccess] [ACCESS_DATA:%u]");
          return extraout_RAX_02 & 0xffffffffffffff00;
        }
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
        lVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
        uVar4 = 4;
        uVar1 = 2000;
      }
      uVar5 = (param_3 & 0xffffffff) + lVar3;
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 4) + 0x10))(*(longlong **)(param_1 + 4),uVar4)
      ;
      uVar4 = (**(code **)(*plVar2 + 200))(plVar2,uVar5 & 0xffff);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  else {
    log_InlineLogERROR(&DAT_140e23698);
    uVar1 = extraout_RAX;
  }
  return uVar1 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140e18210 @ 140e18210
// ============================================================

undefined8 FUN_140e18210(longlong param_1)

{
  short sVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60);
  if (((uVar2 & 0xfffffffffffffffc) != 0) || (*(longlong *)(param_1 + 8) != 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
    sVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),2)
    ;
    lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),4)
    ;
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if (((sVar1 != 0) || (lVar4 != 0)) || ((short)uVar2 != 0)) {
      return uVar2 & 0xffffffffffffff00;
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),0);
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,0);
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,0);
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// ============================================================
// Function: FUN_140e18340 @ 140e18340
// ============================================================

longlong * FUN_140e18340(longlong *param_1,longlong param_2)

{
  FUN_140e05410(param_1,-param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140e18360 @ 140e18360
// ============================================================

void * FUN_140e18360(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140e183a0 @ 140e183a0
// ============================================================

void * FUN_140e183a0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}



// ============================================================
// Function: FUN_140e183e0 @ 140e183e0
// ============================================================

undefined8 * FUN_140e183e0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e18430 @ 140e18430
// ============================================================

undefined8 * FUN_140e18430(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140e184a0 @ 140e184a0
// ============================================================

longlong * FUN_140e184a0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * -8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140e1850d;
  }
  _invalid_parameter_noinfo();
LAB_140e1850d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140e18540 @ 140e18540
// ============================================================

undefined8 * FUN_140e18540(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e185a0 @ 140e185a0
// ============================================================

void FUN_140e185a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),1,param_3,param_4,0xfffffffffffffffe);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  operator_delete(*(void **)(param_1 + 0x48));
  return;
}



// ============================================================
// Function: FUN_140e18640 @ 140e18640
// ============================================================

void * FUN_140e18640(void *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e185a0((longlong)param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_140e17d90(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e18670 @ 140e18670
// ============================================================

undefined1 FUN_140e18670(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(int **)(param_1 + 0x68) < piVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x68);
    if (piVar2 < *(int **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
    }
    if (piVar3 == piVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(int **)(lVar4 + 0x20) <= piVar3) {
      _invalid_parameter_noinfo();
    }
    if (*piVar3 == param_2) {
      return 1;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(int **)(lVar4 + 0x20) <= piVar3) {
      _invalid_parameter_noinfo();
    }
    piVar3 = piVar3 + 1;
  }
  return 0;
}



// ============================================================
// Function: FUN_140e18740 @ 140e18740
// ============================================================

ulonglong FUN_140e18740(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_1[4];
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar2;
  }
  uVar1 = uVar1 - 8;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    lVar3 = lVar4;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140e187b7;
  }
  _invalid_parameter_noinfo();
LAB_140e187b7:
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar4 = *plVar2;
  }
  if (*(ulonglong *)(lVar4 + 0x20) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  return uVar1;
}



// ============================================================
// Function: FUN_140e187f0 @ 140e187f0
// ============================================================

undefined8 * FUN_140e187f0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e18850 @ 140e18850
// ============================================================

longlong * FUN_140e18850(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
// Function: FUN_140e18940 @ 140e18940
// ============================================================

longlong * FUN_140e18940(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
    lVar2 = param_1[4] - (longlong)_Src >> 3;
    _DstSize = lVar2 * 8;
    if (0 < lVar2) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return param_2;
}



// ============================================================
// Function: FUN_140e18a30 @ 140e18a30
// ============================================================

undefined4 * FUN_140e18a30(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x12);
    plVar2 = plVar1;
  }
  *(longlong **)(param_1 + 0x12) = plVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140e18ad0 @ 140e18ad0
// ============================================================

undefined4 * FUN_140e18ad0(longlong param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if ((DAT_140e339a0 & 1) == 0) {
      DAT_140e339a0 = DAT_140e339a0 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_140e33998,"CPlayer");
      atexit((_func_5014 *)&LAB_140e21020);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140e33998,0x88);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_140e18a30(puVar1,param_1);
    }
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140e18b50 @ 140e18b50
// ============================================================

void FUN_140e18b50(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = FUN_140e04220();
  uVar2 = (ulonglong)*param_1;
  FUN_140e03db0((longlong)puVar1,*param_1);
  FUN_140e185a0((longlong)param_1,uVar2,param_3,param_4);
  FUN_140e17d90(param_1);
  return;
}



// ============================================================
// Function: FUN_140e18b80 @ 140e18b80
// ============================================================

undefined8 * FUN_140e18b80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140e18c10 @ 140e18c10
// ============================================================

void FUN_140e18c10(longlong *param_1)

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
// Function: FUN_140e18cd0 @ 140e18cd0
// ============================================================

void FUN_140e18cd0(longlong *param_1)

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
    lVar1 = param_1[4] - (longlong)_Src >> 3;
    _DstSize = lVar1 * 8;
    if (0 < lVar1) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return;
}



// ============================================================
// Function: FUN_140e18d90 @ 140e18d90
// ============================================================

void FUN_140e18d90(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  rsize_t _DstSize;
  uint *_Dst;
  
  _Dst = *(uint **)(param_1 + 0x60);
  if (*(uint **)(param_1 + 0x68) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  while( true ) {
    puVar2 = *(uint **)(param_1 + 0x68);
    if (puVar2 < *(uint **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == puVar2) {
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(uint **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    if (*_Dst == param_2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(uint **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x68) - (longlong)(_Dst + 1) >> 2;
  if (0 < lVar4) {
    _DstSize = lVar4 << 2;
    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -4;
  if ((_Dst < *(uint **)(param_1 + 0x60)) || (*(uint **)(param_1 + 0x68) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  puVar3 = FUN_140e04220();
  FUN_140e03ab0((longlong)puVar3,param_2,0);
  return;
}



// ============================================================
// Function: FUN_140e18ea0 @ 140e18ea0
// ============================================================

void FUN_140e18ea0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  puVar5 = *(uint **)(param_1 + 0x60);
  plVar1 = (longlong *)(param_1 + 0x48);
  if (*(uint **)(param_1 + 0x68) < puVar5) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  while( true ) {
    puVar3 = *(uint **)(param_1 + 0x68);
    if (puVar3 < *(uint **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (puVar5 == puVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(uint **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar4 = FUN_140e04220();
    FUN_140e03ab0((longlong)puVar4,*puVar5,0);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(uint **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar5 = puVar5 + 1;
  }
  FUN_140e18c10(plVar1);
  return;
}



// ============================================================
// Function: FUN_140e18f70 @ 140e18f70
// ============================================================

void FUN_140e18f70(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)param_2[3];
  if ((longlong *)param_2[4] < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_2;
  do {
    plVar2 = (longlong *)param_2[4];
    if (plVar2 < (longlong *)param_2[3]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) {
      FUN_140e18cd0(param_2);
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)*plVar3;
    if (param_3 == '\0') {
LAB_140e19023:
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2);
      }
    }
    else if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,0);
      goto LAB_140e19023;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// ============================================================
// Function: FUN_140e190a0 @ 140e190a0
// ============================================================

bool FUN_140e190a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong *local_70 [3];
  void *local_58;
  longlong local_50;
  undefined8 local_48;
  
  uVar15 = 0xfffffffffffffffe;
  local_70[0] = operator_new(8);
  if (local_70[0] == (longlong *)0x0) {
    local_70[0] = (longlong *)0x0;
  }
  else {
    *local_70[0] = (longlong)local_70;
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  *param_1 = param_2;
  puVar1 = FUN_140e04220();
  FUN_140e03960((longlong)puVar1,param_2);
  bVar14 = true;
  bVar12 = true;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))();
  (**(code **)(*plVar2 + 0x118))(plVar2,local_70,param_2,0x10,uVar15);
  if (local_50 - (longlong)local_58 >> 3 != 0) {
    puVar1 = (undefined8 *)FUN_140e18740((longlong *)local_70);
    plVar2 = (longlong *)*puVar1;
    uVar13 = plVar2 == (longlong *)0x0;
    if ((bool)uVar13) {
LAB_140e19230:
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
      pbVar7 = (byte *)(**(code **)(*plVar3 + 0x78))(plVar3);
      bVar12 = false;
      iVar9 = 0;
      bVar14 = true;
      lVar8 = 1;
      pbVar10 = &DAT_140e27f30;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar12 = *pbVar7 < *pbVar10;
        bVar14 = *pbVar7 == *pbVar10;
        pbVar7 = pbVar7 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      bVar12 = iVar9 != 0;
      (**(code **)(*plVar2 + 0x40))(plVar2,0);
      (**(code **)*plVar2)(plVar2,1);
      bVar14 = true;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
      pcVar4 = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
      lVar8 = 1;
      pcVar11 = "";
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        uVar13 = *pcVar4 == *pcVar11;
        pcVar4 = pcVar4 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((bool)uVar13);
      if ((bool)uVar13) goto LAB_140e19230;
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
      pcVar4 = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
      lVar8 = 1;
      pcVar11 = "";
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        uVar13 = *pcVar4 == *pcVar11;
        pcVar4 = pcVar4 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((bool)uVar13);
      if ((bool)uVar13) goto LAB_140e19230;
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
      plVar5 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
      puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x78))(plVar3);
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x78))(plVar5);
      FUN_140e17e50(param_1,plVar2,puVar6,puVar1);
      bVar14 = false;
    }
    if ((local_50 - (longlong)local_58 & 0xfffffffffffffff8U) != 0) {
      local_50 = local_50 + -8;
    }
    FUN_140e18f70(param_1,(longlong *)local_70,'\x01');
  }
  FUN_140e18cd0((longlong *)local_70);
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))();
  (**(code **)(*plVar2 + 0x118))(plVar2,local_70,param_2,0x13);
  lVar8 = local_50 - (longlong)local_58 >> 3;
  if ((lVar8 == 0) || (bVar12 == false)) {
    if (lVar8 != 0) {
      plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,0);
        (**(code **)*plVar2)(plVar2,1);
      }
      if ((local_50 - (longlong)local_58 & 0xfffffffffffffff8U) != 0) {
        local_50 = local_50 + -8;
      }
    }
  }
  else {
    plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
    if ((*plVar2 != 0) && (*(longlong *)(param_1 + 4) == 0)) {
      *(longlong *)(param_1 + 4) = *plVar2;
    }
    if ((local_50 - (longlong)local_58 & 0xfffffffffffffff8U) != 0) {
      local_50 = local_50 + -8;
    }
  }
  FUN_140e18f70(param_1,(longlong *)local_70,'\x01');
  FUN_140e18cd0((longlong *)local_70);
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))();
  (**(code **)(*plVar2 + 0x118))(plVar2,local_70,param_2,0x11);
  if (local_50 - (longlong)local_58 >> 3 != 0) {
    plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      uVar13 = !bVar14;
      if ((bool)uVar13) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
        pcVar4 = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
        lVar8 = 1;
        pcVar11 = "";
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          uVar13 = *pcVar4 == *pcVar11;
          pcVar4 = pcVar4 + 1;
          pcVar11 = pcVar11 + 1;
        } while ((bool)uVar13);
        if (!(bool)uVar13) {
          plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
          if (((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 6) == 0)) &&
             (*plVar2 != 0)) {
            *(longlong *)(param_1 + 6) = *plVar2;
          }
          goto LAB_140e194bf;
        }
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,0);
      (**(code **)*plVar2)(plVar2,1);
    }
LAB_140e194bf:
    if ((local_50 - (longlong)local_58 & 0xfffffffffffffff8U) != 0) {
      local_50 = local_50 + -8;
    }
    FUN_140e18f70(param_1,(longlong *)local_70,'\x01');
  }
  FUN_140e18cd0((longlong *)local_70);
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))();
  (**(code **)(*plVar2 + 0x118))(plVar2,local_70,param_2,0x12);
  if (local_50 - (longlong)local_58 >> 3 == 0) goto LAB_140e195ff;
  plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
  plVar2 = (longlong *)*plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar13 = !bVar14;
    if ((bool)uVar13) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
      pcVar4 = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
      lVar8 = 1;
      pcVar11 = "";
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        uVar13 = *pcVar4 == *pcVar11;
        pcVar4 = pcVar4 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((bool)uVar13);
      if (!(bool)uVar13) {
        plVar2 = (longlong *)FUN_140e18740((longlong *)local_70);
        if (((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 8) == 0)) &&
           (*plVar2 != 0)) {
          *(longlong *)(param_1 + 8) = *plVar2;
        }
        goto LAB_140e195d0;
      }
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,0);
    (**(code **)*plVar2)(plVar2,1);
  }
LAB_140e195d0:
  if ((local_50 - (longlong)local_58 & 0xfffffffffffffff8U) != 0) {
    local_50 = local_50 + -8;
  }
  FUN_140e18f70(param_1,(longlong *)local_70,'\x01');
LAB_140e195ff:
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  operator_delete(local_70[0]);
  return bVar12;
}



// ============================================================
// Function: FUN_140e19640 @ 140e19640
// ============================================================

void FUN_140e19640(longlong param_1,int *param_2)

{
  char cVar1;
  int local_res10 [6];
  
  if ((param_2 != (int *)0x0) && (cVar1 = FUN_140e18670(param_1,*param_2), cVar1 == '\0')) {
    local_res10[0] = *param_2;
    FUN_140e12990((longlong *)(param_1 + 0x48),local_res10);
  }
  return;
}



// ============================================================
// Function: FUN_140e19680 @ 140e19680
// ============================================================

CMsg * FUN_140e19680(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140e196b0 @ 140e196b0
// ============================================================

void FUN_140e196b0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e196c0 @ 140e196c0
// ============================================================

void FUN_140e196c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e196c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140e196d0 @ 140e196d0
// ============================================================

void FUN_140e196d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e196d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}



// ============================================================
// Function: FUN_140e196e0 @ 140e196e0
// ============================================================

void FUN_140e196e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e196e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140e196f0 @ 140e196f0
// ============================================================

undefined8 * FUN_140e196f0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e19720 @ 140e19720
// ============================================================

CMsg * FUN_140e19720(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = guide::CMsgContribute::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x2c),0x3d9,true);
  return param_1;
}



// ============================================================
// Function: FUN_140e197a0 @ 140e197a0
// ============================================================

void FUN_140e197a0(undefined8 *param_1)

{
  *param_1 = guide::CMsgContribute::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e197e0 @ 140e197e0
// ============================================================

ulonglong FUN_140e197e0(CMsg *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined2 param_8,
                       char *param_9,char *param_10)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  char *pcVar5;
  
  if (param_2 == '\0') {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x813;
    *(char *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
    *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_7;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x22) = param_8;
    if (param_9 != (char *)0x0) {
      uVar4 = 0xffffffffffffffff;
      pcVar5 = param_9;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 < 0x11) {
        tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_9);
      }
    }
    if (param_10 != (char *)0x0) {
      uVar4 = 0xffffffffffffffff;
      pcVar5 = param_10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 < 0x11) {
        tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_10);
      }
    }
    uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    sVar2 = (short)uVar3 + 0x27;
    **(short **)(param_1 + 0x408) = sVar2;
    uVar4 = CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar3) >> 0x10),sVar2) >> 8),1);
  }
  return uVar4;
}



// ============================================================
// Function: FUN_140e19910 @ 140e19910
// ============================================================

void FUN_140e19910(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if ((int)param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      switch(*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4)) {
      case 1:
        (**(code **)(*param_3 + 0x38))(param_3);
        break;
      case 2:
        (**(code **)(*param_3 + 0x40))
                  (param_3,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18));
        break;
      case 3:
        (**(code **)(*param_3 + 0x48))(param_3);
        break;
      case 4:
        (**(code **)(*param_3 + 0x50))(param_3);
        break;
      case 5:
        (**(code **)(*param_3 + 0x58))(param_3);
        break;
      case 6:
        (**(code **)(*param_3 + 0x60))(param_3);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e199f0 @ 140e199f0
// ============================================================

undefined8 * FUN_140e199f0(undefined8 *param_1,uint param_2)

{
  *param_1 = guide::CMsgContribute::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e19a50 @ 140e19a50
// ============================================================

CMsg * FUN_140e19a50(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = guide::CMsgGuide::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x1c),0x3e9,true);
  return param_1;
}



// ============================================================
// Function: FUN_140e19ad0 @ 140e19ad0
// ============================================================

void FUN_140e19ad0(undefined8 *param_1)

{
  *param_1 = guide::CMsgGuide::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e19b10 @ 140e19b10
// ============================================================

ulonglong FUN_140e19b10(CMsg *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,char *param_6)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  char *pcVar5;
  
  if (param_2 == '\0') {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x811;
    *(char *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
    if (param_6 != (char *)0x0) {
      uVar4 = 0xffffffffffffffff;
      pcVar5 = param_6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 < 0x11) {
        tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_6);
      }
    }
    uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    sVar2 = (short)uVar3 + 0x17;
    **(short **)(param_1 + 0x408) = sVar2;
    uVar4 = CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar3) >> 0x10),sVar2) >> 8),1);
  }
  return uVar4;
}



// ============================================================
// Function: FUN_140e19be0 @ 140e19be0
// ============================================================

void FUN_140e19be0(longlong param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      cVar3 = (**(code **)(*param_3 + 0xe0))(param_3);
      if (cVar3 == '\0') {
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc);
        switch(*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4)) {
        case 1:
          (**(code **)(*param_3 + 0x68))(param_3,param_2,uVar1);
          break;
        case 2:
          (**(code **)(*param_3 + 0x70))(param_3,param_2,uVar1);
          break;
        case 3:
          (**(code **)(*param_3 + 0x78))(param_3,param_2,uVar1);
          break;
        case 4:
          (**(code **)(*param_3 + 0x80))(param_3,param_2,uVar1,1,1);
          break;
        case 5:
          if (*(int *)(*(longlong *)(param_1 + 0x408) + 0x10) != 0) {
            (**(code **)(*param_3 + 0xa0))(param_3,param_2,uVar1);
          }
          break;
        case 6:
          lVar2 = *(longlong *)(param_1 + 0x408);
          (**(code **)(*param_3 + 0xa8))
                    (param_3,*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 8),
                     *(undefined4 *)(lVar2 + 0xc));
          break;
        case 8:
          (**(code **)(*param_3 + 0x90))
                    (param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8),uVar1);
          break;
        case 9:
          lVar2 = *(longlong *)(param_1 + 0x408);
          (**(code **)(*param_3 + 0x98))
                    (param_3,*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0xc),
                     *(undefined4 *)(lVar2 + 8));
          break;
        case 0x18:
          (**(code **)(*param_3 + 0xd8))
                    (param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc));
        }
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e19e00 @ 140e19e00
// ============================================================

undefined8 * FUN_140e19e00(undefined8 *param_1,uint param_2)

{
  *param_1 = guide::CMsgGuide::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e19e60 @ 140e19e60
// ============================================================

CMsg * FUN_140e19e60(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = guide::CMsgGuideInfo::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x54),0x3b1,true);
  return param_1;
}



// ============================================================
// Function: FUN_140e19ee0 @ 140e19ee0
// ============================================================

void FUN_140e19ee0(undefined8 *param_1)

{
  *param_1 = guide::CMsgGuideInfo::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e19f20 @ 140e19f20
// ============================================================

ulonglong FUN_140e19f20(CMsg *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined1 param_9,undefined1 param_10,undefined2 param_11,
                       undefined4 param_12,undefined4 param_13,undefined2 param_14,
                       undefined4 param_15,undefined4 param_16,undefined1 param_17,
                       undefined8 param_18,undefined2 param_19,undefined2 param_20,char *param_21,
                       char *param_22,char *param_23)

{
  CStringPacker *this;
  char cVar1;
  short sVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  char *pcVar5;
  
  if (param_2 == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x812;
  *(char *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x21) = param_10;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x22) = param_11;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_12;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_13;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_14;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30) = param_15;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x34) = param_16;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x38) = param_17;
  *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x40) = param_18;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x48) = param_19;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x4a) = param_20;
  if (param_21 == (char *)0x0) {
LAB_140e1a0ae:
    param_21 = "";
  }
  else {
    uVar4 = 0xffffffffffffffff;
    pcVar5 = param_21;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (0x10 < ~uVar4 - 1) goto LAB_140e1a0ae;
  }
  this = (CStringPacker *)(param_1 + 0x410);
  tq::CStringPacker::AddString(this,param_21);
  if (param_22 == (char *)0x0) {
LAB_140e1a0e9:
    param_22 = "";
  }
  else {
    uVar4 = 0xffffffffffffffff;
    pcVar5 = param_22;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (0x10 < ~uVar4 - 1) goto LAB_140e1a0e9;
  }
  tq::CStringPacker::AddString(this,param_22);
  if (param_23 != (char *)0x0) {
    uVar4 = 0xffffffffffffffff;
    pcVar5 = param_23;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0x11) goto LAB_140e1a124;
  }
  param_23 = "";
LAB_140e1a124:
  tq::CStringPacker::AddString(this,param_23);
  uVar3 = tq::CStringPacker::GetSize(this);
  sVar2 = (short)uVar3 + 0x4f;
  **(short **)(param_1 + 0x408) = sVar2;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar3) >> 0x10),sVar2) >> 8),1);
}



// ============================================================
// Function: FUN_140e1a160 @ 140e1a160
// ============================================================

void FUN_140e1a160(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  
  if ((int)param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x408) + 4);
      if (cVar1 == '\x01') {
        (**(code **)(*param_3 + 0xb8))(param_3,param_2,0);
      }
      else if (cVar1 == '\x02') {
        (**(code **)(*param_3 + 0xb0))(param_3,param_2,2);
      }
      else if (cVar1 == '\x04') {
        (**(code **)(*param_3 + 0xb0))
                  (param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8),4,0);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e1a220 @ 140e1a220
// ============================================================

undefined8 * FUN_140e1a220(undefined8 *param_1,uint param_2)

{
  *param_1 = guide::CMsgGuideInfo::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e1a280 @ 140e1a280
// ============================================================

CMsg * FUN_140e1a280(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = guide::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e1a2d0 @ 140e1a2d0
// ============================================================

void FUN_140e1a2d0(undefined8 *param_1)

{
  *param_1 = guide::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e1a340 @ 140e1a340
// ============================================================

bool FUN_140e1a340(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}



// ============================================================
// Function: FUN_140e1a370 @ 140e1a370
// ============================================================

void FUN_140e1a370(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(*param_3 + 0xc0))(param_3);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e1a3d0 @ 140e1a3d0
// ============================================================

undefined8 * FUN_140e1a3d0(undefined8 *param_1,byte param_2)

{
  *param_1 = guide::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140e1a420 @ 140e1a420
// ============================================================

CMsg * FUN_140e1a420(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = guide::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140e1a470 @ 140e1a470
// ============================================================

void FUN_140e1a470(undefined8 *param_1)

{
  *param_1 = guide::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140e1a4e0 @ 140e1a4e0
// ============================================================

bool FUN_140e1a4e0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}



// ============================================================
// Function: FUN_140e1a510 @ 140e1a510
// ============================================================

void FUN_140e1a510(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140e23698);
    }
    else {
      (**(code **)(*param_3 + 200))(param_3);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e1a570 @ 140e1a570
// ============================================================

undefined8 * FUN_140e1a570(undefined8 *param_1,byte param_2)

{
  *param_1 = guide::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: Init @ 140e1a62a
// ============================================================

void __thiscall tq::CMsg::Init(CMsg *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1a62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Init(this);
  return;
}



// ============================================================
// Function: Create @ 140e1a630
// ============================================================

bool __thiscall tq::CMsg::Create(CMsg *this,char *param_1,ushort param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



// ============================================================
// Function: __CxxFrameHandler3 @ 140e1a684
// ============================================================

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1a684. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// ============================================================
// Function: FID_conflict:`vector_deleting_destructor' @ 140e1a6a8
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
// Function: what @ 140e1a718
// ============================================================

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



// ============================================================
// Function: operator_delete @ 140e1a71e
// ============================================================

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1a71e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ============================================================
// Function: operator_new @ 140e1a730
// ============================================================

void * __cdecl operator_new(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// ============================================================
// Function: _CxxThrowException @ 140e1a736
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1a736. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: FUN_140e1a744 @ 140e1a744
// ============================================================

undefined8 FUN_140e1a744(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
// Function: __security_check_cookie @ 140e1a7f0
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140e33968) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// ============================================================
// Function: memset @ 140e1a810
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: _purecall @ 140e1a820
// ============================================================

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1a820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// ============================================================
// Function: _onexit @ 140e1a838
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
  
  local_res10 = _decode_pointer(DAT_140e33f50);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140e33f50);
    local_res18[0] = _decode_pointer(DAT_140e33f48);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140e33f50 = _encode_pointer(local_res10);
    DAT_140e33f48 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// ============================================================
// Function: atexit @ 140e1a8e8
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
// Function: FUN_140e1a90c @ 140e1a90c
// ============================================================

bool FUN_140e1a90c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140e33f48 = _encode_pointer(puVar1);
  DAT_140e33f50 = DAT_140e33f48;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140e1b008();
    atexit(FUN_140e1b040);
    atexit((_func_5014 *)&LAB_140e1affc);
  }
  return puVar1 == (undefined8 *)0x0;
}



// ============================================================
// Function: _CRT_INIT @ 140e1a96c
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
    if (DAT_140e339a4 < 1) {
      return 0;
    }
    DAT_140e339a4 = DAT_140e339a4 + -1;
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_140e33f38 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140e33f38;
        lVar2 = DAT_140e33f38;
      }
      DAT_140e33f38 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140e1a9e6;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140e1a9e6:
    if (DAT_140e33f30 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140e33f50);
      if (_Memory != (longlong *)0x0) {
        plVar6 = (longlong *)_decode_pointer(DAT_140e33f48);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = (code *)_decode_pointer(*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = (longlong *)_decode_pointer(DAT_140e33f50);
            plVar11 = (longlong *)_decode_pointer(DAT_140e33f48);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_140e33f48 = _encoded_null();
        DAT_140e33f50 = DAT_140e33f48;
      }
      DAT_140e33f30 = 0;
      if (!bVar1) {
        LOCK();
        DAT_140e33f38 = 0;
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
      bVar12 = DAT_140e33f38 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140e33f38;
        lVar2 = DAT_140e33f38;
      }
      DAT_140e33f38 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140e1ab0f;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140e1ab0f:
    if (DAT_140e33f30 == 0) {
      DAT_140e33f30 = 1;
      iVar3 = _initterm_e(&DAT_140e222d8,&DAT_140e222e8);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_140e222c8,&DAT_140e222d0);
      DAT_140e33f30 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_140e33f38 = 0;
      UNLOCK();
    }
    if ((DAT_140e33f40 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140e33f40), BVar4 != 0)) {
      (*DAT_140e33f40)(param_1,2,param_3);
    }
    DAT_140e339a4 = DAT_140e339a4 + 1;
  }
  return 1;
}



// ============================================================
// Function: __DllMainCRTStartup @ 140e1abc8
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
  if ((param_2 == 0) && (DAT_140e339a4 == 0)) {
    uVar4 = 0;
  }
  else {
    _DAT_140e33980 = param_2;
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_140e28610 != (undefined *)0x0) {
        iVar1 = (*(code *)PTR_140e28610)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        uVar3 = _CRT_INIT(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        _DAT_140e33980 = 0xffffffff;
        return 0;
      }
    }
    uVar3 = FUN_140e168c0();
    uVar4 = (uint)uVar3;
    if ((param_2 == 1) && (uVar4 == 0)) {
      FUN_140e168c0();
      _CRT_INIT(param_1,0,param_3);
      if (PTR_140e28610 != (undefined *)0x0) {
        (*(code *)PTR_140e28610)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = _CRT_INIT(param_1,param_2,param_3);
      uVar4 = -(uint)((int)uVar3 != 0) & uVar4;
      if ((uVar4 != 0) && (PTR_140e28610 != (undefined *)0x0)) {
        uVar4 = (*(code *)PTR_140e28610)(param_1,param_2,param_3);
      }
    }
  }
  _DAT_140e33980 = 0xffffffff;
  return uVar4;
}



// ============================================================
// Function: entry @ 140e1ad00
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
// Function: FUN_140e1ad40 @ 140e1ad40
// ============================================================

undefined8 FUN_140e1ad40(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: __ArrayUnwind @ 140e1ad5c
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
// Function: `eh_vector_destructor_iterator' @ 140e1ada8
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
// Function: __GSHandlerCheckCommon @ 140e1ae08
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
// Function: __GSHandlerCheck @ 140e1ae6c
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
// Function: __report_gsfailure @ 140e1ae8c
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
  RtlCaptureContext(&DAT_140e33a50);
  local_30 = DAT_140e33b48;
  local_38 = RtlLookupFunctionEntry(DAT_140e33b48,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140e33ae8 = local_res8;
    DAT_140e33b48 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140e33a50,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140e339c0 = DAT_140e33b48;
  _DAT_140e33ad0 = local_res8[0];
  _DAT_140e339b0 = 0xc0000409;
  _DAT_140e339b4 = 1;
  local_20 = DAT_140e33968;
  local_18 = DAT_140e33970;
  DAT_140e33a48 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140e28618);
  if (DAT_140e33a48 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// ============================================================
// Function: _unlock @ 140e1afdc
// ============================================================

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1afdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



// ============================================================
// Function: __dllonexit @ 140e1afe2
// ============================================================

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1afe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



// ============================================================
// Function: _lock @ 140e1afee
// ============================================================

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1afee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



// ============================================================
// Function: FUN_140e1b008 @ 140e1b008
// ============================================================

void FUN_140e1b008(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140e29170; puVar1 < &DAT_140e29170; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140e1b040 @ 140e1b040
// ============================================================

void FUN_140e1b040(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140e29180; puVar1 < &DAT_140e29180; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: _ValidateImageBase @ 140e1b080
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
// Function: _FindPESection @ 140e1b0b0
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
// Function: _IsNonwritableInCurrentImage @ 140e1b100
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
  
  pImageBase = &IMAGE_DOS_HEADER_140e00000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140e00000);
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
// Function: _initterm @ 140e1b142
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 140e1b148
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: _amsg_exit @ 140e1b15a
// ============================================================

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



// ============================================================
// Function: __CppXcptFilter @ 140e1b160
// ============================================================

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1b160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// ============================================================
// Function: __security_init_cookie @ 140e1b168
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
  if (DAT_140e33968 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140e33968 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140e33968 == 0x2b992ddfa232) {
      DAT_140e33968 = 0x2b992ddfa233;
    }
  }
  DAT_140e33970 = ~DAT_140e33968;
  return;
}



// ============================================================
// Function: terminate @ 140e1b21c
// ============================================================

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b21c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: _type_info_dtor_internal_method @ 140e1b222
// ============================================================

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



// ============================================================
// Function: __crt_debugger_hook @ 140e1b228
// ============================================================

void __cdecl __crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e1b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crt_debugger_hook(param_1);
  return;
}



// ============================================================
// Function: RtlVirtualUnwind @ 140e1b258
// ============================================================

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1b258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



// ============================================================
// Function: RtlLookupFunctionEntry @ 140e1b25e
// ============================================================

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000140e1b25e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// ============================================================
// Function: __chkstk @ 140e1b2a0
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
// Function: Unwind@140e1b2f0 @ 140e1b2f0
// ============================================================

void Unwind_140e1b2f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b310 @ 140e1b310
// ============================================================

void Unwind_140e1b310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b330 @ 140e1b330
// ============================================================

void Unwind_140e1b330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b350 @ 140e1b350
// ============================================================

void Unwind_140e1b350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b370 @ 140e1b370
// ============================================================

void Unwind_140e1b370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b390 @ 140e1b390
// ============================================================

void Unwind_140e1b390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b3b0 @ 140e1b3b0
// ============================================================

void Unwind_140e1b3b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b3d0 @ 140e1b3d0
// ============================================================

void Unwind_140e1b3d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b3f0 @ 140e1b3f0
// ============================================================

void Unwind_140e1b3f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b410 @ 140e1b410
// ============================================================

void Unwind_140e1b410(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b430 @ 140e1b430
// ============================================================

void Unwind_140e1b430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b450 @ 140e1b450
// ============================================================

void Unwind_140e1b450(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b470 @ 140e1b470
// ============================================================

void Unwind_140e1b470(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b490 @ 140e1b490
// ============================================================

void Unwind_140e1b490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b4b0 @ 140e1b4b0
// ============================================================

void Unwind_140e1b4b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b4d0 @ 140e1b4d0
// ============================================================

void Unwind_140e1b4d0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b4f0 @ 140e1b4f0
// ============================================================

void Unwind_140e1b4f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b510 @ 140e1b510
// ============================================================

void Unwind_140e1b510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b530 @ 140e1b530
// ============================================================

void Unwind_140e1b530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b550 @ 140e1b550
// ============================================================

void Unwind_140e1b550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b570 @ 140e1b570
// ============================================================

void Unwind_140e1b570(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b590 @ 140e1b590
// ============================================================

void Unwind_140e1b590(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b5b0 @ 140e1b5b0
// ============================================================

void Unwind_140e1b5b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b5d0 @ 140e1b5d0
// ============================================================

void Unwind_140e1b5d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b5f0 @ 140e1b5f0
// ============================================================

void Unwind_140e1b5f0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b610 @ 140e1b610
// ============================================================

void Unwind_140e1b610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b630 @ 140e1b630
// ============================================================

void Unwind_140e1b630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Catch@140e1b650 @ 140e1b650
// ============================================================

undefined8 Catch_140e1b650(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e01568;
}



// ============================================================
// Function: Unwind@140e1b690 @ 140e1b690
// ============================================================

void Unwind_140e1b690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1b6b0 @ 140e1b6b0
// ============================================================

void Unwind_140e1b6b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1b6d0 @ 140e1b6d0
// ============================================================

void Unwind_140e1b6d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b6f0 @ 140e1b6f0
// ============================================================

void Unwind_140e1b6f0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b710 @ 140e1b710
// ============================================================

void Unwind_140e1b710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1b730 @ 140e1b730
// ============================================================

void Unwind_140e1b730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1b750 @ 140e1b750
// ============================================================

void Unwind_140e1b750(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b770 @ 140e1b770
// ============================================================

void Unwind_140e1b770(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1b790 @ 140e1b790
// ============================================================

void Catch_140e1b790(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1b7c0 @ 140e1b7c0
// ============================================================

void Catch_140e1b7c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1b7f0 @ 140e1b7f0
// ============================================================

void Unwind_140e1b7f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1b810 @ 140e1b810
// ============================================================

void Unwind_140e1b810(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b830 @ 140e1b830
// ============================================================

void Unwind_140e1b830(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b850 @ 140e1b850
// ============================================================

void Unwind_140e1b850(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1b870 @ 140e1b870
// ============================================================

void Unwind_140e1b870(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b890 @ 140e1b890
// ============================================================

void Unwind_140e1b890(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b8b0 @ 140e1b8b0
// ============================================================

void Unwind_140e1b8b0(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b8d0 @ 140e1b8d0
// ============================================================

void Unwind_140e1b8d0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b8f0 @ 140e1b8f0
// ============================================================

void Unwind_140e1b8f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1b910 @ 140e1b910
// ============================================================

void Unwind_140e1b910(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1b930 @ 140e1b930
// ============================================================

void Unwind_140e1b930(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1b950 @ 140e1b950
// ============================================================

void Unwind_140e1b950(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1b970 @ 140e1b970
// ============================================================

void Unwind_140e1b970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b990 @ 140e1b990
// ============================================================

void Unwind_140e1b990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b9b0 @ 140e1b9b0
// ============================================================

void Unwind_140e1b9b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1b9d0 @ 140e1b9d0
// ============================================================

void Unwind_140e1b9d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1b9f0 @ 140e1b9f0
// ============================================================

void Unwind_140e1b9f0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ba10 @ 140e1ba10
// ============================================================

void Unwind_140e1ba10(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1ba30 @ 140e1ba30
// ============================================================

void Unwind_140e1ba30(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ba50 @ 140e1ba50
// ============================================================

void Unwind_140e1ba50(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ba70 @ 140e1ba70
// ============================================================

void Unwind_140e1ba70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1ba90 @ 140e1ba90
// ============================================================

void Unwind_140e1ba90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1bab0 @ 140e1bab0
// ============================================================

void Unwind_140e1bab0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1bad0 @ 140e1bad0
// ============================================================

void Unwind_140e1bad0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1baf0 @ 140e1baf0
// ============================================================

void Unwind_140e1baf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bb10 @ 140e1bb10
// ============================================================

void Unwind_140e1bb10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1bb30 @ 140e1bb30
// ============================================================

void Unwind_140e1bb30(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bb50 @ 140e1bb50
// ============================================================

void Unwind_140e1bb50(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bb70 @ 140e1bb70
// ============================================================

void Unwind_140e1bb70(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bb90 @ 140e1bb90
// ============================================================

void Unwind_140e1bb90(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bbb0 @ 140e1bbb0
// ============================================================

void Unwind_140e1bbb0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bbd0 @ 140e1bbd0
// ============================================================

void Unwind_140e1bbd0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1bbf0 @ 140e1bbf0
// ============================================================

void Unwind_140e1bbf0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bc10 @ 140e1bc10
// ============================================================

void Unwind_140e1bc10(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bc30 @ 140e1bc30
// ============================================================

void Unwind_140e1bc30(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1bc50 @ 140e1bc50
// ============================================================

void Unwind_140e1bc50(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140e1bc70 @ 140e1bc70
// ============================================================

undefined * Catch_140e1bc70(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e0320f;
}



// ============================================================
// Function: Catch@140e1bcb0 @ 140e1bcb0
// ============================================================

undefined * Catch_140e1bcb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e03370;
}



// ============================================================
// Function: Catch@140e1bcf0 @ 140e1bcf0
// ============================================================

undefined * Catch_140e1bcf0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e03390;
}



// ============================================================
// Function: Catch@140e1bd30 @ 140e1bd30
// ============================================================

undefined * Catch_140e1bd30(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e033ab;
}



// ============================================================
// Function: Catch@140e1bd70 @ 140e1bd70
// ============================================================

undefined * Catch_140e1bd70(void)

{
  log_InlineLogCATCH_ERROR("CAsynGuideMgr::CreatePlayer @%s,%d");
  return &DAT_140e03437;
}



// ============================================================
// Function: Catch@140e1bdb0 @ 140e1bdb0
// ============================================================

undefined * Catch_140e1bdb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e03609;
}



// ============================================================
// Function: Catch@140e1bdf0 @ 140e1bdf0
// ============================================================

undefined8 Catch_140e1bdf0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e03638;
}



// ============================================================
// Function: Catch@140e1be30 @ 140e1be30
// ============================================================

undefined8 Catch_140e1be30(void)

{
  log_InlineLogCATCH_ERROR("CAsynGuideMgr::LoadGrandStudent @%s,%d");
  return 0x140e03638;
}



// ============================================================
// Function: Catch@140e1be70 @ 140e1be70
// ============================================================

undefined * Catch_140e1be70(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e0387e;
}



// ============================================================
// Function: Catch@140e1beb0 @ 140e1beb0
// ============================================================

undefined * Catch_140e1beb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e038f1;
}



// ============================================================
// Function: Catch@140e1bef0 @ 140e1bef0
// ============================================================

undefined8 Catch_140e1bef0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e03922;
}



// ============================================================
// Function: Catch@140e1bf30 @ 140e1bf30
// ============================================================

undefined * Catch_140e1bf30(void)

{
  log_InlineLogCATCH_ERROR("CAsynGuideMgr::ProcessUserAsynLogin @%s,%d");
  return &DAT_140e03926;
}



// ============================================================
// Function: Unwind@140e1bf70 @ 140e1bf70
// ============================================================

void Unwind_140e1bf70(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140e1bf90 @ 140e1bf90
// ============================================================

void Unwind_140e1bf90(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1bfb0 @ 140e1bfb0
// ============================================================

void Unwind_140e1bfb0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1bfd0 @ 140e1bfd0
// ============================================================

void Unwind_140e1bfd0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1bff0 @ 140e1bff0
// ============================================================

void Unwind_140e1bff0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1c010 @ 140e1c010
// ============================================================

void Unwind_140e1c010(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1c030 @ 140e1c030
// ============================================================

void Unwind_140e1c030(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c050 @ 140e1c050
// ============================================================

void Unwind_140e1c050(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c070 @ 140e1c070
// ============================================================

void Unwind_140e1c070(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c090 @ 140e1c090
// ============================================================

void Unwind_140e1c090(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c0b0 @ 140e1c0b0
// ============================================================

void Unwind_140e1c0b0(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c0d0 @ 140e1c0d0
// ============================================================

void Unwind_140e1c0d0(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c0f0 @ 140e1c0f0
// ============================================================

void Unwind_140e1c0f0(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c110 @ 140e1c110
// ============================================================

void Unwind_140e1c110(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c130 @ 140e1c130
// ============================================================

void Unwind_140e1c130(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c150 @ 140e1c150
// ============================================================

void Unwind_140e1c150(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1c170 @ 140e1c170
// ============================================================

void Unwind_140e1c170(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c190 @ 140e1c190
// ============================================================

void Unwind_140e1c190(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c1b0 @ 140e1c1b0
// ============================================================

void Unwind_140e1c1b0(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c1d0 @ 140e1c1d0
// ============================================================

void Unwind_140e1c1d0(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c1f0 @ 140e1c1f0
// ============================================================

void Unwind_140e1c1f0(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c210 @ 140e1c210
// ============================================================

void Unwind_140e1c210(undefined8 param_1,longlong param_2)

{
  FUN_140e03f90(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c230 @ 140e1c230
// ============================================================

void Unwind_140e1c230(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c250 @ 140e1c250
// ============================================================

void Unwind_140e1c250(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c270 @ 140e1c270
// ============================================================

void Unwind_140e1c270(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c290 @ 140e1c290
// ============================================================

void Unwind_140e1c290(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c2b0 @ 140e1c2b0
// ============================================================

void Unwind_140e1c2b0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c2d0 @ 140e1c2d0
// ============================================================

void Unwind_140e1c2d0(undefined8 param_1,longlong param_2)

{
  FUN_140e04040((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140e1c2f0 @ 140e1c2f0
// ============================================================

void Unwind_140e1c2f0(undefined8 param_1,longlong param_2)

{
  tq::CMyCriticalSection::~CMyCriticalSection
            ((CMyCriticalSection *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c310 @ 140e1c310
// ============================================================

void Unwind_140e1c310(undefined8 param_1,longlong param_2)

{
  FUN_140e03f90(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c330 @ 140e1c330
// ============================================================

void Unwind_140e1c330(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c350 @ 140e1c350
// ============================================================

void Unwind_140e1c350(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c370 @ 140e1c370
// ============================================================

void Unwind_140e1c370(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c390 @ 140e1c390
// ============================================================

void Unwind_140e1c390(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c3b0 @ 140e1c3b0
// ============================================================

void Unwind_140e1c3b0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c3d0 @ 140e1c3d0
// ============================================================

void Unwind_140e1c3d0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1c3f0 @ 140e1c3f0
// ============================================================

void Unwind_140e1c3f0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c410 @ 140e1c410
// ============================================================

void Unwind_140e1c410(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c430 @ 140e1c430
// ============================================================

void Unwind_140e1c430(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c450 @ 140e1c450
// ============================================================

void Unwind_140e1c450(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c470 @ 140e1c470
// ============================================================

void Unwind_140e1c470(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c490 @ 140e1c490
// ============================================================

void Unwind_140e1c490(undefined8 param_1,longlong param_2)

{
  FUN_140e03f90(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c4b0 @ 140e1c4b0
// ============================================================

void Unwind_140e1c4b0(undefined8 param_1,longlong param_2)

{
  FUN_140e04040((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140e1c4d0 @ 140e1c4d0
// ============================================================

void Unwind_140e1c4d0(undefined8 param_1,longlong param_2)

{
  tq::CMyCriticalSection::~CMyCriticalSection
            ((CMyCriticalSection *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c4f0 @ 140e1c4f0
// ============================================================

void Unwind_140e1c4f0(undefined8 param_1,longlong param_2)

{
  FUN_140e04040((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140e1c510 @ 140e1c510
// ============================================================

void Unwind_140e1c510(undefined8 param_1,longlong param_2)

{
  tq::CMyCriticalSection::~CMyCriticalSection
            ((CMyCriticalSection *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c530 @ 140e1c530
// ============================================================

void Unwind_140e1c530(undefined8 param_1,longlong param_2)

{
  FUN_140e03f90(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c550 @ 140e1c550
// ============================================================

void Unwind_140e1c550(undefined8 param_1,longlong param_2)

{
  FUN_140e02dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c570 @ 140e1c570
// ============================================================

void Unwind_140e1c570(undefined8 param_1,longlong param_2)

{
  FUN_140e02210(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c590 @ 140e1c590
// ============================================================

void Unwind_140e1c590(undefined8 param_1,longlong param_2)

{
  FUN_140e02100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c5b0 @ 140e1c5b0
// ============================================================

void Unwind_140e1c5b0(undefined8 param_1,longlong param_2)

{
  FUN_140e01e80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c5d0 @ 140e1c5d0
// ============================================================

void Unwind_140e1c5d0(undefined8 param_1,longlong param_2)

{
  FUN_140e01c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c5f0 @ 140e1c5f0
// ============================================================

void Unwind_140e1c5f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c610 @ 140e1c610
// ============================================================

void Unwind_140e1c610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x20) + 8));
  return;
}



// ============================================================
// Function: Catch@140e1c630 @ 140e1c630
// ============================================================

undefined * Catch_140e1c630(void)

{
  return &DAT_140e0435e;
}



// ============================================================
// Function: Unwind@140e1c650 @ 140e1c650
// ============================================================

void Unwind_140e1c650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@140e1c670 @ 140e1c670
// ============================================================

void Unwind_140e1c670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@140e1c690 @ 140e1c690
// ============================================================

void Unwind_140e1c690(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1c6b0 @ 140e1c6b0
// ============================================================

void Unwind_140e1c6b0(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1c6d0 @ 140e1c6d0
// ============================================================

void Unwind_140e1c6d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c6f0 @ 140e1c6f0
// ============================================================

void Unwind_140e1c6f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c710 @ 140e1c710
// ============================================================

void Unwind_140e1c710(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1c730 @ 140e1c730
// ============================================================

void Unwind_140e1c730(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c750 @ 140e1c750
// ============================================================

void Unwind_140e1c750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c770 @ 140e1c770
// ============================================================

void Unwind_140e1c770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c790 @ 140e1c790
// ============================================================

void Unwind_140e1c790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1c7b0 @ 140e1c7b0
// ============================================================

void Unwind_140e1c7b0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c7d0 @ 140e1c7d0
// ============================================================

void Unwind_140e1c7d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c7f0 @ 140e1c7f0
// ============================================================

void Unwind_140e1c7f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c810 @ 140e1c810
// ============================================================

void Unwind_140e1c810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1c830 @ 140e1c830
// ============================================================

void Unwind_140e1c830(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1c850 @ 140e1c850
// ============================================================

void Unwind_140e1c850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c870 @ 140e1c870
// ============================================================

void Unwind_140e1c870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c890 @ 140e1c890
// ============================================================

void Unwind_140e1c890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c8b0 @ 140e1c8b0
// ============================================================

void Unwind_140e1c8b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c8d0 @ 140e1c8d0
// ============================================================

void Unwind_140e1c8d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c8f0 @ 140e1c8f0
// ============================================================

void Unwind_140e1c8f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c910 @ 140e1c910
// ============================================================

void Unwind_140e1c910(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c930 @ 140e1c930
// ============================================================

void Unwind_140e1c930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c950 @ 140e1c950
// ============================================================

void Unwind_140e1c950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c970 @ 140e1c970
// ============================================================

void Unwind_140e1c970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c990 @ 140e1c990
// ============================================================

void Unwind_140e1c990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c9b0 @ 140e1c9b0
// ============================================================

void Unwind_140e1c9b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e1c9d0 @ 140e1c9d0
// ============================================================

void Unwind_140e1c9d0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1c9f0 @ 140e1c9f0
// ============================================================

void Unwind_140e1c9f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1ca10 @ 140e1ca10
// ============================================================

void Unwind_140e1ca10(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1ca30 @ 140e1ca30
// ============================================================

void Catch_140e1ca30(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1ca50 @ 140e1ca50
// ============================================================

void Unwind_140e1ca50(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ca70 @ 140e1ca70
// ============================================================

void Unwind_140e1ca70(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ca90 @ 140e1ca90
// ============================================================

void Unwind_140e1ca90(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cab0 @ 140e1cab0
// ============================================================

void Unwind_140e1cab0(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cad0 @ 140e1cad0
// ============================================================

void Unwind_140e1cad0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1caf0 @ 140e1caf0
// ============================================================

void Unwind_140e1caf0(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cb10 @ 140e1cb10
// ============================================================

void Unwind_140e1cb10(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cb30 @ 140e1cb30
// ============================================================

void Unwind_140e1cb30(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1cb50 @ 140e1cb50
// ============================================================

void Catch_140e1cb50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1cb80 @ 140e1cb80
// ============================================================

void Unwind_140e1cb80(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1cba0 @ 140e1cba0
// ============================================================

void Catch_140e1cba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1cbd0 @ 140e1cbd0
// ============================================================

void Unwind_140e1cbd0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cbf0 @ 140e1cbf0
// ============================================================

void Unwind_140e1cbf0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1cc10 @ 140e1cc10
// ============================================================

void Catch_140e1cc10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1cc40 @ 140e1cc40
// ============================================================

void Unwind_140e1cc40(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Catch@140e1cc60 @ 140e1cc60
// ============================================================

void Catch_140e1cc60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1cc90 @ 140e1cc90
// ============================================================

void Catch_140e1cc90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1ccc0 @ 140e1ccc0
// ============================================================

void Catch_140e1ccc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1ccf0 @ 140e1ccf0
// ============================================================

void Unwind_140e1ccf0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cd10 @ 140e1cd10
// ============================================================

void Unwind_140e1cd10(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cd30 @ 140e1cd30
// ============================================================

void Unwind_140e1cd30(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cd50 @ 140e1cd50
// ============================================================

void Unwind_140e1cd50(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cd70 @ 140e1cd70
// ============================================================

void Unwind_140e1cd70(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cd90 @ 140e1cd90
// ============================================================

void Unwind_140e1cd90(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1cdb0 @ 140e1cdb0
// ============================================================

void Catch_140e1cdb0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1cdd0 @ 140e1cdd0
// ============================================================

void Unwind_140e1cdd0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cdf0 @ 140e1cdf0
// ============================================================

void Unwind_140e1cdf0(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ce10 @ 140e1ce10
// ============================================================

void Unwind_140e1ce10(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ce30 @ 140e1ce30
// ============================================================

void Unwind_140e1ce30(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ce50 @ 140e1ce50
// ============================================================

void Unwind_140e1ce50(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ce70 @ 140e1ce70
// ============================================================

void Unwind_140e1ce70(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ce90 @ 140e1ce90
// ============================================================

void Unwind_140e1ce90(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ceb0 @ 140e1ceb0
// ============================================================

void Unwind_140e1ceb0(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ced0 @ 140e1ced0
// ============================================================

void Unwind_140e1ced0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cef0 @ 140e1cef0
// ============================================================

void Unwind_140e1cef0(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cf10 @ 140e1cf10
// ============================================================

void Unwind_140e1cf10(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cf30 @ 140e1cf30
// ============================================================

void Unwind_140e1cf30(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cf50 @ 140e1cf50
// ============================================================

void Unwind_140e1cf50(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1cf70 @ 140e1cf70
// ============================================================

void Unwind_140e1cf70(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1cf90 @ 140e1cf90
// ============================================================

void Unwind_140e1cf90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1cfb0 @ 140e1cfb0
// ============================================================

void Unwind_140e1cfb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1cfd0 @ 140e1cfd0
// ============================================================

void Unwind_140e1cfd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1cff0 @ 140e1cff0
// ============================================================

void Unwind_140e1cff0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d010 @ 140e1d010
// ============================================================

void Unwind_140e1d010(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1d030 @ 140e1d030
// ============================================================

void Unwind_140e1d030(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d050 @ 140e1d050
// ============================================================

void Unwind_140e1d050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1d070 @ 140e1d070
// ============================================================

void Unwind_140e1d070(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d090 @ 140e1d090
// ============================================================

void Unwind_140e1d090(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d0b0 @ 140e1d0b0
// ============================================================

void Unwind_140e1d0b0(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d0d0 @ 140e1d0d0
// ============================================================

void Unwind_140e1d0d0(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d0f0 @ 140e1d0f0
// ============================================================

void Unwind_140e1d0f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d110 @ 140e1d110
// ============================================================

void Unwind_140e1d110(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d130 @ 140e1d130
// ============================================================

void Unwind_140e1d130(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d150 @ 140e1d150
// ============================================================

void Unwind_140e1d150(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d170 @ 140e1d170
// ============================================================

void Unwind_140e1d170(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d190 @ 140e1d190
// ============================================================

void Unwind_140e1d190(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d1b0 @ 140e1d1b0
// ============================================================

void Unwind_140e1d1b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d1d0 @ 140e1d1d0
// ============================================================

void Unwind_140e1d1d0(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d1f0 @ 140e1d1f0
// ============================================================

void Unwind_140e1d1f0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d210 @ 140e1d210
// ============================================================

void Unwind_140e1d210(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d230 @ 140e1d230
// ============================================================

void Unwind_140e1d230(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d250 @ 140e1d250
// ============================================================

void Unwind_140e1d250(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d270 @ 140e1d270
// ============================================================

void Unwind_140e1d270(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d290 @ 140e1d290
// ============================================================

void Unwind_140e1d290(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d2b0 @ 140e1d2b0
// ============================================================

void Unwind_140e1d2b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d2d0 @ 140e1d2d0
// ============================================================

void Unwind_140e1d2d0(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d2f0 @ 140e1d2f0
// ============================================================

void Unwind_140e1d2f0(undefined8 param_1,longlong param_2)

{
  FUN_140e074f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d310 @ 140e1d310
// ============================================================

void Unwind_140e1d310(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d330 @ 140e1d330
// ============================================================

void Unwind_140e1d330(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d350 @ 140e1d350
// ============================================================

void Unwind_140e1d350(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d370 @ 140e1d370
// ============================================================

void Unwind_140e1d370(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d390 @ 140e1d390
// ============================================================

void Unwind_140e1d390(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d3b0 @ 140e1d3b0
// ============================================================

void Unwind_140e1d3b0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d3d0 @ 140e1d3d0
// ============================================================

void Unwind_140e1d3d0(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d3f0 @ 140e1d3f0
// ============================================================

void Unwind_140e1d3f0(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d410 @ 140e1d410
// ============================================================

void Unwind_140e1d410(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d430 @ 140e1d430
// ============================================================

void Unwind_140e1d430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d450 @ 140e1d450
// ============================================================

void Unwind_140e1d450(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d470 @ 140e1d470
// ============================================================

void Unwind_140e1d470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1d490 @ 140e1d490
// ============================================================

void Unwind_140e1d490(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d4b0 @ 140e1d4b0
// ============================================================

void Unwind_140e1d4b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d4d0 @ 140e1d4d0
// ============================================================

void Unwind_140e1d4d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d4f0 @ 140e1d4f0
// ============================================================

void Unwind_140e1d4f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1d510 @ 140e1d510
// ============================================================

void Unwind_140e1d510(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d530 @ 140e1d530
// ============================================================

void Unwind_140e1d530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1d550 @ 140e1d550
// ============================================================

void Unwind_140e1d550(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d570 @ 140e1d570
// ============================================================

void Unwind_140e1d570(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1d590 @ 140e1d590
// ============================================================

void Unwind_140e1d590(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1d5b0 @ 140e1d5b0
// ============================================================

void Unwind_140e1d5b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d5d0 @ 140e1d5d0
// ============================================================

void Unwind_140e1d5d0(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d5f0 @ 140e1d5f0
// ============================================================

void Unwind_140e1d5f0(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d610 @ 140e1d610
// ============================================================

void Unwind_140e1d610(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d630 @ 140e1d630
// ============================================================

void Unwind_140e1d630(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d650 @ 140e1d650
// ============================================================

void Unwind_140e1d650(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d670 @ 140e1d670
// ============================================================

void Unwind_140e1d670(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d690 @ 140e1d690
// ============================================================

void Unwind_140e1d690(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d6b0 @ 140e1d6b0
// ============================================================

void Unwind_140e1d6b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d6d0 @ 140e1d6d0
// ============================================================

void Unwind_140e1d6d0(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d6f0 @ 140e1d6f0
// ============================================================

void Unwind_140e1d6f0(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d710 @ 140e1d710
// ============================================================

void Unwind_140e1d710(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1d730 @ 140e1d730
// ============================================================

void Unwind_140e1d730(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d750 @ 140e1d750
// ============================================================

void Unwind_140e1d750(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d770 @ 140e1d770
// ============================================================

void Unwind_140e1d770(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d790 @ 140e1d790
// ============================================================

void Unwind_140e1d790(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140e1d7b0 @ 140e1d7b0
// ============================================================

undefined * Catch_140e1d7b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e0b9da;
}



// ============================================================
// Function: Unwind@140e1d7f0 @ 140e1d7f0
// ============================================================

void Unwind_140e1d7f0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d810 @ 140e1d810
// ============================================================

void Unwind_140e1d810(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d830 @ 140e1d830
// ============================================================

void Unwind_140e1d830(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d850 @ 140e1d850
// ============================================================

void Unwind_140e1d850(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140e1d870 @ 140e1d870
// ============================================================

undefined * Catch_140e1d870(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e0bb4e;
}



// ============================================================
// Function: Unwind@140e1d8b0 @ 140e1d8b0
// ============================================================

void Unwind_140e1d8b0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d8d0 @ 140e1d8d0
// ============================================================

void Unwind_140e1d8d0(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140e1d8f0 @ 140e1d8f0
// ============================================================

undefined * Catch_140e1d8f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e0bb87;
}



// ============================================================
// Function: Unwind@140e1d930 @ 140e1d930
// ============================================================

void Unwind_140e1d930(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d950 @ 140e1d950
// ============================================================

void Unwind_140e1d950(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d970 @ 140e1d970
// ============================================================

void Unwind_140e1d970(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1d990 @ 140e1d990
// ============================================================

void Unwind_140e1d990(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d9b0 @ 140e1d9b0
// ============================================================

void Unwind_140e1d9b0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d9d0 @ 140e1d9d0
// ============================================================

void Unwind_140e1d9d0(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1d9f0 @ 140e1d9f0
// ============================================================

void Unwind_140e1d9f0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@140e1da10 @ 140e1da10
// ============================================================

void Unwind_140e1da10(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Catch@140e1da30 @ 140e1da30
// ============================================================

void Catch_140e1da30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1da60 @ 140e1da60
// ============================================================

void Unwind_140e1da60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1da80 @ 140e1da80
// ============================================================

void Unwind_140e1da80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1daa0 @ 140e1daa0
// ============================================================

void Unwind_140e1daa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1dac0 @ 140e1dac0
// ============================================================

void Unwind_140e1dac0(undefined8 param_1,longlong param_2)

{
  FUN_140e011c0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1dae0 @ 140e1dae0
// ============================================================

void Unwind_140e1dae0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1db00 @ 140e1db00
// ============================================================

void Unwind_140e1db00(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1db20 @ 140e1db20
// ============================================================

void Unwind_140e1db20(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1db40 @ 140e1db40
// ============================================================

void Unwind_140e1db40(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1db60 @ 140e1db60
// ============================================================

void Unwind_140e1db60(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1db80 @ 140e1db80
// ============================================================

void Unwind_140e1db80(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dba0 @ 140e1dba0
// ============================================================

void Unwind_140e1dba0(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dbc0 @ 140e1dbc0
// ============================================================

void Unwind_140e1dbc0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dbe0 @ 140e1dbe0
// ============================================================

void Unwind_140e1dbe0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dc00 @ 140e1dc00
// ============================================================

void Unwind_140e1dc00(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dc20 @ 140e1dc20
// ============================================================

void Unwind_140e1dc20(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dc40 @ 140e1dc40
// ============================================================

void Unwind_140e1dc40(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1dc60 @ 140e1dc60
// ============================================================

void Catch_140e1dc60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1dc90 @ 140e1dc90
// ============================================================

void Catch_140e1dc90(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1dcb0 @ 140e1dcb0
// ============================================================

void Unwind_140e1dcb0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1dcd0 @ 140e1dcd0
// ============================================================

void Unwind_140e1dcd0(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dcf0 @ 140e1dcf0
// ============================================================

void Unwind_140e1dcf0(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dd10 @ 140e1dd10
// ============================================================

void Unwind_140e1dd10(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dd30 @ 140e1dd30
// ============================================================

void Unwind_140e1dd30(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dd50 @ 140e1dd50
// ============================================================

void Unwind_140e1dd50(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1dd70 @ 140e1dd70
// ============================================================

void Unwind_140e1dd70(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dd90 @ 140e1dd90
// ============================================================

void Unwind_140e1dd90(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ddb0 @ 140e1ddb0
// ============================================================

void Unwind_140e1ddb0(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ddd0 @ 140e1ddd0
// ============================================================

void Unwind_140e1ddd0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1ddf0 @ 140e1ddf0
// ============================================================

void Catch_140e1ddf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1de20 @ 140e1de20
// ============================================================

void Catch_140e1de20(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1de40 @ 140e1de40
// ============================================================

void Unwind_140e1de40(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1de60 @ 140e1de60
// ============================================================

void Unwind_140e1de60(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1de80 @ 140e1de80
// ============================================================

void Unwind_140e1de80(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dea0 @ 140e1dea0
// ============================================================

void Unwind_140e1dea0(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dec0 @ 140e1dec0
// ============================================================

void Unwind_140e1dec0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1dee0 @ 140e1dee0
// ============================================================

void Unwind_140e1dee0(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1df00 @ 140e1df00
// ============================================================

void Unwind_140e1df00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1df20 @ 140e1df20
// ============================================================

void Unwind_140e1df20(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1df40 @ 140e1df40
// ============================================================

void Unwind_140e1df40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1df60 @ 140e1df60
// ============================================================

void Unwind_140e1df60(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Catch@140e1df80 @ 140e1df80
// ============================================================

undefined8 Catch_140e1df80(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::BetrayTutor, idActor=%u, idTarget=%u @%s,%d");
  return 0x140e0def3;
}



// ============================================================
// Function: Unwind@140e1dfd0 @ 140e1dfd0
// ============================================================

void Unwind_140e1dfd0(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1dff0 @ 140e1dff0
// ============================================================

void Unwind_140e1dff0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1e010 @ 140e1e010
// ============================================================

void Unwind_140e1e010(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@140e1e030 @ 140e1e030
// ============================================================

void Unwind_140e1e030(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Catch@140e1e050 @ 140e1e050
// ============================================================

undefined8 Catch_140e1e050(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ExpelStudent, idActor=%u, idTarget=%u @%s,%d");
  return 0x140e0e349;
}



// ============================================================
// Function: Unwind@140e1e0a0 @ 140e1e0a0
// ============================================================

void Unwind_140e1e0a0(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1e0c0 @ 140e1e0c0
// ============================================================

void Unwind_140e1e0c0(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@140e1e0e0 @ 140e1e0e0
// ============================================================

void Unwind_140e1e0e0(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(param_2 + 0x4c0));
  return;
}



// ============================================================
// Function: Unwind@140e1e100 @ 140e1e100
// ============================================================

void Unwind_140e1e100(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1e120 @ 140e1e120
// ============================================================

void Unwind_140e1e120(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Catch@140e1e140 @ 140e1e140
// ============================================================

undefined8 Catch_140e1e140(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::UpdateOnlineContribute, idTutor=%u, idStudent=%u @%s,%d");
  return 0x140e0f90b;
}



// ============================================================
// Function: Catch@140e1e190 @ 140e1e190
// ============================================================

undefined8 Catch_140e1e190(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::UpdateOnlineContribute @%s,%d");
  return 0x140e0f90d;
}



// ============================================================
// Function: Unwind@140e1e1d0 @ 140e1e1d0
// ============================================================

void Unwind_140e1e1d0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e1f0 @ 140e1e1f0
// ============================================================

void Unwind_140e1e1f0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e210 @ 140e1e210
// ============================================================

void Unwind_140e1e210(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e230 @ 140e1e230
// ============================================================

void Unwind_140e1e230(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e250 @ 140e1e250
// ============================================================

void Unwind_140e1e250(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e270 @ 140e1e270
// ============================================================

void Unwind_140e1e270(undefined8 param_1,longlong param_2)

{
  FUN_140e0d310(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e290 @ 140e1e290
// ============================================================

void Unwind_140e1e290(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e2b0 @ 140e1e2b0
// ============================================================

void Unwind_140e1e2b0(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e2d0 @ 140e1e2d0
// ============================================================

void Unwind_140e1e2d0(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e2f0 @ 140e1e2f0
// ============================================================

void Unwind_140e1e2f0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e310 @ 140e1e310
// ============================================================

void Unwind_140e1e310(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e330 @ 140e1e330
// ============================================================

void Unwind_140e1e330(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e350 @ 140e1e350
// ============================================================

void Unwind_140e1e350(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e370 @ 140e1e370
// ============================================================

void Unwind_140e1e370(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e390 @ 140e1e390
// ============================================================

void Unwind_140e1e390(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e3b0 @ 140e1e3b0
// ============================================================

void Unwind_140e1e3b0(undefined8 param_1,longlong param_2)

{
  FUN_140e074f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e3d0 @ 140e1e3d0
// ============================================================

void Unwind_140e1e3d0(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e3f0 @ 140e1e3f0
// ============================================================

void Unwind_140e1e3f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1e410 @ 140e1e410
// ============================================================

void Unwind_140e1e410(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e430 @ 140e1e430
// ============================================================

void Unwind_140e1e430(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e450 @ 140e1e450
// ============================================================

void Unwind_140e1e450(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e470 @ 140e1e470
// ============================================================

void Unwind_140e1e470(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e490 @ 140e1e490
// ============================================================

void Unwind_140e1e490(undefined8 param_1,longlong param_2)

{
  FUN_140e0d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e4b0 @ 140e1e4b0
// ============================================================

void Unwind_140e1e4b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1e4d0 @ 140e1e4d0
// ============================================================

void Unwind_140e1e4d0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e4f0 @ 140e1e4f0
// ============================================================

void Unwind_140e1e4f0(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e510 @ 140e1e510
// ============================================================

void Unwind_140e1e510(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e530 @ 140e1e530
// ============================================================

void Unwind_140e1e530(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e550 @ 140e1e550
// ============================================================

void Unwind_140e1e550(undefined8 param_1,longlong param_2)

{
  FUN_140e0d310(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e570 @ 140e1e570
// ============================================================

void Unwind_140e1e570(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1e590 @ 140e1e590
// ============================================================

void Unwind_140e1e590(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e5b0 @ 140e1e5b0
// ============================================================

void Unwind_140e1e5b0(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e5d0 @ 140e1e5d0
// ============================================================

void Unwind_140e1e5d0(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e5f0 @ 140e1e5f0
// ============================================================

void Unwind_140e1e5f0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e610 @ 140e1e610
// ============================================================

void Unwind_140e1e610(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1e630 @ 140e1e630
// ============================================================

void Catch_140e1e630(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@140e1e660 @ 140e1e660
// ============================================================

void Catch_140e1e660(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140e1e680 @ 140e1e680
// ============================================================

void Unwind_140e1e680(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb40(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e6a0 @ 140e1e6a0
// ============================================================

void Unwind_140e1e6a0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e6c0 @ 140e1e6c0
// ============================================================

void Unwind_140e1e6c0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e6e0 @ 140e1e6e0
// ============================================================

void Unwind_140e1e6e0(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e700 @ 140e1e700
// ============================================================

void Unwind_140e1e700(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e720 @ 140e1e720
// ============================================================

void Unwind_140e1e720(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e740 @ 140e1e740
// ============================================================

void Unwind_140e1e740(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb70(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e760 @ 140e1e760
// ============================================================

void Unwind_140e1e760(undefined8 param_1,longlong param_2)

{
  FUN_140e0d310(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e780 @ 140e1e780
// ============================================================

void Unwind_140e1e780(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e7a0 @ 140e1e7a0
// ============================================================

void Unwind_140e1e7a0(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e7c0 @ 140e1e7c0
// ============================================================

void Unwind_140e1e7c0(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e7e0 @ 140e1e7e0
// ============================================================

void Unwind_140e1e7e0(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e800 @ 140e1e800
// ============================================================

void Unwind_140e1e800(undefined8 param_1,longlong param_2)

{
  FUN_140e0fba0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e820 @ 140e1e820
// ============================================================

void Unwind_140e1e820(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e840 @ 140e1e840
// ============================================================

void Unwind_140e1e840(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e860 @ 140e1e860
// ============================================================

void Unwind_140e1e860(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e880 @ 140e1e880
// ============================================================

void Unwind_140e1e880(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e8a0 @ 140e1e8a0
// ============================================================

void Unwind_140e1e8a0(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1e8c0 @ 140e1e8c0
// ============================================================

void Unwind_140e1e8c0(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1e8e0 @ 140e1e8e0
// ============================================================

void Unwind_140e1e8e0(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140e1e900 @ 140e1e900
// ============================================================

void Unwind_140e1e900(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1e920 @ 140e1e920
// ============================================================

void Unwind_140e1e920(undefined8 param_1,longlong param_2)

{
  FUN_140e103e0((longlong *)(*(longlong *)(param_2 + 0xa0) + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1e950 @ 140e1e950
// ============================================================

void Unwind_140e1e950(undefined8 param_1,longlong param_2)

{
  FUN_140e10410((longlong *)(*(longlong *)(param_2 + 0xa0) + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1e980 @ 140e1e980
// ============================================================

void Unwind_140e1e980(undefined8 param_1,longlong param_2)

{
  FUN_140e10440((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x128));
  return;
}



// ============================================================
// Function: Unwind@140e1e9b0 @ 140e1e9b0
// ============================================================

void Unwind_140e1e9b0(undefined8 param_1,longlong param_2)

{
  FUN_140e10440((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x168));
  return;
}



// ============================================================
// Function: Catch@140e1e9e0 @ 140e1e9e0
// ============================================================

undefined * Catch_140e1e9e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e10652;
}



// ============================================================
// Function: Catch@140e1ea20 @ 140e1ea20
// ============================================================

undefined * Catch_140e1ea20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e1073b;
}



// ============================================================
// Function: Catch@140e1ea60 @ 140e1ea60
// ============================================================

undefined * Catch_140e1ea60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e10830;
}



// ============================================================
// Function: Catch@140e1eaa0 @ 140e1eaa0
// ============================================================

undefined * Catch_140e1eaa0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e108ea;
}



// ============================================================
// Function: Unwind@140e1eae0 @ 140e1eae0
// ============================================================

void Unwind_140e1eae0(undefined8 param_1,longlong param_2)

{
  FUN_140e0fba0(*(longlong **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eb00 @ 140e1eb00
// ============================================================

void Unwind_140e1eb00(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eb20 @ 140e1eb20
// ============================================================

void Unwind_140e1eb20(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eb40 @ 140e1eb40
// ============================================================

void Unwind_140e1eb40(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eb60 @ 140e1eb60
// ============================================================

void Unwind_140e1eb60(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eb80 @ 140e1eb80
// ============================================================

void Unwind_140e1eb80(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eba0 @ 140e1eba0
// ============================================================

void Unwind_140e1eba0(undefined8 param_1,longlong param_2)

{
  FUN_140e0fba0(*(longlong **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ebc0 @ 140e1ebc0
// ============================================================

void Unwind_140e1ebc0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ebe0 @ 140e1ebe0
// ============================================================

void Unwind_140e1ebe0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ec00 @ 140e1ec00
// ============================================================

void Unwind_140e1ec00(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ec20 @ 140e1ec20
// ============================================================

void Unwind_140e1ec20(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ec40 @ 140e1ec40
// ============================================================

void Unwind_140e1ec40(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ec60 @ 140e1ec60
// ============================================================

void Unwind_140e1ec60(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb70(*(longlong **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ec80 @ 140e1ec80
// ============================================================

void Unwind_140e1ec80(undefined8 param_1,longlong param_2)

{
  FUN_140e0d310(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eca0 @ 140e1eca0
// ============================================================

void Unwind_140e1eca0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ecc0 @ 140e1ecc0
// ============================================================

void Unwind_140e1ecc0(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ece0 @ 140e1ece0
// ============================================================

void Unwind_140e1ece0(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ed00 @ 140e1ed00
// ============================================================

void Unwind_140e1ed00(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ed20 @ 140e1ed20
// ============================================================

void Unwind_140e1ed20(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb40(*(longlong **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ed40 @ 140e1ed40
// ============================================================

void Unwind_140e1ed40(undefined8 param_1,longlong param_2)

{
  FUN_140e0d2f0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ed60 @ 140e1ed60
// ============================================================

void Unwind_140e1ed60(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ed80 @ 140e1ed80
// ============================================================

void Unwind_140e1ed80(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1eda0 @ 140e1eda0
// ============================================================

void Unwind_140e1eda0(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1edc0 @ 140e1edc0
// ============================================================

void Unwind_140e1edc0(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ede0 @ 140e1ede0
// ============================================================

void Unwind_140e1ede0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ee00 @ 140e1ee00
// ============================================================

void Unwind_140e1ee00(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ee20 @ 140e1ee20
// ============================================================

void Unwind_140e1ee20(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ee40 @ 140e1ee40
// ============================================================

void Unwind_140e1ee40(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1ee60 @ 140e1ee60
// ============================================================

void Unwind_140e1ee60(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Unwind@140e1ee80 @ 140e1ee80
// ============================================================

void Unwind_140e1ee80(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Unwind@140e1eea0 @ 140e1eea0
// ============================================================

void Unwind_140e1eea0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1eec0 @ 140e1eec0
// ============================================================

void Unwind_140e1eec0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1eee0 @ 140e1eee0
// ============================================================

void Unwind_140e1eee0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1ef00 @ 140e1ef00
// ============================================================

void Unwind_140e1ef00(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x480));
  return;
}



// ============================================================
// Function: Catch@140e1ef20 @ 140e1ef20
// ============================================================

undefined8 Catch_140e1ef20(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::TakeInStudent, idActor=%u, idTarget=%u @%s,%d");
  return 0x140e1100f;
}



// ============================================================
// Function: Unwind@140e1ef70 @ 140e1ef70
// ============================================================

void Unwind_140e1ef70(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1ef90 @ 140e1ef90
// ============================================================

void Unwind_140e1ef90(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1efb0 @ 140e1efb0
// ============================================================

void Unwind_140e1efb0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140e1efd0 @ 140e1efd0
// ============================================================

void Unwind_140e1efd0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x480));
  return;
}



// ============================================================
// Function: Catch@140e1eff0 @ 140e1eff0
// ============================================================

undefined8 Catch_140e1eff0(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::EnrollTutor, idActor=%u, idTarget=%u @%s,%d");
  return 0x140e11436;
}



// ============================================================
// Function: Unwind@140e1f040 @ 140e1f040
// ============================================================

void Unwind_140e1f040(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1f060 @ 140e1f060
// ============================================================

void Unwind_140e1f060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f080 @ 140e1f080
// ============================================================

void Unwind_140e1f080(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1f0a0 @ 140e1f0a0
// ============================================================

void Unwind_140e1f0a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1f0c0 @ 140e1f0c0
// ============================================================

void Unwind_140e1f0c0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Catch@140e1f0e0 @ 140e1f0e0
// ============================================================

undefined8 Catch_140e1f0e0(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ConfirmReStudent, idTutor=%u, idStudent=%u @%s,%d");
  return 0x140e1171a;
}



// ============================================================
// Function: Unwind@140e1f130 @ 140e1f130
// ============================================================

void Unwind_140e1f130(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x110));
  return;
}



// ============================================================
// Function: Unwind@140e1f150 @ 140e1f150
// ============================================================

void Unwind_140e1f150(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x110));
  return;
}



// ============================================================
// Function: Catch@140e1f170 @ 140e1f170
// ============================================================

undefined8 Catch_140e1f170(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::BattleEffectChange, idActor=%u @%s,%d");
  return 0x140e11b7c;
}



// ============================================================
// Function: Catch@140e1f1c0 @ 140e1f1c0
// ============================================================

undefined8 Catch_140e1f1c0(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ContributeAddLevel, idActor=%u @%s,%d");
  return 0x140e11d6a;
}



// ============================================================
// Function: Catch@140e1f200 @ 140e1f200
// ============================================================

undefined8 Catch_140e1f200(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ContributeGodTime, idActor=%u @%s,%d");
  return 0x140e11f8d;
}



// ============================================================
// Function: Unwind@140e1f240 @ 140e1f240
// ============================================================

void Unwind_140e1f240(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x150));
  return;
}



// ============================================================
// Function: Unwind@140e1f260 @ 140e1f260
// ============================================================

void Unwind_140e1f260(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x580));
  return;
}



// ============================================================
// Function: Unwind@140e1f280 @ 140e1f280
// ============================================================

void Unwind_140e1f280(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x120));
  return;
}



// ============================================================
// Function: Unwind@140e1f2a0 @ 140e1f2a0
// ============================================================

void Unwind_140e1f2a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}



// ============================================================
// Function: Catch@140e1f2c0 @ 140e1f2c0
// ============================================================

undefined * Catch_140e1f2c0(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ContributeExp part1, idActor=%u @%s,%d");
  return &DAT_140e1264d;
}



// ============================================================
// Function: Catch@140e1f300 @ 140e1f300
// ============================================================

undefined * Catch_140e1f300(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ContributeExp part2, idActor=%u @%s,%d");
  return &DAT_140e12779;
}



// ============================================================
// Function: Catch@140e1f340 @ 140e1f340
// ============================================================

undefined8 Catch_140e1f340(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ContributeExp part3, idActor=%u @%s,%d");
  return 0x140e12787;
}



// ============================================================
// Function: Unwind@140e1f380 @ 140e1f380
// ============================================================

void Unwind_140e1f380(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140e1f3a0 @ 140e1f3a0
// ============================================================

void Unwind_140e1f3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f3c0 @ 140e1f3c0
// ============================================================

void Unwind_140e1f3c0(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140e1f3e0 @ 140e1f3e0
// ============================================================

void Unwind_140e1f3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Catch@140e1f400 @ 140e1f400
// ============================================================

undefined8 Catch_140e1f400(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::Tutor, idTutor:%u, idStudent:%u @%s,%d");
  return 0x140e12964;
}



// ============================================================
// Function: Unwind@140e1f450 @ 140e1f450
// ============================================================

void Unwind_140e1f450(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f470 @ 140e1f470
// ============================================================

void Unwind_140e1f470(undefined8 param_1,longlong param_2)

{
  FUN_140e06570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f490 @ 140e1f490
// ============================================================

void Unwind_140e1f490(undefined8 param_1,longlong param_2)

{
  FUN_140e07510(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f4b0 @ 140e1f4b0
// ============================================================

void Unwind_140e1f4b0(undefined8 param_1,longlong param_2)

{
  FUN_140e08530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f4d0 @ 140e1f4d0
// ============================================================

void Unwind_140e1f4d0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f4f0 @ 140e1f4f0
// ============================================================

void Unwind_140e1f4f0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f510 @ 140e1f510
// ============================================================

void Unwind_140e1f510(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb40(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f530 @ 140e1f530
// ============================================================

void Unwind_140e1f530(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f550 @ 140e1f550
// ============================================================

void Unwind_140e1f550(undefined8 param_1,longlong param_2)

{
  FUN_140e065a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f570 @ 140e1f570
// ============================================================

void Unwind_140e1f570(undefined8 param_1,longlong param_2)

{
  FUN_140e07530(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f590 @ 140e1f590
// ============================================================

void Unwind_140e1f590(undefined8 param_1,longlong param_2)

{
  FUN_140e08550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f5b0 @ 140e1f5b0
// ============================================================

void Unwind_140e1f5b0(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f5d0 @ 140e1f5d0
// ============================================================

void Unwind_140e1f5d0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d310(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f5f0 @ 140e1f5f0
// ============================================================

void Unwind_140e1f5f0(undefined8 param_1,longlong param_2)

{
  FUN_140e0fb70(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f610 @ 140e1f610
// ============================================================

void Unwind_140e1f610(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f630 @ 140e1f630
// ============================================================

void Unwind_140e1f630(undefined8 param_1,longlong param_2)

{
  FUN_140e066d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f650 @ 140e1f650
// ============================================================

void Unwind_140e1f650(undefined8 param_1,longlong param_2)

{
  FUN_140e07550(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f670 @ 140e1f670
// ============================================================

void Unwind_140e1f670(undefined8 param_1,longlong param_2)

{
  FUN_140e08570(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f690 @ 140e1f690
// ============================================================

void Unwind_140e1f690(undefined8 param_1,longlong param_2)

{
  FUN_140e0a2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f6b0 @ 140e1f6b0
// ============================================================

void Unwind_140e1f6b0(undefined8 param_1,longlong param_2)

{
  FUN_140e0d330(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f6d0 @ 140e1f6d0
// ============================================================

void Unwind_140e1f6d0(undefined8 param_1,longlong param_2)

{
  FUN_140e0fba0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1f6f0 @ 140e1f6f0
// ============================================================

void Unwind_140e1f6f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f710 @ 140e1f710
// ============================================================

void Unwind_140e1f710(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f730 @ 140e1f730
// ============================================================

void Unwind_140e1f730(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f750 @ 140e1f750
// ============================================================

void Unwind_140e1f750(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e1f770 @ 140e1f770
// ============================================================

void Unwind_140e1f770(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f790 @ 140e1f790
// ============================================================

void Unwind_140e1f790(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f7b0 @ 140e1f7b0
// ============================================================

void Unwind_140e1f7b0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f7d0 @ 140e1f7d0
// ============================================================

void Unwind_140e1f7d0(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140e1f7f0 @ 140e1f7f0
// ============================================================

void Unwind_140e1f7f0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f810 @ 140e1f810
// ============================================================

void Unwind_140e1f810(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f830 @ 140e1f830
// ============================================================

void Unwind_140e1f830(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@140e1f850 @ 140e1f850
// ============================================================

void Unwind_140e1f850(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140e1f870 @ 140e1f870
// ============================================================

void Unwind_140e1f870(undefined8 param_1,longlong param_2)

{
  FUN_140e103e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0xa8));
  return;
}



// ============================================================
// Function: Unwind@140e1f890 @ 140e1f890
// ============================================================

void Unwind_140e1f890(undefined8 param_1,longlong param_2)

{
  FUN_140e10410((longlong *)(*(longlong *)(param_2 + 0x50) + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1f8b0 @ 140e1f8b0
// ============================================================

void Unwind_140e1f8b0(undefined8 param_1,longlong param_2)

{
  FUN_140e10440((longlong *)(*(longlong *)(param_2 + 0x50) + 0x128));
  return;
}



// ============================================================
// Function: Unwind@140e1f8d0 @ 140e1f8d0
// ============================================================

void Unwind_140e1f8d0(undefined8 param_1,longlong param_2)

{
  FUN_140e10440((longlong *)(*(longlong *)(param_2 + 0x50) + 0x168));
  return;
}



// ============================================================
// Function: Unwind@140e1f8f0 @ 140e1f8f0
// ============================================================

void Unwind_140e1f8f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1f910 @ 140e1f910
// ============================================================

undefined8 Catch_140e1f910(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ConfirmStudent, idTutor=%u, idTarget=%u @%s,%d");
  return 0x140e130d4;
}



// ============================================================
// Function: Catch@140e1f960 @ 140e1f960
// ============================================================

undefined8 Catch_140e1f960(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ConfirmStudent, idTutor=%u, idStudent=%u @%s,%d");
  return 0x140e13281;
}



// ============================================================
// Function: Unwind@140e1f9b0 @ 140e1f9b0
// ============================================================

void Unwind_140e1f9b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1f9e0 @ 140e1f9e0
// ============================================================

void Unwind_140e1f9e0(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fa00 @ 140e1fa00
// ============================================================

void Unwind_140e1fa00(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fa20 @ 140e1fa20
// ============================================================

void Unwind_140e1fa20(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fa40 @ 140e1fa40
// ============================================================

void Unwind_140e1fa40(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x200));
  return;
}



// ============================================================
// Function: Unwind@140e1fa60 @ 140e1fa60
// ============================================================

void Unwind_140e1fa60(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x630));
  return;
}



// ============================================================
// Function: Unwind@140e1fa80 @ 140e1fa80
// ============================================================

void Unwind_140e1fa80(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0xa60));
  return;
}



// ============================================================
// Function: Unwind@140e1faa0 @ 140e1faa0
// ============================================================

void Unwind_140e1faa0(undefined8 param_1,longlong param_2)

{
  FUN_140e04390((undefined8 *)(param_2 + 0x1c8));
  return;
}



// ============================================================
// Function: Unwind@140e1fac0 @ 140e1fac0
// ============================================================

void Unwind_140e1fac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1d0));
  return;
}



// ============================================================
// Function: Unwind@140e1fae0 @ 140e1fae0
// ============================================================

void Unwind_140e1fae0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fb00 @ 140e1fb00
// ============================================================

void Unwind_140e1fb00(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Catch@140e1fb20 @ 140e1fb20
// ============================================================

undefined8 Catch_140e1fb20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e14089;
}



// ============================================================
// Function: Catch@140e1fb60 @ 140e1fb60
// ============================================================

undefined8 Catch_140e1fb60(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::LoadConfigData, TableType:%d @%s,%d");
  return 0x140e14089;
}



// ============================================================
// Function: Unwind@140e1fba0 @ 140e1fba0
// ============================================================

void Unwind_140e1fba0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1fbd0 @ 140e1fbd0
// ============================================================

void Unwind_140e1fbd0(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fbf0 @ 140e1fbf0
// ============================================================

void Unwind_140e1fbf0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fc10 @ 140e1fc10
// ============================================================

void Unwind_140e1fc10(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1fc30 @ 140e1fc30
// ============================================================

void Unwind_140e1fc30(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1fc60 @ 140e1fc60
// ============================================================

void Unwind_140e1fc60(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1fc80 @ 140e1fc80
// ============================================================

void Unwind_140e1fc80(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1fca0 @ 140e1fca0
// ============================================================

void Unwind_140e1fca0(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e1fcc0 @ 140e1fcc0
// ============================================================

undefined * Catch_140e1fcc0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e14442;
}



// ============================================================
// Function: Unwind@140e1fd00 @ 140e1fd00
// ============================================================

void Unwind_140e1fd00(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1fd30 @ 140e1fd30
// ============================================================

void Unwind_140e1fd30(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140e1fd50 @ 140e1fd50
// ============================================================

void Unwind_140e1fd50(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140e1fd70 @ 140e1fd70
// ============================================================

void Unwind_140e1fd70(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140e1fd90 @ 140e1fd90
// ============================================================

void Unwind_140e1fd90(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1fdc0 @ 140e1fdc0
// ============================================================

void Unwind_140e1fdc0(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1fde0 @ 140e1fde0
// ============================================================

void Unwind_140e1fde0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1fe00 @ 140e1fe00
// ============================================================

void Unwind_140e1fe00(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Catch@140e1fe20 @ 140e1fe20
// ============================================================

undefined * Catch_140e1fe20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e14857;
}



// ============================================================
// Function: Unwind@140e1fe60 @ 140e1fe60
// ============================================================

void Unwind_140e1fe60(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1fe80 @ 140e1fe80
// ============================================================

void Unwind_140e1fe80(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Unwind@140e1fea0 @ 140e1fea0
// ============================================================

void Unwind_140e1fea0(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140e1fec0 @ 140e1fec0
// ============================================================

void Unwind_140e1fec0(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@140e1fee0 @ 140e1fee0
// ============================================================

void Unwind_140e1fee0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ff00 @ 140e1ff00
// ============================================================

void Unwind_140e1ff00(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e1ff20 @ 140e1ff20
// ============================================================

void Unwind_140e1ff20(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1ff40 @ 140e1ff40
// ============================================================

void Unwind_140e1ff40(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0xe8));
  return;
}



// ============================================================
// Function: Unwind@140e1ff60 @ 140e1ff60
// ============================================================

void Unwind_140e1ff60(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e1ff90 @ 140e1ff90
// ============================================================

void Unwind_140e1ff90(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1ffb0 @ 140e1ffb0
// ============================================================

void Unwind_140e1ffb0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1ffd0 @ 140e1ffd0
// ============================================================

void Unwind_140e1ffd0(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e1fff0 @ 140e1fff0
// ============================================================

void Unwind_140e1fff0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20010 @ 140e20010
// ============================================================

void Unwind_140e20010(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20030 @ 140e20030
// ============================================================

void Unwind_140e20030(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e20060 @ 140e20060
// ============================================================

void Unwind_140e20060(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20080 @ 140e20080
// ============================================================

void Unwind_140e20080(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e200a0 @ 140e200a0
// ============================================================

void Unwind_140e200a0(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e200c0 @ 140e200c0
// ============================================================

void Unwind_140e200c0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0x4f0));
  return;
}



// ============================================================
// Function: Unwind@140e200e0 @ 140e200e0
// ============================================================

void Unwind_140e200e0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xc0));
  return;
}



// ============================================================
// Function: Unwind@140e20100 @ 140e20100
// ============================================================

void Unwind_140e20100(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xc0));
  return;
}



// ============================================================
// Function: Unwind@140e20120 @ 140e20120
// ============================================================

void Unwind_140e20120(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xc0));
  return;
}



// ============================================================
// Function: Unwind@140e20140 @ 140e20140
// ============================================================

void Unwind_140e20140(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20160 @ 140e20160
// ============================================================

void Unwind_140e20160(undefined8 param_1,longlong param_2)

{
  FUN_140e06540((undefined8 *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e20180 @ 140e20180
// ============================================================

undefined8 Catch_140e20180(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::OnUserLogin, idActor:%u @%s,%d");
  return 0x140e1583f;
}



// ============================================================
// Function: Unwind@140e201c0 @ 140e201c0
// ============================================================

void Unwind_140e201c0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e201f0 @ 140e201f0
// ============================================================

void Unwind_140e201f0(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20210 @ 140e20210
// ============================================================

void Unwind_140e20210(undefined8 param_1,longlong param_2)

{
  FUN_140e074f0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20230 @ 140e20230
// ============================================================

void Unwind_140e20230(undefined8 param_1,longlong param_2)

{
  FUN_140e0fd10((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20250 @ 140e20250
// ============================================================

void Unwind_140e20250(undefined8 param_1,longlong param_2)

{
  FUN_140e074f0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20270 @ 140e20270
// ============================================================

void Unwind_140e20270(undefined8 param_1,longlong param_2)

{
  FUN_140e067a0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20290 @ 140e20290
// ============================================================

void Unwind_140e20290(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Unwind@140e202b0 @ 140e202b0
// ============================================================

void Unwind_140e202b0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Unwind@140e202d0 @ 140e202d0
// ============================================================

void Unwind_140e202d0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(param_2 + 0xa0));
  return;
}



// ============================================================
// Function: Catch@140e202f0 @ 140e202f0
// ============================================================

undefined8 Catch_140e202f0(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::ProcessDelUser, idActor=%u @%s,%d");
  return 0x140e16139;
}



// ============================================================
// Function: Unwind@140e20330 @ 140e20330
// ============================================================

void Unwind_140e20330(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Unwind@140e20350 @ 140e20350
// ============================================================

void Unwind_140e20350(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Catch@140e20370 @ 140e20370
// ============================================================

undefined8 Catch_140e20370(void)

{
  log_InlineLogCATCH_ERROR("CGuideMgr::OnUserLogout, idActor:%u @%s,%d");
  return 0x140e16558;
}



// ============================================================
// Function: Unwind@140e203c0 @ 140e203c0
// ============================================================

void Unwind_140e203c0(undefined8 param_1,longlong param_2)

{
  FUN_140e16580(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e203e0 @ 140e203e0
// ============================================================

void Unwind_140e203e0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140e20400 @ 140e20400
// ============================================================

void Unwind_140e20400(undefined8 param_1,longlong param_2)

{
  FUN_140e1a2d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}



// ============================================================
// Function: Unwind@140e20420 @ 140e20420
// ============================================================

void Unwind_140e20420(undefined8 param_1,longlong param_2)

{
  FUN_140e1a470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x850));
  return;
}



// ============================================================
// Function: Unwind@140e20440 @ 140e20440
// ============================================================

void Unwind_140e20440(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc68));
  return;
}



// ============================================================
// Function: Unwind@140e20460 @ 140e20460
// ============================================================

void Unwind_140e20460(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1090));
  return;
}



// ============================================================
// Function: Catch@140e20480 @ 140e20480
// ============================================================

undefined * Catch_140e20480(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140e1666d;
}



// ============================================================
// Function: Unwind@140e204c0 @ 140e204c0
// ============================================================

void Unwind_140e204c0(undefined8 param_1,longlong param_2)

{
  FUN_140e16580(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e204e0 @ 140e204e0
// ============================================================

void Unwind_140e204e0(undefined8 param_1,longlong param_2)

{
  FUN_140e19ad0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140e20500 @ 140e20500
// ============================================================

void Unwind_140e20500(undefined8 param_1,longlong param_2)

{
  FUN_140e1a2d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}



// ============================================================
// Function: Unwind@140e20520 @ 140e20520
// ============================================================

void Unwind_140e20520(undefined8 param_1,longlong param_2)

{
  FUN_140e1a470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x850));
  return;
}



// ============================================================
// Function: Unwind@140e20540 @ 140e20540
// ============================================================

void Unwind_140e20540(undefined8 param_1,longlong param_2)

{
  FUN_140e19ee0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc68));
  return;
}



// ============================================================
// Function: Unwind@140e20560 @ 140e20560
// ============================================================

void Unwind_140e20560(undefined8 param_1,longlong param_2)

{
  FUN_140e197a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1090));
  return;
}



// ============================================================
// Function: Catch@140e20580 @ 140e20580
// ============================================================

undefined * Catch_140e20580(void)

{
  log_InlineLogCATCH_ERROR("Guide::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140e169ef;
}



// ============================================================
// Function: Unwind@140e205c0 @ 140e205c0
// ============================================================

void Unwind_140e205c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Catch@140e205e0 @ 140e205e0
// ============================================================

undefined8 Catch_140e205e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140e16a72;
}



// ============================================================
// Function: Unwind@140e20620 @ 140e20620
// ============================================================

void Unwind_140e20620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e20640 @ 140e20640
// ============================================================

void Unwind_140e20640(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e20660 @ 140e20660
// ============================================================

void Unwind_140e20660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e20680 @ 140e20680
// ============================================================

void Unwind_140e20680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48)
              );
  }
  return;
}



// ============================================================
// Function: Unwind@140e206b0 @ 140e206b0
// ============================================================

void Unwind_140e206b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140e206d0 @ 140e206d0
// ============================================================

void Unwind_140e206d0(void)

{
  DAT_140e339a0 = DAT_140e339a0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140e206f0 @ 140e206f0
// ============================================================

void Unwind_140e206f0(void)

{
  DAT_140e339a0 = DAT_140e339a0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140e20710 @ 140e20710
// ============================================================

void Unwind_140e20710(void)

{
  DAT_140e339a0 = DAT_140e339a0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140e20730 @ 140e20730
// ============================================================

void Unwind_140e20730(void)

{
  DAT_140e339a0 = DAT_140e339a0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140e20750 @ 140e20750
// ============================================================

void Unwind_140e20750(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140e20770 @ 140e20770
// ============================================================

void Unwind_140e20770(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20790 @ 140e20790
// ============================================================

void Unwind_140e20790(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e207b0 @ 140e207b0
// ============================================================

void Unwind_140e207b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e207d0 @ 140e207d0
// ============================================================

void Unwind_140e207d0(undefined8 param_1,longlong param_2)

{
  FUN_140e06540(*(undefined8 **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e207f0 @ 140e207f0
// ============================================================

void Unwind_140e207f0(undefined8 param_1,longlong param_2)

{
  FUN_140e074b0(*(undefined8 **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140e20810 @ 140e20810
// ============================================================

void Unwind_140e20810(undefined8 param_1,longlong param_2)

{
  FUN_140e09e50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@140e20830 @ 140e20830
// ============================================================

void Unwind_140e20830(void)

{
  DAT_140e339a0 = DAT_140e339a0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140e20850 @ 140e20850
// ============================================================

void Unwind_140e20850(undefined8 param_1,longlong param_2)

{
  FUN_140e17d90(*(void **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@140e20870 @ 140e20870
// ============================================================

undefined * Catch_140e20870(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e19035;
}



// ============================================================
// Function: Unwind@140e208b0 @ 140e208b0
// ============================================================

void Unwind_140e208b0(void)

{
  FUN_140e010d0();
  return;
}



// ============================================================
// Function: Unwind@140e208e0 @ 140e208e0
// ============================================================

void Unwind_140e208e0(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e20900 @ 140e20900
// ============================================================

void Unwind_140e20900(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e20920 @ 140e20920
// ============================================================

void Unwind_140e20920(undefined8 param_1,longlong param_2)

{
  FUN_140e08410((undefined8 *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Catch@140e20940 @ 140e20940
// ============================================================

undefined * Catch_140e20940(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e19292;
}



// ============================================================
// Function: Catch@140e20980 @ 140e20980
// ============================================================

undefined * Catch_140e20980(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e19393;
}



// ============================================================
// Function: Catch@140e209c0 @ 140e209c0
// ============================================================

undefined * Catch_140e209c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e194ac;
}



// ============================================================
// Function: Catch@140e20a00 @ 140e20a00
// ============================================================

undefined * Catch_140e20a00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140e195c5;
}



// ============================================================
// Function: Unwind@140e20a40 @ 140e20a40
// ============================================================

void Unwind_140e20a40(undefined8 param_1,longlong param_2)

{
  FUN_140e074d0((undefined8 *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e20a60 @ 140e20a60
// ============================================================

void Unwind_140e20a60(undefined8 param_1,longlong param_2)

{
  FUN_140e065e0((undefined8 *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140e20a80 @ 140e20a80
// ============================================================

void Unwind_140e20a80(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20aa0 @ 140e20aa0
// ============================================================

void Unwind_140e20aa0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20ac0 @ 140e20ac0
// ============================================================

void Unwind_140e20ac0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20ae0 @ 140e20ae0
// ============================================================

void Unwind_140e20ae0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Catch@140e20b00 @ 140e20b00
// ============================================================

undefined8 Catch_140e20b00(void)

{
  log_InlineLogCATCH_ERROR("Guide::Actor:%d,MsgType:%d, usAction=%d @%s,%d");
  return 0x140e199d0;
}



// ============================================================
// Function: Unwind@140e20b60 @ 140e20b60
// ============================================================

void Unwind_140e20b60(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20b80 @ 140e20b80
// ============================================================

void Unwind_140e20b80(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20ba0 @ 140e20ba0
// ============================================================

void Unwind_140e20ba0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20bc0 @ 140e20bc0
// ============================================================

void Unwind_140e20bc0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20be0 @ 140e20be0
// ============================================================

void Unwind_140e20be0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20c00 @ 140e20c00
// ============================================================

void Unwind_140e20c00(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Catch@140e20c20 @ 140e20c20
// ============================================================

undefined8 Catch_140e20c20(void)

{
  log_InlineLogCATCH_ERROR("Guide::Actor:%d,MsgType:%d @%s,%d");
  return 0x140e19d84;
}



// ============================================================
// Function: Unwind@140e20c70 @ 140e20c70
// ============================================================

void Unwind_140e20c70(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20c90 @ 140e20c90
// ============================================================

void Unwind_140e20c90(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20cb0 @ 140e20cb0
// ============================================================

void Unwind_140e20cb0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20cd0 @ 140e20cd0
// ============================================================

void Unwind_140e20cd0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20cf0 @ 140e20cf0
// ============================================================

void Unwind_140e20cf0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20d10 @ 140e20d10
// ============================================================

void Unwind_140e20d10(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Catch@140e20d30 @ 140e20d30
// ============================================================

undefined8 Catch_140e20d30(void)

{
  log_InlineLogCATCH_ERROR("Guide::Actor:%d,MsgType:%d @%s,%d");
  return 0x140e1a20b;
}



// ============================================================
// Function: Unwind@140e20d80 @ 140e20d80
// ============================================================

void Unwind_140e20d80(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20da0 @ 140e20da0
// ============================================================

void Unwind_140e20da0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@140e20dc0 @ 140e20dc0
// ============================================================

void Unwind_140e20dc0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20de0 @ 140e20de0
// ============================================================

void Unwind_140e20de0(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Catch@140e20e00 @ 140e20e00
// ============================================================

undefined8 Catch_140e20e00(void)

{
  log_InlineLogCATCH_ERROR("Guide::Actor:%d,MsgType:%d @%s,%d");
  return 0x140e1a3c8;
}



// ============================================================
// Function: Unwind@140e20e50 @ 140e20e50
// ============================================================

void Unwind_140e20e50(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20e70 @ 140e20e70
// ============================================================

void Unwind_140e20e70(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140e20e90 @ 140e20e90
// ============================================================

void Unwind_140e20e90(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Catch@140e20eb0 @ 140e20eb0
// ============================================================

undefined8 Catch_140e20eb0(void)

{
  log_InlineLogCATCH_ERROR("Guide::Actor:%d,MsgType:%d @%s,%d");
  return 0x140e1a568;
}



// ============================================================
// Function: Unwind@140e20f00 @ 140e20f00
// ============================================================

void Unwind_140e20f00(undefined8 param_1,longlong param_2)

{
  FUN_140e196b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: FUN_140e20f18 @ 140e20f18
// ============================================================

void FUN_140e20f18(void)

{
  _unlock(8);
  return;
}



// ============================================================
// Function: FUN_140e20f31 @ 140e20f31
// ============================================================

void FUN_140e20f31(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// ============================================================
// Function: FUN_140e20f61 @ 140e20f61
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e20f61(void)

{
  _DAT_140e33980 = 0xffffffff;
  return;
}



// ============================================================
// Function: filt$0 @ 140e20f7a
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
// Function: fin$0 @ 140e20fb9
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
// Function: FUN_140e20ff0 @ 140e20ff0
// ============================================================

bool FUN_140e20ff0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




// Total functions: 1232, failed: 0
