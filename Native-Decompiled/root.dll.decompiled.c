// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: root.dll

// ============================================================
// Function: FUN_1416710a0 @ 1416710a0
// ============================================================

exception * FUN_1416710a0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_1416710e0 @ 1416710e0
// ============================================================

void FUN_1416710e0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141671100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141671110 @ 141671110
// ============================================================

exception * FUN_141671110(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141671170 @ 141671170
// ============================================================

void FUN_141671170(void)

{
  return;
}



// ============================================================
// Function: FUN_141671180 @ 141671180
// ============================================================

exception *
FUN_141671180(exception *param_1,
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
// Function: FUN_1416711d0 @ 1416711d0
// ============================================================

void FUN_1416711d0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141671203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141671210 @ 141671210
// ============================================================

longlong FUN_141671210(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}



// ============================================================
// Function: FUN_141671230 @ 141671230
// ============================================================

exception * FUN_141671230(exception *param_1,uint param_2)

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
// Function: FUN_141671290 @ 141671290
// ============================================================

exception *
FUN_141671290(exception *param_1,
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
// Function: FUN_1416712f0 @ 1416712f0
// ============================================================

void FUN_1416712f0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014167132d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141671340 @ 141671340
// ============================================================

exception * FUN_141671340(exception *param_1,uint param_2)

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
// Function: FUN_1416713b0 @ 1416713b0
// ============================================================

exception *
FUN_1416713b0(exception *param_1,
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
// Function: FUN_141671410 @ 141671410
// ============================================================

void FUN_141671410(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014167144d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_141671460 @ 141671460
// ============================================================

exception * FUN_141671460(exception *param_1,uint param_2)

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
// Function: FUN_1416714d0 @ 1416714d0
// ============================================================

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416714d0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
  
  uStack_18 = 0x1416714eb;
  local_1040 = 0xfffffffffffffffe;
  local_28 = DAT_141688288 ^ (ulonglong)auStack_1068;
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
// Function: FUN_1416715c0 @ 1416715c0
// ============================================================

void FUN_1416715c0(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001416715e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}



// ============================================================
// Function: FUN_141671610 @ 141671610
// ============================================================

undefined8 * FUN_141671610(undefined8 *param_1,uint param_2)

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
// Function: FUN_141671670 @ 141671670
// ============================================================

void FUN_141671670(void)

{
  log_InlineLogERROR(&DAT_141680650);
  return;
}



// ============================================================
// Function: FUN_1416716a0 @ 1416716a0
// ============================================================

void FUN_1416716a0(undefined8 *param_1)

{
  *param_1 = root::IGame::vftable;
  return;
}



// ============================================================
// Function: FUN_1416716b0 @ 1416716b0
// ============================================================

undefined8 * FUN_1416716b0(undefined8 *param_1,byte param_2)

{
  *param_1 = root::IGame::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141671700 @ 141671700
// ============================================================

longlong FUN_141671700(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return param_1;
}



// ============================================================
// Function: FUN_141671730 @ 141671730
// ============================================================

void FUN_141671730(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014167174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return;
}



// ============================================================
// Function: FUN_141671760 @ 141671760
// ============================================================

undefined4 FUN_141671760(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// Function: CurrentInstanceGet @ 141671770
// ============================================================

undefined8 CurrentInstanceGet(void)

{
                    /* 0x1770  2  CurrentInstanceGet */
  return DAT_1416882b0;
}



// ============================================================
// Function: FUN_141671780 @ 141671780
// ============================================================

longlong FUN_141671780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416717a2;
  }
  lVar2 = *plVar1;
LAB_1416717a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_1416717c0 @ 1416717c0
// ============================================================

longlong * FUN_1416717c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416717e2;
  }
  lVar2 = *plVar1;
LAB_1416717e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}



// ============================================================
// Function: FUN_141671800 @ 141671800
// ============================================================

longlong FUN_141671800(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141671822;
  }
  lVar2 = *plVar1;
LAB_141671822:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_141671840 @ 141671840
// ============================================================

longlong * FUN_141671840(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141671862;
  }
  lVar2 = *plVar1;
LAB_141671862:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}



// ============================================================
// Function: FUN_141671880 @ 141671880
// ============================================================

bool FUN_141671880(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_1416718c0 @ 1416718c0
// ============================================================

bool FUN_1416718c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141671910 @ 141671910
// ============================================================

bool FUN_141671910(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141671950 @ 141671950
// ============================================================

bool FUN_141671950(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141671990 @ 141671990
// ============================================================

longlong FUN_141671990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416719b2;
  }
  lVar2 = *plVar1;
LAB_1416719b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_1416719d0 @ 1416719d0
// ============================================================

longlong * FUN_1416719d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416719f2;
  }
  lVar2 = *plVar1;
LAB_1416719f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_141671b30 @ 141671b30
// ============================================================

bool FUN_141671b30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141671bc0 @ 141671bc0
// ============================================================

bool FUN_141671bc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141671c90 @ 141671c90
// ============================================================

void FUN_141671c90(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}



// ============================================================
// Function: FUN_141671d00 @ 141671d00
// ============================================================

exception * FUN_141671d00(exception *param_1,exception *param_2)

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
// Function: FUN_141671d50 @ 141671d50
// ============================================================

exception * FUN_141671d50(exception *param_1,exception *param_2)

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
// Function: FUN_141671e40 @ 141671e40
// ============================================================

void FUN_141671e40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141671e60 @ 141671e60
// ============================================================

void FUN_141671e60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141671e70 @ 141671e70
// ============================================================

longlong FUN_141671e70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}



// ============================================================
// Function: FUN_141671ed0 @ 141671ed0
// ============================================================

void FUN_141671ed0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}



// ============================================================
// Function: FUN_141671f60 @ 141671f60
// ============================================================

longlong FUN_141671f60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}



// ============================================================
// Function: FUN_141671fc0 @ 141671fc0
// ============================================================

undefined8 * FUN_141671fc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 2));
  return param_1;
}



// ============================================================
// Function: FUN_1416720c0 @ 1416720c0
// ============================================================

longlong * FUN_1416720c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_1[1] + 8);
  param_1[1] = lVar1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)*param_1;
  }
  if (lVar1 == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1;
}



// ============================================================
// Function: FUN_1416721b0 @ 1416721b0
// ============================================================

void FUN_1416721b0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}



// ============================================================
// Function: FUN_141672220 @ 141672220
// ============================================================

longlong * FUN_141672220(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_141672250;
  }
  else {
LAB_141672250:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x38;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_141672278;
  }
  _invalid_parameter_noinfo();
LAB_141672278:
  param_1[1] = param_1[1] + param_2 * 0x38;
  return param_1;
}



// ============================================================
// Function: FUN_141672290 @ 141672290
// ============================================================

longlong * FUN_141672290(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416722c0;
  }
  else {
LAB_1416722c0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416722e8;
  }
  _invalid_parameter_noinfo();
LAB_1416722e8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_141672340 @ 141672340
// ============================================================

bool FUN_141672340(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_141672390 @ 141672390
// ============================================================

void FUN_141672390(longlong *param_1)

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
// Function: FUN_1416723c0 @ 1416723c0
// ============================================================

void FUN_1416723c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// Function: FUN_141672430 @ 141672430
// ============================================================

void FUN_141672430(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x38);
  return;
}



// ============================================================
// Function: FUN_1416724b0 @ 1416724b0
// ============================================================

void FUN_1416724b0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_141672520 @ 141672520
// ============================================================

void FUN_141672520(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_1416725c0 @ 1416725c0
// ============================================================

void FUN_1416725c0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_141672690 @ 141672690
// ============================================================

void FUN_141672690(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x48)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x48);
  return;
}



// ============================================================
// Function: FUN_141672720 @ 141672720
// ============================================================

void FUN_141672720(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 4);
  return;
}



// ============================================================
// Function: FUN_1416727c0 @ 1416727c0
// ============================================================

exception * FUN_1416727c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_141672840 @ 141672840
// ============================================================

void * FUN_141672840(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141672950 @ 141672950
// ============================================================

undefined8 * FUN_141672950(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 2));
  return param_1;
}



// ============================================================
// Function: FUN_141672980 @ 141672980
// ============================================================

longlong * FUN_141672980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != -4) {
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar1 = *param_1;
    if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
      lVar2 = lVar1 + 8;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    if ((ulonglong)(param_1[1] + param_2) <= (ulonglong)(lVar2 + *(longlong *)(lVar1 + 0x18))) {
      if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
        uVar3 = lVar1 + 8;
      }
      else {
        uVar3 = *(ulonglong *)(lVar1 + 8);
      }
      if (uVar3 <= (ulonglong)(param_1[1] + param_2)) goto LAB_1416729e4;
    }
    _invalid_parameter_noinfo();
  }
LAB_1416729e4:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}



// ============================================================
// Function: FUN_141672a00 @ 141672a00
// ============================================================

undefined1 * FUN_141672a00(char *param_1,char *param_2,undefined1 *param_3,undefined *param_4)

{
  undefined1 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = (*(code *)param_4)((int)*param_1);
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_3;
}



// ============================================================
// Function: FUN_141672a60 @ 141672a60
// ============================================================

undefined8 * FUN_141672a60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 2));
    param_3 = param_3 + 7;
  }
  return param_3;
}



// ============================================================
// Function: FUN_141672ad0 @ 141672ad0
// ============================================================

void * FUN_141672ad0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141672b20 @ 141672b20
// ============================================================

void * FUN_141672b20(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141672ba0 @ 141672ba0
// ============================================================

void FUN_141672ba0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_141672c10 @ 141672c10
// ============================================================

void * FUN_141672c10(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141672c80 @ 141672c80
// ============================================================

undefined8 * FUN_141672c80(longlong param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x38) {
    param_3[-7] = *(undefined8 *)(param_2 + -0x38);
    param_3[-6] = *(undefined8 *)(param_2 + -0x30);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + -5),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + -0x28));
    param_3 = param_3 + -7;
  }
  return param_3;
}



// ============================================================
// Function: FUN_141672d50 @ 141672d50
// ============================================================

void * FUN_141672d50(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141672d90 @ 141672d90
// ============================================================

undefined * FUN_141672d90(void)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
  return &DAT_1416882b8;
}



// ============================================================
// Function: FUN_141672df0 @ 141672df0
// ============================================================

void FUN_141672df0(__uint64 param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}



// ============================================================
// Function: FUN_141672e50 @ 141672e50
// ============================================================

void FUN_141672e50(void *param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}



// ============================================================
// Function: FUN_141672eb0 @ 141672eb0
// ============================================================

void FUN_141672eb0(void *param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}



// ============================================================
// Function: FUN_141672f40 @ 141672f40
// ============================================================

bool FUN_141672f40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141672fa0 @ 141672fa0
// ============================================================

bool FUN_141672fa0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141673000 @ 141673000
// ============================================================

void FUN_141673000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673010 @ 141673010
// ============================================================

void FUN_141673010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673020 @ 141673020
// ============================================================

longlong FUN_141673020(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673042;
  }
  lVar2 = *plVar1;
LAB_141673042:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141673060 @ 141673060
// ============================================================

longlong * FUN_141673060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673082;
  }
  lVar2 = *plVar1;
LAB_141673082:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_1;
}



// ============================================================
// Function: FUN_1416730b0 @ 1416730b0
// ============================================================

void FUN_1416730b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_1416730c0 @ 1416730c0
// ============================================================

void FUN_1416730c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_1416730f0 @ 1416730f0
// ============================================================

void FUN_1416730f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673150 @ 141673150
// ============================================================

void FUN_141673150(longlong param_1,longlong param_2)

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
// Function: FUN_1416731b0 @ 1416731b0
// ============================================================

void FUN_1416731b0(longlong param_1,longlong *param_2)

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
// Function: FUN_141673240 @ 141673240
// ============================================================

void FUN_141673240(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x38);
  return;
}



// ============================================================
// Function: FUN_1416732c0 @ 1416732c0
// ============================================================

longlong FUN_1416732c0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 4) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x18);
}



// ============================================================
// Function: FUN_141673300 @ 141673300
// ============================================================

void FUN_141673300(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141673324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_141673390 @ 141673390
// ============================================================

longlong * FUN_141673390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_1[1] + 8);
  param_1[1] = lVar1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)*param_1;
  }
  if (lVar1 == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1;
}



// ============================================================
// Function: FUN_1416733e0 @ 1416733e0
// ============================================================

longlong FUN_1416733e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673402;
  }
  lVar2 = *plVar1;
LAB_141673402:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}



// ============================================================
// Function: FUN_141673430 @ 141673430
// ============================================================

void FUN_141673430(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_1416734c0 @ 1416734c0
// ============================================================

void FUN_1416734c0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_141673530 @ 141673530
// ============================================================

void FUN_141673530(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_1416735b0 @ 1416735b0
// ============================================================

longlong FUN_1416735b0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  ldiv_t lVar2;
  undefined4 local_res10;
  
  lVar2 = ldiv((*param_2 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res10 = lVar2.quot;
  iVar1 = lVar2.rem * 0x41a7 + local_res10 * -0xb14;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fffffff;
  }
  return (longlong)iVar1;
}



// ============================================================
// Function: FUN_141673610 @ 141673610
// ============================================================

longlong * FUN_141673610(longlong *param_1,longlong param_2)

{
  FUN_141672220(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141673630 @ 141673630
// ============================================================

void FUN_141673630(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141673662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_1416736d0 @ 1416736d0
// ============================================================

longlong * FUN_1416736d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673707;
  }
  lVar2 = *plVar1;
LAB_141673707:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_2;
}



// ============================================================
// Function: FUN_141673730 @ 141673730
// ============================================================

longlong * FUN_141673730(longlong *param_1,longlong param_2)

{
  FUN_141672290(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141673780 @ 141673780
// ============================================================

void FUN_141673780(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x48)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x48);
  return;
}



// ============================================================
// Function: FUN_141673800 @ 141673800
// ============================================================

undefined8 * FUN_141673800(undefined8 *param_1)

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
// Function: FUN_141673840 @ 141673840
// ============================================================

void FUN_141673840(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 << 4);
  return;
}



// ============================================================
// Function: FUN_1416738e0 @ 1416738e0
// ============================================================

bool FUN_1416738e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_141673920 @ 141673920
// ============================================================

undefined8 * FUN_141673920(undefined8 *param_1)

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
// Function: FUN_141673960 @ 141673960
// ============================================================

undefined8 * FUN_141673960(undefined8 *param_1)

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
// Function: FUN_1416739d0 @ 1416739d0
// ============================================================

longlong FUN_1416739d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar1 = (longlong)param_1 - param_3;
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 0x10);
    do {
      *(undefined8 *)(this + -0x10) = *param_1;
      *(undefined8 *)(this + -8) = param_1[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(this + lVar1));
      param_1 = param_1 + 7;
      this = this + 0x38;
    } while (param_1 != param_2);
  }
  return (lVar2 / 0x38) * 0x38 + param_3;
}



// ============================================================
// Function: FUN_141673a90 @ 141673a90
// ============================================================

void FUN_141673a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_141673af0 @ 141673af0
// ============================================================

void * FUN_141673af0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141673b80 @ 141673b80
// ============================================================

void FUN_141673b80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_141673c00 @ 141673c00
// ============================================================

longlong * FUN_141673c00(longlong *param_1,longlong param_2)

{
  FUN_141672980(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_141673c30 @ 141673c30
// ============================================================

longlong FUN_141673c30(longlong param_1,longlong param_2,longlong param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 0x10);
    lVar2 = param_2;
    do {
      this = pbVar1 + -0x38;
      lVar3 = lVar2 + -0x38;
      *(undefined8 *)(pbVar1 + -0x48) = *(undefined8 *)(lVar2 + -0x38);
      *(undefined8 *)(pbVar1 + -0x40) = *(undefined8 *)(lVar2 + -0x30);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(this + (param_2 - param_3)));
      pbVar1 = this;
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x38) * -0x38;
}



// ============================================================
// Function: FUN_141673d20 @ 141673d20
// ============================================================

void FUN_141673d20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141673d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return;
}



// ============================================================
// Function: FUN_141673d90 @ 141673d90
// ============================================================

void * FUN_141673d90(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141673dd0 @ 141673dd0
// ============================================================

undefined8 * FUN_141673dd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



// ============================================================
// Function: FUN_141673e20 @ 141673e20
// ============================================================

longlong FUN_141673e20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673e42;
  }
  lVar2 = *plVar1;
LAB_141673e42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141673e60 @ 141673e60
// ============================================================

longlong * FUN_141673e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673e82;
  }
  lVar2 = *plVar1;
LAB_141673e82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_1;
}



// ============================================================
// Function: FUN_141673eb0 @ 141673eb0
// ============================================================

