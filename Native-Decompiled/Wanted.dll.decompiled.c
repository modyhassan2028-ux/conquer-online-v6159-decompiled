// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: Wanted.dll

// ============================================================
// Function: FUN_141a41000 @ 141a41000
// ============================================================

void FUN_141a41000(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_141a41010 @ 141a41010
// ============================================================

undefined8 FUN_141a41010(void)

{
  return 0;
}



// ============================================================
// Function: FUN_141a41020 @ 141a41020
// ============================================================

undefined8 FUN_141a41020(void)

{
  return 0;
}



// ============================================================
// Function: FUN_141a41030 @ 141a41030
// ============================================================

undefined8 FUN_141a41030(void)

{
  return 0;
}



// ============================================================
// Function: FUN_141a41040 @ 141a41040
// ============================================================

undefined8 FUN_141a41040(void)

{
  return 0;
}



// ============================================================
// Function: FUN_141a41050 @ 141a41050
// ============================================================

undefined8 * FUN_141a41050(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a41080 @ 141a41080
// ============================================================

void FUN_141a41080(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return;
}



// ============================================================
// Function: FUN_141a410e0 @ 141a410e0
// ============================================================

void FUN_141a410e0(undefined8 *param_1)

{
  *param_1 = wanted::CModule::vftable;
  FUN_141a47990();
  FUN_141a4b280(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_141a41120 @ 141a41120
// ============================================================

void FUN_141a41120(void)

{
  return;
}



// ============================================================
// Function: FUN_141a41130 @ 141a41130
// ============================================================

ulonglong FUN_141a41130(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}



// ============================================================
// Function: FUN_141a41150 @ 141a41150
// ============================================================

bool FUN_141a41150(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x30))
                    (*(longlong **)(param_1 + 0x438),0x1f);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return false;
  }
  puVar2 = FUN_141a4b080();
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return false;
  }
  uVar3 = FUN_141a49b30((longlong)puVar2,lVar1);
  return (char)uVar3 != '\0';
}



// ============================================================
// Function: FUN_141a41200 @ 141a41200
// ============================================================

longlong FUN_141a41200(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) && (param_2[1] == 0x3f7)) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 8))();
    lVar2 = param_1 + 0x10;
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



// ============================================================
// Function: FUN_141a41260 @ 141a41260
// ============================================================

bool FUN_141a41260(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_141a4b080();
  if (puVar2 == (undefined8 *)0x0) {
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x438) + 8))(*(longlong **)(param_1 + 0x438),0x3f7,param_1)
  ;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
                    (*(longlong **)(param_1 + 0x438),0x1f,puVar2);
  return cVar1 != '\0';
}



// ============================================================
// Function: FUN_141a412c0 @ 141a412c0
// ============================================================

undefined8 FUN_141a412c0(void)

{
  return 1;
}



// ============================================================
// Function: FUN_141a412d0 @ 141a412d0
// ============================================================

undefined8 * FUN_141a412d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = wanted::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_141a4b200((CMsg *)(param_1 + 2));
  param_1[0x87] = param_2;
  return param_1;
}



// ============================================================
// Function: FUN_141a41330 @ 141a41330
// ============================================================

undefined8 * FUN_141a41330(undefined8 *param_1,uint param_2)

{
  *param_1 = wanted::CModule::vftable;
  FUN_141a47990();
  FUN_141a4b280(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a413a0 @ 141a413a0
// ============================================================

ulonglong FUN_141a413a0(longlong param_1,int param_2,ushort *param_3,ushort param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    uVar3 = 0xffffffff;
  }
  else {
    if (((param_3 != (ushort *)0x0) && (*param_3 <= param_4)) && (param_3[1] == 0x3f7)) {
      plVar1 = (longlong *)(param_1 + 0x10);
      cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        return (ulonglong)*(ushort *)(param_1 + 0x18);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// Function: ModuleCreate @ 141a41450
// ============================================================

longlong * ModuleCreate(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  
                    /* 0x1450  1  ModuleCreate */
  plVar2 = operator_new(0x440);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)wanted::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = param_2;
    FUN_141a4b200((CMsg *)(plVar2 + 2));
    plVar2[0x87] = param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141a41260((longlong)plVar2);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// ============================================================
// Function: FUN_141a415b0 @ 141a415b0
// ============================================================

exception * FUN_141a415b0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_141a415f0 @ 141a415f0
// ============================================================

void FUN_141a415f0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141a41610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141a41620 @ 141a41620
// ============================================================

exception * FUN_141a41620(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a41680 @ 141a41680
// ============================================================

void FUN_141a41680(void)

{
  return;
}



// ============================================================
// Function: FUN_141a41690 @ 141a41690
// ============================================================

exception *
FUN_141a41690(exception *param_1,
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
// Function: FUN_141a416e0 @ 141a416e0
// ============================================================

void FUN_141a416e0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141a41713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141a41720 @ 141a41720
// ============================================================

longlong FUN_141a41720(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}



// ============================================================
// Function: FUN_141a41740 @ 141a41740
// ============================================================

exception * FUN_141a41740(exception *param_1,uint param_2)

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
// Function: FUN_141a417a0 @ 141a417a0
// ============================================================

exception *
FUN_141a417a0(exception *param_1,
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
// Function: FUN_141a41800 @ 141a41800
// ============================================================

void FUN_141a41800(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141a4183d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141a41850 @ 141a41850
// ============================================================

exception * FUN_141a41850(exception *param_1,uint param_2)

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
// Function: FUN_141a418c0 @ 141a418c0
// ============================================================

undefined ** FUN_141a418c0(void)

{
  return &PTR_vftable_141a56070;
}



// ============================================================
// Function: FUN_141a418d0 @ 141a418d0
// ============================================================

longlong FUN_141a418d0(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
  return param_1;
}



// ============================================================
// Function: FUN_141a41910 @ 141a41910
// ============================================================

void FUN_141a41910(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000141a4193a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}



// ============================================================
// Function: FUN_141a41960 @ 141a41960
// ============================================================

undefined4 * FUN_141a41960(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 2));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xc));
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  return param_1;
}



// ============================================================
// Function: FUN_141a419c0 @ 141a419c0
// ============================================================

undefined4 * FUN_141a419c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 2));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xc));
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  return param_1;
}



// ============================================================
// Function: FUN_141a41a20 @ 141a41a20
// ============================================================

longlong FUN_141a41a20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}



// ============================================================
// Function: FUN_141a41a60 @ 141a41a60
// ============================================================

bool FUN_141a41a60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141a41ac0 @ 141a41ac0
// ============================================================

void FUN_141a41ac0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"deque<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a54e80);
}



// ============================================================
// Function: FUN_141a41b30 @ 141a41b30
// ============================================================

exception * FUN_141a41b30(exception *param_1,exception *param_2)

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
// Function: FUN_141a41bb0 @ 141a41bb0
// ============================================================

longlong FUN_141a41bb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}



// ============================================================
// Function: FUN_141a41bf0 @ 141a41bf0
// ============================================================

undefined8 FUN_141a41bf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  uVar5 = param_1[1];
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_141a41c31;
  }
  lVar4 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = lVar4;
  }
LAB_141a41c31:
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30)) <=
      (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar5) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar5 = uVar5 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar5 * 8);
}



// ============================================================
// Function: FUN_141a41ca0 @ 141a41ca0
// ============================================================

longlong * FUN_141a41ca0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_141a41cd0;
  }
  else {
LAB_141a41cd0:
    lVar4 = *plVar1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = lVar4;
    }
  }
  if ((ulonglong)(param_1[1] + param_2) <=
      (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= (ulonglong)(param_1[1] + param_2)) goto LAB_141a41d08;
  }
  _invalid_parameter_noinfo();
LAB_141a41d08:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}



// ============================================================
// Function: FUN_141a41d20 @ 141a41d20
// ============================================================

exception * FUN_141a41d20(exception *param_1,exception *param_2)

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
// Function: FUN_141a41da0 @ 141a41da0
// ============================================================

void FUN_141a41da0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x60)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_1 * 0x60);
  return;
}



// ============================================================
// Function: FUN_141a41e10 @ 141a41e10
// ============================================================

void FUN_141a41e10(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 0xc));
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
  }
  return;
}



// ============================================================
// Function: FUN_141a41e90 @ 141a41e90
// ============================================================

void FUN_141a41e90(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_141a41f20 @ 141a41f20
// ============================================================

void FUN_141a41f20(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_141a41f90 @ 141a41f90
// ============================================================

exception * FUN_141a41f90(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_141a41fc0 @ 141a41fc0
// ============================================================

void * FUN_141a41fc0(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)param_1 + 0x30));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a42050 @ 141a42050
// ============================================================

void * FUN_141a42050(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a420c0 @ 141a420c0
// ============================================================

undefined8 FUN_141a420c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  uVar5 = param_1[1];
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_141a42101;
  }
  lVar4 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = lVar4;
  }
LAB_141a42101:
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30)) <=
      (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar5) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar5 = uVar5 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar5 * 8);
}



// ============================================================
// Function: FUN_141a421e0 @ 141a421e0
// ============================================================

void FUN_141a421e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a421f0 @ 141a421f0
// ============================================================

void FUN_141a421f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x60)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_2 * 0x60);
  return;
}



// ============================================================
// Function: FUN_141a42260 @ 141a42260
// ============================================================

void FUN_141a42260(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 0xc));
    param_2[0x16] = param_3[0x16];
    param_2[0x17] = param_3[0x17];
  }
  return;
}



// ============================================================
// Function: FUN_141a422e0 @ 141a422e0
// ============================================================

longlong * FUN_141a422e0(longlong *param_1,longlong param_2)

{
  FUN_141a41ca0(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141a42300 @ 141a42300
// ============================================================

longlong * FUN_141a42300(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = param_3 + lVar2;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_141a42376;
  }
  _invalid_parameter_noinfo();
LAB_141a42376:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}



// ============================================================
// Function: FUN_141a423c0 @ 141a423c0
// ============================================================

void FUN_141a423c0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_141a42440 @ 141a42440
// ============================================================

longlong * FUN_141a42440(longlong *param_1,longlong param_2)

{
  FUN_141a41ca0(param_1,-param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141a42470 @ 141a42470
// ============================================================

void FUN_141a42470(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_141a424f0 @ 141a424f0
// ============================================================

void FUN_141a424f0(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000141a4251a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}



// ============================================================
// Function: FUN_141a425e0 @ 141a425e0
// ============================================================

longlong * FUN_141a425e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = param_3 + lVar2;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_141a42656;
  }
  _invalid_parameter_noinfo();
LAB_141a42656:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}



// ============================================================
// Function: FUN_141a42690 @ 141a42690
// ============================================================

void FUN_141a42690(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a426b0 @ 141a426b0
// ============================================================

longlong * FUN_141a426b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = lVar2 - param_3;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_141a42729;
  }
  _invalid_parameter_noinfo();
LAB_141a42729:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}



// ============================================================
// Function: FUN_141a42770 @ 141a42770
// ============================================================

undefined8 * FUN_141a42770(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[6])) ||
     ((ulonglong)(param_3[6] + param_3[7]) < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_141a427d0 @ 141a427d0
// ============================================================

undefined8 * FUN_141a427d0(undefined8 *param_1)

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
// Function: FUN_141a42810 @ 141a42810
// ============================================================

void FUN_141a42810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000141a4283a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  return;
}



// ============================================================
// Function: FUN_141a42850 @ 141a42850
// ============================================================

void * FUN_141a42850(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a42890 @ 141a42890
// ============================================================

longlong * FUN_141a42890(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2[1] != *(longlong *)(param_3 + 8)) {
    puVar1 = (undefined4 *)FUN_141a420c0(param_2);
    puVar2 = (undefined4 *)FUN_141a420c0(param_4);
    *puVar2 = *puVar1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 0xc));
    puVar2[0x16] = puVar1[0x16];
    puVar2[0x17] = puVar1[0x17];
    param_4[1] = param_4[1] + 1;
    param_2[1] = param_2[1] + 1;
  }
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return param_1;
}



// ============================================================
// Function: FUN_141a42940 @ 141a42940
// ============================================================

longlong * FUN_141a42940(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (*(longlong *)(param_2 + 8) != param_3[1]) {
    param_3[1] = param_3[1] + -1;
    puVar1 = (undefined4 *)FUN_141a420c0(param_3);
    param_4[1] = param_4[1] + -1;
    puVar2 = (undefined4 *)FUN_141a420c0(param_4);
    *puVar2 = *puVar1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 0xc));
    puVar2[0x16] = puVar1[0x16];
    puVar2[0x17] = puVar1[0x17];
  }
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return param_1;
}



// ============================================================
// Function: FUN_141a42a40 @ 141a42a40
// ============================================================

void FUN_141a42a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a42a70 @ 141a42a70
// ============================================================

undefined8 * FUN_141a42a70(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[6])) ||
     ((ulonglong)(param_3[6] + param_3[7]) < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}



// ============================================================
// Function: FUN_141a42ad0 @ 141a42ad0
// ============================================================

void FUN_141a42ad0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x30) * 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x30));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    plVar1 = (longlong *)(param_1 + 0x38);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



// ============================================================
// Function: FUN_141a42b40 @ 141a42b40
// ============================================================

void FUN_141a42b40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x30);
    if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
      uVar3 = uVar3 - *(ulonglong *)(param_1 + 0x28);
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x30));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    plVar1 = (longlong *)(param_1 + 0x38);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



// ============================================================
// Function: FUN_141a42bc0 @ 141a42bc0
// ============================================================

undefined8 * FUN_141a42bc0(undefined8 *param_1)

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
// Function: FUN_141a42c80 @ 141a42c80
// ============================================================

undefined8 * FUN_141a42c80(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[6];
  lVar2 = param_1[7];
  *param_2 = 0;
  if (uVar1 + lVar2 < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}



// ============================================================
// Function: FUN_141a42cd0 @ 141a42cd0
// ============================================================

undefined8 FUN_141a42cd0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[6];
  if (uVar4 + param_1[7] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  uVar4 = uVar4 + param_2;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30))) {
    lVar2 = lVar3;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x30) <= uVar4) goto LAB_141a42d5d;
  }
  _invalid_parameter_noinfo();
LAB_141a42d5d:
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar4) {
    _invalid_parameter_noinfo();
  }
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar4) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar4 = uVar4 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar4 * 8);
}



// ============================================================
// Function: FUN_141a42de0 @ 141a42de0
// ============================================================

undefined8 * FUN_141a42de0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[6];
  uVar1 = uVar2 + param_1[7];
  *param_2 = 0;
  if (uVar1 < uVar2) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}



// ============================================================
// Function: FUN_141a42e30 @ 141a42e30
// ============================================================

undefined8 * FUN_141a42e30(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (undefined8 *)0x0) || (uVar1 < (ulonglong)param_1[6])) ||
     ((ulonglong)(param_1[6] + param_1[7]) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}



// ============================================================
// Function: FUN_141a42e90 @ 141a42e90
// ============================================================

undefined8 FUN_141a42e90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[6];
  if (uVar4 + param_1[7] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar4) {
    _invalid_parameter_noinfo();
  }
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar4) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar4 = uVar4 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar4 * 8);
}



// ============================================================
// Function: FUN_141a42f40 @ 141a42f40
// ============================================================

undefined8 FUN_141a42f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[6] + param_1[7];
  if (uVar4 < (ulonglong)param_1[6]) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  uVar4 = uVar4 - 1;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30))) {
    lVar2 = lVar3;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x30) <= uVar4) goto LAB_141a42fc5;
  }
  _invalid_parameter_noinfo();
LAB_141a42fc5:
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar4) {
    _invalid_parameter_noinfo();
  }
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar4) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar4 = uVar4 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar4 * 8);
}



// ============================================================
// Function: FUN_141a43040 @ 141a43040
// ============================================================

void FUN_141a43040(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  while (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar2 = *(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x30);
      if (*(ulonglong *)(param_1 + 0x28) <= uVar2) {
        uVar2 = uVar2 - *(ulonglong *)(param_1 + 0x28);
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar2 * 8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x30));
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 8));
      plVar1 = (longlong *)(param_1 + 0x38);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8) != 0) {
      operator_delete(*(void **)(*(longlong *)(param_1 + 0x20) + lVar3 * 8));
    }
  }
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// ============================================================
// Function: FUN_141a43110 @ 141a43110
// ============================================================

undefined8 * FUN_141a43110(undefined8 *param_1)

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
// Function: FUN_141a431d0 @ 141a431d0
// ============================================================

undefined8 FUN_141a431d0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  CMySingleLock local_res18 [16];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56320);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    tq::CMySingleLock::~CMySingleLock(local_res18);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_141a42cd0((longlong *)(param_1 + 8),(longlong)param_2);
    tq::CMySingleLock::~CMySingleLock(local_res18);
  }
  return uVar1;
}



// ============================================================
// Function: FUN_141a43240 @ 141a43240
// ============================================================

undefined8 FUN_141a43240(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  CMySingleLock local_res18 [8];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56320);
  if (param_2 == 0) {
    tq::CMySingleLock::~CMySingleLock(local_res18);
    uVar4 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x40);
    uVar2 = uVar1;
    do {
      uVar2 = uVar2 - 1;
      if (uVar1 <= uVar2) {
        tq::CMySingleLock::~CMySingleLock(local_res18);
        return 0;
      }
      piVar3 = (int *)FUN_141a42cd0((longlong *)(param_1 + 8),uVar2);
    } while (*piVar3 != param_2);
    uVar4 = FUN_141a42cd0((longlong *)(param_1 + 8),uVar2);
    tq::CMySingleLock::~CMySingleLock(local_res18);
  }
  return uVar4;
}