void FUN_141673eb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673ed0 @ 141673ed0
// ============================================================

void FUN_141673ed0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673ef0 @ 141673ef0
// ============================================================

void FUN_141673ef0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141673f10 @ 141673f10
// ============================================================

void FUN_141673f10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141673f10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_141673f60 @ 141673f60
// ============================================================

undefined8 FUN_141673f60(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_141671c90();
    }
    lVar1 = FUN_141673240(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x38 + lVar1;
  }
  return uVar2;
}



// ============================================================
// Function: FUN_141673fd0 @ 141673fd0
// ============================================================

longlong FUN_141673fd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673ff2;
  }
  lVar2 = *plVar1;
LAB_141673ff2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141674010 @ 141674010
// ============================================================

undefined8 * FUN_141674010(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_141674050 @ 141674050
// ============================================================

longlong * FUN_141674050(longlong *param_1)

{
  FUN_141673300(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141674070 @ 141674070
// ============================================================

longlong FUN_141674070(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674092;
  }
  lVar2 = *plVar1;
LAB_141674092:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}



// ============================================================
// Function: FUN_1416740b0 @ 1416740b0
// ============================================================

undefined8 FUN_1416740b0(longlong param_1,ulonglong param_2)

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
      FUN_141671ed0();
    }
    lVar1 = FUN_141673430(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_141674110 @ 141674110
// ============================================================

void FUN_141674110(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141674130 @ 141674130
// ============================================================

undefined8 *
FUN_141674130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
// Function: FUN_1416741b0 @ 1416741b0
// ============================================================

undefined8 * FUN_1416741b0(undefined8 *param_1)

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
// Function: FUN_141674230 @ 141674230
// ============================================================

ulonglong FUN_141674230(longlong param_1,uint *param_2)

{
  int iVar1;
  ldiv_t lVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  
  lVar2 = ldiv((*param_2 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res8 = lVar2.quot;
  iVar1 = lVar2.rem * 0x41a7 + local_res8 * -0xb14;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fffffff;
  }
  uVar3 = (longlong)iVar1 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar3) {
    uVar3 = uVar3 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  return uVar3;
}



// ============================================================
// Function: FUN_1416742a0 @ 1416742a0
// ============================================================

undefined8 * FUN_1416742a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141674300 @ 141674300
// ============================================================

longlong * FUN_141674300(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar3 = param_3 * 0x38 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_14167436d;
  }
  _invalid_parameter_noinfo();
LAB_14167436d:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}



// ============================================================
// Function: FUN_1416743a0 @ 1416743a0
// ============================================================

longlong * FUN_1416743a0(longlong *param_1,longlong param_2)

{
  FUN_141672220(param_1,-param_2);
  return param_1;
}



// ============================================================
// Function: FUN_1416743c0 @ 1416743c0
// ============================================================

longlong * FUN_1416743c0(longlong *param_1)

{
  FUN_141673630(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_1416743f0 @ 1416743f0
// ============================================================

undefined8 * FUN_1416743f0(undefined8 *param_1)

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
// Function: FUN_141674430 @ 141674430
// ============================================================

longlong * FUN_141674430(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14167449a;
  }
  _invalid_parameter_noinfo();
LAB_14167449a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_1416744d0 @ 1416744d0
// ============================================================

undefined8 * FUN_1416744d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141674540 @ 141674540
// ============================================================

void FUN_141674540(void)

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
// Function: FUN_1416745a0 @ 1416745a0
// ============================================================

void FUN_1416745a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined8 *)((longlong)pvVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 8) = pvVar1;
  }
  return;
}



// ============================================================
// Function: FUN_1416745e0 @ 1416745e0
// ============================================================

undefined8 FUN_1416745e0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1416721b0();
    }
    lVar1 = FUN_141673840(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x10 + lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_141674650 @ 141674650
// ============================================================

undefined8 * FUN_141674650(undefined8 *param_1)

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
// Function: FUN_1416746a0 @ 1416746a0
// ============================================================

longlong * FUN_1416746a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141673300(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_1416746e0 @ 1416746e0
// ============================================================

undefined8 * FUN_1416746e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_141674740 @ 141674740
// ============================================================

void FUN_141674740(longlong param_1,ulonglong param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  if (0x492492492492492U - *(longlong *)(param_1 + 0x30) < param_2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70,"list<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
  }
  *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_2;
  return;
}



// ============================================================
// Function: FUN_1416747d0 @ 1416747d0
// ============================================================

undefined8 * FUN_1416747d0(undefined8 *param_1)

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
// Function: FUN_141674820 @ 141674820
// ============================================================

undefined8 * FUN_141674820(undefined8 *param_1)

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
// Function: FUN_141674870 @ 141674870
// ============================================================

undefined8 * FUN_141674870(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_1416748d0 @ 1416748d0
// ============================================================

void FUN_1416748d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  FUN_1416739d0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141674900 @ 141674900
// ============================================================

void * FUN_141674900(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141674940 @ 141674940
// ============================================================

void FUN_141674940(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_1416749d0 @ 1416749d0
// ============================================================

void * FUN_1416749d0(void *param_1,longlong param_2,longlong param_3)

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
// Function: FUN_141674a90 @ 141674a90
// ============================================================

void FUN_141674a90(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141673c30(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141674b00 @ 141674b00
// ============================================================

void FUN_141674b00(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}



// ============================================================
// Function: FUN_141674b40 @ 141674b40
// ============================================================

void FUN_141674b40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141674b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x10));
  return;
}



// ============================================================
// Function: FUN_141674b70 @ 141674b70
// ============================================================

longlong * FUN_141674b70(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar2 != -4) {
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    puVar5 = (undefined8 *)(lVar2 + 8);
    puVar4 = puVar5;
    if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar1 = (undefined8 *)(lVar3 + param_3);
    if (puVar1 <= (undefined8 *)((longlong)puVar4 + *(longlong *)(lVar2 + 0x18))) {
      if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (puVar5 <= puVar1) goto LAB_141674bef;
    }
    _invalid_parameter_noinfo();
  }
LAB_141674bef:
  *param_2 = lVar2;
  param_2[1] = lVar3 + param_3;
  return param_2;
}



// ============================================================
// Function: FUN_141674c70 @ 141674c70
// ============================================================

void * FUN_141674c70(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141674cb0 @ 141674cb0
// ============================================================

void FUN_141674cb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141674cd0 @ 141674cd0
// ============================================================

undefined8 * FUN_141674cd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 2));
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}



// ============================================================
// Function: FUN_141674d80 @ 141674d80
// ============================================================

void FUN_141674d80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141673f10(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_141674e00 @ 141674e00
// ============================================================

longlong FUN_141674e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674e22;
  }
  lVar2 = *plVar1;
LAB_141674e22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_141674e40 @ 141674e40
// ============================================================

longlong * FUN_141674e40(longlong *param_1)

{
  FUN_141673300(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_141674e60 @ 141674e60
// ============================================================

longlong FUN_141674e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674e82;
  }
  lVar2 = *plVar1;
LAB_141674e82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}



// ============================================================
// Function: FUN_141674ea0 @ 141674ea0
// ============================================================

void FUN_141674ea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141674f00 @ 141674f00
// ============================================================

undefined8 * FUN_141674f00(undefined8 *param_1)

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
// Function: FUN_141674f50 @ 141674f50
// ============================================================

undefined8 * FUN_141674f50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141674fb0 @ 141674fb0
// ============================================================

longlong * FUN_141674fb0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar3 = param_3 * -0x38 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_141675020;
  }
  _invalid_parameter_noinfo();
LAB_141675020:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}



// ============================================================
// Function: FUN_141675060 @ 141675060
// ============================================================

undefined8 * FUN_141675060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_1416750a0 @ 1416750a0
// ============================================================

longlong * FUN_1416750a0(longlong *param_1)

{
  FUN_141673630(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_1416750c0 @ 1416750c0
// ============================================================

void FUN_1416750c0(longlong param_1)

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
// Function: FUN_1416750f0 @ 1416750f0
// ============================================================

undefined8 * FUN_1416750f0(undefined8 *param_1)

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
// Function: FUN_141675140 @ 141675140
// ============================================================

undefined8 * FUN_141675140(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_1416751a0 @ 1416751a0
// ============================================================

void FUN_1416751a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_1416751c0 @ 1416751c0
// ============================================================

void FUN_1416751c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141674540();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_141675200 @ 141675200
// ============================================================

undefined8 * FUN_141675200(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141675260 @ 141675260
// ============================================================

undefined8 * FUN_141675260(undefined8 *param_1)

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
// Function: FUN_1416752d0 @ 1416752d0
// ============================================================

undefined8 * FUN_1416752d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_141675310 @ 141675310
// ============================================================

undefined8 * FUN_141675310(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141675360 @ 141675360
// ============================================================

undefined8 * FUN_141675360(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_1416753b0 @ 1416753b0
// ============================================================

undefined8 * FUN_1416753b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141675440 @ 141675440
// ============================================================

undefined8 * FUN_141675440(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141675490 @ 141675490
// ============================================================

undefined8 * FUN_141675490(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141686a80);
  }
  FUN_141673300(param_3);
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
        goto LAB_14167567c;
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
LAB_14167567c:
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
            FUN_141673150((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416731b0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141673150((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416731b0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141673150((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416731b0((longlong)param_1,plVar7);
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
// Function: FUN_141675850 @ 141675850
// ============================================================

exception * FUN_141675850(exception *param_1,exception *param_2)

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
// Function: FUN_1416758b0 @ 1416758b0
// ============================================================

undefined8 * FUN_1416758b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  *param_2 = 0;
  param_2[1] = uVar1;
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_1416758f0 @ 1416758f0
// ============================================================

undefined8 * FUN_1416758f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = uVar1;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_3;
  return param_2;
}



// ============================================================
// Function: FUN_141675930 @ 141675930
// ============================================================

undefined8 * FUN_141675930(undefined8 *param_1)

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
// Function: FUN_141675980 @ 141675980
// ============================================================

undefined8 * FUN_141675980(undefined8 *param_1)

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
// Function: FUN_1416759d0 @ 1416759d0
// ============================================================

undefined8 * FUN_1416759d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_141675a30 @ 141675a30
// ============================================================

void FUN_141675a30(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141673c30(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141675a70 @ 141675a70
// ============================================================

longlong FUN_141675a70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = param_2;
    do {
      lVar2 = lVar1 + -0x10;
      *(undefined8 *)((param_3 - param_2) + lVar2) = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)((param_3 - param_2) + 8 + lVar2) = *(undefined8 *)(lVar1 + -8);
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return param_3 - (param_2 - param_1 & 0xfffffffffffffff0U);
}



// ============================================================
// Function: FUN_141675ab0 @ 141675ab0
// ============================================================

void FUN_141675ab0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_141674b00(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141675ad0 @ 141675ad0
// ============================================================

longlong *
FUN_141675ad0(longlong *param_1,char *param_2,char *param_3,longlong *param_4,undefined *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  FUN_141674b70(param_4,param_1,(longlong)param_3 - (longlong)param_2);
  puVar1 = (undefined1 *)param_4[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar2 = (*(code *)param_5)((int)*param_2);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



// ============================================================
// Function: FUN_141675b50 @ 141675b50
// ============================================================

void FUN_141675b50(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  }
  return;
}



// ============================================================
// Function: FUN_141675ba0 @ 141675ba0
// ============================================================

void FUN_141675ba0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 2));
    }
    param_1 = param_1 + 7;
  }
  return;
}



// ============================================================
// Function: FUN_141675c30 @ 141675c30
// ============================================================

void * FUN_141675c30(longlong param_1,longlong param_2,void *param_3)

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
// Function: FUN_141675ca0 @ 141675ca0
// ============================================================

void * FUN_141675ca0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_141675ce0 @ 141675ce0
// ============================================================

void FUN_141675ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141675d00 @ 141675d00
// ============================================================

void FUN_141675d00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141675d60 @ 141675d60
// ============================================================

longlong * FUN_141675d60(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_141675e30 @ 141675e30
// ============================================================

undefined8 * FUN_141675e30(undefined8 *param_1)

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
// Function: FUN_141675e90 @ 141675e90
// ============================================================

undefined8 * FUN_141675e90(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141675ee0 @ 141675ee0
// ============================================================

undefined8 * FUN_141675ee0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141675f30 @ 141675f30
// ============================================================

ulonglong FUN_141675f30(longlong *param_1)

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
  uVar1 = uVar1 - 0x38;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    lVar3 = lVar4;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141675fa7;
  }
  _invalid_parameter_noinfo();
LAB_141675fa7:
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
// Function: FUN_141675fe0 @ 141675fe0
// ============================================================

undefined8 * FUN_141675fe0(undefined8 *param_1)

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
// Function: FUN_141676040 @ 141676040
// ============================================================

void FUN_141676040(undefined8 *param_1)

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
// Function: FUN_141676080 @ 141676080
// ============================================================

undefined8 * FUN_141676080(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_1416760d0 @ 1416760d0
// ============================================================

undefined8 * FUN_1416760d0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_141676120 @ 141676120
// ============================================================

void FUN_141676120(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141676140 @ 141676140
// ============================================================

undefined8 *
FUN_141676140(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
  }
  plVar5 = FUN_141674130(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_1416764c0 @ 1416764c0
// ============================================================

longlong * FUN_1416764c0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
// Function: FUN_1416765b0 @ 1416765b0
// ============================================================

longlong * FUN_1416765b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141674d80((longlong)param_1);
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
    FUN_141675490(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_141676760 @ 141676760
// ============================================================

undefined8 * FUN_141676760(longlong param_1,undefined8 *param_2,longlong param_3)

{
  param_2[1] = *(undefined8 *)(param_3 + 8);
  *param_2 = 0;
  if ((undefined8 *)(param_1 + 0x10) == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



// ============================================================
// Function: FUN_1416767a0 @ 1416767a0
// ============================================================

undefined8 * FUN_1416767a0(undefined8 *param_1)

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
// Function: FUN_1416767f0 @ 1416767f0
// ============================================================

undefined8 * FUN_1416767f0(undefined8 *param_1)

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
// Function: FUN_141676850 @ 141676850
// ============================================================

undefined8 * FUN_141676850(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_1416768a0 @ 1416768a0
// ============================================================

undefined8 * FUN_1416768a0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_1416768f0 @ 1416768f0
// ============================================================

undefined8 * FUN_1416768f0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_141676950 @ 141676950
// ============================================================

undefined8 *
FUN_141676950(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_141674b00(param_2,param_3,param_4);
  return param_2 + param_3 * 2;
}



// ============================================================
// Function: FUN_1416769a0 @ 1416769a0
// ============================================================

longlong *
FUN_1416769a0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
             undefined *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong local_18;
  longlong local_10;
  
  local_18 = *param_4;
  pcVar1 = *(char **)(param_3 + 8);
  pcVar3 = *(char **)(param_2 + 8);
  local_10 = param_4[1];
  FUN_141674b70(&local_18,param_1,(longlong)pcVar1 - (longlong)pcVar3);
  if (pcVar3 != pcVar1) {
    lVar4 = local_10 - (longlong)pcVar3;
    do {
      cVar2 = (*(code *)param_5)((int)*pcVar3);
      pcVar3 = pcVar3 + 1;
      pcVar3[lVar4 + -1] = cVar2;
    } while (pcVar3 != pcVar1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_141676a30 @ 141676a30
// ============================================================

void FUN_141676a30(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  }
  return;
}



// ============================================================
// Function: FUN_141676a80 @ 141676a80
// ============================================================

void FUN_141676a80(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_141675ba0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141676aa0 @ 141676aa0
// ============================================================

void * FUN_141676aa0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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
// Function: FUN_141676b40 @ 141676b40
// ============================================================

void * FUN_141676b40(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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
// Function: FUN_141676b80 @ 141676b80
// ============================================================

void FUN_141676b80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141676ba0 @ 141676ba0
// ============================================================

void FUN_141676ba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141676bc0 @ 141676bc0
// ============================================================

ulonglong FUN_141676bc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *extraout_RAX;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    if (puVar2 < *(undefined8 **)(param_1 + 0x70)) {
      _invalid_parameter_noinfo();
    }
    plVar4 = *(longlong **)(param_1 + 0x58);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar4)) {
      _invalid_parameter_noinfo();
      plVar4 = extraout_RAX;
    }
    if (puVar5 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    log_InlineLogMessage("Module %s init start...");
    cVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
    if (cVar3 == '\0') {
      log_InlineLogERROR("Module%d: %s init failed.");
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar5 = puVar5 + 7;
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
}



// ============================================================
// Function: FUN_141676d30 @ 141676d30
// ============================================================

void FUN_141676d30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulong uVar3;
  ulong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x70) < plVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 < *(longlong **)(param_1 + 0x68)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x50))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    if (*plVar5 != 0) {
      uVar3 = tq::TimeGet(0);
      (**(code **)(*(longlong *)*plVar5 + 0x18))();
      uVar4 = tq::TimeGet(0);
      if (499 < uVar4 - uVar3) {
        log_InlineLogMessage("CGame::OnTimer module:%s OnTimer() cost %u ms");
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar5 = plVar5 + 7;
  }
  return;
}



// ============================================================
// Function: FUN_141676e70 @ 141676e70
// ============================================================

undefined8 FUN_141676e70(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x48))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x48);
    local_28 = *(longlong *)(param_1 + 0x18);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x48);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x18))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = 0;
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
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar6;
}



// ============================================================
// Function: FUN_141676f70 @ 141676f70
// ============================================================

void FUN_141676f70(longlong param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  operator_delete(*(void **)(param_1 + 8));
  return;
}



// ============================================================
// Function: FUN_141676fc0 @ 141676fc0
// ============================================================

undefined8 FUN_141676fc0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1d8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x1d8);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x1d8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1d8);
    local_28 = *(longlong *)(param_1 + 0x1a8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x1d8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x1a8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 8))
                      (*(longlong **)(param_1 + 0x1e8),param_2);
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
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar6;
}



// ============================================================
// Function: FUN_1416770f0 @ 1416770f0
// ============================================================

longlong * FUN_1416770f0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14167724d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14167727c;
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
      goto LAB_14167724d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141676140(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14167727c:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_1416772e0 @ 1416772e0
// ============================================================

void FUN_1416772e0(longlong *param_1)

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
// Function: FUN_1416773a0 @ 1416773a0
// ============================================================

void FUN_1416773a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_1416773c0 @ 1416773c0
// ============================================================

void FUN_1416773c0(longlong *param_1)

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
  FUN_1416765b0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_141677430 @ 141677430
// ============================================================

void FUN_141677430(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x10));
  }
  return;
}



// ============================================================
// Function: FUN_141677480 @ 141677480
// ============================================================

void FUN_141677480(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    }
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// Function: FUN_141677500 @ 141677500
// ============================================================

undefined8 *
FUN_141677500(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_141675ba0(param_2,param_3,param_4);
  return param_2 + param_3 * 7;
}



// ============================================================
// Function: FUN_141677550 @ 141677550
// ============================================================

longlong * FUN_141677550(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ldiv_t lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8;
  undefined8 *puStack_40;
  
  lVar4 = ldiv((*param_3 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res8 = lVar4.quot;
  iVar3 = lVar4.rem * 0x41a7 + local_res8 * -0xb14;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7fffffff;
  }
  uVar5 = (longlong)iVar3 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
    uVar5 = uVar5 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  puStack_40 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 8 + uVar5 * 0x10);
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  lVar6 = 0;
  while( true ) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar5 + 1
       ) {
      _invalid_parameter_noinfo();
    }
    if (*(undefined8 **)(*(longlong *)(param_1 + 0x60) + 8 + (uVar5 + 1) * 0x10) == puStack_40) {
      param_2[1] = *(longlong *)(param_1 + 0x38);
      *param_2 = *plVar1;
      return param_2;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puStack_40 == *(undefined8 **)(lVar7 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if (*param_3 <= *(uint *)(puStack_40 + 2)) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puStack_40 == *(undefined8 **)(lVar7 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puStack_40 = (undefined8 *)*puStack_40;
  }
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar6 = *plVar2;
  }
  if (puStack_40 == *(undefined8 **)(lVar6 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  if (*param_3 < *(uint *)(puStack_40 + 2)) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    *param_2 = *plVar1;
    param_2[1] = lVar6;
  }
  else {
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)puStack_40;
  }
  return param_2;
}



// ============================================================
// Function: FUN_141677740 @ 141677740
// ============================================================

undefined8 * FUN_141677740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong uStack_20;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  uVar4 = (longlong)(param_2[4] - param_2[3]) >> 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar4 != 0) {
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_141671ed0();
    }
    lVar2 = FUN_141673430(param_1 + 2,uVar4);
    param_1[3] = lVar2;
    param_1[4] = lVar2;
    param_1[5] = lVar2 + uVar4 * 8;
    uVar4 = param_2[4];
    if (uVar4 < (ulonglong)param_2[3]) {
      _invalid_parameter_noinfo();
    }
    local_58 = (undefined4)*param_2;
    uStack_54 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uStack_50 = (undefined4)uVar4;
    uStack_4c = (undefined4)(uVar4 >> 0x20);
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar4 = param_2[3];
    if ((ulonglong)param_2[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    local_28 = *param_2;
    uStack_20 = uVar4;
    pvVar3 = FUN_141676aa0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}



// ============================================================
// Function: FUN_1416778a0 @ 1416778a0
// ============================================================

undefined8 * FUN_1416778a0(undefined8 *param_1)

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
// Function: FUN_1416778f0 @ 1416778f0
// ============================================================

undefined8 * FUN_1416778f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  uVar2 = FUN_1416745a0();
  param_1[5] = uVar2;
  param_1[6] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141677950 @ 141677950
// ============================================================

void FUN_141677950(longlong param_1)

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
// Function: FUN_141677980 @ 141677980
// ============================================================

void FUN_141677980(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141671ed0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141673430(param_1 + 0x10,uVar8);
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
      FUN_141676b40(param_1,*(void **)(param_2 + 8),lVar6,
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
      pvVar2 = FUN_141676b40(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416749d0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
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
// Function: FUN_141677c30 @ 141677c30
// ============================================================

longlong * FUN_141677c30(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) ||
     ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  puVar3 = *(undefined8 **)(param_4 + 8);
  if ((puVar3 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar3)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != puVar3) {
    puVar5 = (undefined8 *)param_1[4];
    puVar6 = puVar3;
    while (puVar6 != puVar5) {
      puVar7 = puVar6 + 2;
      *(undefined8 *)((longlong)puVar4 + (-0x10 - (longlong)puVar3) + (longlong)puVar7) = *puVar6;
      *(undefined8 *)((longlong)puVar4 + (-8 - (longlong)puVar3) + (longlong)puVar7) = puVar6[1];
      puVar6 = puVar7;
    }
    param_1[4] = ((longlong)puVar5 - (longlong)puVar3 & 0xfffffffffffffff0U) + (longlong)puVar4;
  }
  return param_2;
}



// ============================================================
// Function: FUN_141677d30 @ 141677d30
// ============================================================

void FUN_141677d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_141673dd0(param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_141677d70 @ 141677d70
// ============================================================

undefined4 * FUN_141677d70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_141677740((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}



// ============================================================
// Function: FUN_141677db0 @ 141677db0
// ============================================================

void FUN_141677db0(longlong param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}



// ============================================================
// Function: FUN_141677e00 @ 141677e00
// ============================================================

void FUN_141677e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}



// ============================================================
// Function: FUN_141677e20 @ 141677e20
// ============================================================

undefined8 FUN_141677e20(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint local_38 [2];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_38[0] = param_2;
  local_30 = param_3;
  plVar1 = FUN_1416770f0((longlong *)(param_1 + 0x18),local_28,local_38);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1e8) = param_3;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141677e70 @ 141677e70
// ============================================================

undefined8 FUN_141677e70(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint local_38 [2];
  undefined8 local_30;
  longlong local_28 [5];
  
  local_38[0] = param_2;
  local_30 = param_3;
  plVar1 = FUN_1416770f0((longlong *)(param_1 + 0x1a8),local_28,local_38);
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// ============================================================
// Function: FUN_141677ea0 @ 141677ea0
// ============================================================

void FUN_141677ea0(longlong *param_1)

{
  FUN_1416773c0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141677ed0 @ 141677ed0
// ============================================================

void FUN_141677ed0(undefined8 *param_1)

{
  FUN_141677480((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141677f00 @ 141677f00
// ============================================================

void FUN_141677f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = lVar1 - *(longlong *)(param_1 + 0x18);
  lVar3 = lVar2 >> 0x3f;
  if (lVar2 / 0x38 + lVar3 != lVar3) {
    for (lVar3 = lVar1 + -0x38; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x10));
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -0x38;
  }
  return;
}



// ============================================================
// Function: FUN_141677f80 @ 141677f80
// ============================================================

longlong * FUN_141677f80(longlong param_1,longlong *param_2,uint *param_3)

{
  FUN_141677550(param_1,param_2,param_3);
  return param_2;
}



// ============================================================
// Function: FUN_141677fa0 @ 141677fa0
// ============================================================

undefined4 * FUN_141677fa0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_141677740((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}



// ============================================================
// Function: FUN_141677fd0 @ 141677fd0
// ============================================================

undefined8 * FUN_141677fd0(undefined8 *param_1)

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
  lVar2 = FUN_141674540();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_141678050 @ 141678050
// ============================================================

longlong * FUN_141678050(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) ||
     ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  puVar2 = *(undefined8 **)(param_4 + 8);
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined8 *)param_2[1] != puVar2) {
    lVar4 = FUN_1416739d0(puVar2,(undefined8 *)param_1[4],param_2[1]);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 0x10));
    }
    param_1[4] = lVar4;
  }
  return param_2;
}



// ============================================================
// Function: FUN_141678170 @ 141678170
// ============================================================

void FUN_141678170(undefined8 *param_1)

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
// Function: FUN_1416781b0 @ 1416781b0
// ============================================================

longlong * FUN_1416781b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141677980((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416782a4;
  }
  _invalid_parameter_noinfo();
LAB_1416782a4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_1416782e0 @ 1416782e0
// ============================================================

void FUN_1416782e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar4 >> 4;
  }
  if (param_3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    lVar4 = (longlong)puVar2 - lVar4 >> 4;
    if (0xfffffffffffffffU - lVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1416721b0();
    }
    uVar6 = param_3 + lVar4;
    if (uVar5 < uVar6) {
      if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      puVar2 = (undefined8 *)FUN_141673840(param_1 + 0x10,uVar5);
      lVar4 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 4;
      FUN_141674b00(puVar2 + lVar4 * 2,param_3,param_4);
      FUN_141673dd0(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar2);
      FUN_141673dd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),
                    puVar2 + (lVar4 + param_3) * 2);
      pvVar1 = *(void **)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar2 + uVar5 * 2;
      *(undefined8 **)(param_1 + 0x20) = puVar2 + (param_3 + (lVar4 - (longlong)pvVar1 >> 4)) * 2;
      *(undefined8 **)(param_1 + 0x18) = puVar2;
    }
    else if ((ulonglong)((longlong)puVar2 - *(longlong *)(param_2 + 8) >> 4) < param_3) {
      local_38 = *param_4;
      local_30 = param_4[1];
      FUN_141673dd0(*(undefined8 **)(param_2 + 8),puVar2,*(undefined8 **)(param_2 + 8) + param_3 * 2
                   );
      FUN_141674b00(*(undefined8 **)(param_1 + 0x20),
                    param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) -
                               *(longlong *)(param_2 + 8) >> 4),&local_38);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x10;
      lVar4 = *(longlong *)(param_1 + 0x20);
      for (puVar2 = *(undefined8 **)(param_2 + 8); puVar2 != (undefined8 *)(lVar4 + param_3 * -0x10)
          ; puVar2 = puVar2 + 2) {
        *puVar2 = local_38;
        puVar2[1] = local_30;
      }
    }
    else {
      local_38 = *param_4;
      local_30 = param_4[1];
      puVar3 = FUN_141673dd0(puVar2 + param_3 * -2,puVar2,puVar2);
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      FUN_141675a70(*(longlong *)(param_2 + 8),(longlong)(puVar2 + param_3 * -2),(longlong)puVar2);
      puVar3 = *(undefined8 **)(param_2 + 8);
      puVar2 = puVar3 + param_3 * 2;
      for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
        *puVar3 = local_38;
        puVar3[1] = local_30;
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_1416785e0 @ 1416785e0
// ============================================================

void FUN_1416785e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_141674cd0(param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_141678620 @ 141678620
// ============================================================

void FUN_141678620(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    FUN_141677740((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_141678660 @ 141678660
// ============================================================

void * FUN_141678660(void *param_1,uint param_2)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  operator_delete(*(void **)((longlong)param_1 + 0x18));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_1416786e0 @ 1416786e0
// ============================================================

void FUN_1416786e0(longlong *param_1)

{
  FUN_1416773c0(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141678710 @ 141678710
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort FUN_141678710(longlong param_1,undefined4 param_2,void *param_3,ushort param_4,ushort param_5
                    ,char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_4c8 [32];
  ushort local_4a8;
  uint local_4a4 [3];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  longlong *local_478;
  longlong *local_468;
  undefined8 local_458;
  undefined2 local_448;
  ushort local_446;
  undefined1 local_444 [1020];
  ulonglong local_48;
  
  local_458 = 0xfffffffffffffffe;
  local_48 = DAT_141688288 ^ (ulonglong)auStack_4c8;
  if (param_6 == '\0') {
    lVar3 = param_1 + 0x80;
  }
  else {
    lVar3 = param_1 + 0x110;
  }
  local_4a4[0] = (uint)param_5;
  local_4a8 = param_4;
  FUN_141677550(lVar3,&local_498,local_4a4);
  lVar5 = *(longlong *)(lVar3 + 0x38);
  local_478 = *(longlong **)(lVar3 + 0x10);
  if ((local_498 == (longlong *)0x0) || (local_498 != local_478)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = (longlong)uStack_490;
  if (uStack_490 != (longlong *)lVar5) {
    if (local_498 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *local_498;
    }
    if (uStack_490 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((*(longlong *)((longlong)uStack_490 + 0x38) - *(longlong *)((longlong)uStack_490 + 0x30) &
        0xfffffffffffffff8U) != 0) {
      local_448 = (ushort)local_448._1_1_ << 8;
      memset((void *)((longlong)&local_448 + 1),0,0x3ff);
      local_448 = param_4 + 4;
      local_446 = param_5;
      memcpy(local_444,param_3,(ulonglong)param_4);
      plVar4 = *(longlong **)((longlong)uStack_490 + 0x30);
      local_498 = (longlong *)0x0;
      if (*(longlong **)((longlong)uStack_490 + 0x38) < plVar4) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)((longlong)uStack_490 + 0x18);
      local_498._0_4_ = SUB84(plVar1,0);
      local_498._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      uStack_490._0_4_ = SUB84(plVar4,0);
      uStack_490._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_488 = (undefined4)local_498;
      uStack_484 = local_498._4_4_;
      uStack_480 = (undefined4)uStack_490;
      uStack_47c = uStack_490._4_4_;
      local_498 = plVar1;
      uStack_490 = plVar4;
      while( true ) {
        plVar2 = *(longlong **)(lVar3 + 0x38);
        local_468 = (longlong *)0x0;
        if (plVar2 < *(longlong **)(lVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        local_468 = *(longlong **)(lVar3 + 0x18);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_468)) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
          _invalid_parameter_noinfo();
        }
        plVar2 = (longlong *)*plVar4;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,&local_448,local_448);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
          _invalid_parameter_noinfo();
        }
        plVar4 = plVar4 + 1;
      }
    }
  }
  return param_4;
}



// ============================================================
// Function: FUN_141678960 @ 141678960
// ============================================================

undefined8 * FUN_141678960(undefined8 *param_1)

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
  lVar2 = FUN_141674540();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_1416789e0 @ 1416789e0
// ============================================================

void FUN_1416789e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 < (undefined8 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined8 *)param_1[3];
  if ((undefined8 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    lVar4 = FUN_1416739d0(puVar1,(undefined8 *)param_1[4],(longlong)puVar2);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 0x10));
    }
    param_1[4] = lVar4;
  }
  return;
}



// ============================================================
// Function: FUN_141678ad0 @ 141678ad0
// ============================================================

void FUN_141678ad0(longlong *param_1,undefined8 *param_2)

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
  FUN_1416781b0(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_141678b80 @ 141678b80
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141678b80(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  ulonglong local_48;
  
  local_88 = 0xfffffffffffffffe;
  local_48 = DAT_141688288 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x38;
  }
  if (param_3 != 0) {
    lVar2 = (*(longlong *)(param_1 + 0x20) - lVar2) / 0x38;
    local_b0 = param_2;
    local_a8 = param_1;
    local_a0 = param_3;
    local_90 = param_4;
    if (0x492492492492492U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_141671c90();
    }
    uVar1 = lVar2 + param_3;
    if (uVar6 < uVar1) {
      if (0x492492492492492 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar4 = (undefined8 *)FUN_141673240(param_1 + 0x10,uVar6);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x38;
      local_b4 = 0;
      local_c0 = 0;
      local_c8 = local_b8;
      local_b0 = lVar2;
      local_98 = puVar4;
      FUN_141675ba0(puVar4 + lVar2 * 7,param_3,local_90);
      local_b4 = 1;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar4);
      local_b4 = 2;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),
                    puVar4 + (param_3 + lVar2) * 7);
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar2 != 0) {
        FUN_141677430(param_1,lVar2,*(longlong *)(param_1 + 0x20));
        operator_delete(*(void **)(param_1 + 0x18));
      }
      *(undefined8 **)(param_1 + 0x28) = puVar4 + uVar6 * 7;
      *(undefined8 **)(param_1 + 0x20) = puVar4 + (param_3 + (lVar3 - lVar2) / 0x38) * 7;
      *(undefined8 **)(param_1 + 0x18) = puVar4;
    }
    else if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38) <
             param_3) {
      local_80 = *param_4;
      local_78 = param_4[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_70,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)(param_4 + 2));
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),
                    *(undefined8 **)(param_2 + 8) + param_3 * 7);
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141675ba0(*(undefined8 **)(param_1 + 0x20),
                    param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) -
                              *(longlong *)(param_2 + 8)) / 0x38,&local_80);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x38;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (puVar4 = *(undefined8 **)(param_2 + 8); puVar4 != (undefined8 *)(lVar2 + param_3 * -0x38)
          ; puVar4 = puVar4 + 7) {
        *puVar4 = local_80;
        puVar4[1] = local_78;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_70);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70);
    }
    else {
      local_80 = *param_4;
      local_78 = param_4[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_70,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)(param_4 + 2));
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      local_c0 = 0;
      local_c8 = local_b8;
      puVar5 = FUN_141674cd0(puVar4 + param_3 * -7,puVar4,puVar4);
      *(undefined8 **)(param_1 + 0x20) = puVar5;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141673c30(*(longlong *)(param_2 + 8),(longlong)(puVar4 + param_3 * -7),(longlong)puVar4);
      puVar5 = *(undefined8 **)(param_2 + 8);
      puVar4 = puVar5 + param_3 * 7;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 7) {
        *puVar5 = local_80;
        puVar5[1] = local_78;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_70);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70);
    }
  }
  return;
}