// ============================================================
// Function: FUN_141a43300 @ 141a43300
// ============================================================

ulonglong FUN_141a43300(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong extraout_RAX;
  undefined8 uVar5;
  IStringManager *pIVar6;
  longlong lVar7;
  
  uVar2 = FUN_141a43240(param_1,param_2);
  if ((uVar2 != 0) && (param_2 != 0)) {
    puVar3 = FUN_141a4b080();
    plVar4 = (longlong *)FUN_141a479d0((longlong)puVar3);
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141a4f410);
      uVar2 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      if ((char)uVar5 != '\0') {
        pIVar6 = theInstance();
        if (*(ulonglong *)(uVar2 + 0x28) < 0x10) {
          lVar7 = uVar2 + 0x10;
        }
        else {
          lVar7 = *(longlong *)(uVar2 + 0x10);
        }
        lVar1 = *plVar4;
        uVar5 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_FOND_POLICEWANTED");
        uVar5 = (**(code **)(lVar1 + 0x50))(plVar4,param_3,2000,uVar5,lVar7);
      }
      uVar2 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a433f0 @ 141a433f0
// ============================================================

undefined8 * FUN_141a433f0(undefined8 *param_1)

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
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141a43450 @ 141a43450
// ============================================================

void FUN_141a43450(undefined8 *param_1)

{
  FUN_141a43040((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a43480 @ 141a43480
// ============================================================

void FUN_141a43480(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Dst_00;
  rsize_t rVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (0x2aaaaaaaaaaaaaa - uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_141a41ac0();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0x2aaaaaaaaaaaaaa - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30);
  _Dst_00 = (void *)FUN_141a423c0(param_1 + 0x10,uVar2 + param_2);
  lVar5 = uVar3 * 8;
  pvVar1 = (void *)(lVar5 + *(longlong *)(param_1 + 0x20));
  lVar6 = (*(longlong *)(param_1 + 0x28) * 8 - (longlong)pvVar1) + *(longlong *)(param_1 + 0x20) >>
          3;
  rVar4 = lVar6 * 8;
  _Dst = (void *)(rVar4 + lVar5 + (longlong)_Dst_00);
  if (lVar6 != 0) {
    memmove_s((void *)(lVar5 + (longlong)_Dst_00),rVar4,pvVar1,rVar4);
  }
  if (param_2 < uVar3) {
    lVar6 = (longlong)(param_2 * 8) >> 3;
    if (lVar6 != 0) {
      rVar4 = lVar6 << 3;
      memmove_s(_Dst,rVar4,*(void **)(param_1 + 0x20),rVar4);
    }
    pvVar1 = (void *)(*(longlong *)(param_1 + 0x20) + param_2 * 8);
    lVar5 = (lVar5 - (longlong)pvVar1) + *(longlong *)(param_1 + 0x20) >> 3;
    rVar4 = lVar5 * 8;
    if (lVar5 != 0) {
      memmove_s(_Dst_00,rVar4,pvVar1,rVar4);
    }
    if (param_2 != 0) {
      memset((void *)(rVar4 + (longlong)_Dst_00),0,param_2 << 3);
    }
  }
  else {
    rVar4 = (lVar5 >> 3) * 8;
    if (lVar5 >> 3 != 0) {
      memmove_s(_Dst,rVar4,*(void **)(param_1 + 0x20),rVar4);
    }
    if (param_2 - uVar3 != 0) {
      memset((void *)(rVar4 + (longlong)_Dst),0,(param_2 - uVar3) * 8);
    }
    if (uVar3 != 0) {
      memset(_Dst_00,0,uVar3 << 3);
    }
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_2;
  *(void **)(param_1 + 0x20) = _Dst_00;
  return;
}



// ============================================================
// Function: FUN_141a43680 @ 141a43680
// ============================================================

longlong * FUN_141a43680(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  FUN_141a425e0(param_4,param_1,*(longlong *)(param_3 + 8) - param_2[1]);
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)*param_4;
  }
  plVar5 = (longlong *)*plVar5;
  uVar9 = param_4[1];
  uVar1 = *(ulonglong *)(param_3 + 8);
  plVar2 = (longlong *)*param_2;
  for (uVar8 = param_2[1]; uVar8 != uVar1; uVar8 = uVar8 + 1) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if ((ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30)) <= uVar8) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    uVar7 = uVar8;
    if (*(ulonglong *)(lVar6 + 0x28) <= uVar8) {
      if (plVar2 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      uVar7 = uVar8 - *(longlong *)(lVar6 + 0x28);
    }
    if (plVar2 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    puVar3 = *(undefined4 **)(*(longlong *)(lVar6 + 0x20) + uVar7 * 8);
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    if ((ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30)) <= uVar9) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    uVar7 = uVar9;
    if (*(ulonglong *)(lVar6 + 0x28) <= uVar9) {
      if (plVar5 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar5;
      }
      uVar7 = uVar9 - *(longlong *)(lVar6 + 0x28);
    }
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    puVar4 = *(undefined4 **)(*(longlong *)(lVar6 + 0x20) + uVar7 * 8);
    *puVar4 = *puVar3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 0xc));
    uVar9 = uVar9 + 1;
    puVar4[0x16] = puVar3[0x16];
    puVar4[0x17] = puVar3[0x17];
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a43870 @ 141a43870
// ============================================================

longlong * FUN_141a43870(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  FUN_141a426b0(param_4,param_1,param_3[1] - *(longlong *)(param_2 + 8));
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)*param_4;
  }
  plVar5 = (longlong *)*plVar5;
  uVar9 = param_4[1];
  plVar1 = (longlong *)*param_3;
  uVar8 = param_3[1];
  uVar2 = *(ulonglong *)(param_2 + 8);
  while (uVar2 != uVar8) {
    uVar8 = uVar8 - 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30)) <= uVar8) {
      _invalid_parameter_noinfo();
    }
    if (plVar1 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    uVar7 = uVar8;
    if (*(ulonglong *)(lVar6 + 0x28) <= uVar8) {
      if (plVar1 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar1;
      }
      uVar7 = uVar8 - *(longlong *)(lVar6 + 0x28);
    }
    if (plVar1 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    uVar9 = uVar9 - 1;
    puVar3 = *(undefined4 **)(*(longlong *)(lVar6 + 0x20) + uVar7 * 8);
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    if ((ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30)) <= uVar9) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    uVar7 = uVar9;
    if (*(ulonglong *)(lVar6 + 0x28) <= uVar9) {
      if (plVar5 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar5;
      }
      uVar7 = uVar9 - *(longlong *)(lVar6 + 0x28);
    }
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    puVar4 = *(undefined4 **)(*(longlong *)(lVar6 + 0x20) + uVar7 * 8);
    *puVar4 = *puVar3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 0xc));
    puVar4[0x16] = puVar3[0x16];
    puVar4[0x17] = puVar3[0x17];
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a43a60 @ 141a43a60
// ============================================================

undefined8 * FUN_141a43a60(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = wanted::CPoliceWanted::vftable;
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 1);
    plVar2 = plVar1;
  }
  param_1[1] = plVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141a43ad0 @ 141a43ad0
// ============================================================

void FUN_141a43ad0(undefined8 *param_1)

{
  *param_1 = wanted::CPoliceWanted::vftable;
  FUN_141a43040((longlong)(param_1 + 1));
  operator_delete((void *)param_1[1]);
  return;
}



// ============================================================
// Function: FUN_141a43b10 @ 141a43b10
// ============================================================

void FUN_141a43b10(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 1U) {
    FUN_141a43480(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
    uVar3 = uVar3 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) == 0) {
    pvVar2 = operator_new(0x60);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) = pvVar2;
  }
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  }
  else {
    *puVar1 = *param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 0xc));
    puVar1[0x16] = param_2[0x16];
    puVar1[0x17] = param_2[0x17];
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  }
  return;
}



// ============================================================
// Function: FUN_141a43be0 @ 141a43be0
// ============================================================

void FUN_141a43be0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 1U) {
    FUN_141a43480(param_1,1);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  lVar3 = lVar3 + -1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8) == 0) {
    pvVar2 = operator_new(0x60);
    *(void **)(*(longlong *)(param_1 + 0x20) + lVar3 * 8) = pvVar2;
  }
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x20) + lVar3 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 2));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 0xc),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 0xc));
    puVar1[0x16] = param_2[0x16];
    puVar1[0x17] = param_2[0x17];
  }
  *(longlong *)(param_1 + 0x30) = lVar3;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}



// ============================================================
// Function: FUN_141a43ca0 @ 141a43ca0
// ============================================================

longlong * FUN_141a43ca0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *param_4;
  local_20 = param_4[1];
  plVar2 = (longlong *)0x0;
  plVar1 = plVar2;
  if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)*param_3;
  }
  local_18 = *plVar1;
  lStack_10 = param_3[1];
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)*param_2;
  }
  local_38 = *plVar2;
  uStack_30 = param_2[1];
  FUN_141a43680(param_1,&local_38,(longlong)&local_18,&local_28);
  return param_1;
}



// ============================================================
// Function: FUN_141a43d60 @ 141a43d60
// ============================================================

longlong * FUN_141a43d60(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *param_4;
  local_20 = param_4[1];
  plVar2 = (longlong *)0x0;
  plVar1 = plVar2;
  if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)*param_3;
  }
  local_18 = *plVar1;
  lStack_10 = param_3[1];
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)*param_2;
  }
  local_38 = *plVar2;
  uStack_30 = param_2[1];
  FUN_141a43870(param_1,(longlong)&local_38,&local_18,&local_28);
  return param_1;
}



// ============================================================
// Function: FUN_141a43e20 @ 141a43e20
// ============================================================

undefined8 * FUN_141a43e20(undefined8 *param_1,uint param_2)

{
  *param_1 = wanted::CPoliceWanted::vftable;
  FUN_141a43040((longlong)(param_1 + 1));
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a43e90 @ 141a43e90
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a43e90(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined1 local_118;
  longlong *local_108;
  ulonglong uStack_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong *local_e8;
  ulonglong uStack_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  longlong *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a0 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_b8 = 0xfffffffffffffffe;
  local_48 = DAT_141a56300 ^ (ulonglong)auStack_158;
  uVar6 = param_1[6];
  if (uVar6 + param_1[7] < uVar6) {
    _invalid_parameter_noinfo();
  }
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == uVar6) {
    FUN_141a43be0((longlong)param_1,param_4);
    uVar6 = param_1[6];
    *param_2 = 0;
    if ((uVar6 < (ulonglong)param_1[6]) || ((ulonglong)(param_1[6] + param_1[7]) < uVar6)) {
      _invalid_parameter_noinfo();
    }
    *param_2 = *param_1;
    param_2[1] = uVar6;
    return param_2;
  }
  uVar6 = param_1[6] + param_1[7];
  if (uVar6 < (ulonglong)param_1[6]) {
    _invalid_parameter_noinfo();
  }
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == uVar6) {
    FUN_141a43b10((longlong)param_1,param_4);
    uStack_d0 = param_1[6] + param_1[7];
    if (uStack_d0 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    local_d8 = (longlong *)*param_1;
    FUN_141a426b0((longlong *)&local_d8,param_2,1);
    return param_2;
  }
  uVar6 = param_1[6];
  if (uVar6 + param_1[7] < uVar6) {
    _invalid_parameter_noinfo();
  }
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  uVar6 = param_3[1] - uVar6;
  local_a8 = *param_4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_a0,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_4 + 2));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_78,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_4 + 0xc));
  local_50 = param_4[0x16];
  local_4c = param_4[0x17];
  if ((ulonglong)param_1[7] >> 1 <= uVar6) {
    puVar3 = (undefined4 *)FUN_141a42f40(param_1);
    FUN_141a43b10((longlong)param_1,puVar3);
    uVar7 = param_1[6];
    if (param_1[7] + uVar7 < uVar7) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*param_1;
    local_108 = plVar1;
    uStack_100 = uVar7;
    local_e8 = plVar1;
    uStack_e0 = uVar7;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    uVar7 = uVar7 + uVar6;
    if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar7) {
LAB_141a4433b:
      _invalid_parameter_noinfo();
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar1;
      }
      if (uVar7 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a4433b;
    }
    local_d8 = local_e8;
    uVar6 = param_1[6] + param_1[7];
    uStack_e0 = uVar7;
    uStack_d0 = uVar7;
    if (uVar6 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*param_1;
    local_108 = plVar1;
    uStack_100 = uVar6;
    local_f8 = plVar1;
    uStack_f0 = uVar6;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    uVar6 = uVar6 - 1;
    if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar6) {
LAB_141a443bd:
      _invalid_parameter_noinfo();
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar1;
      }
      if (uVar6 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a443bd;
    }
    uVar8 = param_1[6] + param_1[7];
    uStack_f0 = uVar6;
    if (uVar8 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*param_1;
    local_108 = plVar1;
    uStack_100 = uVar8;
    local_c8 = plVar1;
    uStack_c0 = uVar8;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    uVar8 = uVar8 - 2;
    if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar8) {
LAB_141a44435:
      _invalid_parameter_noinfo();
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar1;
      }
      if (uVar8 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a44435;
    }
    if (local_c8 == (longlong *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)*local_c8;
    }
    local_c8 = (longlong *)*puVar5;
    if (local_e8 == (longlong *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)*local_e8;
    }
    local_108 = (longlong *)*puVar5;
    local_128 = 0;
    local_130 = local_118;
    local_138 = local_118;
    uStack_100 = uVar7;
    uStack_c0 = uVar8;
    FUN_141a43870((longlong *)&local_e8,(longlong)&local_108,(longlong *)&local_c8,
                  (longlong *)&local_f8);
    goto LAB_141a444d2;
  }
  puVar3 = (undefined4 *)FUN_141a42e90(param_1);
  FUN_141a43be0((longlong)param_1,puVar3);
  uVar7 = param_1[6];
  if (param_1[7] + uVar7 < uVar7) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_e8 = plVar1;
  uStack_e0 = uVar7;
  local_d8 = plVar1;
  uStack_d0 = uVar7;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar7 = uVar7 + uVar6;
  if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar7) {
LAB_141a440d9:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (uVar7 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a440d9;
  }
  plVar1 = local_e8;
  local_d8 = local_e8;
  uVar6 = param_1[6];
  uStack_e0 = uVar7;
  uStack_d0 = uVar7;
  if (uVar6 + param_1[7] < uVar6) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_108 = plVar2;
  uStack_100 = uVar6;
  local_f8 = plVar2;
  uStack_f0 = uVar6;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar2;
  }
  uVar6 = uVar6 + 1;
  if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar6) {
LAB_141a4415b:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (uVar6 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a4415b;
  }
  plVar2 = local_e8;
  local_c8 = plVar1;
  uStack_100 = uVar6;
  uStack_c0 = uVar7;
  if (local_e8 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
  }
  else {
    lVar4 = *local_e8;
  }
  uVar7 = uVar7 + 1;
  if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar7) {
LAB_141a441ae:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (uVar7 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a441ae;
  }
  uVar6 = param_1[6];
  if (uVar6 + param_1[7] < uVar6) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_f8 = plVar1;
  uStack_f0 = uVar6;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar6 = uVar6 + 2;
  if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) < uVar6) {
LAB_141a4421e:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (uVar6 < *(ulonglong *)(lVar4 + 0x30)) goto LAB_141a4421e;
  }
  local_e8 = local_108;
  uStack_e0 = uStack_100;
  if (local_c8 == (longlong *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)*local_c8;
  }
  local_c8 = (longlong *)*puVar5;
  if (local_f8 == (longlong *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)*local_f8;
  }
  local_108 = (longlong *)*puVar5;
  local_128 = 0;
  local_130 = local_118;
  local_138 = local_118;
  uStack_100 = uVar6;
  uStack_c0 = uVar7;
  FUN_141a43680((longlong *)&local_f8,(longlong *)&local_108,(longlong)&local_c8,
                (longlong *)&local_e8);
LAB_141a444d2:
  uVar6 = uStack_d0;
  plVar1 = local_d8;
  if (local_d8 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
  }
  else {
    lVar4 = *local_d8;
  }
  if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) <= uVar6) {
    _invalid_parameter_noinfo();
  }
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar7 = uVar6;
  if (*(ulonglong *)(lVar4 + 0x28) <= uVar6) {
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    uVar7 = uVar6 - *(longlong *)(lVar4 + 0x28);
  }
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1;
  }
  puVar3 = *(undefined4 **)(*(longlong *)(lVar4 + 0x20) + uVar7 * 8);
  *puVar3 = local_a8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar3 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_a0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar3 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_78);
  puVar3[0x16] = local_50;
  puVar3[0x17] = local_4c;
  *param_2 = 0;
  if ((uVar6 < (ulonglong)param_1[6]) || ((ulonglong)(param_1[6] + param_1[7]) < uVar6)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a0);
  return param_2;
}



// ============================================================
// Function: FUN_141a44600 @ 141a44600
// ============================================================

longlong *
FUN_141a44600(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  longlong local_48 [2];
  
  local_68 = (longlong *)*param_3;
  uVar2 = param_3[1];
  if (((param_1 == (longlong *)0x0) || (uVar2 < (ulonglong)param_1[6])) ||
     ((ulonglong)(param_1[6] + param_1[7]) < uVar2)) {
    uStack_60 = uVar2;
    _invalid_parameter_noinfo();
  }
  plVar3 = (longlong *)*param_1;
  local_78 = (longlong *)*param_4;
  uVar6 = param_4[1];
  local_68 = plVar3;
  if ((uVar6 < (ulonglong)param_1[6]) ||
     (uStack_60 = uVar2, (ulonglong)(param_1[6] + param_1[7]) < uVar6)) {
    uStack_70 = uVar6;
    uStack_60 = uVar2;
    _invalid_parameter_noinfo();
  }
  plVar4 = (longlong *)*param_1;
  uVar5 = param_1[6];
  local_78 = plVar4;
  uStack_70 = uVar6;
  if (uVar5 + param_1[7] < uVar5) {
    _invalid_parameter_noinfo();
  }
  if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((plVar4 == (longlong *)0x0) || (plVar4 != plVar3)) {
    _invalid_parameter_noinfo();
  }
  lVar7 = uVar6 - uVar2;
  uVar1 = param_1[6] + param_1[7];
  if (uVar1 < (ulonglong)param_1[6]) {
    _invalid_parameter_noinfo();
  }
  if (((longlong *)*param_1 == (longlong *)0x0) || ((longlong *)*param_1 != plVar4)) {
    _invalid_parameter_noinfo();
  }
  if (uVar2 - uVar5 < uVar1 - uVar6) {
    uVar6 = param_1[6];
    if (uVar6 + param_1[7] < uVar6) {
      _invalid_parameter_noinfo();
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
    local_78 = (longlong *)0x0;
    local_58 = local_78;
    if (plVar3 != (longlong *)0x0) {
      local_58 = (longlong *)*plVar3;
    }
    local_58 = (longlong *)*local_58;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      local_78 = *(longlong **)*param_1;
    }
    local_78 = (longlong *)*local_78;
    uStack_70 = uVar6;
    uStack_50 = uVar2;
    FUN_141a43870(local_48,(longlong)&local_78,(longlong *)&local_58,(longlong *)&local_68);
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      if (param_1[7] != 0) {
        lVar8 = *(longlong *)(param_1[4] + param_1[6] * 8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar8 + 0x30)
                  );
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar8 + 8));
        param_1[6] = param_1[6] + 1;
        if ((ulonglong)param_1[5] <= (ulonglong)param_1[6]) {
          param_1[6] = 0;
        }
        plVar3 = param_1 + 7;
        *plVar3 = *plVar3 + -1;
        if (*plVar3 == 0) {
          param_1[6] = 0;
        }
      }
    }
  }
  else {
    uVar1 = param_1[6] + param_1[7];
    if (uVar1 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    local_58 = local_68;
    uStack_50 = uStack_60;
    local_68 = (longlong *)0x0;
    local_78 = local_68;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      local_78 = *(longlong **)*param_1;
    }
    local_78 = (longlong *)*local_78;
    if (plVar4 != (longlong *)0x0) {
      local_68 = (longlong *)*plVar4;
    }
    local_68 = (longlong *)*local_68;
    uStack_70 = uVar1;
    uStack_60 = uVar6;
    FUN_141a43680(local_48,(longlong *)&local_68,(longlong)&local_78,(longlong *)&local_58);
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      if (param_1[7] != 0) {
        uVar6 = param_1[6] + -1 + param_1[7];
        if ((ulonglong)param_1[5] <= uVar6) {
          uVar6 = uVar6 - param_1[5];
        }
        lVar8 = *(longlong *)(param_1[4] + uVar6 * 8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar8 + 0x30)
                  );
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar8 + 8));
        plVar3 = param_1 + 7;
        *plVar3 = *plVar3 + -1;
        if (*plVar3 == 0) {
          param_1[6] = 0;
        }
      }
    }
  }
  lVar7 = 0;
  uVar6 = param_1[6];
  if (param_1[7] + uVar6 < uVar6) {
    _invalid_parameter_noinfo();
  }
  plVar3 = (longlong *)*param_1;
  local_68 = plVar3;
  uStack_60 = uVar6;
  if (plVar3 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar8 = lVar7;
  }
  else {
    lVar8 = *plVar3;
  }
  uVar6 = (uVar2 - uVar5) + uVar6;
  if (uVar6 <= (ulonglong)(*(longlong *)(lVar8 + 0x38) + *(longlong *)(lVar8 + 0x30))) {
    if (plVar3 != (longlong *)0x0) {
      lVar7 = *plVar3;
    }
    if (*(ulonglong *)(lVar7 + 0x30) <= uVar6) goto LAB_141a449d0;
  }
  _invalid_parameter_noinfo();
LAB_141a449d0:
  *param_2 = (longlong)local_68;
  param_2[1] = uVar6;
  return param_2;
}



// ============================================================
// Function: FUN_141a44a10 @ 141a44a10
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a44a10(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong extraout_RAX_00;
  longlong lVar6;
  char *pcVar7;
  undefined8 extraout_RAX_01;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  ulonglong *local_c8;
  ulonglong uStack_c0;
  CMySingleLock local_b8 [8];
  undefined8 local_b0;
  longlong local_a8 [2];
  int local_98 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_90 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  undefined4 local_40;
  int local_3c;
  ulonglong local_38;
  
  local_b0 = 0xfffffffffffffffe;
  local_38 = DAT_141a56300 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    local_d8 = 0x27;
    log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","idUser",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\policewanted.cpp")
    ;
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    puVar4 = FUN_141a4b080();
    plVar5 = (longlong *)FUN_141a479d0((longlong)puVar4);
    if (plVar5 == (longlong *)0x0) {
      local_d8 = 0x2c;
      log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","pConsumer",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\policewanted.cpp"
                        );
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      lVar6 = FUN_141a43240(param_1,param_2);
      if (lVar6 == 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_90);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_68);
        local_98[0] = param_2;
        pcVar7 = (char *)(**(code **)(*plVar5 + 0x20))(plVar5,param_2);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (local_90,pcVar7);
        local_40 = (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
        local_3c = (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
        iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (local_68,"NULL");
        if ((iVar2 != 0) &&
           (pcVar7 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5,iVar2), pcVar7 != (char *)0x0)) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (local_68,pcVar7);
        }
        tq::CMySingleLock::CMySingleLock(local_b8,(ILockObj *)&DAT_141a56320);
        uVar3 = *(ulonglong *)(param_1 + 0x40);
        uVar10 = 0;
        uVar8 = uVar10;
        if (uVar3 != 0) {
          do {
            lVar6 = FUN_141a42cd0((longlong *)(param_1 + 8),uVar8);
            if (*(int *)(lVar6 + 0x5c) < local_3c) {
              uVar11 = *(ulonglong *)(param_1 + 0x38);
              if (uVar11 + *(longlong *)(param_1 + 0x40) < uVar11) {
                _invalid_parameter_noinfo();
              }
              puVar1 = *(ulonglong **)(param_1 + 8);
              local_c8 = puVar1;
              uStack_c0 = uVar11;
              if (puVar1 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar9 = uVar10;
              }
              else {
                uVar9 = *puVar1;
              }
              uVar11 = uVar11 + uVar8;
              if ((ulonglong)(*(longlong *)(uVar9 + 0x38) + *(longlong *)(uVar9 + 0x30)) < uVar11) {
LAB_141a44c3f:
                _invalid_parameter_noinfo();
              }
              else {
                if (puVar1 != (ulonglong *)0x0) {
                  uVar10 = *puVar1;
                }
                if (uVar11 < *(ulonglong *)(uVar10 + 0x30)) goto LAB_141a44c3f;
              }
              uStack_c0 = uVar11;
              FUN_141a43e90((longlong *)(param_1 + 8),local_a8,(longlong *)&local_c8,local_98);
              if (uVar8 < uVar3) goto LAB_141a44c81;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar3);
        }
        FUN_141a43b10(param_1 + 8,local_98);
LAB_141a44c81:
        tq::CMySingleLock::~CMySingleLock(local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_68);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_90);
        uVar3 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      }
    }
  }
  return uVar3;
}



// ============================================================
// Function: FUN_141a44ce0 @ 141a44ce0
// ============================================================

longlong * FUN_141a44ce0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *local_38;
  ulonglong uStack_30;
  longlong local_28;
  longlong local_20;
  
  plVar1 = (longlong *)*param_3;
  uStack_30 = param_3[1];
  lVar2 = 0;
  local_38 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar2;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar3 = uStack_30 + 1;
  if (uVar3 <= (ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x30) <= uVar3) goto LAB_141a44d5d;
  }
  _invalid_parameter_noinfo();
LAB_141a44d5d:
  local_28 = *param_3;
  local_20 = param_3[1];
  uStack_30 = uVar3;
  FUN_141a44600(param_1,param_2,&local_28,&local_38);
  return param_2;
}



// ============================================================
// Function: FUN_141a44dc0 @ 141a44dc0
// ============================================================

undefined8 FUN_141a44dc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  int *piVar2;
  longlong lVar3;
  undefined8 extraout_RAX_00;
  ulonglong extraout_RAX_01;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  CMySingleLock local_res18 [16];
  longlong *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  longlong local_38 [4];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56320);
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","ID_NONE != idUser",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\policewanted.cpp",
                       99);
    tq::CMySingleLock::~CMySingleLock(local_res18);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x40);
  uVar6 = uVar5;
  do {
    uVar6 = uVar6 - 1;
    if (uVar5 <= uVar6) {
      tq::CMySingleLock::~CMySingleLock(local_res18);
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
    piVar2 = (int *)FUN_141a42cd0((longlong *)(param_1 + 8),uVar6);
  } while (*piVar2 != param_2);
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  if (uVar5 + *(longlong *)(param_1 + 0x40) < uVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  lVar4 = 0;
  local_58 = plVar1;
  uStack_50 = uVar5;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar1;
  }
  uVar5 = uVar5 + uVar6;
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x30)) < uVar5) {
LAB_141a44edb:
    _invalid_parameter_noinfo();
  }
  else {
    lVar3 = lVar4;
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (uVar5 < *(ulonglong *)(lVar3 + 0x30)) goto LAB_141a44edb;
  }
  plVar1 = local_58;
  local_48 = local_58;
  uStack_50 = uVar5;
  uStack_40 = uVar5;
  if (local_58 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *local_58;
  }
  uVar6 = uVar5 + 1;
  if (uVar6 <= (ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x30) <= uVar6) goto LAB_141a44f33;
  }
  _invalid_parameter_noinfo();
LAB_141a44f33:
  local_58 = plVar1;
  uStack_50 = uVar5;
  uStack_40 = uVar6;
  FUN_141a44600((longlong *)(param_1 + 8),local_38,&local_58,&local_48);
  tq::CMySingleLock::~CMySingleLock(local_res18);
  return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
}



// ============================================================
// Function: FUN_141a44fb0 @ 141a44fb0
// ============================================================

void FUN_141a44fb0(undefined8 *param_1)

{
  *param_1 = IGameData::vftable;
  return;
}



// ============================================================
// Function: FUN_141a44fc0 @ 141a44fc0
// ============================================================