// ============================================================
// Function: FUN_141678f90 @ 141678f90
// ============================================================

void FUN_141678f90(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_1416782e0(param_1,(longlong)&local_18,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_141678fc0 @ 141678fc0
// ============================================================

void FUN_141678fc0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    FUN_141677740((undefined8 *)(param_2 + 2),(undefined8 *)(param_3 + 2));
  }
  return;
}



// ============================================================
// Function: FUN_141679000 @ 141679000
// ============================================================

void FUN_141679000(longlong param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}



// ============================================================
// Function: FUN_141679050 @ 141679050
// ============================================================

longlong * FUN_141679050(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar4 = param_1[3];
  lVar5 = param_1[4] - uVar4;
  lVar2 = 0;
  lVar6 = lVar5 >> 0x3f;
  lVar3 = lVar2;
  if (lVar5 / 0x38 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) / 0x38;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_141678b80((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar2;
  }
  else {
    lVar6 = *plVar1;
  }
  uVar4 = lVar3 * 0x38 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_141679172;
  }
  _invalid_parameter_noinfo();
LAB_141679172:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}



// ============================================================
// Function: FUN_1416791b0 @ 1416791b0
// ============================================================

void FUN_1416791b0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_2 + 0x30));
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  operator_delete(*(void **)(param_2 + 0x18));
  return;
}



// ============================================================
// Function: FUN_141679200 @ 141679200
// ============================================================

void FUN_141679200(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_3;
  puVar1 = (undefined8 *)param_1[4];
  local_10 = param_3[1];
  if (puVar1 < (undefined8 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined8 *)param_1[3];
  if ((undefined8 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    puVar4 = (undefined8 *)param_1[4];
    puVar6 = puVar1;
    while (puVar6 != puVar4) {
      puVar7 = puVar6 + 2;
      *(undefined8 *)((longlong)puVar2 + (-0x10 - (longlong)puVar1) + (longlong)puVar7) = *puVar6;
      *(undefined8 *)((longlong)puVar2 + (-8 - (longlong)puVar1) + (longlong)puVar7) = puVar6[1];
      puVar6 = puVar7;
    }
    param_1[4] = ((longlong)puVar4 - (longlong)puVar1 & 0xfffffffffffffff0U) + (longlong)puVar2;
  }
  uVar5 = param_1[3];
  if ((ulonglong)param_1[4] < uVar5) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  uStack_20 = uVar5;
  FUN_1416782e0((longlong)param_1,(longlong)&local_28,param_2,&local_18);
  return;
}



// ============================================================
// Function: FUN_141679330 @ 141679330
// ============================================================

undefined8 *
FUN_141679330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = *param_4;
    FUN_141677740(puVar1 + 3,(undefined8 *)(param_4 + 2));
  }
  return puVar1;
}



// ============================================================
// Function: FUN_1416793d0 @ 1416793d0
// ============================================================

void FUN_1416793d0(longlong *param_1,undefined8 *param_2)

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
    uVar3 = (param_1[5] - (longlong)puVar1) / 0x38;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x38) < uVar3) {
    FUN_141675ba0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 7);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_141679050(param_1,local_18,&local_28,param_2);
  return;
}



// ============================================================
// Function: FUN_1416794d0 @ 1416794d0
// ============================================================

void FUN_1416794d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar2 != *(longlong **)(param_1 + 0x28)) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((void *)plVar2[6] != (void *)0x0) {
        operator_delete((void *)plVar2[6]);
      }
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[8] = 0;
      operator_delete((void *)plVar2[3]);
      operator_delete(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x28));
  }
  return;
}



// ============================================================
// Function: FUN_141679580 @ 141679580
// ============================================================

undefined8 * FUN_141679580(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_3[1];
  plVar2 = (longlong *)*param_3;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_3;
    lVar3 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_1416795d1;
  }
  lVar3 = *plVar2;
LAB_1416795d1:
  if (param_3[1] == *(longlong *)(lVar3 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_3[1] = *(longlong *)param_3[1];
  if (plVar1 != (longlong *)param_1[5]) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    if ((void *)plVar1[6] != (void *)0x0) {
      operator_delete((void *)plVar1[6]);
    }
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    operator_delete((void *)plVar1[3]);
    operator_delete(plVar1);
    param_1[6] = param_1[6] + -1;
  }
  param_2[1] = param_3[1];
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_1416796a0 @ 1416796a0
// ============================================================

void FUN_1416796a0(longlong param_1)

{
  FUN_1416794d0(param_1);
  operator_delete(*(void **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// Function: FUN_1416796e0 @ 1416796e0
// ============================================================

void FUN_1416796e0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  puVar2 = FUN_141679330(param_1,lVar1,*(undefined8 *)(lVar1 + 8),param_3);
  FUN_141674740(param_1,1);
  *(undefined8 **)(lVar1 + 8) = puVar2;
  *(undefined8 **)puVar2[1] = puVar2;
  return;
}



// ============================================================
// Function: FUN_141679730 @ 141679730
// ============================================================

longlong * FUN_141679730(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  longlong local_20;
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)param_1[5];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar1) {
    lVar1 = param_1[5];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar1) {
      FUN_1416794d0((longlong)param_1);
      param_2[1] = param_1[5];
      goto LAB_14167980e;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == param_4[1]) break;
    local_28 = *param_3;
    local_20 = param_3[1];
    plVar2 = FUN_141679580(param_1,local_18,&local_28);
    *param_3 = *plVar2;
    param_3[1] = plVar2[1];
  }
  param_2[1] = param_4[1];
LAB_14167980e:
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_141679840 @ 141679840
// ============================================================

void FUN_141679840(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined **local_a0 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_88 [56];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [40];
  
  do {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == param_4[1]) {
      return;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    plVar3 = (longlong *)*param_3;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar3 = (longlong *)*param_3;
      lVar1 = 0;
      if (plVar3 != (longlong *)0x0) goto LAB_1416798e0;
    }
    else {
LAB_1416798e0:
      lVar1 = *plVar3;
    }
    if (param_3[1] == *(longlong *)(lVar1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = FUN_141679330(param_1,lVar4,*(undefined8 *)(lVar4 + 8),
                           (undefined4 *)(param_3[1] + 0x10));
    if (*(longlong *)(param_1 + 0x30) == 0x492492492492492) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"list<T> too long");
      std::exception::exception((exception *)local_a0);
      local_a0[0] = std::logic_error::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_88,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)local_50);
      local_a0[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a0,(ThrowInfo *)&DAT_141686968);
    }
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    *(undefined8 **)(lVar4 + 8) = puVar2;
    *(undefined8 **)puVar2[1] = puVar2;
    plVar3 = (longlong *)*param_3;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar3 = (longlong *)*param_3;
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) goto LAB_1416799aa;
    }
    else {
LAB_1416799aa:
      lVar4 = *plVar3;
    }
    if (param_3[1] == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    param_3[1] = *(longlong *)param_3[1];
  } while( true );
}



// ============================================================
// Function: FUN_1416799f0 @ 1416799f0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416799f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  CIni *this;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  undefined8 *puVar5;
  char *pcVar6;
  longlong *plVar7;
  __uint64 _Var8;
  HMODULE hModule;
  ulonglong extraout_RAX_00;
  ulonglong uVar9;
  FARPROC pFVar10;
  ulonglong extraout_RAX_01;
  INT_PTR IVar11;
  ulonglong extraout_RAX_02;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  char local_158;
  uint local_154;
  longlong local_150;
  longlong local_148;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined8 local_108;
  char *local_100;
  undefined **local_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [56];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98 [40];
  INT_PTR local_70;
  HMODULE local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [40];
  ulonglong local_38;
  
  local_118 = 0xfffffffffffffffe;
  local_38 = DAT_141688288 ^ (ulonglong)auStack_188;
  local_158 = param_2;
  local_150 = param_1;
  DVar3 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x10) = DVar3;
  this = tq::CIni::CreateNew("adapter_cfg.ini",true);
  if (this == (CIni *)0x0) {
    local_168 = 0x3a;
    log_InlineLogERROR(&DAT_141680650,"IF_NOT",&DAT_141681a34,
                       "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
    log_InlineLogERROR("adapter_cfg.ini loading failed at %s, %d",
                       "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp",0x3b);
    uVar9 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_154 = tq::CIni::GetData(this,"Module","Amount");
    uVar9 = CONCAT44(extraout_var,local_154);
    for (uVar15 = 0; (int)uVar15 < (int)uVar9; uVar15 = uVar15 + 1) {
      puVar5 = FUN_1416714d0(&local_d8,"Module%d",(ulonglong)uVar15,param_4);
      if ((ulonglong)puVar5[5] < 0x10) {
        pcVar6 = (char *)(puVar5 + 2);
      }
      else {
        pcVar6 = (char *)puVar5[2];
      }
      pcVar6 = tq::CIni::GetString(this,"Module",pcVar6);
      local_d8 = tq::CString::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d0);
      if (pcVar6 != (char *)0x0) {
        if (param_2 == '\0') {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,pcVar6);
          plVar7 = (longlong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
                             (local_98);
          local_138 = *plVar7;
          local_130 = plVar7[1];
          puVar5 = (undefined8 *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end
                             (local_98);
          local_128 = *puVar5;
          local_120 = (char *)puVar5[1];
          puVar5 = (undefined8 *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
                             (local_98);
          pcVar2 = local_120;
          lVar1 = local_138;
          local_108 = *puVar5;
          pcVar13 = (char *)puVar5[1];
          local_148 = (longlong)local_120 - (longlong)pcVar13;
          lVar14 = local_130;
          local_100 = pcVar13;
          if (local_138 != -4) {
            if (local_138 == 0) {
              _invalid_parameter_noinfo();
            }
            lVar14 = local_130;
            if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
              lVar12 = lVar1 + 8;
            }
            else {
              lVar12 = *(longlong *)(lVar1 + 8);
            }
            puVar5 = (undefined8 *)(lVar1 + 8);
            if ((undefined8 *)(local_130 + local_148) <=
                (undefined8 *)(lVar12 + *(longlong *)(lVar1 + 0x18))) {
              if (0xf < *(ulonglong *)(lVar1 + 0x20)) {
                puVar5 = (undefined8 *)*puVar5;
              }
              if (puVar5 <= (undefined8 *)(local_130 + local_148)) goto LAB_141679c3a;
            }
            _invalid_parameter_noinfo();
          }
LAB_141679c3a:
          if (pcVar13 != pcVar2) {
            lVar14 = lVar14 - (longlong)pcVar13;
            do {
              iVar4 = tolower((int)*pcVar13);
              pcVar13[lVar14] = (char)iVar4;
              pcVar13 = pcVar13 + 1;
            } while (pcVar13 != pcVar2);
          }
          param_4 = 0xf;
          _Var8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find
                            (local_98,"frontierflagwar",0,0xf);
          if (_Var8 != *(__uint64 *)npos_exref) {
            log_InlineLogMessage("GameServer Ignore Load Module[%s]!",pcVar6);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98);
            param_1 = local_150;
            param_2 = local_158;
            goto LAB_141679e14;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98);
          param_1 = local_150;
        }
        hModule = LoadLibraryA(pcVar6);
        if (hModule == (HMODULE)0x0) {
          local_168 = 0x56;
          log_InlineLogERROR("Module%d: %s loading failed at %s, %d. Check DLL dependency!",
                             (ulonglong)uVar15,pcVar6,
                             "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_00;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        pFVar10 = GetProcAddress(hModule,"ModuleCreate");
        if (pFVar10 == (FARPROC)0x0) {
          local_168 = 0x61;
          log_InlineLogERROR("Module%d: %s loading failed at %s, %d. ModuleCreate() is not found!",
                             (ulonglong)uVar15,pcVar6,
                             "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_01;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        IVar11 = (*pFVar10)(param_1);
        if (IVar11 == 0) {
          local_168 = 0x69;
          log_InlineLogERROR("Module%d: %s create failed at %s, %d",(ulonglong)uVar15,pcVar6,
                             "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_02;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
        local_70 = IVar11;
        local_68 = hModule;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (local_60,pcVar6);
        FUN_1416793d0((longlong *)(param_1 + 0x58),&local_70);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
        param_2 = local_158;
      }
LAB_141679e14:
      uVar9 = (ulonglong)local_154;
    }
    if (this != (CIni *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)this)(this,1);
    }
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  return uVar9;
}



// ============================================================
// Function: FUN_141679e70 @ 141679e70
// ============================================================

void FUN_141679e70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  }
  local_18 = *puVar1;
  FUN_141679200((longlong *)(param_1 + 0x48),param_2 + 1,&local_18);
  *(longlong *)(param_1 + 0x80) = param_2;
  *(longlong *)(param_1 + 0x78) = param_2 + -1;
  return;
}



// ============================================================
// Function: FUN_141679ed0 @ 141679ed0
// ============================================================

void FUN_141679ed0(undefined8 *param_1)

{
  FUN_1416794d0((longlong)param_1);
  operator_delete((void *)param_1[5]);
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_141679f10 @ 141679f10
// ============================================================

undefined8 *
FUN_141679f10(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = param_3[1];
  puVar2 = FUN_141679330(param_1,lVar1,*(undefined8 *)(lVar1 + 8),param_4);
  FUN_141674740((longlong)param_1,1);
  *(undefined8 **)(lVar1 + 8) = puVar2;
  *(undefined8 **)puVar2[1] = puVar2;
  if (*param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_3[1] + 8);
  param_3[1] = lVar1;
  if ((longlong *)*param_3 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)*param_3;
  }
  if (lVar1 == *(longlong *)(lVar3 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = 0;
  param_2[1] = param_3[1];
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  return param_2;
}



// ============================================================
// Function: FUN_14167a000 @ 14167a000
// ============================================================

void FUN_14167a000(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = *param_4;
  local_30 = param_4[1];
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_141679840(param_1,(longlong)&local_18,&local_28,&local_38);
  return;
}



// ============================================================
// Function: FUN_14167a060 @ 14167a060
// ============================================================

void FUN_14167a060(longlong param_1)

{
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  operator_delete(*(void **)(param_1 + 0x48));
  FUN_1416794d0(param_1 + 0x10);
  operator_delete(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}



// ============================================================
// Function: FUN_14167a0f0 @ 14167a0f0
// ============================================================

void FUN_14167a0f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1416794d0(param_1 + 0x10);
  local_10 = *(undefined8 *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  }
  local_18 = *puVar1;
  FUN_141679200((longlong *)(param_1 + 0x48),9,&local_18);
  *(undefined8 *)(param_1 + 0x78) = 7;
  *(undefined8 *)(param_1 + 0x80) = 8;
  return;
}



// ============================================================
// Function: FUN_14167a160 @ 14167a160
// ============================================================

longlong FUN_14167a160(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_30;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 8) = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  local_30 = operator_new(8);
  plVar6 = (longlong *)0x0;
  plVar2 = plVar6;
  if (local_30 != (longlong *)0x0) {
    *local_30 = (longlong)puVar1;
    plVar2 = local_30;
  }
  *puVar1 = plVar2;
  uVar3 = FUN_1416745a0();
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar2 = (longlong *)(param_1 + 0x48);
  plVar4 = operator_new(8);
  plVar5 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)plVar2;
    plVar5 = plVar4;
  }
  *plVar2 = (longlong)plVar5;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x40800000;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
    plVar6 = *(longlong **)*puVar1;
  }
  local_30 = (longlong *)*plVar6;
  FUN_141679200(plVar2,9,&local_30);
  *(undefined8 *)(param_1 + 0x78) = 7;
  *(undefined8 *)(param_1 + 0x80) = 8;
  return param_1;
}



// ============================================================
// Function: FUN_14167a260 @ 14167a260
// ============================================================

void FUN_14167a260(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  
  if (param_1 != param_3) {
    FUN_141674740(param_1,param_6);
    *(longlong *)(param_3 + 0x30) = *(longlong *)(param_3 + 0x30) - param_6;
  }
  **(undefined8 **)(*(longlong *)(param_4 + 8) + 8) = *(undefined8 *)(param_5 + 8);
  **(undefined8 **)(*(longlong *)(param_5 + 8) + 8) = *(undefined8 *)(param_2 + 8);
  **(undefined8 **)(*(longlong *)(param_2 + 8) + 8) = *(undefined8 *)(param_4 + 8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_2 + 8) + 8) = *(undefined8 *)(*(longlong *)(param_5 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_5 + 8) + 8) = *(undefined8 *)(*(longlong *)(param_4 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_4 + 8) + 8) = uVar1;
  return;
}