undefined8 FUN_141a44fc0(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45000 @ 141a45000
// ============================================================

undefined8 FUN_141a45000(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45040 @ 141a45040
// ============================================================

undefined8 FUN_141a45040(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45080 @ 141a45080
// ============================================================

void FUN_141a45080(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return;
}



// ============================================================
// Function: FUN_141a450c0 @ 141a450c0
// ============================================================

undefined1 FUN_141a450c0(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45100 @ 141a45100
// ============================================================

undefined1 FUN_141a45100(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45140 @ 141a45140
// ============================================================

undefined1 FUN_141a45140(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45180 @ 141a45180
// ============================================================

undefined1 FUN_141a45180(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a451c0 @ 141a451c0
// ============================================================

undefined1 FUN_141a451c0(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45200 @ 141a45200
// ============================================================

undefined8 FUN_141a45200(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45240 @ 141a45240
// ============================================================

void FUN_141a45240(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return;
}



// ============================================================
// Function: FUN_141a45280 @ 141a45280
// ============================================================

void FUN_141a45280(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return;
}



// ============================================================
// Function: FUN_141a452c0 @ 141a452c0
// ============================================================

void FUN_141a452c0(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return;
}



// ============================================================
// Function: FUN_141a45300 @ 141a45300
// ============================================================

undefined1 FUN_141a45300(void)

{
  log_InlineLogERROR(&DAT_141a4f410);
  return 0;
}



// ============================================================
// Function: FUN_141a45340 @ 141a45340
// ============================================================

undefined8 * FUN_141a45340(undefined8 *param_1,byte param_2)

{
  *param_1 = IGameData::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a45370 @ 141a45370
// ============================================================

undefined8 * FUN_141a45370(void)

{
  return &DAT_141a56390;
}



// ============================================================
// Function: FUN_141a45390 @ 141a45390
// ============================================================

longlong FUN_141a45390(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}



// ============================================================
// Function: FUN_141a45400 @ 141a45400
// ============================================================

longlong FUN_141a45400(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_141a45440 @ 141a45440
// ============================================================

void FUN_141a45440(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a54e80);
}



// ============================================================
// Function: FUN_141a454d0 @ 141a454d0
// ============================================================

longlong * FUN_141a454d0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141a45500;
  }
  else {
LAB_141a45500:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141a45528;
  }
  _invalid_parameter_noinfo();
LAB_141a45528:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_141a45560 @ 141a45560
// ============================================================

bool FUN_141a45560(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141a455b0 @ 141a455b0
// ============================================================

void FUN_141a455b0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_141a45640 @ 141a45640
// ============================================================

void * FUN_141a45640(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a456f0 @ 141a456f0
// ============================================================

void * FUN_141a456f0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141a45740 @ 141a45740
// ============================================================

void * FUN_141a45740(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a457b0 @ 141a457b0
// ============================================================

undefined * FUN_141a457b0(void)

{
  if ((DAT_141a56358 & 1) == 0) {
    DAT_141a56358 = DAT_141a56358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a56350,"CWantedList");
    atexit((_func_5014 *)&LAB_141a4e990);
  }
  return &DAT_141a56350;
}



// ============================================================
// Function: FUN_141a45810 @ 141a45810
// ============================================================

void FUN_141a45810(__uint64 param_1)

{
  if ((DAT_141a56358 & 1) == 0) {
    DAT_141a56358 = DAT_141a56358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a56350,"CWantedList");
    atexit((_func_5014 *)&LAB_141a4e990);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a45865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141a56350,param_1);
  return;
}



// ============================================================
// Function: FUN_141a45870 @ 141a45870
// ============================================================

void FUN_141a45870(void *param_1)

{
  if ((DAT_141a56358 & 1) == 0) {
    DAT_141a56358 = DAT_141a56358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a56350,"CWantedList");
    atexit((_func_5014 *)&LAB_141a4e990);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a458c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141a56350,param_1);
  return;
}



// ============================================================
// Function: FUN_141a458d0 @ 141a458d0
// ============================================================

void FUN_141a458d0(void *param_1)

{
  if ((DAT_141a56358 & 1) == 0) {
    DAT_141a56358 = DAT_141a56358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a56350,"CWantedList");
    atexit((_func_5014 *)&LAB_141a4e990);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a45925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141a56350,param_1);
  return;
}



// ============================================================
// Function: FUN_141a45930 @ 141a45930
// ============================================================

longlong * FUN_141a45930(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  CMySingleLock local_res18 [16];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56360);
  if (param_2 == 0) {
    tq::CMySingleLock::~CMySingleLock(local_res18);
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= uVar3
           ) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar3 * 8);
        if ((plVar1 != (longlong *)0x0) &&
           (iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0), iVar2 == param_2)) {
          tq::CMySingleLock::~CMySingleLock(local_res18);
          return plVar1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    tq::CMySingleLock::~CMySingleLock(local_res18);
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_141a45a00 @ 141a45a00
// ============================================================

undefined8 FUN_141a45a00(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  CMySingleLock local_res18 [16];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56360);
  if ((param_2 < 0) ||
     (uVar1 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3,
     (int)uVar1 <= param_2)) {
    tq::CMySingleLock::~CMySingleLock(local_res18);
    uVar2 = 0;
  }
  else {
    if (uVar1 <= (ulonglong)(longlong)param_2) {
      _invalid_parameter_noinfo();
    }
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
    tq::CMySingleLock::~CMySingleLock(local_res18);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_141a45a80 @ 141a45a80
// ============================================================

longlong * FUN_141a45a80(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  CMySingleLock local_res10 [8];
  
  tq::CMySingleLock::CMySingleLock(local_res10,(ILockObj *)&DAT_141a56360);
  if (param_2 == (char *)0x0) {
    tq::CMySingleLock::~CMySingleLock(local_res10);
  }
  else {
    uVar7 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3;
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= uVar6
           ) {
          _invalid_parameter_noinfo();
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar6 * 8);
        if (plVar3 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_141a4f410,"IF_OK","pData",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\wantedlist.cpp"
                             ,0xc3);
        }
        else {
          lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1);
          pcVar5 = param_2;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[lVar4 - (longlong)param_2];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            tq::CMySingleLock::~CMySingleLock(local_res10);
            return plVar3;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    tq::CMySingleLock::~CMySingleLock(local_res10);
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_141a45bc0 @ 141a45bc0
// ============================================================

ulonglong FUN_141a45bc0(longlong param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *extraout_RAX;
  longlong *plVar4;
  undefined8 uVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar8 = param_3 & 0xffffffff;
  puVar2 = FUN_141a4b080();
  plVar3 = (longlong *)FUN_141a479d0((longlong)puVar2);
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    plVar3 = extraout_RAX;
  }
  else if (param_2 != 0) {
    plVar4 = FUN_141a45930(param_1,param_2,param_3,param_4);
    uVar5 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar1 = *plVar3;
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,1);
      uVar5 = (**(code **)(lVar1 + 0x48))(plVar3,uVar5);
      if ((char)uVar5 != '\0') {
        pIVar6 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,1);
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_FOND_WANTED");
        uVar5 = (**(code **)(lVar1 + 0x50))(plVar3,uVar8,2000,uVar7,uVar5);
      }
    }
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a45cd0 @ 141a45cd0
// ============================================================

void FUN_141a45cd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a45ce0 @ 141a45ce0
// ============================================================

longlong * FUN_141a45ce0(longlong *param_1,longlong param_2)

{
  FUN_141a454d0(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141a45d10 @ 141a45d10
// ============================================================

void FUN_141a45d10(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_141a45d80 @ 141a45d80
// ============================================================

bool FUN_141a45d80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141a45de0 @ 141a45de0
// ============================================================

undefined8 * FUN_141a45de0(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = IGameData::vftable;
  *param_1 = CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable;
  *(undefined1 *)(param_1 + 2) = param_2;
  param_1[1] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141a45e20 @ 141a45e20
// ============================================================

void FUN_141a45e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(char *)(param_1 + 2) == '\0',param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = IGameData::vftable;
  return;
}



// ============================================================
// Function: FUN_141a45e70 @ 141a45e70
// ============================================================

void FUN_141a45e70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                     (*(longlong **)(param_1 + 8),&DAT_141a5619c);
                    /* WARNING: Could not recover jumptable at 0x000141a45e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}



// ============================================================
// Function: FUN_141a45ea0 @ 141a45ea0
// ============================================================

void FUN_141a45ea0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000141a45eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}



// ============================================================
// Function: FUN_141a45ec0 @ 141a45ec0
// ============================================================

void FUN_141a45ec0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000141a45ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}



// ============================================================
// Function: FUN_141a45ee0 @ 141a45ee0
// ============================================================

void FUN_141a45ee0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a45ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
  return;
}



// ============================================================
// Function: FUN_141a45ef0 @ 141a45ef0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a45ef0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX_00;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_141a56300 ^ (ulonglong)auStack_458;
  if (param_3 == (longlong *)0x0) {
    local_438 = 0x5c;
    log_InlineLogERROR(&DAT_141a4f410);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (*(char *)(param_1 + 0x10) == '\0') {
    local_438 = param_2;
    sprintf(local_428,"SELECT * FROM %s WHERE %s=%lu LIMIT 1");
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,local_428,2);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if (lVar3 == 0) {
        uVar4 = (**(code **)(*param_3 + 0x20))(param_3,s_cq_wanted_141a56190);
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      *(undefined8 *)(param_1 + 8) = uVar4;
      (**(code **)*plVar2)(plVar2);
    }
    uVar1 = (ulonglong)(*(longlong *)(param_1 + 8) != 0);
  }
  else {
    local_438 = 0x5e;
    log_InlineLogERROR(&DAT_141a4f410);
    uVar1 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_141a46030 @ 141a46030
// ============================================================

bool FUN_141a46030(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    log_InlineLogERROR(&DAT_141a4f410);
    return false;
  }
  lVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  *(longlong *)(param_1 + 8) = lVar1;
  return lVar1 != 0;
}



// ============================================================
// Function: FUN_141a46090 @ 141a46090
// ============================================================

bool FUN_141a46090(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)InstanceGet();
  lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  *(longlong *)(param_1 + 8) = lVar2;
  return lVar2 != 0;
}



// ============================================================
// Function: FUN_141a460d0 @ 141a460d0
// ============================================================

bool FUN_141a460d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)InstanceGet();
  lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,s_cq_wanted_141a56190);
  *(longlong *)(param_1 + 8) = lVar2;
  return lVar2 != 0;
}



// ============================================================
// Function: FUN_141a46100 @ 141a46100
// ============================================================

ulonglong FUN_141a46100(longlong param_1)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a46146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return uVar1;
}



// ============================================================
// Function: FUN_141a46150 @ 141a46150
// ============================================================

void FUN_141a46150(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                     (*(longlong **)(param_1 + 8),&DAT_141a5619c);
                    /* WARNING: Could not recover jumptable at 0x000141a46181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}



// ============================================================
// Function: FUN_141a46190 @ 141a46190
// ============================================================

void FUN_141a46190(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// ============================================================
// Function: FUN_141a461b0 @ 141a461b0
// ============================================================

void FUN_141a461b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000141a461d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_141a461e0 @ 141a461e0
// ============================================================

void FUN_141a461e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000141a46201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_141a46210 @ 141a46210
// ============================================================

undefined8 FUN_141a46210(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141a4621f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
    return uVar1;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// ============================================================
// Function: FUN_141a46230 @ 141a46230
// ============================================================

undefined8 * FUN_141a46230(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(char *)(param_1 + 2) == '\0',param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = IGameData::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a462b0 @ 141a462b0
// ============================================================

void * FUN_141a462b0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141a462f0 @ 141a462f0
// ============================================================

void * FUN_141a462f0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a46360 @ 141a46360
// ============================================================

longlong * FUN_141a46360(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141a463ca;
  }
  _invalid_parameter_noinfo();
LAB_141a463ca:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_141a46400 @ 141a46400
// ============================================================

void FUN_141a46400(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a46420 @ 141a46420
// ============================================================

undefined8 FUN_141a46420(longlong param_1,ulonglong param_2)

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
      FUN_141a45440();
    }
    lVar1 = FUN_141a45d10(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_141a46490 @ 141a46490
// ============================================================

void FUN_141a46490(longlong param_1)

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
// Function: FUN_141a464c0 @ 141a464c0
// ============================================================

undefined8 * FUN_141a464c0(undefined8 *param_1)

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
// Function: FUN_141a46500 @ 141a46500
// ============================================================

undefined8 * FUN_141a46500(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141a46560 @ 141a46560
// ============================================================

undefined8 * FUN_141a46560(undefined1 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = IGameData::vftable;
    *puVar1 = CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable;
    *(undefined1 *)(puVar1 + 2) = param_1;
    puVar1[1] = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_141a465b0 @ 141a465b0
// ============================================================

void * FUN_141a465b0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a46620 @ 141a46620
// ============================================================

void * FUN_141a46620(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141a46660 @ 141a46660
// ============================================================

void * FUN_141a46660(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a466d0 @ 141a466d0
// ============================================================

void FUN_141a466d0(undefined8 *param_1)

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
// Function: FUN_141a46710 @ 141a46710
// ============================================================

undefined8 * FUN_141a46710(undefined8 *param_1)

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
// Function: FUN_141a46760 @ 141a46760
// ============================================================

undefined8 * FUN_141a46760(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141a467c0 @ 141a467c0
// ============================================================

void * FUN_141a467c0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141a46830 @ 141a46830
// ============================================================

void FUN_141a46830(undefined8 *param_1)

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
// Function: FUN_141a46870 @ 141a46870
// ============================================================

undefined8 * FUN_141a46870(undefined8 *param_1)

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
// Function: FUN_141a468d0 @ 141a468d0
// ============================================================

undefined8 * FUN_141a468d0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141a46920 @ 141a46920
// ============================================================

undefined8 * FUN_141a46920(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141a46970 @ 141a46970
// ============================================================

undefined8 * FUN_141a46970(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141a469d0 @ 141a469d0
// ============================================================

longlong * FUN_141a469d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
// Function: FUN_141a46ac0 @ 141a46ac0
// ============================================================

void * FUN_141a46ac0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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
// Function: FUN_141a46b30 @ 141a46b30
// ============================================================

undefined8 * FUN_141a46b30(undefined8 *param_1)

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
// Function: FUN_141a46b90 @ 141a46b90
// ============================================================

undefined8 * FUN_141a46b90(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  rsize_t _DstSize;
  
  _Src = (void *)((longlong)*(void **)(param_3 + 8) + 8);
  lVar3 = param_1[4] - (longlong)_Src >> 3;
  if (0 < lVar3) {
    _DstSize = lVar3 << 3;
    memmove_s(*(void **)(param_3 + 8),_DstSize,_Src,_DstSize);
  }
  param_1[4] = param_1[4] + -8;
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
// Function: FUN_141a46c20 @ 141a46c20
// ============================================================

void FUN_141a46c20(longlong *param_1)

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
// Function: FUN_141a46d10 @ 141a46d10
// ============================================================

undefined8 FUN_141a46d10(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar1 = param_1[4] - param_1[3] >> 3;
  uVar4 = uVar2;
  if (0 < (int)uVar1) {
    do {
      if (uVar1 <= uVar2) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1[3] + uVar2 * 8) + 0x58))();
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 1;
      uVar1 = param_1[4] - param_1[3] >> 3;
    } while ((int)uVar3 < (int)uVar1);
  }
  FUN_141a46c20(param_1);
  return 0;
}



// ============================================================
// Function: FUN_141a46d80 @ 141a46d80
// ============================================================

ulonglong FUN_141a46d80(longlong *param_1,int param_2)

{
  void *_Dst;
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  ulonglong extraout_RAX_01;
  longlong lVar4;
  rsize_t _DstSize;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  CMySingleLock local_res18 [8];
  
  tq::CMySingleLock::CMySingleLock(local_res18,(ILockObj *)&DAT_141a56360);
  if (param_2 == 0) {
    tq::CMySingleLock::~CMySingleLock(local_res18);
    uVar8 = extraout_RAX;
  }
  else {
    uVar6 = param_1[4] - param_1[3] >> 3;
    uVar8 = 0;
    uVar5 = uVar8;
    if (uVar6 != 0) {
      do {
        if ((ulonglong)(param_1[4] - param_1[3] >> 3) <= uVar5) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(param_1[3] + uVar5 * 8);
        if ((plVar1 != (longlong *)0x0) &&
           (iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0), iVar3 == param_2)) {
          (**(code **)(*plVar1 + 0x48))(plVar1,0);
          uVar6 = param_1[3];
          if ((ulonglong)param_1[4] < uVar6) {
            _invalid_parameter_noinfo();
          }
          puVar2 = (ulonglong *)*param_1;
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar7 = uVar8;
          }
          else {
            uVar7 = *puVar2;
          }
          _Dst = (void *)(uVar6 + uVar5 * 8);
          if (_Dst <= *(void **)(uVar7 + 0x20)) {
            if (puVar2 != (ulonglong *)0x0) {
              uVar8 = *puVar2;
            }
            if (*(void **)(uVar8 + 0x18) <= _Dst) goto LAB_141a46e83;
          }
          _invalid_parameter_noinfo();
LAB_141a46e83:
          lVar4 = param_1[4] - ((longlong)_Dst + 8) >> 3;
          if (0 < lVar4) {
            _DstSize = lVar4 << 3;
            memmove_s(_Dst,_DstSize,(void *)((longlong)_Dst + 8),_DstSize);
          }
          param_1[4] = param_1[4] + -8;
          if ((_Dst < (void *)param_1[3]) || ((void *)param_1[4] < _Dst)) {
            _invalid_parameter_noinfo();
          }
          tq::CMySingleLock::~CMySingleLock(local_res18);
          return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    tq::CMySingleLock::~CMySingleLock(local_res18);
    uVar8 = extraout_RAX_01;
  }
  return uVar8 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a46f00 @ 141a46f00
// ============================================================

void FUN_141a46f00(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141a45440();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141a45d10(param_1 + 0x10,uVar8);
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
      FUN_141a46ac0(param_1,*(void **)(param_2 + 8),lVar6,
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
      pvVar2 = FUN_141a46ac0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141a46620(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
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
// Function: FUN_141a471b0 @ 141a471b0
// ============================================================

longlong * FUN_141a471b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141a46f00((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141a472a4;
  }
  _invalid_parameter_noinfo();
LAB_141a472a4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_141a472e0 @ 141a472e0
// ============================================================

void FUN_141a472e0(longlong *param_1,undefined8 *param_2)

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
  FUN_141a471b0(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_141a47390 @ 141a47390
// ============================================================

void FUN_141a47390(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_res10;
  ulonglong *local_38;
  ulonglong uStack_30;
  longlong local_28 [2];
  
  local_res10 = param_2;
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return;
  }
  uVar8 = 0;
  uVar5 = param_1[4] - param_1[3] >> 3;
  uVar6 = uVar8;
  if (uVar5 != 0) {
    do {
      if ((ulonglong)(param_1[4] - param_1[3] >> 3) <= uVar6) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1[3] + uVar6 * 8);
      if (plVar1 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_141a4f410);
      }
      else {
        iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,6);
        iVar4 = (**(code **)(*param_2 + 0x10))(param_2,6);
        if (iVar3 <= iVar4) {
          uVar5 = param_1[3];
          if ((ulonglong)param_1[4] < uVar5) {
            _invalid_parameter_noinfo();
          }
          puVar2 = (ulonglong *)*param_1;
          local_38 = puVar2;
          uStack_30 = uVar5;
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar7 = uVar8;
          }
          else {
            uVar7 = *puVar2;
          }
          uVar5 = uVar5 + uVar6 * 8;
          if (uVar5 <= *(ulonglong *)(uVar7 + 0x20)) {
            if (puVar2 != (ulonglong *)0x0) {
              uVar8 = *puVar2;
            }
            if (*(ulonglong *)(uVar8 + 0x18) <= uVar5) goto LAB_141a47513;
          }
          _invalid_parameter_noinfo();
LAB_141a47513:
          uStack_30 = uVar5;
          FUN_141a471b0(param_1,local_28,(longlong *)&local_38,&local_res10);
          return;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  FUN_141a472e0(param_1,&local_res10);
  return;
}



// ============================================================
// Function: FUN_141a47540 @ 141a47540
// ============================================================

ulonglong FUN_141a47540(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong extraout_RAX;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,"SELECT * FROM cq_wanted",2);
    uVar6 = 0;
    if (plVar3 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
      plVar9 = (longlong *)0x0;
      if (0 < iVar2) {
        do {
          (**(code **)(*plVar3 + 0x30))(plVar3,(longlong)(int)plVar9);
          plVar4 = operator_new(0x18);
          plVar7 = (longlong *)0x0;
          if (plVar4 != (longlong *)0x0) {
            *plVar4 = (longlong)IGameData::vftable;
            *plVar4 = (longlong)CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable
            ;
            *(undefined1 *)(plVar4 + 2) = 0;
            plVar4[1] = 0;
            plVar7 = plVar4;
          }
          if (plVar7 == (longlong *)0x0) {
            uVar5 = (**(code **)*plVar3)(plVar3);
            return uVar5 & 0xffffffffffffff00;
          }
          cVar1 = (**(code **)(*plVar7 + 0x30))(plVar7,plVar3);
          if (cVar1 == '\0') {
            (**(code **)(*plVar7 + 0x58))(plVar7);
            uVar5 = (**(code **)*plVar3)(plVar3);
            return uVar5 & 0xffffffffffffff00;
          }
          FUN_141a47390(param_1,plVar7);
          uVar8 = (int)plVar9 + 1;
          iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
          plVar9 = (longlong *)(ulonglong)uVar8;
        } while ((int)uVar8 < iVar2);
      }
      uVar6 = (**(code **)*plVar3)(plVar3);
    }
    uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar5;
}



// ============================================================
// Function: FUN_141a476a0 @ 141a476a0
// ============================================================

ulonglong FUN_141a476a0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined8 extraout_RAX_02;
  ulonglong extraout_RAX_03;
  CMySingleLock local_res10 [8];
  
  tq::CMySingleLock::CMySingleLock(local_res10,(ILockObj *)&DAT_141a56360);
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","pszTarget && pszPayer",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\wantedlist.cpp",
                       0x69);
    tq::CMySingleLock::~CMySingleLock(local_res10);
    uVar6 = extraout_RAX_03 & 0xffffffffffffff00;
  }
  else {
    plVar5 = operator_new(0x18);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *plVar5 = (longlong)IGameData::vftable;
      *plVar5 = (longlong)CGameData<&char*_wanted::szWantedTable,&char*_wanted::szID>::vftable;
      *(undefined1 *)(plVar5 + 2) = 0;
      plVar5[1] = 0;
    }
    if (plVar5 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","pNewData",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\wantedlist.cpp",
                         0x7e);
      tq::CMySingleLock::~CMySingleLock(local_res10);
      uVar6 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
      if (cVar2 == '\0') {
        (**(code **)(*plVar5 + 0x58))(plVar5);
        tq::CMySingleLock::~CMySingleLock(local_res10);
        uVar6 = extraout_RAX_00 & 0xffffffffffffff00;
      }
      else {
        (**(code **)(*plVar5 + 0x68))(plVar5,1,param_2);
        (**(code **)(*plVar5 + 0x68))(plVar5,5,param_3);
        (**(code **)(*plVar5 + 0x60))(plVar5,6,param_4);
        lVar1 = *plVar5;
        uVar3 = tq::SysTimeGetEx();
        (**(code **)(lVar1 + 0x60))(plVar5,7,uVar3);
        iVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x58))(plVar5);
          tq::CMySingleLock::~CMySingleLock(local_res10);
          uVar6 = extraout_RAX_01 & 0xffffffffffffff00;
        }
        else {
          FUN_141a47390(param_1,plVar5);
          tq::CMySingleLock::~CMySingleLock(local_res10);
          uVar6 = CONCAT71((int7)((ulonglong)extraout_RAX_02 >> 8),1);
        }
      }
    }
  }
  return uVar6;
}



// ============================================================
// Function: FUN_141a47870 @ 141a47870
// ============================================================

exception *
FUN_141a47870(exception *param_1,
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
// Function: FUN_141a478d0 @ 141a478d0
// ============================================================

void FUN_141a478d0(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141a4790d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141a47920 @ 141a47920
// ============================================================

exception * FUN_141a47920(exception *param_1,uint param_2)

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
// Function: FUN_141a47990 @ 141a47990
// ============================================================

void FUN_141a47990(void)

{
  longlong *plVar1;
  
  plVar1 = FUN_141a45370();
  FUN_141a46d10(plVar1);
  if (DAT_141a563c0 != (longlong *)0x0) {
    (**(code **)(*DAT_141a563c0 + 0x140))(DAT_141a563c0,1);
  }
  return;
}



// ============================================================
// Function: FUN_141a479d0 @ 141a479d0
// ============================================================

undefined8 FUN_141a479d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// Function: FUN_141a479e0 @ 141a479e0
// ============================================================

bool FUN_141a479e0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a43240((longlong)ppuVar1,param_2);
  return lVar2 != 0;
}



// ============================================================
// Function: FUN_141a47a10 @ 141a47a10
// ============================================================

bool FUN_141a47a10(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a431d0((longlong)ppuVar1,param_2);
  return lVar2 != 0;
}



// ============================================================
// Function: FUN_141a47a40 @ 141a47a40
// ============================================================

ulonglong FUN_141a47a40(undefined8 param_1,int param_2)

{
  ulonglong extraout_RAX;
  undefined **ppuVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  ppuVar1 = FUN_141a418c0();
  uVar2 = FUN_141a44a10((longlong)ppuVar1,param_2);
  return uVar2;
}



// ============================================================
// Function: FUN_141a47aa0 @ 141a47aa0
// ============================================================

ulonglong FUN_141a47aa0(undefined8 param_1,int param_2)

{
  ulonglong extraout_RAX;
  undefined **ppuVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  ppuVar1 = FUN_141a418c0();
  uVar2 = FUN_141a44dc0((longlong)ppuVar1,param_2);
  return uVar2;
}



// ============================================================
// Function: FUN_141a47b00 @ 141a47b00
// ============================================================

ulonglong FUN_141a47b00(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  plVar1 = FUN_141a45370();
  uVar2 = FUN_141a476a0(plVar1,param_2,param_3,param_4);
  return uVar2;
}



// ============================================================
// Function: FUN_141a47bc0 @ 141a47bc0
// ============================================================

void FUN_141a47bc0(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_141a418c0();
  FUN_141a43300((longlong)ppuVar1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141a47bf0 @ 141a47bf0
// ============================================================

void FUN_141a47bf0(undefined8 param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a45370();
  FUN_141a45bc0((longlong)puVar1,param_2,(ulonglong)param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_141a47c20 @ 141a47c20
// ============================================================

void FUN_141a47c20(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = FUN_141a45370();
  FUN_141a46d80(plVar1,param_2);
  return;
}



// ============================================================
// Function: FUN_141a47c40 @ 141a47c40
// ============================================================

bool FUN_141a47c40(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  return plVar2 != (longlong *)0x0;
}



// ============================================================
// Function: FUN_141a47c70 @ 141a47c70
// ============================================================

bool FUN_141a47c70(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = FUN_141a45370();
  lVar2 = FUN_141a45a00((longlong)puVar1,param_2);
  return lVar2 != 0;
}



// ============================================================
// Function: FUN_141a47ca0 @ 141a47ca0
// ============================================================

undefined4 FUN_141a47ca0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a431d0((longlong)ppuVar1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)(lVar2 + 0x58);
}



// ============================================================
// Function: FUN_141a47d00 @ 141a47d00
// ============================================================

longlong FUN_141a47d00(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a431d0((longlong)ppuVar1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  if (0xf < *(ulonglong *)(lVar2 + 0x28)) {
    return *(longlong *)(lVar2 + 0x10);
  }
  return lVar2 + 0x10;
}



// ============================================================
// Function: FUN_141a47d70 @ 141a47d70
// ============================================================

longlong FUN_141a47d70(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a431d0((longlong)ppuVar1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  if (0xf < *(ulonglong *)(lVar2 + 0x50)) {
    return *(longlong *)(lVar2 + 0x38);
  }
  return lVar2 + 0x38;
}



// ============================================================
// Function: FUN_141a47de0 @ 141a47de0
// ============================================================

undefined4 FUN_141a47de0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = FUN_141a418c0();
  lVar2 = FUN_141a431d0((longlong)ppuVar1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)(lVar2 + 0x5c);
}



// ============================================================
// Function: FUN_141a47e40 @ 141a47e40
// ============================================================

undefined4 FUN_141a47e40(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  
  ppuVar1 = FUN_141a418c0();
  puVar2 = (undefined4 *)FUN_141a431d0((longlong)ppuVar1,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *puVar2;
}



// ============================================================
// Function: FUN_141a47ea0 @ 141a47ea0
// ============================================================

undefined8 FUN_141a47ea0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a47efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0);
  return uVar3;
}



// ============================================================
// Function: FUN_141a47f00 @ 141a47f00
// ============================================================

undefined8 FUN_141a47f00(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a47f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1);
  return uVar3;
}



// ============================================================
// Function: FUN_141a47f70 @ 141a47f70
// ============================================================

undefined8 FUN_141a47f70(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a47fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,6);
  return uVar3;
}



// ============================================================
// Function: FUN_141a47fe0 @ 141a47fe0
// ============================================================

ulonglong FUN_141a47fe0(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = param_3;
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,uVar4,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,6,param_3 & 0xffffffff);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}



// ============================================================
// Function: FUN_141a48060 @ 141a48060
// ============================================================

undefined8 FUN_141a48060(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a480be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,7);
  return uVar3;
}



// ============================================================
// Function: FUN_141a480d0 @ 141a480d0
// ============================================================

ulonglong FUN_141a480d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = FUN_141a45930((longlong)puVar1,param_2,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a48129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2);
  return uVar3;
}



// ============================================================
// Function: FUN_141a48130 @ 141a48130
// ============================================================

undefined8 FUN_141a48130(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = (longlong *)FUN_141a45a00((longlong)puVar1,param_2);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a4818b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0);
  return uVar3;
}



// ============================================================
// Function: FUN_141a48190 @ 141a48190
// ============================================================

undefined8 FUN_141a48190(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = (longlong *)FUN_141a45a00((longlong)puVar1,param_2);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a481ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1);
  return uVar3;
}



// ============================================================
// Function: FUN_141a48200 @ 141a48200
// ============================================================

undefined8 FUN_141a48200(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = FUN_141a45370();
  plVar2 = (longlong *)FUN_141a45a00((longlong)puVar1,param_2);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a4825e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,6);
  return uVar3;
}



// ============================================================
// Function: FUN_141a48270 @ 141a48270
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a48270(longlong *param_1,int param_2,int param_3,undefined4 param_4,
                       longlong param_5)

{
  char cVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar3;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  IStringManager *pIVar4;
  undefined8 uVar5;
  char *_Format;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  char local_438;
  undefined1 local_437 [1023];
  ulonglong local_38;
  
  local_38 = DAT_141a56300 ^ (ulonglong)auStack_468;
  if (param_1[1] == 0) {
    local_448 = CONCAT44(local_448._4_4_,0x228);
    log_InlineLogERROR(&DAT_141a4f410);
    uVar3 = extraout_RAX;
  }
  else {
    if (param_5 == 0) {
      local_448 = CONCAT44(local_448._4_4_,0x22b);
      log_InlineLogERROR(&DAT_141a4f410);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    uVar3 = (**(code **)(*param_1 + 0x108))();
    if (param_3 == (int)uVar3) {
      cVar1 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],param_2);
      if (cVar1 == '\0') {
        local_448 = CONCAT44(local_448._4_4_,0x231);
        log_InlineLogERROR(&DAT_141a4f410);
        return extraout_RAX_01 & 0xffffffffffffff00;
      }
      iVar2 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
      if (iVar2 != param_2) {
        local_448 = CONCAT44(local_448._4_4_,0x234);
        log_InlineLogERROR(&DAT_141a4f410);
        return extraout_RAX_02 & 0xffffffffffffff00;
      }
      (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
      (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],param_2,param_4);
      local_438 = '\0';
      memset(local_437,0,0x3ff);
      pIVar4 = theInstance();
      uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      _Format = (char *)(*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_HUNT");
      local_448 = uVar5;
      _snprintf(&local_438,0x3ff,_Format);
      uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x58))
                        ((longlong *)param_1[1],param_2,&local_438,1);
      return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a48450 @ 141a48450
// ============================================================

ulonglong FUN_141a48450(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  
  if (param_1[1] == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,param_3);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar3 & 0xffffffff);
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
    pcVar5 = (char *)(**(code **)(*param_1 + 0x80))(param_1,uVar3 & 0xffffffff);
    lVar4 = lVar4 - (longlong)pcVar5;
    do {
      cVar2 = *pcVar5;
      cVar1 = pcVar5[lVar4];
      if (cVar2 != cVar1) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (cVar2 == cVar1) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// Function: FUN_141a485b0 @ 141a485b0
// ============================================================

ulonglong FUN_141a485b0(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  if ((param_1[1] != 0) && (param_2 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_3);
    if (param_2 == (int)uVar2) {
LAB_141a48686:
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar2 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],param_3);
    if ((char)uVar2 == '\0') goto LAB_141a485f8;
    iVar1 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_3);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x108))(param_1,iVar1);
      if ((int)uVar2 == param_2) goto LAB_141a48686;
      goto LAB_141a485f8;
    }
  }
  log_InlineLogERROR(&DAT_141a4f410);
  uVar2 = extraout_RAX;
LAB_141a485f8:
  return uVar2 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a486c0 @ 141a486c0
// ============================================================

bool FUN_141a486c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141a487b0 @ 141a487b0
// ============================================================

longlong FUN_141a487b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141a487d2;
  }
  lVar2 = *plVar1;
LAB_141a487d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141a48920 @ 141a48920
// ============================================================

void FUN_141a48920(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_141a489d0 @ 141a489d0
// ============================================================

undefined * FUN_141a489d0(void)

{
  if ((DAT_141a563d0 & 1) == 0) {
    DAT_141a563d0 = DAT_141a563d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a563c8,"CWantedMgr");
    atexit((_func_5014 *)&LAB_141a4e9f0);
  }
  return &DAT_141a563c8;
}



// ============================================================
// Function: FUN_141a48a30 @ 141a48a30
// ============================================================

void FUN_141a48a30(__uint64 param_1)

{
  if ((DAT_141a563d0 & 1) == 0) {
    DAT_141a563d0 = DAT_141a563d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a563c8,"CWantedMgr");
    atexit((_func_5014 *)&LAB_141a4e9f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a48a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141a563c8,param_1);
  return;
}



// ============================================================
// Function: FUN_141a48a90 @ 141a48a90
// ============================================================

void FUN_141a48a90(void *param_1)

{
  if ((DAT_141a563d0 & 1) == 0) {
    DAT_141a563d0 = DAT_141a563d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a563c8,"CWantedMgr");
    atexit((_func_5014 *)&LAB_141a4e9f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a48ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141a563c8,param_1);
  return;
}



// ============================================================
// Function: FUN_141a48af0 @ 141a48af0
// ============================================================

void FUN_141a48af0(void *param_1)

{
  if ((DAT_141a563d0 & 1) == 0) {
    DAT_141a563d0 = DAT_141a563d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a563c8,"CWantedMgr");
    atexit((_func_5014 *)&LAB_141a4e9f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a48b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141a563c8,param_1);
  return;
}



// ============================================================
// Function: FUN_141a48b50 @ 141a48b50
// ============================================================

undefined * FUN_141a48b50(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_141a418c0();
  return ppuVar1[8];
}



// ============================================================
// Function: FUN_141a48b70 @ 141a48b70
// ============================================================

longlong FUN_141a48b70(void)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a45370();
  return (longlong)(puVar1[4] - puVar1[3]) >> 3;
}



// ============================================================
// Function: FUN_141a48b90 @ 141a48b90
// ============================================================

bool FUN_141a48b90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141a48c10 @ 141a48c10
// ============================================================

void FUN_141a48c10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a48c20 @ 141a48c20
// ============================================================

longlong FUN_141a48c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141a48c42;
  }
  lVar2 = *plVar1;
LAB_141a48c42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141a48cb0 @ 141a48cb0
// ============================================================

void FUN_141a48cb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141a48cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_141a48d60 @ 141a48d60
// ============================================================

void FUN_141a48d60(longlong param_1,longlong param_2)

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
// Function: FUN_141a48dc0 @ 141a48dc0
// ============================================================

void FUN_141a48dc0(longlong param_1,longlong *param_2)

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
// Function: FUN_141a48e20 @ 141a48e20
// ============================================================

void FUN_141a48e20(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141a48e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_141a48ec0 @ 141a48ec0
// ============================================================

void FUN_141a48ec0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a54f38);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_141a48f40 @ 141a48f40
// ============================================================

longlong FUN_141a48f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141a48f62;
  }
  lVar2 = *plVar1;
LAB_141a48f62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141a48f80 @ 141a48f80
// ============================================================

void FUN_141a48f80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a48fa0 @ 141a48fa0
// ============================================================

void FUN_141a48fa0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141a48fa0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_141a48ff0 @ 141a48ff0
// ============================================================

longlong * FUN_141a48ff0(longlong *param_1)

{
  FUN_141a48cb0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141a49020 @ 141a49020
// ============================================================

undefined8 * FUN_141a49020(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_141a49060 @ 141a49060
// ============================================================

longlong * FUN_141a49060(longlong *param_1)

{
  FUN_141a48e20(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141a49080 @ 141a49080
// ============================================================

void FUN_141a49080(void)

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
// Function: FUN_141a490e0 @ 141a490e0
// ============================================================

undefined8 *
FUN_141a490e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
// Function: FUN_141a49160 @ 141a49160
// ============================================================

longlong * FUN_141a49160(longlong *param_1)

{
  FUN_141a48e20(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141a49180 @ 141a49180
// ============================================================

longlong * FUN_141a49180(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141a48cb0(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_141a491b0 @ 141a491b0
// ============================================================

undefined8 * FUN_141a491b0(undefined8 *param_1)

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
// Function: FUN_141a491f0 @ 141a491f0
// ============================================================

void FUN_141a491f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141a48fa0(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_141a49270 @ 141a49270
// ============================================================

longlong * FUN_141a49270(longlong *param_1)

{
  FUN_141a48cb0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141a49290 @ 141a49290
// ============================================================

void FUN_141a49290(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a492b0 @ 141a492b0
// ============================================================

undefined8 * FUN_141a492b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_141a492f0 @ 141a492f0
// ============================================================

void FUN_141a492f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141a49080();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_141a49330 @ 141a49330
// ============================================================

undefined8 *
FUN_141a49330(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a54e80);
  }
  plVar5 = FUN_141a490e0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_141a49670 @ 141a49670
// ============================================================

undefined8 * FUN_141a49670(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141a496c0 @ 141a496c0
// ============================================================

undefined8 * FUN_141a496c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a54f98);
  }
  FUN_141a48cb0(param_3);
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
        goto LAB_141a498ac;
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
LAB_141a498ac:
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
            FUN_141a48d60((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141a48dc0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141a48d60((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141a48dc0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141a48d60((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141a48dc0((longlong)param_1,plVar7);
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
// Function: FUN_141a49a80 @ 141a49a80
// ============================================================

exception * FUN_141a49a80(exception *param_1,exception *param_2)

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
// Function: FUN_141a49ae0 @ 141a49ae0
// ============================================================

undefined8 * FUN_141a49ae0(undefined8 *param_1)

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
// Function: FUN_141a49b30 @ 141a49b30
// ============================================================

ulonglong FUN_141a49b30(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX_00;
  
  *(longlong *)(param_1 + 8) = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  FUN_141a491f0(param_1 + 0x10);
  plVar1 = (longlong *)InstanceGet();
  plVar2 = FUN_141a45370();
  uVar3 = FUN_141a47540(plVar2,plVar1);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}



// ============================================================
// Function: FUN_141a49c20 @ 141a49c20
// ============================================================

void FUN_141a49c20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a49c80 @ 141a49c80
// ============================================================

longlong * FUN_141a49c80(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141a49ddd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141a49e0c;
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
      goto LAB_141a49ddd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141a49330(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141a49e0c:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_141a49e30 @ 141a49e30
// ============================================================

longlong * FUN_141a49e30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141a491f0((longlong)param_1);
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
    FUN_141a496c0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_141a49fe0 @ 141a49fe0
// ============================================================

undefined8 * FUN_141a49fe0(undefined8 *param_1)

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
// Function: FUN_141a4a030 @ 141a4a030
// ============================================================

longlong * FUN_141a4a030(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_141a4a100 @ 141a4a100
// ============================================================

void FUN_141a4a100(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a4a120 @ 141a4a120
// ============================================================

longlong * FUN_141a4a120(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_141a49330(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141a49330(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
        return param_2;
      }
    }
    else {
      lVar4 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar4) {
        if (*(uint *)(*(undefined8 **)(param_1[6] + 0x10) + 3) < *param_4) {
          FUN_141a49330(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),
                        (undefined8 *)param_4);
          return param_2;
        }
      }
      else {
        uVar8 = *param_4;
        if (uVar8 < *(uint *)(param_3[1] + 0x18)) {
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
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x29) != '\0') {
              FUN_141a49330(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_141a49330(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
            return param_2;
          }
        }
        if (*(uint *)(param_3[1] + 0x18) < uVar8) {
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
          if ((plVar9 == plVar7) || (*param_4 < *(uint *)(plVar9 + 3))) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x29) != '\0') {
              FUN_141a49330(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_141a49330(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_141a49c80(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}



// ============================================================
// Function: FUN_141a4a440 @ 141a4a440
// ============================================================

void FUN_141a4a440(longlong *param_1)

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
  FUN_141a49e30(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_141a4a4b0 @ 141a4a4b0
// ============================================================

undefined8 * FUN_141a4a4b0(undefined8 *param_1)

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
// Function: FUN_141a4a500 @ 141a4a500
// ============================================================

undefined8 * FUN_141a4a500(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint local_48 [2];
  undefined8 local_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_2) {
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
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_48[0] = *param_2;
    local_40 = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_141a4a120(param_1,local_28,(longlong *)&local_38,local_48);
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
// Function: FUN_141a4a600 @ 141a4a600
// ============================================================

void FUN_141a4a600(longlong *param_1)

{
  FUN_141a4a440(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a4a630 @ 141a4a630
// ============================================================

undefined8 * FUN_141a4a630(undefined8 *param_1)

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
// Function: FUN_141a4a680 @ 141a4a680
// ============================================================

void FUN_141a4a680(longlong *param_1)

{
  FUN_141a4a440(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141a4a6b0 @ 141a4a6b0
// ============================================================

void FUN_141a4a6b0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28 [2];
  
  *param_1 = wanted::CWantedMgr::vftable;
  plVar5 = *(longlong **)param_1[8];
  plVar2 = (longlong *)param_1[2];
  lVar6 = 0;
  local_48 = plVar2;
  plStack_40 = plVar5;
  while( true ) {
    plVar3 = (longlong *)param_1[8];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5[4] == 0) {
      log_InlineLogERROR(&DAT_141a4f410);
    }
    else {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *plVar2;
      }
      if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar5[4] != 0) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar6;
        }
        else {
          lVar7 = *plVar2;
        }
        if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        operator_delete((void *)plVar5[4]);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar6;
        }
        else {
          lVar7 = *plVar2;
        }
        if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar5[4] = 0;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar6;
        }
        else {
          lVar7 = *plVar2;
        }
        if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar5[4] = 0;
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_40 = plVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, plStack_40 = plVar5, cVar1 == '\0' &&
               (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar5 = param_1 + 2;
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[8] + 8) + 0x29);
  plVar2 = *(longlong **)(param_1[8] + 8);
  while (cVar1 == '\0') {
    FUN_141a48fa0(plVar5,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  plStack_40 = (longlong *)param_1[8];
  local_48 = (longlong *)*plVar5;
  uStack_30 = *plStack_40;
  local_38 = local_48;
  FUN_141a49e30(plVar5,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete((void *)param_1[8]);
  param_1[8] = 0;
  param_1[9] = 0;
  operator_delete((void *)*plVar5);
  return;
}



// ============================================================
// Function: FUN_141a4a980 @ 141a4a980
// ============================================================

undefined8 * FUN_141a4a980(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return (undefined8 *)0x0;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_141a4a030(plVar1,(longlong *)&local_18,local_res10);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == (longlong *)0x0) || (local_18 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar4) {
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar4 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    return *(undefined8 **)(local_10 + 0x20);
  }
  puVar2 = operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return (undefined8 *)0x0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = FUN_141a4a500(plVar1,local_res10);
  *puVar3 = puVar2;
  return puVar2;
}



// ============================================================
// Function: FUN_141a4aae0 @ 141a4aae0
// ============================================================

undefined4 FUN_141a4aae0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)((longlong)puVar1 + 0x14);
}



// ============================================================
// Function: FUN_141a4ab30 @ 141a4ab30
// ============================================================

ulonglong FUN_141a4ab30(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)((longlong)puVar1 + 0x14) = param_3;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141a4ab80 @ 141a4ab80
// ============================================================

undefined4 FUN_141a4ab80(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)(puVar1 + 3);
}



// ============================================================
// Function: FUN_141a4abd0 @ 141a4abd0
// ============================================================

ulonglong FUN_141a4abd0(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)(puVar1 + 3) = param_3;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141a4ac20 @ 141a4ac20
// ============================================================

undefined4 FUN_141a4ac20(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)((longlong)puVar1 + 0x1c);
}



// ============================================================
// Function: FUN_141a4ac70 @ 141a4ac70
// ============================================================

ulonglong FUN_141a4ac70(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141a4acc0 @ 141a4acc0
// ============================================================

ulonglong FUN_141a4acc0(longlong param_1,uint param_2,char *param_3)

{
  ulonglong extraout_RAX;
  char *pcVar1;
  ulonglong extraout_RAX_00;
  undefined7 extraout_var;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  pcVar1 = (char *)FUN_141a4a980(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  tq::SafeCopy(param_3,pcVar1,0x10);
  return CONCAT71(extraout_var,1);
}



// ============================================================
// Function: FUN_141a4ad60 @ 141a4ad60
// ============================================================

ulonglong FUN_141a4ad60(longlong param_1,uint param_2,char *param_3)

{
  ulonglong extraout_RAX;
  char *pcVar1;
  ulonglong extraout_RAX_00;
  undefined7 extraout_var;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  pcVar1 = (char *)FUN_141a4a980(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  tq::SafeCopy(pcVar1,param_3,0x10);
  return CONCAT71(extraout_var,1);
}



// ============================================================
// Function: FUN_141a4ae00 @ 141a4ae00
// ============================================================

undefined4 FUN_141a4ae00(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return 0;
  }
  return *(undefined4 *)(puVar1 + 2);
}



// ============================================================
// Function: FUN_141a4ae50 @ 141a4ae50
// ============================================================

ulonglong FUN_141a4ae50(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  
  puVar1 = FUN_141a4a980(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)(puVar1 + 2) = param_3;
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_141a4aea0 @ 141a4aea0
// ============================================================

ulonglong FUN_141a4aea0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong extraout_RAX;
  
  puVar2 = FUN_141a4a980(param_1,param_2);
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(undefined4 *)((longlong)puVar2 + 0x1c);
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141a4af10 @ 141a4af10
// ============================================================

undefined8 * FUN_141a4af10(undefined8 *param_1)

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
  lVar2 = FUN_141a49080();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141a4af90 @ 141a4af90
// ============================================================

undefined8 * FUN_141a4af90(undefined8 *param_1,uint param_2)

{
  FUN_141a4a6b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141a48a90(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a4afc0 @ 141a4afc0
// ============================================================

undefined8 * FUN_141a4afc0(undefined8 *param_1)

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
  lVar2 = FUN_141a49080();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141a4b040 @ 141a4b040
// ============================================================

undefined8 * FUN_141a4b040(undefined8 *param_1)

{
  *param_1 = wanted::CWantedMgr::vftable;
  param_1[1] = 0;
  FUN_141a4afc0(param_1 + 2);
  return param_1;
}



// ============================================================
// Function: FUN_141a4b080 @ 141a4b080
// ============================================================

undefined8 * FUN_141a4b080(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_141a563c0;
  if (DAT_141a563c0 == (undefined8 *)0x0) {
    if ((DAT_141a563d0 & 1) == 0) {
      DAT_141a563d0 = DAT_141a563d0 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_141a563c8,"CWantedMgr");
      atexit((_func_5014 *)&LAB_141a4e9f0);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141a563c8,0x50);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = wanted::CWantedMgr::vftable;
      puVar1[1] = 0;
      FUN_141a4afc0(puVar1 + 2);
    }
    DAT_141a563c0 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141a4f410,"IF_NOT","m_pInstance",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\wantedmgr.cpp",
                         0x18);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}



// ============================================================
// Function: FUN_141a4b160 @ 141a4b160
// ============================================================

CMsg * FUN_141a4b160(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141a4b190 @ 141a4b190
// ============================================================

void FUN_141a4b190(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_141a4b1a0 @ 141a4b1a0
// ============================================================

void FUN_141a4b1a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_141a4b1b0 @ 141a4b1b0
// ============================================================

void FUN_141a4b1b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}



// ============================================================
// Function: FUN_141a4b1c0 @ 141a4b1c0
// ============================================================

void FUN_141a4b1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_141a4b1d0 @ 141a4b1d0
// ============================================================

undefined8 * FUN_141a4b1d0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141a4b200 @ 141a4b200
// ============================================================

CMsg * FUN_141a4b200(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = wanted::CMsgName::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x15),0x3f1,true);
  return param_1;
}



// ============================================================
// Function: FUN_141a4b280 @ 141a4b280
// ============================================================

void FUN_141a4b280(undefined8 *param_1)

{
  *param_1 = wanted::CMsgName::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_141a4b2c0 @ 141a4b2c0
// ============================================================

bool FUN_141a4b2c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3f7;
}



// ============================================================
// Function: FUN_141a4b2f0 @ 141a4b2f0
// ============================================================

undefined8 FUN_141a4b2f0(CMsg *param_1,int param_2,char *param_3,undefined4 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) || (param_3 == (char *)0x0)) {
    uVar3 = 0;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3f7;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    *(char *)(*(longlong *)(param_1 + 0x408) + 0xc) = (char)param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
    uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    **(short **)(param_1 + 0x408) = (short)uVar2 + 0xf;
    uVar3 = 1;
  }
  return uVar3;
}



// ============================================================
// Function: FUN_141a4b3a0 @ 141a4b3a0
// ============================================================

undefined8
FUN_141a4b3a0(CMsg *param_1,int param_2,char *param_3,undefined2 param_4,undefined2 param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) || (param_3 == (char *)0x0)) {
    uVar3 = 0;
  }
  else {
    tq::CMsg::Init(param_1);
    *(char *)(*(longlong *)(param_1 + 0x408) + 0xc) = (char)param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_5;
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3f7;
    uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    **(short **)(param_1 + 0x408) = (short)uVar2 + 0xf;
    uVar3 = 1;
  }
  return uVar3;
}



// ============================================================
// Function: FUN_141a4b470 @ 141a4b470
// ============================================================

undefined8 FUN_141a4b470(CMsg *param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  tq::CMsg::Init(param_1);
  *(char *)(*(longlong *)(param_1 + 0x408) + 0xc) = (char)param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  uVar1 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3f7;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  **(short **)(param_1 + 0x408) = (short)uVar2 + 0xf;
  return 1;
}



// ============================================================
// Function: FUN_141a4b510 @ 141a4b510
// ============================================================

undefined8 FUN_141a4b510(longlong param_1,char *param_2)

{
  uint uVar1;
  
  if (param_2 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410,"CHECKF","pszString",
                       "f:\\version\\cqserver-78.0.11-1204\\modules\\wanted\\src\\msg\\msgname.cpp",
                       0x73);
    return 0;
  }
  tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
  uVar1 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  **(short **)(param_1 + 0x408) = (short)uVar1 + 0xf;
  return 1;
}



// ============================================================
// Function: FUN_141a4b5a0 @ 141a4b5a0
// ============================================================

void FUN_141a4b5a0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = FUN_141a4b080();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return;
  }
  lVar4 = FUN_141a479d0((longlong)plVar3);
  if (lVar4 == 0) {
    log_InlineLogERROR(&DAT_141a4f410);
    return;
  }
  if (param_2 != 0) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x408) + 0xc);
    if (cVar1 == '\r') {
      uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3,param_2);
      (**(code **)(*plVar3 + 0x48))(plVar3,uVar2,param_2);
    }
    else if (cVar1 == '\x0e') {
      uVar2 = (**(code **)(*plVar3 + 0x108))(plVar3,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141a4b683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x40))(plVar3,uVar2,param_2);
      return;
    }
  }
  return;
}



// ============================================================
// Function: FUN_141a4b6c0 @ 141a4b6c0
// ============================================================

undefined8 * FUN_141a4b6c0(undefined8 *param_1,uint param_2)

{
  *param_1 = wanted::CMsgName::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: Init @ 141a4b774
// ============================================================

void __thiscall tq::CMsg::Init(CMsg *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Init(this);
  return;
}



// ============================================================
// Function: Create @ 141a4b77a
// ============================================================

bool __thiscall tq::CMsg::Create(CMsg *this,char *param_1,ushort param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4b77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



// ============================================================
// Function: FID_conflict:`vector_deleting_destructor' @ 141a4b7e0
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
// Function: _purecall @ 141a4b850
// ============================================================

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// ============================================================
// Function: operator_delete @ 141a4b856
// ============================================================

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ============================================================
// Function: __CxxFrameHandler3 @ 141a4b85c
// ============================================================

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b85c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// ============================================================
// Function: operator_new @ 141a4b862
// ============================================================

void * __cdecl operator_new(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4b862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// ============================================================
// Function: what @ 141a4b874
// ============================================================

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



// ============================================================
// Function: _CxxThrowException @ 141a4b886
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4b886. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: memset @ 141a4b898
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: FUN_141a4b8a0 @ 141a4b8a0
// ============================================================

undefined8 FUN_141a4b8a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
// Function: __security_check_cookie @ 141a4b940
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_141a56300) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// ============================================================
// Function: _onexit @ 141a4b960
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
  
  local_res10 = _decode_pointer(DAT_141a56980);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_141a56980);
    local_res18[0] = _decode_pointer(DAT_141a56978);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_141a56980 = _encode_pointer(local_res10);
    DAT_141a56978 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// ============================================================
// Function: atexit @ 141a4ba10
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
// Function: __GSHandlerCheckCommon @ 141a4ba28
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
// Function: __GSHandlerCheck @ 141a4ba8c
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
// Function: FUN_141a4bac4 @ 141a4bac4
// ============================================================

bool FUN_141a4bac4(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141a56978 = _encode_pointer(puVar1);
  DAT_141a56980 = DAT_141a56978;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_141a4c13c();
    atexit(FUN_141a4c174);
    atexit((_func_5014 *)&LAB_141a4c130);
  }
  return puVar1 == (undefined8 *)0x0;
}



// ============================================================
// Function: _CRT_INIT @ 141a4bb24
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
    if (DAT_141a563d4 < 1) {
      return 0;
    }
    DAT_141a563d4 = DAT_141a563d4 + -1;
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_141a56968 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_141a56968;
        lVar2 = DAT_141a56968;
      }
      DAT_141a56968 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_141a4bb9e;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_141a4bb9e:
    if (DAT_141a56960 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_141a56980);
      if (_Memory != (longlong *)0x0) {
        plVar6 = (longlong *)_decode_pointer(DAT_141a56978);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = (code *)_decode_pointer(*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = (longlong *)_decode_pointer(DAT_141a56980);
            plVar11 = (longlong *)_decode_pointer(DAT_141a56978);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_141a56978 = _encoded_null();
        DAT_141a56980 = DAT_141a56978;
      }
      DAT_141a56960 = 0;
      if (!bVar1) {
        LOCK();
        DAT_141a56968 = 0;
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
      bVar12 = DAT_141a56968 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_141a56968;
        lVar2 = DAT_141a56968;
      }
      DAT_141a56968 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_141a4bcc7;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_141a4bcc7:
    if (DAT_141a56960 == 0) {
      DAT_141a56960 = 1;
      iVar3 = _initterm_e(&DAT_141a4f2b8,&DAT_141a4f2c8);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_141a4f288,&DAT_141a4f2b0);
      DAT_141a56960 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_141a56968 = 0;
      UNLOCK();
    }
    if ((DAT_141a56970 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141a56970), BVar4 != 0)) {
      (*DAT_141a56970)(param_1,2,param_3);
    }
    DAT_141a563d4 = DAT_141a563d4 + 1;
  }
  return 1;
}



// ============================================================
// Function: __DllMainCRTStartup @ 141a4bd80
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
  if ((param_2 == 0) && (DAT_141a563d4 == 0)) {
    uVar4 = 0;
  }
  else {
    _DAT_141a56310 = param_2;
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_141a51120 != (undefined *)0x0) {
        iVar1 = (*(code *)PTR_141a51120)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        uVar3 = _CRT_INIT(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        _DAT_141a56310 = 0xffffffff;
        return 0;
      }
    }
    uVar3 = FUN_141a412c0();
    uVar4 = (uint)uVar3;
    if ((param_2 == 1) && (uVar4 == 0)) {
      FUN_141a412c0();
      _CRT_INIT(param_1,0,param_3);
      if (PTR_141a51120 != (undefined *)0x0) {
        (*(code *)PTR_141a51120)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = _CRT_INIT(param_1,param_2,param_3);
      uVar4 = -(uint)((int)uVar3 != 0) & uVar4;
      if ((uVar4 != 0) && (PTR_141a51120 != (undefined *)0x0)) {
        uVar4 = (*(code *)PTR_141a51120)(param_1,param_2,param_3);
      }
    }
  }
  _DAT_141a56310 = 0xffffffff;
  return uVar4;
}



// ============================================================
// Function: entry @ 141a4beb8
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
// Function: FUN_141a4bef8 @ 141a4bef8
// ============================================================

undefined8 FUN_141a4bef8(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: __ArrayUnwind @ 141a4bf14
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
// Function: `eh_vector_destructor_iterator' @ 141a4bf60
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
// Function: __report_gsfailure @ 141a4bfc0
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
  RtlCaptureContext(&DAT_141a56480);
  local_30 = DAT_141a56578;
  local_38 = RtlLookupFunctionEntry(DAT_141a56578,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141a56518 = local_res8;
    DAT_141a56578 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_141a56480,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141a563f0 = DAT_141a56578;
  _DAT_141a56500 = local_res8[0];
  _DAT_141a563e0 = 0xc0000409;
  _DAT_141a563e4 = 1;
  local_20 = DAT_141a56300;
  local_18 = DAT_141a56308;
  DAT_141a56478 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141a51128);
  if (DAT_141a56478 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// ============================================================
// Function: _unlock @ 141a4c110
// ============================================================

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



// ============================================================
// Function: __dllonexit @ 141a4c116
// ============================================================

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



// ============================================================
// Function: _lock @ 141a4c122
// ============================================================

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



// ============================================================
// Function: FUN_141a4c13c @ 141a4c13c
// ============================================================

void FUN_141a4c13c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141a518d0; puVar1 < &DAT_141a518d0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_141a4c174 @ 141a4c174
// ============================================================

void FUN_141a4c174(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141a518e0; puVar1 < &DAT_141a518e0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: _ValidateImageBase @ 141a4c1c0
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
// Function: _FindPESection @ 141a4c1f0
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
// Function: _IsNonwritableInCurrentImage @ 141a4c240
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
  
  pImageBase = &IMAGE_DOS_HEADER_141a40000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141a40000);
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
// Function: _initterm @ 141a4c282
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 141a4c288
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: _amsg_exit @ 141a4c29a
// ============================================================

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c29a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



// ============================================================
// Function: __CppXcptFilter @ 141a4c2a0
// ============================================================

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// ============================================================
// Function: __security_init_cookie @ 141a4c2a8
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
  if (DAT_141a56300 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141a56300 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_141a56300 == 0x2b992ddfa232) {
      DAT_141a56300 = 0x2b992ddfa233;
    }
  }
  DAT_141a56308 = ~DAT_141a56300;
  return;
}



// ============================================================
// Function: terminate @ 141a4c35c
// ============================================================

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c35c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: _type_info_dtor_internal_method @ 141a4c362
// ============================================================

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



// ============================================================
// Function: __crt_debugger_hook @ 141a4c368
// ============================================================

void __cdecl __crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4c368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crt_debugger_hook(param_1);
  return;
}



// ============================================================
// Function: RtlVirtualUnwind @ 141a4c398
// ============================================================

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



// ============================================================
// Function: RtlLookupFunctionEntry @ 141a4c39e
// ============================================================

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a4c39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// ============================================================
// Function: Unwind@141a4c3d0 @ 141a4c3d0
// ============================================================

void Unwind_141a4c3d0(undefined8 param_1,longlong param_2)

{
  FUN_141a41000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c3f0 @ 141a4c3f0
// ============================================================

void Unwind_141a4c3f0(undefined8 param_1,longlong param_2)

{
  FUN_141a4b280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@141a4c410 @ 141a4c410
// ============================================================

void Unwind_141a4c410(undefined8 param_1,longlong param_2)

{
  FUN_141a41000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c430 @ 141a4c430
// ============================================================

void Unwind_141a4c430(undefined8 param_1,longlong param_2)

{
  FUN_141a4b280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@141a4c450 @ 141a4c450
// ============================================================

void Unwind_141a4c450(undefined8 param_1,longlong param_2)

{
  FUN_141a41000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c470 @ 141a4c470
// ============================================================

void Unwind_141a4c470(undefined8 param_1,longlong param_2)

{
  FUN_141a4b280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Catch@141a4c490 @ 141a4c490
// ============================================================

undefined * Catch_141a4c490(void)

{
  log_InlineLogCATCH_ERROR("wanted::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_141a4142e;
}



// ============================================================
// Function: Unwind@141a4c4d0 @ 141a4c4d0
// ============================================================

void Unwind_141a4c4d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@141a4c4f0 @ 141a4c4f0
// ============================================================

void Unwind_141a4c4f0(undefined8 param_1,longlong param_2)

{
  FUN_141a41000(*(undefined8 **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@141a4c510 @ 141a4c510
// ============================================================

void Unwind_141a4c510(undefined8 param_1,longlong param_2)

{
  FUN_141a4b280((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}



// ============================================================
// Function: Catch@141a4c530 @ 141a4c530
// ============================================================

undefined8 Catch_141a4c530(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141a414fa;
}



// ============================================================
// Function: Unwind@141a4c570 @ 141a4c570
// ============================================================

void Unwind_141a4c570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c590 @ 141a4c590
// ============================================================

void Unwind_141a4c590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c5b0 @ 141a4c5b0
// ============================================================

void Unwind_141a4c5b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c5d0 @ 141a4c5d0
// ============================================================

void Unwind_141a4c5d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c5f0 @ 141a4c5f0
// ============================================================

void Unwind_141a4c5f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c610 @ 141a4c610
// ============================================================

void Unwind_141a4c610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c630 @ 141a4c630
// ============================================================

void Unwind_141a4c630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c650 @ 141a4c650
// ============================================================

void Unwind_141a4c650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c670 @ 141a4c670
// ============================================================

void Unwind_141a4c670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c690 @ 141a4c690
// ============================================================

void Unwind_141a4c690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c6b0 @ 141a4c6b0
// ============================================================

void Unwind_141a4c6b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c6d0 @ 141a4c6d0
// ============================================================

void Unwind_141a4c6d0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c6f0 @ 141a4c6f0
// ============================================================

void Unwind_141a4c6f0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c710 @ 141a4c710
// ============================================================

void Unwind_141a4c710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c730 @ 141a4c730
// ============================================================

void Unwind_141a4c730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c750 @ 141a4c750
// ============================================================

void Unwind_141a4c750(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c770 @ 141a4c770
// ============================================================

void Unwind_141a4c770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c790 @ 141a4c790
// ============================================================

void Unwind_141a4c790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c7b0 @ 141a4c7b0
// ============================================================

void Unwind_141a4c7b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4c7d0 @ 141a4c7d0
// ============================================================

void Unwind_141a4c7d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4c7f0 @ 141a4c7f0
// ============================================================

void Unwind_141a4c7f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4c810 @ 141a4c810
// ============================================================

void Unwind_141a4c810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4c830 @ 141a4c830
// ============================================================

void Unwind_141a4c830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4c850 @ 141a4c850
// ============================================================

void Unwind_141a4c850(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4c870 @ 141a4c870
// ============================================================

void Unwind_141a4c870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4c890 @ 141a4c890
// ============================================================

void Unwind_141a4c890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4c8b0 @ 141a4c8b0
// ============================================================

void Unwind_141a4c8b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4c8d0 @ 141a4c8d0
// ============================================================

void Unwind_141a4c8d0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4c8f0 @ 141a4c8f0
// ============================================================

void Unwind_141a4c8f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c910 @ 141a4c910
// ============================================================

void Unwind_141a4c910(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c930 @ 141a4c930
// ============================================================

void Unwind_141a4c930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c950 @ 141a4c950
// ============================================================

void Unwind_141a4c950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4c970 @ 141a4c970
// ============================================================

void Unwind_141a4c970(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4c990 @ 141a4c990
// ============================================================

void Unwind_141a4c990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4c9b0 @ 141a4c9b0
// ============================================================

void Unwind_141a4c9b0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4c9d0 @ 141a4c9d0
// ============================================================

void Unwind_141a4c9d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4c9f0 @ 141a4c9f0
// ============================================================

void Unwind_141a4c9f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4ca10 @ 141a4ca10
// ============================================================

void Unwind_141a4ca10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4ca30 @ 141a4ca30
// ============================================================

void Unwind_141a4ca30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4ca50 @ 141a4ca50
// ============================================================

void Unwind_141a4ca50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ca70 @ 141a4ca70
// ============================================================

void Unwind_141a4ca70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4ca90 @ 141a4ca90
// ============================================================

void Unwind_141a4ca90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4cab0 @ 141a4cab0
// ============================================================

void Unwind_141a4cab0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4cad0 @ 141a4cad0
// ============================================================

void Unwind_141a4cad0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4caf0 @ 141a4caf0
// ============================================================

void Unwind_141a4caf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x58) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cb10 @ 141a4cb10
// ============================================================

void Unwind_141a4cb10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x58) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4cb30 @ 141a4cb30
// ============================================================

void Unwind_141a4cb30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4cb50 @ 141a4cb50
// ============================================================

void Unwind_141a4cb50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4cb70 @ 141a4cb70
// ============================================================

void Unwind_141a4cb70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cb90 @ 141a4cb90
// ============================================================

void Unwind_141a4cb90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4cbb0 @ 141a4cbb0
// ============================================================

void Unwind_141a4cbb0(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cbd0 @ 141a4cbd0
// ============================================================

void Unwind_141a4cbd0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4cbf0 @ 141a4cbf0
// ============================================================

void Unwind_141a4cbf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x48) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cc10 @ 141a4cc10
// ============================================================

void Unwind_141a4cc10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x48) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4cc30 @ 141a4cc30
// ============================================================

void Unwind_141a4cc30(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cc50 @ 141a4cc50
// ============================================================

void Unwind_141a4cc50(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cc70 @ 141a4cc70
// ============================================================

void Unwind_141a4cc70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cc90 @ 141a4cc90
// ============================================================

void Unwind_141a4cc90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4ccb0 @ 141a4ccb0
// ============================================================

void Unwind_141a4ccb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4ccd0 @ 141a4ccd0
// ============================================================

void Unwind_141a4ccd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4ccf0 @ 141a4ccf0
// ============================================================

void Unwind_141a4ccf0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4cd10 @ 141a4cd10
// ============================================================

void Unwind_141a4cd10(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cd30 @ 141a4cd30
// ============================================================

void Unwind_141a4cd30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cd50 @ 141a4cd50
// ============================================================

void Unwind_141a4cd50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4cd70 @ 141a4cd70
// ============================================================

void Unwind_141a4cd70(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4cd90 @ 141a4cd90
// ============================================================

void Unwind_141a4cd90(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cdb0 @ 141a4cdb0
// ============================================================

void Unwind_141a4cdb0(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cdd0 @ 141a4cdd0
// ============================================================

void Unwind_141a4cdd0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4cdf0 @ 141a4cdf0
// ============================================================

void Unwind_141a4cdf0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4ce10 @ 141a4ce10
// ============================================================

void Unwind_141a4ce10(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4ce30 @ 141a4ce30
// ============================================================

void Unwind_141a4ce30(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ce50 @ 141a4ce50
// ============================================================

void Unwind_141a4ce50(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ce70 @ 141a4ce70
// ============================================================

void Unwind_141a4ce70(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ce90 @ 141a4ce90
// ============================================================

void Unwind_141a4ce90(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ceb0 @ 141a4ceb0
// ============================================================

void Unwind_141a4ceb0(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4ced0 @ 141a4ced0
// ============================================================

void Unwind_141a4ced0(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cef0 @ 141a4cef0
// ============================================================

void Unwind_141a4cef0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4cf10 @ 141a4cf10
// ============================================================

void Unwind_141a4cf10(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@141a4cf30 @ 141a4cf30
// ============================================================

void Unwind_141a4cf30(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@141a4cf50 @ 141a4cf50
// ============================================================

void Unwind_141a4cf50(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@141a4cf70 @ 141a4cf70
// ============================================================

void Unwind_141a4cf70(undefined8 param_1,longlong param_2)

{
  FUN_141a43450((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cf90 @ 141a4cf90
// ============================================================

void Unwind_141a4cf90(undefined8 param_1,longlong param_2)

{
  FUN_141a43450((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4cfb0 @ 141a4cfb0
// ============================================================

void Unwind_141a4cfb0(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cfd0 @ 141a4cfd0
// ============================================================

void Unwind_141a4cfd0(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4cff0 @ 141a4cff0
// ============================================================

void Unwind_141a4cff0(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d010 @ 141a4d010
// ============================================================

void Unwind_141a4d010(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d030 @ 141a4d030
// ============================================================

void Unwind_141a4d030(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4d050 @ 141a4d050
// ============================================================

void Unwind_141a4d050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4d070 @ 141a4d070
// ============================================================

void Unwind_141a4d070(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d090 @ 141a4d090
// ============================================================

void Unwind_141a4d090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4d0b0 @ 141a4d0b0
// ============================================================

void Unwind_141a4d0b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4d0d0 @ 141a4d0d0
// ============================================================

void Unwind_141a4d0d0(undefined8 param_1,longlong param_2)

{
  FUN_141a43450((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4d0f0 @ 141a4d0f0
// ============================================================

void Unwind_141a4d0f0(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d110 @ 141a4d110
// ============================================================

void Unwind_141a4d110(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d130 @ 141a4d130
// ============================================================

void Unwind_141a4d130(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d150 @ 141a4d150
// ============================================================

void Unwind_141a4d150(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@141a4d170 @ 141a4d170
// ============================================================

void Unwind_141a4d170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xe0));
  return;
}



// ============================================================
// Function: Unwind@141a4d190 @ 141a4d190
// ============================================================

void Unwind_141a4d190(undefined8 param_1,longlong param_2)

{
  FUN_141a41910(param_2 + 0xb0);
  return;
}



// ============================================================
// Function: Unwind@141a4d1b0 @ 141a4d1b0
// ============================================================

void Unwind_141a4d1b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@141a4d1d0 @ 141a4d1d0
// ============================================================

void Unwind_141a4d1d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xe0));
  return;
}



// ============================================================
// Function: Unwind@141a4d1f0 @ 141a4d1f0
// ============================================================

void Unwind_141a4d1f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0xd0) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4d210 @ 141a4d210
// ============================================================

void Unwind_141a4d210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0xd0) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4d230 @ 141a4d230
// ============================================================

void Unwind_141a4d230(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0xd0) + 8));
  return;
}



// ============================================================
// Function: Unwind@141a4d250 @ 141a4d250
// ============================================================

void Unwind_141a4d250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0xd0) + 0x30));
  return;
}



// ============================================================
// Function: Unwind@141a4d270 @ 141a4d270
// ============================================================

void Unwind_141a4d270(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4d290 @ 141a4d290
// ============================================================

void Unwind_141a4d290(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4d2b0 @ 141a4d2b0
// ============================================================

void Unwind_141a4d2b0(undefined8 param_1,longlong param_2)

{
  FUN_141a41910(param_2 + 0x60);
  return;
}



// ============================================================
// Function: Unwind@141a4d2d0 @ 141a4d2d0
// ============================================================

void Unwind_141a4d2d0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d2f0 @ 141a4d2f0
// ============================================================

void Unwind_141a4d2f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4d310 @ 141a4d310
// ============================================================

void Unwind_141a4d310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4d330 @ 141a4d330
// ============================================================

void Unwind_141a4d330(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@141a4d350 @ 141a4d350
// ============================================================

void Unwind_141a4d350(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d370 @ 141a4d370
// ============================================================

void Unwind_141a4d370(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d390 @ 141a4d390
// ============================================================

void Unwind_141a4d390(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d3b0 @ 141a4d3b0
// ============================================================

void Unwind_141a4d3b0(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d3d0 @ 141a4d3d0
// ============================================================

void Unwind_141a4d3d0(void)

{
  FUN_141a43450(&DAT_141a56078);
  return;
}



// ============================================================
// Function: Unwind@141a4d3f0 @ 141a4d3f0
// ============================================================

void Unwind_141a4d3f0(void)

{
  FUN_141a43450(&DAT_141a56078);
  return;
}



// ============================================================
// Function: Unwind@141a4d410 @ 141a4d410
// ============================================================

void Unwind_141a4d410(undefined8 param_1,longlong param_2)

{
  FUN_141a42a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d430 @ 141a4d430
// ============================================================

void Unwind_141a4d430(undefined8 param_1,longlong param_2)

{
  FUN_141a42690(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d450 @ 141a4d450
// ============================================================

void Unwind_141a4d450(undefined8 param_1,longlong param_2)

{
  FUN_141a421e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d470 @ 141a4d470
// ============================================================

void Unwind_141a4d470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4d490 @ 141a4d490
// ============================================================

void Unwind_141a4d490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4d4b0 @ 141a4d4b0
// ============================================================

void Unwind_141a4d4b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4d4d0 @ 141a4d4d0
// ============================================================

void Unwind_141a4d4d0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4d4f0 @ 141a4d4f0
// ============================================================

void Unwind_141a4d4f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4d510 @ 141a4d510
// ============================================================

void Unwind_141a4d510(void)

{
  DAT_141a56358 = DAT_141a56358 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4d530 @ 141a4d530
// ============================================================

void Unwind_141a4d530(void)

{
  DAT_141a56358 = DAT_141a56358 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4d550 @ 141a4d550
// ============================================================

void Unwind_141a4d550(void)

{
  DAT_141a56358 = DAT_141a56358 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4d570 @ 141a4d570
// ============================================================

void Unwind_141a4d570(void)

{
  DAT_141a56358 = DAT_141a56358 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4d590 @ 141a4d590
// ============================================================

void Unwind_141a4d590(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@141a4d5b0 @ 141a4d5b0
// ============================================================

void Unwind_141a4d5b0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4d5d0 @ 141a4d5d0
// ============================================================

void Unwind_141a4d5d0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4d5f0 @ 141a4d5f0
// ============================================================

void Unwind_141a4d5f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4d610 @ 141a4d610
// ============================================================

void Unwind_141a4d610(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Unwind@141a4d630 @ 141a4d630
// ============================================================

void Unwind_141a4d630(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d650 @ 141a4d650
// ============================================================

void Unwind_141a4d650(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d670 @ 141a4d670
// ============================================================

void Unwind_141a4d670(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d690 @ 141a4d690
// ============================================================

void Unwind_141a4d690(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d6b0 @ 141a4d6b0
// ============================================================

void Unwind_141a4d6b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@141a4d6d0 @ 141a4d6d0
// ============================================================

void Unwind_141a4d6d0(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@141a4d6f0 @ 141a4d6f0
// ============================================================

void Unwind_141a4d6f0(undefined8 param_1,longlong param_2)

{
  FUN_141a46400(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d710 @ 141a4d710
// ============================================================

void Unwind_141a4d710(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d730 @ 141a4d730
// ============================================================

void Unwind_141a4d730(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d750 @ 141a4d750
// ============================================================

void Unwind_141a4d750(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d770 @ 141a4d770
// ============================================================

void Unwind_141a4d770(undefined8 param_1,longlong param_2)

{
  FUN_141a466d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d790 @ 141a4d790
// ============================================================

void Unwind_141a4d790(undefined8 param_1,longlong param_2)

{
  FUN_141a46400(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d7b0 @ 141a4d7b0
// ============================================================

void Unwind_141a4d7b0(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d7d0 @ 141a4d7d0
// ============================================================

void Unwind_141a4d7d0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d7f0 @ 141a4d7f0
// ============================================================

void Unwind_141a4d7f0(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d810 @ 141a4d810
// ============================================================

void Unwind_141a4d810(undefined8 param_1,longlong param_2)

{
  FUN_141a46400(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d830 @ 141a4d830
// ============================================================

void Unwind_141a4d830(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d850 @ 141a4d850
// ============================================================

void Unwind_141a4d850(undefined8 param_1,longlong param_2)

{
  FUN_141a45cd0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d870 @ 141a4d870
// ============================================================

void Unwind_141a4d870(undefined8 param_1,longlong param_2)

{
  FUN_141a46400(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d890 @ 141a4d890
// ============================================================

void Unwind_141a4d890(undefined8 param_1,longlong param_2)

{
  FUN_141a466d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4d8b0 @ 141a4d8b0
// ============================================================

void Unwind_141a4d8b0(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@141a4d8d0 @ 141a4d8d0
// ============================================================

void Catch_141a4d8d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@141a4d900 @ 141a4d900
// ============================================================

void Catch_141a4d900(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@141a4d920 @ 141a4d920
// ============================================================

void Unwind_141a4d920(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@141a4d940 @ 141a4d940
// ============================================================

void Unwind_141a4d940(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@141a4d960 @ 141a4d960
// ============================================================

void Unwind_141a4d960(undefined8 param_1,longlong param_2)

{
  tq::CMySingleLock::~CMySingleLock((CMySingleLock *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@141a4d980 @ 141a4d980
// ============================================================

void Unwind_141a4d980(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@141a4d9a0 @ 141a4d9a0
// ============================================================

void Unwind_141a4d9a0(undefined8 param_1,longlong param_2)

{
  FUN_141a44fb0(*(undefined8 **)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@141a4d9c0 @ 141a4d9c0
// ============================================================

void Unwind_141a4d9c0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4d9e0 @ 141a4d9e0
// ============================================================

void Unwind_141a4d9e0(void)

{
  FUN_141a45cd0(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4da00 @ 141a4da00
// ============================================================

void Unwind_141a4da00(void)

{
  FUN_141a46400(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4da20 @ 141a4da20
// ============================================================

void Unwind_141a4da20(void)

{
  FUN_141a466d0(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4da40 @ 141a4da40
// ============================================================

void Unwind_141a4da40(void)

{
  FUN_141a466d0(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4da60 @ 141a4da60
// ============================================================

void Unwind_141a4da60(void)

{
  FUN_141a46400(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4da80 @ 141a4da80
// ============================================================

void Unwind_141a4da80(void)

{
  FUN_141a45cd0(&DAT_141a56390);
  return;
}



// ============================================================
// Function: Unwind@141a4daa0 @ 141a4daa0
// ============================================================

void Unwind_141a4daa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dac0 @ 141a4dac0
// ============================================================

void Unwind_141a4dac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4dae0 @ 141a4dae0
// ============================================================

void Unwind_141a4dae0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4db00 @ 141a4db00
// ============================================================

void Unwind_141a4db00(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4db20 @ 141a4db20
// ============================================================

void Unwind_141a4db20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4db40 @ 141a4db40
// ============================================================

void Unwind_141a4db40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4db60 @ 141a4db60
// ============================================================

void Unwind_141a4db60(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4db80 @ 141a4db80
// ============================================================

void Unwind_141a4db80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dba0 @ 141a4dba0
// ============================================================

void Unwind_141a4dba0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4dbc0 @ 141a4dbc0
// ============================================================

void Unwind_141a4dbc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4dbe0 @ 141a4dbe0
// ============================================================

void Unwind_141a4dbe0(void)

{
  DAT_141a563d0 = DAT_141a563d0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4dc00 @ 141a4dc00
// ============================================================

void Unwind_141a4dc00(void)

{
  DAT_141a563d0 = DAT_141a563d0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4dc20 @ 141a4dc20
// ============================================================

void Unwind_141a4dc20(void)

{
  DAT_141a563d0 = DAT_141a563d0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4dc40 @ 141a4dc40
// ============================================================

void Unwind_141a4dc40(void)

{
  DAT_141a563d0 = DAT_141a563d0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4dc60 @ 141a4dc60
// ============================================================

void Unwind_141a4dc60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@141a4dc80 @ 141a4dc80
// ============================================================

void Unwind_141a4dc80(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@141a4dca0 @ 141a4dca0
// ============================================================

void Catch_141a4dca0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@141a4dcd0 @ 141a4dcd0
// ============================================================

void Unwind_141a4dcd0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Catch@141a4dcf0 @ 141a4dcf0
// ============================================================

void Catch_141a4dcf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@141a4dd20 @ 141a4dd20
// ============================================================

void Unwind_141a4dd20(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4dd40 @ 141a4dd40
// ============================================================

void Unwind_141a4dd40(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dd60 @ 141a4dd60
// ============================================================

void Unwind_141a4dd60(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dd80 @ 141a4dd80
// ============================================================

void Unwind_141a4dd80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@141a4dda0 @ 141a4dda0
// ============================================================

void Unwind_141a4dda0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@141a4ddc0 @ 141a4ddc0
// ============================================================

void Unwind_141a4ddc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@141a4dde0 @ 141a4dde0
// ============================================================

void Unwind_141a4dde0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@141a4de00 @ 141a4de00
// ============================================================

void Unwind_141a4de00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@141a4de20 @ 141a4de20
// ============================================================

void Unwind_141a4de20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@141a4de40 @ 141a4de40
// ============================================================

void Unwind_141a4de40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4de60 @ 141a4de60
// ============================================================

void Unwind_141a4de60(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@141a4de80 @ 141a4de80
// ============================================================

void Unwind_141a4de80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dea0 @ 141a4dea0
// ============================================================

void Unwind_141a4dea0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@141a4dec0 @ 141a4dec0
// ============================================================

void Unwind_141a4dec0(undefined8 param_1,longlong param_2)

{
  FUN_141a416e0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dee0 @ 141a4dee0
// ============================================================

void Unwind_141a4dee0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4df00 @ 141a4df00
// ============================================================

void Unwind_141a4df00(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4df20 @ 141a4df20
// ============================================================

void Unwind_141a4df20(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4df40 @ 141a4df40
// ============================================================

void Unwind_141a4df40(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4df60 @ 141a4df60
// ============================================================

void Unwind_141a4df60(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4df80 @ 141a4df80
// ============================================================

void Unwind_141a4df80(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4dfa0 @ 141a4dfa0
// ============================================================

void Unwind_141a4dfa0(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dfc0 @ 141a4dfc0
// ============================================================

void Unwind_141a4dfc0(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4dfe0 @ 141a4dfe0
// ============================================================

void Unwind_141a4dfe0(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e000 @ 141a4e000
// ============================================================

void Unwind_141a4e000(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e020 @ 141a4e020
// ============================================================

void Unwind_141a4e020(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e040 @ 141a4e040
// ============================================================

void Unwind_141a4e040(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e060 @ 141a4e060
// ============================================================

void Unwind_141a4e060(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4e080 @ 141a4e080
// ============================================================

void Unwind_141a4e080(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e0a0 @ 141a4e0a0
// ============================================================

void Unwind_141a4e0a0(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e0c0 @ 141a4e0c0
// ============================================================

void Unwind_141a4e0c0(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e0e0 @ 141a4e0e0
// ============================================================

void Unwind_141a4e0e0(undefined8 param_1,longlong param_2)

{
  FUN_141a4a100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e100 @ 141a4e100
// ============================================================

void Unwind_141a4e100(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e120 @ 141a4e120
// ============================================================

void Unwind_141a4e120(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e140 @ 141a4e140
// ============================================================

void Unwind_141a4e140(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e160 @ 141a4e160
// ============================================================

void Unwind_141a4e160(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e180 @ 141a4e180
// ============================================================

void Unwind_141a4e180(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4e1a0 @ 141a4e1a0
// ============================================================

void Unwind_141a4e1a0(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e1c0 @ 141a4e1c0
// ============================================================

void Unwind_141a4e1c0(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e1e0 @ 141a4e1e0
// ============================================================

void Unwind_141a4e1e0(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e200 @ 141a4e200
// ============================================================

void Unwind_141a4e200(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e220 @ 141a4e220
// ============================================================

void Unwind_141a4e220(undefined8 param_1,longlong param_2)

{
  FUN_141a4a600(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e240 @ 141a4e240
// ============================================================

void Unwind_141a4e240(undefined8 param_1,longlong param_2)

{
  FUN_141a4a100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e260 @ 141a4e260
// ============================================================

void Unwind_141a4e260(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e280 @ 141a4e280
// ============================================================

void Unwind_141a4e280(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e2a0 @ 141a4e2a0
// ============================================================

void Unwind_141a4e2a0(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e2c0 @ 141a4e2c0
// ============================================================

void Unwind_141a4e2c0(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e2e0 @ 141a4e2e0
// ============================================================

void Unwind_141a4e2e0(undefined8 param_1,longlong param_2)

{
  FUN_141a4a680((longlong *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}



// ============================================================
// Function: Catch@141a4e300 @ 141a4e300
// ============================================================

undefined * Catch_141a4e300(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_141a4a7df;
}



// ============================================================
// Function: Unwind@141a4e340 @ 141a4e340
// ============================================================

void Unwind_141a4e340(undefined8 param_1,longlong param_2)

{
  FUN_141a4a600(*(longlong **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e360 @ 141a4e360
// ============================================================

void Unwind_141a4e360(undefined8 param_1,longlong param_2)

{
  FUN_141a4a100(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e380 @ 141a4e380
// ============================================================

void Unwind_141a4e380(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e3a0 @ 141a4e3a0
// ============================================================

void Unwind_141a4e3a0(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e3c0 @ 141a4e3c0
// ============================================================

void Unwind_141a4e3c0(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e3e0 @ 141a4e3e0
// ============================================================

void Unwind_141a4e3e0(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@141a4e400 @ 141a4e400
// ============================================================

void Unwind_141a4e400(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4e420 @ 141a4e420
// ============================================================

void Unwind_141a4e420(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e440 @ 141a4e440
// ============================================================

void Unwind_141a4e440(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e460 @ 141a4e460
// ============================================================

void Unwind_141a4e460(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e480 @ 141a4e480
// ============================================================

void Unwind_141a4e480(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e4a0 @ 141a4e4a0
// ============================================================

void Unwind_141a4e4a0(undefined8 param_1,longlong param_2)

{
  FUN_141a4a100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e4c0 @ 141a4e4c0
// ============================================================

void Unwind_141a4e4c0(void)

{
  FUN_141a41680();
  return;
}



// ============================================================
// Function: Unwind@141a4e4e0 @ 141a4e4e0
// ============================================================

void Unwind_141a4e4e0(undefined8 param_1,longlong param_2)

{
  FUN_141a48c10(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e500 @ 141a4e500
// ============================================================

void Unwind_141a4e500(undefined8 param_1,longlong param_2)

{
  FUN_141a48f80(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e520 @ 141a4e520
// ============================================================

void Unwind_141a4e520(undefined8 param_1,longlong param_2)

{
  FUN_141a49290(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e540 @ 141a4e540
// ============================================================

void Unwind_141a4e540(undefined8 param_1,longlong param_2)

{
  FUN_141a49c20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e560 @ 141a4e560
// ============================================================

void Unwind_141a4e560(undefined8 param_1,longlong param_2)

{
  FUN_141a4a100(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e580 @ 141a4e580
// ============================================================

void Unwind_141a4e580(undefined8 param_1,longlong param_2)

{
  FUN_141a4a600(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e5a0 @ 141a4e5a0
// ============================================================

void Unwind_141a4e5a0(undefined8 param_1,longlong param_2)

{
  FUN_141a4a680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@141a4e5c0 @ 141a4e5c0
// ============================================================

void Unwind_141a4e5c0(void)

{
  DAT_141a563d0 = DAT_141a563d0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@141a4e5e0 @ 141a4e5e0
// ============================================================

void Unwind_141a4e5e0(undefined8 param_1,longlong param_2)

{
  FUN_141a48a90(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@141a4e600 @ 141a4e600
// ============================================================

void Unwind_141a4e600(undefined8 param_1,longlong param_2)

{
  FUN_141a4a680((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@141a4e620 @ 141a4e620
// ============================================================

void Unwind_141a4e620(undefined8 param_1,longlong param_2)

{
  FUN_141a4b190(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e640 @ 141a4e640
// ============================================================

void Unwind_141a4e640(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@141a4e660 @ 141a4e660
// ============================================================

void Unwind_141a4e660(undefined8 param_1,longlong param_2)

{
  FUN_141a4b190(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e680 @ 141a4e680
// ============================================================

void Unwind_141a4e680(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: Unwind@141a4e6a0 @ 141a4e6a0
// ============================================================

void Unwind_141a4e6a0(undefined8 param_1,longlong param_2)

{
  FUN_141a4b190(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@141a4e6c0 @ 141a4e6c0
// ============================================================

void Unwind_141a4e6c0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}



// ============================================================
// Function: FUN_141a4e6e0 @ 141a4e6e0
// ============================================================

void FUN_141a4e6e0(void)

{
  _unlock(8);
  return;
}



// ============================================================
// Function: FUN_141a4e6f9 @ 141a4e6f9
// ============================================================

void FUN_141a4e6f9(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// ============================================================
// Function: FUN_141a4e729 @ 141a4e729
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a4e729(void)

{
  _DAT_141a56310 = 0xffffffff;
  return;
}



// ============================================================
// Function: filt$0 @ 141a4e742
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
// Function: fin$0 @ 141a4e781
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
// Function: FUN_141a4e7b0 @ 141a4e7b0
// ============================================================

bool FUN_141a4e7b0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// ============================================================
// Function: FUN_141a4e7e0 @ 141a4e7e0
// ============================================================

void FUN_141a4e7e0(void)

{
  tq::CMyCriticalSection::CMyCriticalSection((CMyCriticalSection *)&DAT_141a56320,2000);
  atexit((_func_5014 *)&LAB_141a4e930);
  return;
}



// ============================================================
// Function: FUN_141a4e810 @ 141a4e810
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a4e810(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  DAT_141a56078 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &DAT_141a56078;
    DAT_141a56078 = puVar1;
  }
  _DAT_141a56098 = 0;
  _DAT_141a560a0 = 0;
  _DAT_141a560a8 = 0;
  _DAT_141a560b0 = 0;
  atexit(FUN_141a4e940);
  return;
}



// ============================================================
// Function: FUN_141a4e890 @ 141a4e890
// ============================================================

void FUN_141a4e890(void)

{
  tq::CMyCriticalSection::CMyCriticalSection((CMyCriticalSection *)&DAT_141a56360,2000);
  atexit((_func_5014 *)&LAB_141a4e980);
  return;
}



// ============================================================
// Function: FUN_141a4e8c0 @ 141a4e8c0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a4e8c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  DAT_141a56390 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &DAT_141a56390;
    DAT_141a56390 = puVar1;
  }
  DAT_141a563a8 = 0;
  _DAT_141a563b0 = 0;
  _DAT_141a563b8 = 0;
  atexit(FUN_141a4e9a0);
  return;
}



// ============================================================
// Function: FUN_141a4e940 @ 141a4e940
// ============================================================

void FUN_141a4e940(void)

{
  PTR_vftable_141a56070 = (undefined *)wanted::CPoliceWanted::vftable;
  FUN_141a43040(0x141a56078);
  operator_delete(DAT_141a56078);
  return;
}



// ============================================================
// Function: FUN_141a4e9a0 @ 141a4e9a0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a4e9a0(void)

{
  if (DAT_141a563a8 != (void *)0x0) {
    operator_delete(DAT_141a563a8);
  }
  DAT_141a563a8 = (void *)0x0;
  _DAT_141a563b0 = 0;
  _DAT_141a563b8 = 0;
  operator_delete(DAT_141a56390);
  return;
}




// Total functions: 637, failed: 0