// ============================================================
// Function: FUN_14167a310 @ 14167a310
// ============================================================

void FUN_14167a310(longlong param_1)

{
  FUN_14167a060(param_1);
  return;
}



// ============================================================
// Function: FUN_14167a330 @ 14167a330
// ============================================================

void FUN_14167a330(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar8 = 0;
  do {
    lVar7 = *(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70);
    lVar10 = lVar7 >> 0x3f;
    if (lVar7 / 0x38 + lVar10 == lVar10) {
LAB_14167a407:
      plVar2 = *(longlong **)(param_1 + 0x1a8);
      plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x1d8);
      do {
        do {
          while( true ) {
            while( true ) {
              plVar9 = plVar3;
              plVar3 = *(longlong **)(param_1 + 0x1d8);
              if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x1a8))) {
                _invalid_parameter_noinfo();
              }
              if (plVar9 == plVar3) {
                puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0xc0);
                plVar2 = *(longlong **)(param_1 + 0x98);
                while( true ) {
                  puVar4 = *(undefined8 **)(param_1 + 0xc0);
                  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x98))) {
                    _invalid_parameter_noinfo();
                  }
                  if (puVar5 == puVar4) break;
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_1416772e0(puVar5 + 3);
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  puVar5 = (undefined8 *)*puVar5;
                }
                FUN_1416794d0(param_1 + 0x98);
                local_28 = *(undefined8 *)(param_1 + 0xc0);
                if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x98);
                }
                local_30 = *puVar5;
                FUN_141679200((longlong *)(param_1 + 0xd0),9,&local_30);
                *(undefined8 *)(param_1 + 0x100) = 7;
                *(undefined8 *)(param_1 + 0x108) = 8;
                puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x150);
                plVar2 = *(longlong **)(param_1 + 0x128);
                while( true ) {
                  puVar4 = *(undefined8 **)(param_1 + 0x150);
                  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x128))) {
                    _invalid_parameter_noinfo();
                  }
                  if (puVar5 == puVar4) break;
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_1416772e0(puVar5 + 3);
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  puVar5 = (undefined8 *)*puVar5;
                }
                FUN_1416794d0(param_1 + 0x128);
                local_28 = *(undefined8 *)(param_1 + 0x150);
                if (*(undefined8 **)(param_1 + 0x128) == (undefined8 *)0x0) {
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x128);
                }
                local_30 = *puVar5;
                FUN_141679200((longlong *)(param_1 + 0x160),9,&local_30);
                *(undefined8 *)(param_1 + 400) = 7;
                *(undefined8 *)(param_1 + 0x198) = 8;
                FUN_1416789e0((longlong *)(param_1 + 0x58));
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 8);
                cVar1 = *(char *)((longlong)plVar2 + 0x29);
                while (cVar1 == '\0') {
                  FUN_141673f10(param_1 + 0x18,(longlong *)plVar2[2]);
                  plVar3 = (longlong *)*plVar2;
                  operator_delete(plVar2);
                  plVar2 = plVar3;
                  cVar1 = *(char *)((longlong)plVar3 + 0x29);
                }
                *(longlong *)(*(longlong *)(param_1 + 0x48) + 8) = *(longlong *)(param_1 + 0x48);
                *(undefined8 *)(param_1 + 0x50) = 0;
                *(undefined8 *)*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
                return;
              }
              if (plVar2 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar10 = 0;
              }
              else {
                lVar10 = *plVar2;
              }
              if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(*(longlong *)(plVar9[4] + 8) + 8))();
              if (plVar2 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
              }
              if (*(char *)((longlong)plVar9 + 0x29) == '\0') break;
              _invalid_parameter_noinfo();
              plVar3 = plVar9;
            }
            plVar3 = (longlong *)plVar9[2];
            if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar9 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x29);
              plVar3 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          plVar3 = (longlong *)plVar9[1];
        } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
        do {
          plVar6 = plVar3;
          plVar3 = plVar6;
          if (plVar9 != (longlong *)plVar6[2]) break;
          plVar3 = (longlong *)plVar6[1];
          plVar9 = plVar6;
        } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
      } while( true );
    }
    uVar8 = uVar8 + 1;
    if (1000000 < uVar8) {
      log_InlineLogERROR(&DAT_141680650);
      goto LAB_14167a407;
    }
    puVar5 = (undefined8 *)FUN_141675f30((longlong *)(param_1 + 0x58));
    (**(code **)(*(longlong *)*puVar5 + 8))();
    FreeLibrary((HMODULE)puVar5[1]);
    FUN_141677f00(param_1 + 0x58);
  } while( true );
}



// ============================================================
// Function: FUN_14167a720 @ 14167a720
// ============================================================

longlong FUN_14167a720(longlong param_1)

{
  undefined1 local_res18 [16];
  
  FUN_14167a160(param_1,local_res18);
  return param_1;
}



// ============================================================
// Function: FUN_14167a750 @ 14167a750
// ============================================================

void FUN_14167a750(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = param_3[5];
  if ((*param_4 == 0) || (*param_4 != *param_3)) {
    _invalid_parameter_noinfo();
  }
  if (param_4[1] == lVar6) {
    return;
  }
  plVar1 = (longlong *)*param_4;
  plVar2 = (longlong *)param_4[1];
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar1;
  }
  if (plVar2 == *(longlong **)(lVar6 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  lVar6 = *plVar2;
  if (param_1 == param_3) {
    if ((*param_2 == 0) || (*param_2 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_2[1] == param_4[1]) {
      return;
    }
    if (((longlong *)*param_2 == (longlong *)0x0) || ((longlong *)*param_2 != plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_2[1] == lVar6) {
      return;
    }
  }
  lVar3 = param_4[1];
  lVar4 = param_2[1];
  if (param_1 != param_3) {
    FUN_141674740((longlong)param_1,1);
    param_3[6] = param_3[6] + -1;
  }
  **(longlong **)(lVar3 + 8) = lVar6;
  **(longlong **)(lVar6 + 8) = lVar4;
  **(longlong **)(lVar4 + 8) = lVar3;
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar6 + 8);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar5;
  return;
}



// ============================================================
// Function: FUN_14167a8b0 @ 14167a8b0
// ============================================================

undefined8 * FUN_14167a8b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *local_res18;
  longlong *local_res20;
  
  *param_1 = gs::IRoot::vftable;
  param_1[1] = root::IGame::vftable;
  *param_1 = root::CGame::vftable;
  param_1[1] = root::CGame::vftable;
  FUN_141678960(param_1 + 3);
  local_res18 = operator_new(8);
  plVar1 = (longlong *)0x0;
  if (local_res18 != (longlong *)0x0) {
    *local_res18 = (longlong)(param_1 + 0xb);
    plVar1 = local_res18;
  }
  param_1[0xb] = plVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_res20 = local_res18;
  FUN_14167a160((longlong)(param_1 + 0x11),(undefined1 *)&local_res18);
  local_res18 = param_1 + 0x23;
  FUN_14167a160((longlong)local_res18,(undefined1 *)&local_res20);
  FUN_141678960(param_1 + 0x35);
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 5000;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// ============================================================
// Function: FUN_14167a9a0 @ 14167a9a0
// ============================================================

void FUN_14167a9a0(longlong param_1,uint param_2)

{
  FUN_14167b1f0((undefined8 *)(param_1 + -8),param_2);
  return;
}



// ============================================================
// Function: FUN_14167a9b0 @ 14167a9b0
// ============================================================

void FUN_14167a9b0(undefined8 *param_1)

{
  *param_1 = root::CGame::vftable;
  param_1[1] = root::CGame::vftable;
  FUN_14167a330((longlong)param_1);
  FUN_1416773c0(param_1 + 0x35);
  operator_delete((void *)param_1[0x35]);
  FUN_14167a060((longlong)(param_1 + 0x23));
  FUN_14167a060((longlong)(param_1 + 0x11));
  FUN_141677480((longlong)(param_1 + 0xb));
  operator_delete((void *)param_1[0xb]);
  FUN_1416773c0(param_1 + 3);
  operator_delete((void *)param_1[3]);
  param_1[1] = root::IGame::vftable;
  return;
}



// ============================================================
// Function: GameCreate @ 14167aa80
// ============================================================

longlong * GameCreate(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  
                    /* 0xaa80  3  GameCreate */
  cVar5 = (char)param_4;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_141672df0(0x1f0);
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = FUN_14167a8b0(puVar2);
    }
    cVar1 = FUN_141672eb0(plVar3);
    if (cVar1 == '\0') {
      log_InlineLogERROR(&DAT_141680650);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)plVar3[1])(plVar3 + 1,1);
      }
      plVar3 = (longlong *)0x0;
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0,param_1);
      if (cVar1 == '\0') {
        (**(code **)plVar3[1])(plVar3 + 1,1);
        plVar3 = (longlong *)0x0;
      }
      else {
        cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,1,param_2);
        if (cVar1 == '\0') {
          (**(code **)plVar3[1])(plVar3 + 1,1);
          plVar3 = (longlong *)0x0;
        }
        else {
          cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,2);
          if (cVar1 == '\0') {
            (**(code **)plVar3[1])(plVar3 + 1,1);
            plVar3 = (longlong *)0x0;
          }
          else {
            DAT_1416882b0 = plVar3;
            uVar4 = FUN_1416799f0((longlong)plVar3,cVar5,param_3,param_4);
            if ((char)uVar4 == '\0') {
              log_InlineLogERROR(&DAT_141680650);
              (**(code **)plVar3[1])(plVar3 + 1,1);
              plVar3 = (longlong *)0x0;
            }
            else {
              uVar4 = FUN_141676bc0((longlong)plVar3);
              if ((char)uVar4 == '\0') {
                log_InlineLogERROR(&DAT_141680650);
                (**(code **)plVar3[1])(plVar3 + 1,1);
                plVar3 = (longlong *)0x0;
              }
              else {
                plVar3 = plVar3 + 1;
              }
            }
          }
        }
      }
    }
  }
  return plVar3;
}



// ============================================================
// Function: FUN_14167ac80 @ 14167ac80
// ============================================================

longlong * FUN_14167ac80(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ldiv_t lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  int local_res18;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58 [3];
  
  lVar4 = ldiv((*param_3 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res18 = lVar4.quot;
  iVar3 = lVar4.rem * 0x41a7 + local_res18 * -0xb14;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7fffffff;
  }
  uVar8 = (longlong)iVar3 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar8) {
    uVar8 = uVar8 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8 + 1)
  {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (uVar8 + 1) * 0x10);
  plStack_70 = plVar9;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  lVar11 = uVar8 * 0x10;
  local_78 = plVar2;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8) {
      _invalid_parameter_noinfo();
    }
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar11);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar6) goto LAB_14167ae54;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    plVar9 = (longlong *)plVar9[1];
    lVar10 = 0;
    lVar5 = lVar10;
    if (plVar2 != (longlong *)0x0) {
      lVar5 = *plVar2;
    }
    plStack_70 = plVar9;
    if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar10;
    }
    else {
      lVar5 = *plVar2;
    }
    if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
  } while (*param_3 < *(uint *)(plVar9 + 2));
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar10;
  }
  else {
    lVar5 = *plVar2;
  }
  if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(plVar9 + 2) < *param_3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar10 = *plVar2;
    }
    if (plVar9 == (longlong *)*(longlong *)(lVar10 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    plVar9 = (longlong *)*plVar9;
    plStack_70 = plVar9;
LAB_14167ae54:
    lVar10 = *(longlong *)(param_1 + 0x38);
    if ((*param_4 == 0) || (*param_4 != *plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar10) {
      local_68 = local_78;
      plStack_60 = plStack_70;
      plVar6 = FUN_141679f10(plVar1,local_58,(longlong *)&local_68,param_3);
      *param_4 = *plVar6;
      param_4[1] = plVar6[1];
    }
    else {
      local_68 = (longlong *)*param_4;
      plStack_60 = (longlong *)param_4[1];
      FUN_14167a750(plVar1,(longlong *)&local_78,plVar1,(longlong *)&local_68);
    }
    while( true ) {
      if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8)
      {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar11);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 != plVar6) break;
      local_78 = (longlong *)*param_4;
      plStack_70 = (longlong *)param_4[1];
      if (local_78 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)*local_78;
      }
      local_68 = (longlong *)*local_68;
      plStack_60 = plStack_70;
      if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8)
      {
        _invalid_parameter_noinfo();
      }
      lVar10 = *(longlong *)(param_1 + 0x60);
      *(longlong **)(lVar10 + lVar11) = local_68;
      *(longlong **)(lVar10 + 8 + lVar11) = plStack_60;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      lVar11 = lVar11 + -0x10;
    }
    uVar8 = *(ulonglong *)(param_1 + 0x80);
    fVar12 = (float)*(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) < 0) {
      fVar12 = fVar12 + DAT_141680d58;
    }
    fVar13 = (float)(longlong)uVar8;
    if ((longlong)uVar8 < 0) {
      fVar13 = fVar13 + DAT_141680d58;
    }
    if (*(float *)(param_1 + 0x88) <= fVar12 / fVar13 &&
        fVar12 / fVar13 != *(float *)(param_1 + 0x88)) {
      iVar3 = 0;
      do {
        if (0x7fffffffffffffe < uVar8) break;
        iVar3 = iVar3 + 1;
        uVar8 = uVar8 * 2;
      } while (iVar3 < 3);
      plStack_60 = *(longlong **)(param_1 + 0x38);
      if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = *(undefined8 **)*plVar1;
      }
      local_68 = (longlong *)*puVar7;
      FUN_141679200((longlong *)(param_1 + 0x48),uVar8 + 1,&local_68);
      *(ulonglong *)(param_1 + 0x78) = uVar8 - 1;
      *(ulonglong *)(param_1 + 0x80) = uVar8;
      FUN_14167b100(param_1);
    }
    *param_2 = *param_4;
    plStack_70 = (longlong *)param_4[1];
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x38);
    if ((*param_4 == 0) || (*param_4 != *plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] != lVar11) {
      local_68 = (longlong *)*param_4;
      plStack_60 = (longlong *)param_4[1];
      FUN_141679580(plVar1,local_58,(longlong *)&local_68);
    }
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = (longlong)local_78;
  }
  param_2[1] = (longlong)plStack_70;
  return param_2;
}



// ============================================================
// Function: FUN_14167b100 @ 14167b100
// ============================================================

void FUN_14167b100(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [4];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  while( true ) {
    plVar2 = (longlong *)*plVar1;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (lVar3 == lVar4) break;
    local_48 = SUB84(plVar2,0);
    uStack_44 = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_40 = (undefined4)lVar3;
    uStack_3c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_14167ac80(param_1,local_28,(uint *)(lVar3 + 0x10),(longlong *)&local_38);
  }
  return;
}



// ============================================================
// Function: FUN_14167b1f0 @ 14167b1f0
// ============================================================

undefined8 * FUN_14167b1f0(undefined8 *param_1,uint param_2)

{
  FUN_14167a9b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141672e50(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_14167b220 @ 14167b220
// ============================================================

longlong * FUN_14167b220(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_1 + 0x38);
  local_18 = *(longlong *)(param_1 + 0x10);
  FUN_14167ac80(param_1,param_2,param_3,&local_18);
  return param_2;
}



// ============================================================
// Function: FUN_14167b260 @ 14167b260
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00014167b364) */
/* WARNING: Removing unreachable block (ram,0x00014167b32b) */
/* WARNING: Removing unreachable block (ram,0x00014167b34b) */
/* WARNING: Removing unreachable block (ram,0x00014167b399) */
/* WARNING: Removing unreachable block (ram,0x00014167b39e) */
/* WARNING: Removing unreachable block (ram,0x00014167b3a9) */
/* WARNING: Removing unreachable block (ram,0x00014167b3ae) */
/* WARNING: Removing unreachable block (ram,0x00014167b3b3) */
/* WARNING: Removing unreachable block (ram,0x00014167b3b9) */

void FUN_14167b260(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *local_c8 [3];
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  
  local_60 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  FUN_141677550(param_1 + 0x88,(longlong *)&local_d8,local_res10);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if ((local_d8 == (longlong *)0x0) || (local_d8 != *(longlong **)(param_1 + 0x98))) {
    _invalid_parameter_noinfo();
  }
  if (lStack_d0 != lVar4) {
    if (local_d8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_d8;
    }
    if (lStack_d0 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_141678ad0((longlong *)(lStack_d0 + 0x18),&local_res18);
    return;
  }
  local_res20 = operator_new(8);
  plVar3 = (longlong *)0x0;
  local_d8 = plVar3;
  if (local_res20 != (longlong *)0x0) {
    *local_res20 = (longlong)local_c8;
    local_d8 = local_res20;
  }
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  lStack_d0 = 0;
  local_c8[0] = local_d8;
  FUN_141677980((longlong)local_c8,(longlong)&local_d8,1,&local_res18);
  pvVar2 = local_b0;
  if (local_a8 < local_b0) {
    _invalid_parameter_noinfo();
  }
  plVar1 = local_c8[0];
  if (local_c8[0] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar5 = plVar3;
  }
  else {
    plVar5 = (longlong *)*local_c8[0];
  }
  if (pvVar2 <= (void *)plVar5[4]) {
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)*plVar1;
    }
    if ((void *)plVar3[3] <= pvVar2) goto LAB_14167b436;
  }
  _invalid_parameter_noinfo();
LAB_14167b436:
  local_98[0] = param_2;
  FUN_141677740(local_90,local_c8);
  lStack_d0 = *(undefined8 *)(param_1 + 0xc0);
  local_d8 = *(longlong **)(param_1 + 0x98);
  FUN_14167ac80(param_1 + 0x88,local_58,local_98,(longlong *)&local_d8);
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  operator_delete(local_90[0]);
  if (local_b0 != (void *)0x0) {
    operator_delete(local_b0);
  }
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
  return;
}



// ============================================================
// Function: FUN_14167b530 @ 14167b530
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00014167b634) */
/* WARNING: Removing unreachable block (ram,0x00014167b5fb) */
/* WARNING: Removing unreachable block (ram,0x00014167b61b) */
/* WARNING: Removing unreachable block (ram,0x00014167b669) */
/* WARNING: Removing unreachable block (ram,0x00014167b66e) */
/* WARNING: Removing unreachable block (ram,0x00014167b679) */
/* WARNING: Removing unreachable block (ram,0x00014167b67e) */
/* WARNING: Removing unreachable block (ram,0x00014167b683) */
/* WARNING: Removing unreachable block (ram,0x00014167b689) */

void FUN_14167b530(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *local_c8 [3];
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  
  local_60 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  FUN_141677550(param_1 + 0x118,(longlong *)&local_d8,local_res10);
  lVar4 = *(longlong *)(param_1 + 0x150);
  if ((local_d8 == (longlong *)0x0) || (local_d8 != *(longlong **)(param_1 + 0x128))) {
    _invalid_parameter_noinfo();
  }
  if (lStack_d0 != lVar4) {
    if (local_d8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_d8;
    }
    if (lStack_d0 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_141678ad0((longlong *)(lStack_d0 + 0x18),&local_res18);
    return;
  }
  local_res20 = operator_new(8);
  plVar3 = (longlong *)0x0;
  local_d8 = plVar3;
  if (local_res20 != (longlong *)0x0) {
    *local_res20 = (longlong)local_c8;
    local_d8 = local_res20;
  }
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  lStack_d0 = 0;
  local_c8[0] = local_d8;
  FUN_141677980((longlong)local_c8,(longlong)&local_d8,1,&local_res18);
  pvVar2 = local_b0;
  if (local_a8 < local_b0) {
    _invalid_parameter_noinfo();
  }
  plVar1 = local_c8[0];
  if (local_c8[0] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar5 = plVar3;
  }
  else {
    plVar5 = (longlong *)*local_c8[0];
  }
  if (pvVar2 <= (void *)plVar5[4]) {
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)*plVar1;
    }
    if ((void *)plVar3[3] <= pvVar2) goto LAB_14167b706;
  }
  _invalid_parameter_noinfo();
LAB_14167b706:
  local_98[0] = param_2;
  FUN_141677740(local_90,local_c8);
  lStack_d0 = *(undefined8 *)(param_1 + 0x150);
  local_d8 = *(longlong **)(param_1 + 0x128);
  FUN_14167ac80(param_1 + 0x118,local_58,local_98,(longlong *)&local_d8);
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  operator_delete(local_90[0]);
  if (local_b0 != (void *)0x0) {
    operator_delete(local_b0);
  }
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
  return;
}



// ============================================================
// Function: operator= @ 14167b800
// ============================================================

/* public: class CRoot & __ptr64 __cdecl CRoot::operator=(class CRoot const & __ptr64) __ptr64 */

CRoot * __thiscall CRoot::operator=(CRoot *this,CRoot *param_1)

{
                    /* 0xb800  1  ??4CRoot@@QEAAAEAV0@AEBV0@@Z */
  return this;
}



// ============================================================
// Function: FUN_14167b810 @ 14167b810
// ============================================================

undefined8 FUN_14167b810(void)

{
  return 1;
}



// ============================================================
// Function: __CxxFrameHandler3 @ 14167b8b2
// ============================================================

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167b8b2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// ============================================================
// Function: FID_conflict:`vector_deleting_destructor' @ 14167b8d4
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
// Function: what @ 14167b944
// ============================================================

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



// ============================================================
// Function: operator_delete @ 14167b94a
// ============================================================

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014167b94a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ============================================================
// Function: FUN_14167b958 @ 14167b958
// ============================================================

undefined8 FUN_14167b958(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
// Function: __security_check_cookie @ 14167ba00
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_141688288) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// ============================================================
// Function: memset @ 14167ba20
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167ba20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: _purecall @ 14167ba26
// ============================================================

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167ba26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// ============================================================
// Function: _CxxThrowException @ 14167ba32
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00014167ba32. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: operator_new @ 14167ba3e
// ============================================================

void * __cdecl operator_new(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167ba3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// ============================================================
// Function: _onexit @ 14167ba4c
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
  
  local_res10 = _decode_pointer(DAT_141688870);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_141688870);
    local_res18[0] = _decode_pointer(DAT_141688868);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_141688870 = _encode_pointer(local_res10);
    DAT_141688868 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// ============================================================
// Function: atexit @ 14167bafc
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
// Function: memcpy @ 14167bb1a
// ============================================================

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167bb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// ============================================================
// Function: FUN_14167bb34 @ 14167bb34
// ============================================================

bool FUN_14167bb34(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141688868 = _encode_pointer(puVar1);
  DAT_141688870 = DAT_141688868;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14167c230();
    atexit(FUN_14167c268);
    atexit((_func_5014 *)&LAB_14167c224);
  }
  return puVar1 == (undefined8 *)0x0;
}



// ============================================================
// Function: _CRT_INIT @ 14167bb94
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
    if (DAT_1416882c4 < 1) {
      return 0;
    }
    DAT_1416882c4 = DAT_1416882c4 + -1;
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_141688858 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_141688858;
        lVar2 = DAT_141688858;
      }
      DAT_141688858 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_14167bc0e;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_14167bc0e:
    if (DAT_141688850 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_141688870);
      if (_Memory != (longlong *)0x0) {
        plVar6 = (longlong *)_decode_pointer(DAT_141688868);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = (code *)_decode_pointer(*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = (longlong *)_decode_pointer(DAT_141688870);
            plVar11 = (longlong *)_decode_pointer(DAT_141688868);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_141688868 = _encoded_null();
        DAT_141688870 = DAT_141688868;
      }
      DAT_141688850 = 0;
      if (!bVar1) {
        LOCK();
        DAT_141688858 = 0;
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
      bVar12 = DAT_141688858 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_141688858;
        lVar2 = DAT_141688858;
      }
      DAT_141688858 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_14167bd37;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_14167bd37:
    if (DAT_141688850 == 0) {
      DAT_141688850 = 1;
      iVar3 = _initterm_e(&DAT_141680288,&DAT_141680298);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_141680278,&DAT_141680280);
      DAT_141688850 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_141688858 = 0;
      UNLOCK();
    }
    if ((DAT_141688860 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141688860), BVar4 != 0)) {
      (*DAT_141688860)(param_1,2,param_3);
    }
    DAT_1416882c4 = DAT_1416882c4 + 1;
  }
  return 1;
}



// ============================================================
// Function: __DllMainCRTStartup @ 14167bdf0
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
  if ((param_2 == 0) && (DAT_1416882c4 == 0)) {
    uVar4 = 0;
  }
  else {
    _DAT_1416882a4 = param_2;
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_141681d28 != (undefined *)0x0) {
        iVar1 = (*(code *)PTR_141681d28)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        uVar3 = _CRT_INIT(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        _DAT_1416882a4 = 0xffffffff;
        return 0;
      }
    }
    uVar3 = FUN_14167b810();
    uVar4 = (uint)uVar3;
    if ((param_2 == 1) && (uVar4 == 0)) {
      FUN_14167b810();
      _CRT_INIT(param_1,0,param_3);
      if (PTR_141681d28 != (undefined *)0x0) {
        (*(code *)PTR_141681d28)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = _CRT_INIT(param_1,param_2,param_3);
      uVar4 = -(uint)((int)uVar3 != 0) & uVar4;
      if ((uVar4 != 0) && (PTR_141681d28 != (undefined *)0x0)) {
        uVar4 = (*(code *)PTR_141681d28)(param_1,param_2,param_3);
      }
    }
  }
  _DAT_1416882a4 = 0xffffffff;
  return uVar4;
}



// ============================================================
// Function: entry @ 14167bf28
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
// Function: FUN_14167bf68 @ 14167bf68
// ============================================================

undefined8 FUN_14167bf68(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: __ArrayUnwind @ 14167bf84
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
// Function: `eh_vector_destructor_iterator' @ 14167bfd0
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
// Function: __GSHandlerCheckCommon @ 14167c030
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
// Function: __GSHandlerCheck @ 14167c094
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
// Function: __report_gsfailure @ 14167c0b4
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
  RtlCaptureContext(&DAT_141688370);
  local_30 = DAT_141688468;
  local_38 = RtlLookupFunctionEntry(DAT_141688468,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141688408 = local_res8;
    DAT_141688468 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_141688370,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1416882e0 = DAT_141688468;
  _DAT_1416883f0 = local_res8[0];
  _DAT_1416882d0 = 0xc0000409;
  _DAT_1416882d4 = 1;
  local_20 = DAT_141688288;
  local_18 = DAT_141688290;
  DAT_141688368 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141681d30);
  if (DAT_141688368 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// ============================================================
// Function: _unlock @ 14167c204
// ============================================================

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



// ============================================================
// Function: __dllonexit @ 14167c20a
// ============================================================

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c20a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



// ============================================================
// Function: _lock @ 14167c216
// ============================================================

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



// ============================================================
// Function: FUN_14167c230 @ 14167c230
// ============================================================

void FUN_14167c230(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416824f0; puVar1 < &DAT_1416824f0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_14167c268 @ 14167c268
// ============================================================

void FUN_14167c268(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141682500; puVar1 < &DAT_141682500; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: _ValidateImageBase @ 14167c2b0
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
// Function: _FindPESection @ 14167c2e0
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
// Function: _IsNonwritableInCurrentImage @ 14167c330
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
  
  pImageBase = &IMAGE_DOS_HEADER_141670000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141670000);
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
// Function: _initterm @ 14167c372
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 14167c378
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: _amsg_exit @ 14167c38a
// ============================================================

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



// ============================================================
// Function: __CppXcptFilter @ 14167c390
// ============================================================

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// ============================================================
// Function: __security_init_cookie @ 14167c398
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
  if (DAT_141688288 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141688288 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_141688288 == 0x2b992ddfa232) {
      DAT_141688288 = 0x2b992ddfa233;
    }
  }
  DAT_141688290 = ~DAT_141688288;
  return;
}



// ============================================================
// Function: terminate @ 14167c44c
// ============================================================

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c44c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: _type_info_dtor_internal_method @ 14167c452
// ============================================================

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



// ============================================================
// Function: __crt_debugger_hook @ 14167c458
// ============================================================

void __cdecl __crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crt_debugger_hook(param_1);
  return;
}



// ============================================================
// Function: RtlVirtualUnwind @ 14167c488
// ============================================================

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



// ============================================================
// Function: RtlLookupFunctionEntry @ 14167c48e
// ============================================================

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014167c48e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// ============================================================
// Function: __chkstk @ 14167c4d0
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
// Function: Unwind@14167c520 @ 14167c520
// ============================================================

void Unwind_14167c520(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c540 @ 14167c540
// ============================================================

void Unwind_14167c540(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c560 @ 14167c560
// ============================================================

void Unwind_14167c560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c580 @ 14167c580
// ============================================================

void Unwind_14167c580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c5a0 @ 14167c5a0
// ============================================================

void Unwind_14167c5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c5c0 @ 14167c5c0
// ============================================================

void Unwind_14167c5c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c5e0 @ 14167c5e0
// ============================================================

void Unwind_14167c5e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c600 @ 14167c600
// ============================================================

void Unwind_14167c600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c620 @ 14167c620
// ============================================================

void Unwind_14167c620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c640 @ 14167c640
// ============================================================

void Unwind_14167c640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c660 @ 14167c660
// ============================================================

void Unwind_14167c660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c680 @ 14167c680
// ============================================================

void Unwind_14167c680(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c6a0 @ 14167c6a0
// ============================================================

void Unwind_14167c6a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c6c0 @ 14167c6c0
// ============================================================

void Unwind_14167c6c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c6e0 @ 14167c6e0
// ============================================================

void Unwind_14167c6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c700 @ 14167c700
// ============================================================

void Unwind_14167c700(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c720 @ 14167c720
// ============================================================

void Unwind_14167c720(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c740 @ 14167c740
// ============================================================

void Unwind_14167c740(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c760 @ 14167c760
// ============================================================

void Unwind_14167c760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c780 @ 14167c780
// ============================================================

void Unwind_14167c780(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c7a0 @ 14167c7a0
// ============================================================

void Unwind_14167c7a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c7c0 @ 14167c7c0
// ============================================================

void Unwind_14167c7c0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c7e0 @ 14167c7e0
// ============================================================

void Unwind_14167c7e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c800 @ 14167c800
// ============================================================

void Unwind_14167c800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c820 @ 14167c820
// ============================================================

void Unwind_14167c820(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c840 @ 14167c840
// ============================================================

void Unwind_14167c840(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c860 @ 14167c860
// ============================================================

void Unwind_14167c860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167c880 @ 14167c880
// ============================================================

void Unwind_14167c880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x20) + 8));
  return;
}



// ============================================================
// Function: Catch@14167c8a0 @ 14167c8a0
// ============================================================

undefined * Catch_14167c8a0(void)

{
  return &DAT_14167158e;
}



// ============================================================
// Function: Unwind@14167c8c0 @ 14167c8c0
// ============================================================

void Unwind_14167c8c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167c8e0 @ 14167c8e0
// ============================================================

void Unwind_14167c8e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167c900 @ 14167c900
// ============================================================

void Unwind_14167c900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167c920 @ 14167c920
// ============================================================

void Unwind_14167c920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167c940 @ 14167c940
// ============================================================

void Unwind_14167c940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167c960 @ 14167c960
// ============================================================

void Unwind_14167c960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167c980 @ 14167c980
// ============================================================

void Unwind_14167c980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167c9a0 @ 14167c9a0
// ============================================================

void Unwind_14167c9a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167c9c0 @ 14167c9c0
// ============================================================

void Unwind_14167c9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167c9e0 @ 14167c9e0
// ============================================================

void Unwind_14167c9e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167ca00 @ 14167ca00
// ============================================================

void Unwind_14167ca00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ca20 @ 14167ca20
// ============================================================

void Unwind_14167ca20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167ca40 @ 14167ca40
// ============================================================

void Unwind_14167ca40(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ca60 @ 14167ca60
// ============================================================

void Unwind_14167ca60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167ca80 @ 14167ca80
// ============================================================

void Unwind_14167ca80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167caa0 @ 14167caa0
// ============================================================

void Unwind_14167caa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167cac0 @ 14167cac0
// ============================================================

void Unwind_14167cac0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167cae0 @ 14167cae0
// ============================================================

void Unwind_14167cae0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167cb00 @ 14167cb00
// ============================================================

void Unwind_14167cb00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cb20 @ 14167cb20
// ============================================================

void Unwind_14167cb20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167cb40 @ 14167cb40
// ============================================================

void Unwind_14167cb40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167cb60 @ 14167cb60
// ============================================================

void Unwind_14167cb60(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167cb80 @ 14167cb80
// ============================================================

void Unwind_14167cb80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cba0 @ 14167cba0
// ============================================================

void Unwind_14167cba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cbc0 @ 14167cbc0
// ============================================================

void Unwind_14167cbc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cbe0 @ 14167cbe0
// ============================================================

void Unwind_14167cbe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cc00 @ 14167cc00
// ============================================================

void Unwind_14167cc00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cc20 @ 14167cc20
// ============================================================

void Unwind_14167cc20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cc40 @ 14167cc40
// ============================================================

void Unwind_14167cc40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cc60 @ 14167cc60
// ============================================================

void Unwind_14167cc60(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167cc80 @ 14167cc80
// ============================================================

void Unwind_14167cc80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167cca0 @ 14167cca0
// ============================================================

void Unwind_14167cca0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167ccc0 @ 14167ccc0
// ============================================================

void Unwind_14167ccc0(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@14167cce0 @ 14167cce0
// ============================================================

void Unwind_14167cce0(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@14167cd00 @ 14167cd00
// ============================================================

void Unwind_14167cd00(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@14167cd20 @ 14167cd20
// ============================================================

void Unwind_14167cd20(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@14167cd40 @ 14167cd40
// ============================================================

void Unwind_14167cd40(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cd60 @ 14167cd60
// ============================================================

void Unwind_14167cd60(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cd80 @ 14167cd80
// ============================================================

void Unwind_14167cd80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cda0 @ 14167cda0
// ============================================================

void Unwind_14167cda0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cdc0 @ 14167cdc0
// ============================================================

void Unwind_14167cdc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167cde0 @ 14167cde0
// ============================================================

void Unwind_14167cde0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167ce00 @ 14167ce00
// ============================================================

void Unwind_14167ce00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167ce20 @ 14167ce20
// ============================================================

void Unwind_14167ce20(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167ce40 @ 14167ce40
// ============================================================

void Unwind_14167ce40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167ce60 @ 14167ce60
// ============================================================

void Unwind_14167ce60(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167ce80 @ 14167ce80
// ============================================================

void Unwind_14167ce80(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167cea0 @ 14167cea0
// ============================================================

void Unwind_14167cea0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167cec0 @ 14167cec0
// ============================================================

void Unwind_14167cec0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x58) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167cee0 @ 14167cee0
// ============================================================

void Unwind_14167cee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Catch@14167cf00 @ 14167cf00
// ============================================================

void Catch_14167cf00(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167cf20 @ 14167cf20
// ============================================================

void Unwind_14167cf20(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cf40 @ 14167cf40
// ============================================================

void Unwind_14167cf40(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cf60 @ 14167cf60
// ============================================================

void Unwind_14167cf60(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cf80 @ 14167cf80
// ============================================================

void Unwind_14167cf80(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cfa0 @ 14167cfa0
// ============================================================

void Unwind_14167cfa0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167cfc0 @ 14167cfc0
// ============================================================

void Unwind_14167cfc0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Catch@14167cfe0 @ 14167cfe0
// ============================================================

void Catch_14167cfe0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167d010 @ 14167d010
// ============================================================

void Unwind_14167d010(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d030 @ 14167d030
// ============================================================

void Unwind_14167d030(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Catch@14167d050 @ 14167d050
// ============================================================

void Catch_14167d050(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@14167d080 @ 14167d080
// ============================================================

void Catch_14167d080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167d0b0 @ 14167d0b0
// ============================================================

void Unwind_14167d0b0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d0d0 @ 14167d0d0
// ============================================================

void Unwind_14167d0d0(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d0f0 @ 14167d0f0
// ============================================================

void Unwind_14167d0f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167d110 @ 14167d110
// ============================================================

void Unwind_14167d110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167d130 @ 14167d130
// ============================================================

void Unwind_14167d130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167d150 @ 14167d150
// ============================================================

void Unwind_14167d150(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167d170 @ 14167d170
// ============================================================

void Unwind_14167d170(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d190 @ 14167d190
// ============================================================

void Unwind_14167d190(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d1b0 @ 14167d1b0
// ============================================================

void Unwind_14167d1b0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d1d0 @ 14167d1d0
// ============================================================

void Unwind_14167d1d0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@14167d1f0 @ 14167d1f0
// ============================================================

void Catch_14167d1f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167d210 @ 14167d210
// ============================================================

void Unwind_14167d210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167d230 @ 14167d230
// ============================================================

void Unwind_14167d230(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d250 @ 14167d250
// ============================================================

void Unwind_14167d250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}



// ============================================================
// Function: Catch@14167d270 @ 14167d270
// ============================================================

void Catch_14167d270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167d2c0 @ 14167d2c0
// ============================================================

void Unwind_14167d2c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x20) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167d2e0 @ 14167d2e0
// ============================================================

void Unwind_14167d2e0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d300 @ 14167d300
// ============================================================

void Unwind_14167d300(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d320 @ 14167d320
// ============================================================

void Unwind_14167d320(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d340 @ 14167d340
// ============================================================

void Unwind_14167d340(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d360 @ 14167d360
// ============================================================

void Unwind_14167d360(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d380 @ 14167d380
// ============================================================

void Unwind_14167d380(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d3a0 @ 14167d3a0
// ============================================================

void Unwind_14167d3a0(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d3c0 @ 14167d3c0
// ============================================================

void Unwind_14167d3c0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d3e0 @ 14167d3e0
// ============================================================

void Unwind_14167d3e0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d400 @ 14167d400
// ============================================================

void Unwind_14167d400(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d420 @ 14167d420
// ============================================================

void Unwind_14167d420(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d440 @ 14167d440
// ============================================================

void Unwind_14167d440(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d460 @ 14167d460
// ============================================================

void Unwind_14167d460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167d480 @ 14167d480
// ============================================================

void Unwind_14167d480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@14167d4a0 @ 14167d4a0
// ============================================================

void Unwind_14167d4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167d4c0 @ 14167d4c0
// ============================================================

void Unwind_14167d4c0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@14167d4e0 @ 14167d4e0
// ============================================================

void Unwind_14167d4e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d500 @ 14167d500
// ============================================================

void Unwind_14167d500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167d520 @ 14167d520
// ============================================================

void Unwind_14167d520(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d540 @ 14167d540
// ============================================================

void Unwind_14167d540(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d560 @ 14167d560
// ============================================================

void Unwind_14167d560(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d580 @ 14167d580
// ============================================================

void Unwind_14167d580(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d5a0 @ 14167d5a0
// ============================================================

void Unwind_14167d5a0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d5c0 @ 14167d5c0
// ============================================================

void Unwind_14167d5c0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d5e0 @ 14167d5e0
// ============================================================

void Unwind_14167d5e0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d600 @ 14167d600
// ============================================================

void Unwind_14167d600(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167d620 @ 14167d620
// ============================================================

void Unwind_14167d620(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d640 @ 14167d640
// ============================================================

void Unwind_14167d640(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}



// ============================================================
// Function: Catch@14167d660 @ 14167d660
// ============================================================

void Catch_14167d660(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x50);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167d6b0 @ 14167d6b0
// ============================================================

void Unwind_14167d6b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x20) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167d6d0 @ 14167d6d0
// ============================================================

void Unwind_14167d6d0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d6f0 @ 14167d6f0
// ============================================================

void Unwind_14167d6f0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d710 @ 14167d710
// ============================================================

void Unwind_14167d710(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d730 @ 14167d730
// ============================================================

void Unwind_14167d730(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d750 @ 14167d750
// ============================================================

void Unwind_14167d750(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d770 @ 14167d770
// ============================================================

void Unwind_14167d770(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d790 @ 14167d790
// ============================================================

void Unwind_14167d790(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d7b0 @ 14167d7b0
// ============================================================

void Unwind_14167d7b0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d7d0 @ 14167d7d0
// ============================================================

void Unwind_14167d7d0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d7f0 @ 14167d7f0
// ============================================================

void Unwind_14167d7f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d810 @ 14167d810
// ============================================================

void Unwind_14167d810(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d830 @ 14167d830
// ============================================================

void Unwind_14167d830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@14167d850 @ 14167d850
// ============================================================

void Unwind_14167d850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167d870 @ 14167d870
// ============================================================

void Unwind_14167d870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167d890 @ 14167d890
// ============================================================

void Unwind_14167d890(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167d8b0 @ 14167d8b0
// ============================================================

void Unwind_14167d8b0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d8d0 @ 14167d8d0
// ============================================================

void Unwind_14167d8d0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d8f0 @ 14167d8f0
// ============================================================

void Unwind_14167d8f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d910 @ 14167d910
// ============================================================

void Unwind_14167d910(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d930 @ 14167d930
// ============================================================

void Unwind_14167d930(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167d950 @ 14167d950
// ============================================================

void Unwind_14167d950(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d970 @ 14167d970
// ============================================================

void Unwind_14167d970(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d990 @ 14167d990
// ============================================================

void Unwind_14167d990(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167d9b0 @ 14167d9b0
// ============================================================

void Unwind_14167d9b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Catch@14167d9d0 @ 14167d9d0
// ============================================================

undefined8 Catch_14167d9d0(void)

{
  log_InlineLogCATCH_ERROR("CGame::Init() Exception @%s,%d");
  return 0x141676d0e;
}



// ============================================================
// Function: Catch@14167da10 @ 14167da10
// ============================================================

undefined * Catch_14167da10(void)

{
  log_InlineLogCATCH_ERROR("CGame::OnTimer exception for module:%s");
  return &DAT_141676e1a;
}



// ============================================================
// Function: Unwind@14167da50 @ 14167da50
// ============================================================

void Unwind_14167da50(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167da70 @ 14167da70
// ============================================================

void Unwind_14167da70(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167da90 @ 14167da90
// ============================================================

void Unwind_14167da90(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dab0 @ 14167dab0
// ============================================================

void Unwind_14167dab0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dad0 @ 14167dad0
// ============================================================

void Unwind_14167dad0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167daf0 @ 14167daf0
// ============================================================

void Unwind_14167daf0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167db10 @ 14167db10
// ============================================================

void Unwind_14167db10(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167db30 @ 14167db30
// ============================================================

void Unwind_14167db30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167db50 @ 14167db50
// ============================================================

void Unwind_14167db50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167db70 @ 14167db70
// ============================================================

void Unwind_14167db70(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167dba0 @ 14167dba0
// ============================================================

void Unwind_14167dba0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Unwind@14167dbc0 @ 14167dbc0
// ============================================================

void Unwind_14167dbc0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x90));
  return;
}



// ============================================================
// Function: Catch@14167dbe0 @ 14167dbe0
// ============================================================

void Catch_14167dbe0(undefined8 param_1,longlong param_2)

{
  FUN_1416750c0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167dc10 @ 14167dc10
// ============================================================

void Unwind_14167dc10(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167dc30 @ 14167dc30
// ============================================================

void Unwind_14167dc30(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dc50 @ 14167dc50
// ============================================================

void Unwind_14167dc50(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dc70 @ 14167dc70
// ============================================================

void Unwind_14167dc70(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dc90 @ 14167dc90
// ============================================================

void Unwind_14167dc90(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dcb0 @ 14167dcb0
// ============================================================

void Unwind_14167dcb0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167dcd0 @ 14167dcd0
// ============================================================

void Unwind_14167dcd0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dcf0 @ 14167dcf0
// ============================================================

void Unwind_14167dcf0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dd10 @ 14167dd10
// ============================================================

void Unwind_14167dd10(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dd30 @ 14167dd30
// ============================================================

void Unwind_14167dd30(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@14167dd50 @ 14167dd50
// ============================================================

void Catch_14167dd50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@14167dd80 @ 14167dd80
// ============================================================

void Catch_14167dd80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167dda0 @ 14167dda0
// ============================================================

void Unwind_14167dda0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167ddc0 @ 14167ddc0
// ============================================================

void Unwind_14167ddc0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167dde0 @ 14167dde0
// ============================================================

void Unwind_14167dde0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167de00 @ 14167de00
// ============================================================

void Unwind_14167de00(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167de20 @ 14167de20
// ============================================================

void Unwind_14167de20(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167de40 @ 14167de40
// ============================================================

void Unwind_14167de40(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167de60 @ 14167de60
// ============================================================

void Unwind_14167de60(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167de80 @ 14167de80
// ============================================================

void Unwind_14167de80(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dea0 @ 14167dea0
// ============================================================

void Unwind_14167dea0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dec0 @ 14167dec0
// ============================================================

void Unwind_14167dec0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dee0 @ 14167dee0
// ============================================================

void Unwind_14167dee0(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167df00 @ 14167df00
// ============================================================

void Unwind_14167df00(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167df20 @ 14167df20
// ============================================================

void Unwind_14167df20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167df40 @ 14167df40
// ============================================================

void Unwind_14167df40(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167df60 @ 14167df60
// ============================================================

void Unwind_14167df60(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167df80 @ 14167df80
// ============================================================

void Unwind_14167df80(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dfa0 @ 14167dfa0
// ============================================================

void Unwind_14167dfa0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dfc0 @ 14167dfc0
// ============================================================

void Unwind_14167dfc0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167dfe0 @ 14167dfe0
// ============================================================

void Unwind_14167dfe0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e000 @ 14167e000
// ============================================================

void Unwind_14167e000(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e020 @ 14167e020
// ============================================================

void Unwind_14167e020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x70) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167e040 @ 14167e040
// ============================================================

void Unwind_14167e040(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e060 @ 14167e060
// ============================================================

void Unwind_14167e060(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@14167e080 @ 14167e080
// ============================================================

void Catch_14167e080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Catch@14167e0b0 @ 14167e0b0
// ============================================================

void Catch_14167e0b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167e0d0 @ 14167e0d0
// ============================================================

void Unwind_14167e0d0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167e0f0 @ 14167e0f0
// ============================================================

void Unwind_14167e0f0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e110 @ 14167e110
// ============================================================

void Unwind_14167e110(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167e130 @ 14167e130
// ============================================================

void Unwind_14167e130(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e150 @ 14167e150
// ============================================================

void Unwind_14167e150(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e170 @ 14167e170
// ============================================================

void Unwind_14167e170(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e190 @ 14167e190
// ============================================================

void Unwind_14167e190(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e1b0 @ 14167e1b0
// ============================================================

void Unwind_14167e1b0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e1d0 @ 14167e1d0
// ============================================================

void Unwind_14167e1d0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e1f0 @ 14167e1f0
// ============================================================

void Unwind_14167e1f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e210 @ 14167e210
// ============================================================

void Unwind_14167e210(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e230 @ 14167e230
// ============================================================

void Unwind_14167e230(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@14167e250 @ 14167e250
// ============================================================

undefined * Catch_14167e250(void)

{
  log_InlineLogCATCH_ERROR("CGame::Process(), MsgType: %d @%s,%d");
  return &DAT_14167892d;
}



// ============================================================
// Function: Unwind@14167e290 @ 14167e290
// ============================================================

void Unwind_14167e290(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167e2b0 @ 14167e2b0
// ============================================================

void Unwind_14167e2b0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e2d0 @ 14167e2d0
// ============================================================

void Unwind_14167e2d0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e2f0 @ 14167e2f0
// ============================================================

void Unwind_14167e2f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e310 @ 14167e310
// ============================================================

void Unwind_14167e310(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e330 @ 14167e330
// ============================================================

void Unwind_14167e330(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e350 @ 14167e350
// ============================================================

void Unwind_14167e350(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e370 @ 14167e370
// ============================================================

void Unwind_14167e370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}



// ============================================================
// Function: Catch@14167e390 @ 14167e390
// ============================================================

void Catch_14167e390(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 2) {
    pvVar4 = *(void **)(param_2 + 0x50);
    lVar2 = *(longlong *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    pvVar4 = *(void **)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    FUN_141677430(uVar3,(longlong)pvVar4,(longlong)(lVar2 * 0x38 + (longlong)pvVar4));
  }
  if (0 < iVar1) {
    FUN_141677430(uVar3,(longlong)((longlong)pvVar4 + lVar2 * 0x38),
                  (longlong)((*(longlong *)(param_2 + 0x48) + lVar2) * 0x38 + (longlong)pvVar4));
  }
  operator_delete(pvVar4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167e420 @ 14167e420
// ============================================================

void Unwind_14167e420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167e440 @ 14167e440
// ============================================================

void Unwind_14167e440(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x68);
  return;
}



// ============================================================
// Function: Catch@14167e460 @ 14167e460
// ============================================================

void Catch_14167e460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48) * 0x38;
  FUN_141677430(*(longlong *)(param_2 + 0x40),
                *(longlong *)(*(longlong *)(param_2 + 0x38) + 8) + lVar1,
                lVar1 + *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167e4b0 @ 14167e4b0
// ============================================================

void Unwind_14167e4b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167e4d0 @ 14167e4d0
// ============================================================

void Unwind_14167e4d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167e4f0 @ 14167e4f0
// ============================================================

void Unwind_14167e4f0(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x68);
  return;
}



// ============================================================
// Function: Unwind@14167e510 @ 14167e510
// ============================================================

void Unwind_14167e510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@14167e530 @ 14167e530
// ============================================================

void Unwind_14167e530(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167e550 @ 14167e550
// ============================================================

void Unwind_14167e550(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e570 @ 14167e570
// ============================================================

void Unwind_14167e570(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167e590 @ 14167e590
// ============================================================

void Unwind_14167e590(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e5b0 @ 14167e5b0
// ============================================================

void Unwind_14167e5b0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e5d0 @ 14167e5d0
// ============================================================

void Unwind_14167e5d0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167e5f0 @ 14167e5f0
// ============================================================

void Unwind_14167e5f0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x48) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167e610 @ 14167e610
// ============================================================

void Unwind_14167e610(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e630 @ 14167e630
// ============================================================

void Unwind_14167e630(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167e650 @ 14167e650
// ============================================================

void Unwind_14167e650(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167e670 @ 14167e670
// ============================================================

void Unwind_14167e670(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167e690 @ 14167e690
// ============================================================

void Unwind_14167e690(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Catch@14167e6b0 @ 14167e6b0
// ============================================================

void Catch_14167e6b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167e6e0 @ 14167e6e0
// ============================================================

void Unwind_14167e6e0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x50) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167e700 @ 14167e700
// ============================================================

void Unwind_14167e700(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e720 @ 14167e720
// ============================================================

void Unwind_14167e720(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167e740 @ 14167e740
// ============================================================

void Unwind_14167e740(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@14167e760 @ 14167e760
// ============================================================

void Unwind_14167e760(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x60) + 0x10);
  return;
}



// ============================================================
// Function: Unwind@14167e780 @ 14167e780
// ============================================================

void Unwind_14167e780(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167e7a0 @ 14167e7a0
// ============================================================

void Unwind_14167e7a0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167e7c0 @ 14167e7c0
// ============================================================

void Unwind_14167e7c0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167e7e0 @ 14167e7e0
// ============================================================

void Unwind_14167e7e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x98));
  return;
}



// ============================================================
// Function: Unwind@14167e800 @ 14167e800
// ============================================================

void Unwind_14167e800(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167e820 @ 14167e820
// ============================================================

void Unwind_14167e820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167e840 @ 14167e840
// ============================================================

void Unwind_14167e840(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Catch@14167e860 @ 14167e860
// ============================================================

void Catch_14167e860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  plVar1 = *(longlong **)(param_2 + 0x100);
  puVar2 = *(undefined8 **)(param_2 + 0xf0);
  puVar3 = *(undefined8 **)(param_2 + 0xf8);
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  plVar4 = *(longlong **)(param_2 + 0x20);
  while( true ) {
    if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (puVar7 == (undefined8 *)plVar1[1]) break;
    *(undefined8 *)(param_2 + 0x20) = *puVar3;
    *(undefined8 *)(param_2 + 0x28) = puVar3[1];
    plVar5 = *(longlong **)(param_2 + 0x20);
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    *(longlong *)(param_2 + 0x28) = lVar8;
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    if (lVar8 == *(longlong *)(lVar6 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x28);
    FUN_141679580(puVar2,(undefined8 *)(param_2 + 0x88),(longlong *)(param_2 + 0x30));
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar4;
    }
    if (puVar7 == *(undefined8 **)(lVar8 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puVar7 = (undefined8 *)*puVar7;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@14167e960 @ 14167e960
// ============================================================

void Unwind_14167e960(undefined8 param_1,longlong param_2)

{
  FUN_1416715c0((undefined8 *)(param_2 + 0xb0));
  return;
}



// ============================================================
// Function: Unwind@14167e980 @ 14167e980
// ============================================================

void Unwind_14167e980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb8));
  return;
}



// ============================================================
// Function: Unwind@14167e9a0 @ 14167e9a0
// ============================================================

void Unwind_14167e9a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xf0));
  return;
}



// ============================================================
// Function: Catch@14167e9c0 @ 14167e9c0
// ============================================================

undefined8 Catch_14167e9c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679d0c;
}



// ============================================================
// Function: Catch@14167ea00 @ 14167ea00
// ============================================================

undefined8 Catch_14167ea00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679d61;
}



// ============================================================
// Function: Catch@14167ea40 @ 14167ea40
// ============================================================

undefined8 Catch_14167ea40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679db5;
}



// ============================================================
// Function: Unwind@14167ea80 @ 14167ea80
// ============================================================

void Unwind_14167ea80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}



// ============================================================
// Function: Unwind@14167eaa0 @ 14167eaa0
// ============================================================

void Unwind_14167eaa0(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x118);
  return;
}



// ============================================================
// Function: Unwind@14167eac0 @ 14167eac0
// ============================================================

void Unwind_14167eac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}



// ============================================================
// Function: Catch@14167eae0 @ 14167eae0
// ============================================================

undefined8 Catch_14167eae0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679e33;
}



// ============================================================
// Function: Unwind@14167eb20 @ 14167eb20
// ============================================================

void Unwind_14167eb20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167eb40 @ 14167eb40
// ============================================================

void Unwind_14167eb40(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167eb60 @ 14167eb60
// ============================================================

void Unwind_14167eb60(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167eb80 @ 14167eb80
// ============================================================

void Unwind_14167eb80(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167eba0 @ 14167eba0
// ============================================================

void Unwind_14167eba0(undefined8 param_1,longlong param_2)

{
  FUN_141679ed0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167ebc0 @ 14167ebc0
// ============================================================

void Unwind_14167ebc0(undefined8 param_1,longlong param_2)

{
  FUN_141678170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167ebe0 @ 14167ebe0
// ============================================================

void Unwind_14167ebe0(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167ec00 @ 14167ec00
// ============================================================

void Unwind_14167ec00(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167ec20 @ 14167ec20
// ============================================================

void Unwind_14167ec20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ec40 @ 14167ec40
// ============================================================

void Unwind_14167ec40(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ec60 @ 14167ec60
// ============================================================

void Unwind_14167ec60(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ec80 @ 14167ec80
// ============================================================

void Unwind_14167ec80(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167eca0 @ 14167eca0
// ============================================================

void Unwind_14167eca0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167ecc0 @ 14167ecc0
// ============================================================

void Unwind_14167ecc0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167ece0 @ 14167ece0
// ============================================================

void Unwind_14167ece0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167ed00 @ 14167ed00
// ============================================================

void Unwind_14167ed00(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167ed20 @ 14167ed20
// ============================================================

void Unwind_14167ed20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167ed40 @ 14167ed40
// ============================================================

void Unwind_14167ed40(undefined8 param_1,longlong param_2)

{
  FUN_141679ed0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@14167ed60 @ 14167ed60
// ============================================================

void Unwind_14167ed60(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167ed80 @ 14167ed80
// ============================================================

void Unwind_14167ed80(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167eda0 @ 14167eda0
// ============================================================

void Unwind_14167eda0(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167edc0 @ 14167edc0
// ============================================================

void Unwind_14167edc0(undefined8 param_1,longlong param_2)

{
  FUN_141678170((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167ede0 @ 14167ede0
// ============================================================

void Unwind_14167ede0(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Catch@14167ee00 @ 14167ee00
// ============================================================

undefined * Catch_14167ee00(void)

{
  log_InlineLogCATCH_ERROR("Exception: Module[%s] release fail!");
  return &DAT_14167a3e6;
}



// ============================================================
// Function: Unwind@14167ee50 @ 14167ee50
// ============================================================

void Unwind_14167ee50(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@14167ee70 @ 14167ee70
// ============================================================

void Unwind_14167ee70(undefined8 param_1,longlong param_2)

{
  FUN_1416716a0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167ee90 @ 14167ee90
// ============================================================

void Unwind_14167ee90(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167eeb0 @ 14167eeb0
// ============================================================

void Unwind_14167eeb0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167eed0 @ 14167eed0
// ============================================================

void Unwind_14167eed0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@14167eef0 @ 14167eef0
// ============================================================

void Unwind_14167eef0(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x58));
  return;
}



// ============================================================
// Function: Unwind@14167ef10 @ 14167ef10
// ============================================================

void Unwind_14167ef10(undefined8 param_1,longlong param_2)

{
  FUN_141677ed0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}



// ============================================================
// Function: Unwind@14167ef30 @ 14167ef30
// ============================================================

void Unwind_14167ef30(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@14167ef50 @ 14167ef50
// ============================================================

void Unwind_14167ef50(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x50) + 0x88);
  return;
}



// ============================================================
// Function: Unwind@14167ef70 @ 14167ef70
// ============================================================

void Unwind_14167ef70(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@14167ef90 @ 14167ef90
// ============================================================

void Unwind_14167ef90(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x50) + 0x118);
  return;
}



// ============================================================
// Function: Unwind@14167efb0 @ 14167efb0
// ============================================================

void Unwind_14167efb0(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x1a8));
  return;
}



// ============================================================
// Function: Unwind@14167efd0 @ 14167efd0
// ============================================================

void Unwind_14167efd0(undefined8 param_1,longlong param_2)

{
  FUN_1416716a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@14167eff0 @ 14167eff0
// ============================================================

void Unwind_14167eff0(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@14167f010 @ 14167f010
// ============================================================

void Unwind_14167f010(undefined8 param_1,longlong param_2)

{
  FUN_141677ed0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}



// ============================================================
// Function: Unwind@14167f030 @ 14167f030
// ============================================================

void Unwind_14167f030(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x40) + 0x88);
  return;
}



// ============================================================
// Function: Unwind@14167f050 @ 14167f050
// ============================================================

void Unwind_14167f050(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x40) + 0x118);
  return;
}



// ============================================================
// Function: Unwind@14167f070 @ 14167f070
// ============================================================

void Unwind_14167f070(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x1a8));
  return;
}



// ============================================================
// Function: Unwind@14167f090 @ 14167f090
// ============================================================

void Unwind_14167f090(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f0b0 @ 14167f0b0
// ============================================================

void Unwind_14167f0b0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f0d0 @ 14167f0d0
// ============================================================

void Unwind_14167f0d0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f0f0 @ 14167f0f0
// ============================================================

void Unwind_14167f0f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f110 @ 14167f110
// ============================================================

void Unwind_14167f110(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f130 @ 14167f130
// ============================================================

void Unwind_14167f130(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f150 @ 14167f150
// ============================================================

void Unwind_14167f150(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f170 @ 14167f170
// ============================================================

void Unwind_14167f170(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f190 @ 14167f190
// ============================================================

void Unwind_14167f190(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f1b0 @ 14167f1b0
// ============================================================

void Unwind_14167f1b0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f1d0 @ 14167f1d0
// ============================================================

void Unwind_14167f1d0(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f1f0 @ 14167f1f0
// ============================================================

void Unwind_14167f1f0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f210 @ 14167f210
// ============================================================

void Unwind_14167f210(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f230 @ 14167f230
// ============================================================

void Unwind_14167f230(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f250 @ 14167f250
// ============================================================

void Unwind_14167f250(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f270 @ 14167f270
// ============================================================

void Unwind_14167f270(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x48));
  return;
}



// ============================================================
// Function: Unwind@14167f290 @ 14167f290
// ============================================================

void Unwind_14167f290(undefined8 param_1,longlong param_2)

{
  FUN_141672e50(*(void **)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@14167f2b0 @ 14167f2b0
// ============================================================

undefined8 Catch_14167f2b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab33;
}



// ============================================================
// Function: Catch@14167f2f0 @ 14167f2f0
// ============================================================

undefined8 Catch_14167f2f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab5b;
}



// ============================================================
// Function: Catch@14167f330 @ 14167f330
// ============================================================

undefined8 Catch_14167f330(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab86;
}



// ============================================================
// Function: Catch@14167f370 @ 14167f370
// ============================================================

undefined8 Catch_14167f370(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167abb1;
}



// ============================================================
// Function: Catch@14167f3b0 @ 14167f3b0
// ============================================================

undefined8 Catch_14167f3b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ac09;
}



// ============================================================
// Function: Catch@14167f3f0 @ 14167f3f0
// ============================================================

undefined8 Catch_14167f3f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ac53;
}



// ============================================================
// Function: Unwind@14167f430 @ 14167f430
// ============================================================

void Unwind_14167f430(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167f460 @ 14167f460
// ============================================================

void Unwind_14167f460(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f480 @ 14167f480
// ============================================================

void Unwind_14167f480(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f4a0 @ 14167f4a0
// ============================================================

void Unwind_14167f4a0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f4c0 @ 14167f4c0
// ============================================================

void Unwind_14167f4c0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167f4e0 @ 14167f4e0
// ============================================================

void Unwind_14167f4e0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(param_2 + 0x60);
  return;
}



// ============================================================
// Function: Unwind@14167f500 @ 14167f500
// ============================================================

void Unwind_14167f500(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167f520 @ 14167f520
// ============================================================

void Unwind_14167f520(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Unwind@14167f540 @ 14167f540
// ============================================================

void Unwind_14167f540(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Unwind@14167f560 @ 14167f560
// ============================================================

void Unwind_14167f560(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f580 @ 14167f580
// ============================================================

void Unwind_14167f580(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f5a0 @ 14167f5a0
// ============================================================

void Unwind_14167f5a0(void)

{
  FUN_141671170();
  return;
}



// ============================================================
// Function: Unwind@14167f5d0 @ 14167f5d0
// ============================================================

void Unwind_14167f5d0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f5f0 @ 14167f5f0
// ============================================================

void Unwind_14167f5f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f610 @ 14167f610
// ============================================================

void Unwind_14167f610(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f630 @ 14167f630
// ============================================================

void Unwind_14167f630(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167f650 @ 14167f650
// ============================================================

void Unwind_14167f650(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(param_2 + 0x60);
  return;
}



// ============================================================
// Function: Unwind@14167f670 @ 14167f670
// ============================================================

void Unwind_14167f670(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@14167f690 @ 14167f690
// ============================================================

void Unwind_14167f690(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Unwind@14167f6b0 @ 14167f6b0
// ============================================================

void Unwind_14167f6b0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x100));
  return;
}



// ============================================================
// Function: Unwind@14167f6d0 @ 14167f6d0
// ============================================================

void Unwind_14167f6d0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: Unwind@14167f6f0 @ 14167f6f0
// ============================================================

void Unwind_14167f6f0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}



// ============================================================
// Function: FUN_14167f708 @ 14167f708
// ============================================================

void FUN_14167f708(void)

{
  _unlock(8);
  return;
}



// ============================================================
// Function: FUN_14167f721 @ 14167f721
// ============================================================

void FUN_14167f721(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// ============================================================
// Function: FUN_14167f751 @ 14167f751
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14167f751(void)

{
  _DAT_1416882a4 = 0xffffffff;
  return;
}



// ============================================================
// Function: filt$0 @ 14167f76a
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
// Function: fin$0 @ 14167f7a9
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
// Function: FUN_14167f7e0 @ 14167f7e0
// ============================================================

bool FUN_14167f7e0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




// Total functions: 719, failed: 0
