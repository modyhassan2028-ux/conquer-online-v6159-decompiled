// Decompiled with Ghidra via REA workflow (postScript DecompileAll.java)
// Binary: Flower.dll

// ============================================================
// Function: FUN_140d91020 @ 140d91020
// ============================================================

void FUN_140d91020(void)

{
  log_InlineLogERROR(&DAT_140d9b368);
  return;
}



// ============================================================
// Function: FUN_140d91050 @ 140d91050
// ============================================================

int FUN_140d91050(void)

{
  tm *ptVar1;
  __time32_t local_res8 [8];
  
  local_res8[0] = _time32((__time32_t *)0x0);
  ptVar1 = _localtime32(local_res8);
  if (ptVar1 == (tm *)0x0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return 0;
  }
  return (ptVar1->tm_year * 100 + 0x2e631 + ptVar1->tm_mon) * 100 + ptVar1->tm_mday;
}



// ============================================================
// Function: FUN_140d910c0 @ 140d910c0
// ============================================================

undefined8 FUN_140d910c0(uint param_1)

{
  __time32_t _Var1;
  __time32_t _Var2;
  undefined4 extraout_var;
  tm local_38;
  
  local_38.tm_sec = 0x3b;
  local_38.tm_min = 0x3b;
  local_38.tm_hour = 0x17;
  local_38.tm_isdst = 0;
  local_38.tm_mday = (int)(ushort)((short)param_1 + (short)((ulonglong)param_1 / 100) * -100);
  local_38.tm_mon = (param_1 % 10000) / 100 - 1;
  local_38.tm_year = (param_1 / 10000 & 0xffff) - 0x76c;
  _Var1 = _mktime32(&local_38);
  _Var2 = _time32((__time32_t *)0x0);
  return CONCAT71((int7)(CONCAT44(extraout_var,_Var2) >> 8),_Var1 < _Var2);
}



// ============================================================
// Function: FUN_140d91170 @ 140d91170
// ============================================================

undefined8 FUN_140d91170(undefined8 param_1,int param_2)

{
  IStringManager *pIVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d911f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_FLOWER_NAME_RED");
    return uVar2;
  }
  if (param_2 == 1) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d911d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_FLOWER_NAME_WHITE");
    return uVar2;
  }
  if (param_2 == 2) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d911bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_FLOWER_NAME_LILY");
    return uVar2;
  }
  if (param_2 != 3) {
    return 0;
  }
  pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d911a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_FLOWER_NAME_TULIP");
  return uVar2;
}



// ============================================================
// Function: FUN_140d91200 @ 140d91200
// ============================================================

undefined * FUN_140d91200(undefined8 param_1,int param_2)

{
  IStringManager *pIVar1;
  undefined *puVar2;
  
  if (param_2 == 4) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d91289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_GIFT_NAME_A");
    return puVar2;
  }
  if (param_2 == 5) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d9126f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_GIFT_NAME_B");
    return puVar2;
  }
  if (param_2 == 6) {
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d91255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_GIFT_NAME_C");
    return puVar2;
  }
  if (param_2 != 7) {
    return &DAT_140d9b478;
  }
  pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x000140d9123b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined *)(*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_GIFT_NAME_D");
  return puVar2;
}



// ============================================================
// Function: FUN_140d91290 @ 140d91290
// ============================================================

ulonglong FUN_140d91290(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  if (((param_3 == 1) || (param_3 == 2)) && (param_2 != 0)) {
    FUN_140d976f0(*(longlong *)(param_1 + 0x18),param_2);
    if (param_3 == 2) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,0);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
      FUN_140d97cb0(local_418);
      uVar2 = FUN_140d97e20((longlong)local_418,2,0,0,0,0,0,0,0,0);
      if ((char)uVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                  (*(longlong **)(param_1 + 8),param_2,local_418);
      }
      uVar2 = FUN_140d97d00((undefined8 *)local_418);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,4);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,5);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,6);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
      FUN_140d97cb0(local_418);
      uVar2 = FUN_140d97e20((longlong)local_418,3,0,0,0,0,0,0,0,0);
      if ((char)uVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                  (*(longlong **)(param_1 + 8),param_2,local_418);
      }
      uVar2 = FUN_140d97d00((undefined8 *)local_418);
    }
    uVar1 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    log_InlineLogERROR("CFlowerService::DelFlowerDataByChangeSex sex err, user id:%u, sex:%d.");
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_140d91460 @ 140d91460
// ============================================================

void * FUN_140d91460(void *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d97190((longlong)param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d91490 @ 140d91490
// ============================================================

undefined1 FUN_140d91490(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  plVar2 = FUN_140d97bc0();
  *(longlong **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return 0;
  }
  uVar1 = FUN_140d94020(plVar2,*(longlong *)(param_1 + 8));
  return uVar1;
}



// ============================================================
// Function: FUN_140d91530 @ 140d91530
// ============================================================

void FUN_140d91530(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_res8;
  undefined4 local_res18;
  CMsg local_448 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (cVar1 == '\0') {
    log_InlineLogERROR("CFlowerService::QueryFlower role is not exist, user id:%u.");
    return;
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar9 = 0;
  local_res18 = 0;
  local_res8 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  if (iVar2 == 1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    uVar10 = FUN_140d910c0(uVar3);
    if ((char)uVar10 == '\0') {
      return;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
    if (uVar3 < DAT_140da2008) {
      return;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,0);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,1);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,2);
    local_res18 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),param_2);
    uVar7 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,0);
    uVar8 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,1);
    uVar9 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,2);
    local_res8 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,3);
  }
  FUN_140d97cb0(local_448);
  uVar10 = FUN_140d97e20((longlong)local_448,2,uVar4,uVar7,uVar5,uVar8,uVar6,uVar9,local_res18,
                         local_res8);
  if ((char)uVar10 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
              (*(longlong **)(param_1 + 8),param_2,local_448);
  }
  FUN_140d97d00((undefined8 *)local_448);
  return;
}



// ============================================================
// Function: FUN_140d91710 @ 140d91710
// ============================================================

void FUN_140d91710(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_res8;
  undefined4 local_res18;
  CMsg local_448 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (cVar1 == '\0') {
    log_InlineLogERROR("CFlowerService::QueryGift role is not exist, user id:%u.");
    return;
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar9 = 0;
  local_res18 = 0;
  local_res8 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  if (iVar2 == 2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    uVar10 = FUN_140d910c0(uVar3);
    if ((char)uVar10 == '\0') {
      return;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
    if (uVar3 < DAT_140da2008) {
      return;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,4);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,5);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,6);
    local_res18 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),param_2,7);
    uVar7 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,4);
    uVar8 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,5);
    uVar9 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,6);
    local_res8 = FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,7);
  }
  FUN_140d97cb0(local_448);
  uVar10 = FUN_140d97e20((longlong)local_448,3,uVar4,uVar7,uVar5,uVar8,uVar6,uVar9,local_res18,
                         local_res8);
  if ((char)uVar10 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
              (*(longlong **)(param_1 + 8),param_2,local_448);
  }
  FUN_140d97d00((undefined8 *)local_448);
  return;
}



// ============================================================
// Function: FUN_140d91900 @ 140d91900
// ============================================================

void FUN_140d91900(longlong param_1,uint param_2,undefined4 param_3,char param_4)

{
  if (param_4 != '\0') {
    FUN_140d97400(*(longlong *)(param_1 + 0x18),param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d91915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// ============================================================
// Function: FUN_140d91920 @ 140d91920
// ============================================================

void FUN_140d91920(void)

{
  return;
}



// ============================================================
// Function: FUN_140d91930 @ 140d91930
// ============================================================

void FUN_140d91930(longlong *param_1,uint param_2)

{
  FUN_140d97710((longlong *)param_1[3],param_2);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d91966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return;
}



// ============================================================
// Function: FUN_140d91970 @ 140d91970
// ============================================================

void FUN_140d91970(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d97aa0(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
  return;
}



// ============================================================
// Function: FUN_140d91980 @ 140d91980
// ============================================================

int FUN_140d91980(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (param_2 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
  uVar1 = uVar2 / 1000;
  if (uVar1 == 0x2ef) {
    *param_3 = 0;
    *param_4 = uVar2 - 0xb7598;
    return uVar2 - 0xb7598;
  }
  if (uVar1 == 0x2f0) {
    *param_3 = 1;
    *param_4 = uVar2 - 0xb7980;
    return uVar2 - 0xb7980;
  }
  if (uVar1 != 0x2f1) {
    if (uVar1 != 0x2f2) {
      *param_3 = 0;
      *param_4 = 0;
      return uVar2 * 0x10624dd3;
    }
    *param_3 = 3;
    *param_4 = uVar2 - 0xb8150;
    return uVar2 - 0xb8150;
  }
  *param_3 = 2;
  *param_4 = uVar2 - 0xb7d68;
  return uVar2 - 0xb7d68;
}



// ============================================================
// Function: FUN_140d91a70 @ 140d91a70
// ============================================================

int FUN_140d91a70(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (param_2 == 0)) {
    *param_3 = 4;
    *param_4 = 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
  uVar1 = uVar2 / 1000;
  if (uVar1 == 0x2f3) {
    *param_3 = 4;
    *param_4 = uVar2 - 0xb8538;
    return uVar2 - 0xb8538;
  }
  if (uVar1 == 0x2f4) {
    *param_3 = 5;
    *param_4 = uVar2 - 0xb8920;
    return uVar2 - 0xb8920;
  }
  if (uVar1 != 0x2f5) {
    if (uVar1 != 0x2f6) {
      *param_3 = 4;
      *param_4 = 0;
      return uVar2 * 0x10624dd3;
    }
    *param_3 = 7;
    *param_4 = uVar2 - 0xb90f0;
    return uVar2 - 0xb90f0;
  }
  *param_3 = 6;
  *param_4 = uVar2 - 0xb8d08;
  return uVar2 - 0xb8d08;
}



// ============================================================
// Function: FUN_140d91b70 @ 140d91b70
// ============================================================

void FUN_140d91b70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  *param_1 = flower::CFlowerService::vftable;
  if (param_1[3] != 0) {
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      FUN_140d97190((longlong)pvVar1,param_2,param_3,param_4);
      operator_delete(pvVar1);
    }
    param_1[3] = 0;
    param_1[3] = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d91be0 @ 140d91be0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140d91be0(longlong *param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  IStringManager *pIVar10;
  undefined8 uVar11;
  tm *ptVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_ac8 [32];
  char local_a87;
  uint local_a84;
  uint local_a80;
  uint local_a7c;
  int local_a78;
  undefined8 local_a70;
  CMsg local_a68 [1040];
  char local_658 [511];
  undefined1 local_459;
  char local_458 [1023];
  undefined1 local_59;
  ulonglong local_58;
  
  local_a70 = 0xfffffffffffffffe;
  local_58 = DAT_140da2470 ^ (ulonglong)auStackY_ac8;
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_140d9b368);
    uVar5 = 0;
  }
  else {
    iVar7 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
    if (iVar7 == 1) {
      bVar3 = false;
      local_a87 = '\0';
      cVar6 = (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],param_2);
      if (cVar6 == '\0') {
        pIVar10 = theInstance();
        lVar1 = *(longlong *)param_1[1];
        uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_FLOWER_SENDER_NOT_ALIVE");
        (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar11,0xff0000);
        uVar5 = 0;
      }
      else {
        local_a7c = 0;
        local_a84 = 0;
        if (param_4 == 0) {
          local_a80 = 1;
          bVar3 = true;
          local_a87 = '\x01';
          uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],param_2);
          if (uVar8 < DAT_140da2008) {
            pIVar10 = theInstance();
            lVar1 = *(longlong *)param_1[1];
            uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_FLOWER_LEVEL_TOO_LOW");
            (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar11,0xff0000);
            return 0;
          }
          uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
          uVar11 = FUN_140d910c0(uVar8);
          uVar8 = 0;
          uVar17 = 1;
          if ((char)uVar11 == '\0') {
            local_a80 = _time32((__time32_t *)0x0);
            ptVar12 = _localtime32((__time32_t *)&local_a80);
            if (ptVar12 == (tm *)0x0) {
              log_InlineLogERROR(&DAT_140d9b368);
              return 0;
            }
            pIVar10 = theInstance();
            pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                        (pIVar10,"STR_FLOWER_HAVE_SENT_TODAY");
            _snprintf(local_458,0x400,pcVar13);
            local_59 = 0;
            (**(code **)(*(longlong *)param_1[1] + 0x60))
                      ((longlong *)param_1[1],param_2,local_458,0xff0000);
            return 0;
          }
        }
        else {
          FUN_140d91980((longlong)param_1,param_4,&local_a7c,(int *)&local_a84);
          local_a80 = local_a84;
          uVar8 = local_a7c;
          uVar17 = local_a84;
          if (local_a84 == 0) {
            return 0;
          }
        }
        cVar6 = (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],param_3);
        uVar5 = 0;
        if (cVar6 != '\0') {
          iVar7 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_3);
          if (iVar7 == 2) {
            if (!bVar3) {
              if (param_4 == 0) {
                return 0;
              }
              cVar6 = (*(code *)**(undefined8 **)param_1[1])
                                ((undefined8 *)param_1[1],param_2,param_4);
              if (cVar6 == '\0') {
                return 0;
              }
            }
            iVar7 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                              ((longlong *)param_1[1],param_3,uVar8);
            bVar4 = false;
            local_a84 = uVar17;
            cVar6 = (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1],3);
            uVar16 = uVar17;
            if ((bVar3) && (cVar6 != '\0')) {
              uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_2);
              switch(uVar9) {
              case 0:
                break;
              case 1:
                bVar4 = true;
                uVar16 = 2;
                local_a84 = 2;
                break;
              case 2:
                bVar4 = true;
                uVar16 = 3;
                local_a84 = 3;
                break;
              case 3:
                bVar4 = true;
                uVar16 = 5;
                local_a84 = 5;
                break;
              case 4:
                bVar4 = true;
                uVar16 = 10;
                local_a84 = 10;
                break;
              case 5:
                bVar4 = true;
                uVar16 = 0xf;
                local_a84 = 0xf;
                break;
              case 6:
                bVar4 = true;
                uVar16 = 0x1e;
                local_a84 = 0x1e;
                break;
              default:
                bVar4 = true;
                uVar16 = 0x1e;
                local_a84 = 0x1e;
              }
            }
            local_a78 = iVar7 + uVar16;
            (**(code **)(*(longlong *)param_1[1] + 0x38))
                      ((longlong *)param_1[1],param_3,uVar8,local_a78);
            FUN_140d97430(param_1[3],param_3,uVar8,uVar16);
            FUN_140d97cb0(local_a68);
            plVar2 = (longlong *)param_1[1];
            pcVar13 = (char *)(**(code **)(*plVar2 + 8))(plVar2,param_3);
            pcVar14 = (char *)(**(code **)(*plVar2 + 8))(plVar2);
            uVar15 = FUN_140d97d30((longlong)local_a68,0,pcVar14,pcVar13,uVar16,uVar8,local_a87);
            if ((char)uVar15 == '\0') {
              log_InlineLogERROR(&DAT_140d9b368);
            }
            else if (uVar17 < DAT_140da2018) {
              (**(code **)(*(longlong *)param_1[1] + 0x68))
                        ((longlong *)param_1[1],param_2,local_a68);
              (**(code **)(*(longlong *)param_1[1] + 0x70))
                        ((longlong *)param_1[1],param_3,local_a68,param_2);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0x68))
                        ((longlong *)param_1[1],param_2,local_a68);
              (**(code **)(*(longlong *)param_1[1] + 0x70))
                        ((longlong *)param_1[1],param_3,local_a68,param_2);
              if (uVar8 == 0) {
                if (DAT_140da2018 == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_RED_99");
                  _snprintf(local_658,0x200,pcVar13);
                }
                else if (DAT_140da201c == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_RED_999");
                  _snprintf(local_658,0x200,pcVar13);
                }
              }
              else if (uVar8 == 1) {
                if (DAT_140da2018 == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_WHITE_99");
                  _snprintf(local_658,0x200,pcVar13);
                }
                else if (DAT_140da201c == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_WHITE_999");
                  _snprintf(local_658,0x200,pcVar13);
                }
              }
              else if (uVar8 == 2) {
                if (DAT_140da2018 == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_LILY_99");
                  _snprintf(local_658,0x200,pcVar13);
                }
                else if (DAT_140da201c == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_LILY_999");
                  _snprintf(local_658,0x200,pcVar13);
                }
              }
              else if (uVar8 == 3) {
                if (DAT_140da2018 == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_TULIP_99");
                  _snprintf(local_658,0x200,pcVar13);
                }
                else if (DAT_140da201c == uVar17) {
                  pIVar10 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                              (pIVar10,"STR_FLOWER_GM_PROMPT_TULIP_999");
                  _snprintf(local_658,0x200,pcVar13);
                }
              }
              local_459 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x78))
                        ((longlong *)param_1[1],local_658,0xfc00d5,0x7db);
              pIVar10 = theInstance();
              plVar2 = (longlong *)param_1[1];
              (**(code **)(*param_1 + 0x40))(param_1,local_a7c);
              (**(code **)(*plVar2 + 8))(plVar2,param_3);
              (**(code **)(*plVar2 + 8))(plVar2,param_2);
              pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                          (pIVar10,"STR_FLOWER_GM_PROMPT_ALL");
              _snprintf(local_658,0x200,pcVar13);
              local_459 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x60))
                        ((longlong *)param_1[1],param_2,local_658,0xff0000);
              pIVar10 = theInstance();
              (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
              pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                          (pIVar10,"STR_FLOWER_RECEIVER_PROMPT");
              _snprintf(local_658,0x200,pcVar13);
              local_459 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x60))
                        ((longlong *)param_1[1],param_3,local_658,0xff0000);
              uVar8 = local_a7c;
            }
            if (local_a87 != '\0') {
              if (bVar4) {
                pIVar10 = theInstance();
                (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
                pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)
                                            (pIVar10,"STR_FLOWER_VIP_SYS_SEND");
                _snprintf(local_658,0x200,pcVar13);
                local_459 = 0;
                (**(code **)(*(longlong *)param_1[1] + 0x60))
                          ((longlong *)param_1[1],param_3,local_658,0xff0000);
              }
              iVar7 = FUN_140d91050();
              (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2,iVar7);
            }
            lVar1 = *(longlong *)param_1[1];
            uVar9 = FUN_140d97400(param_1[3],param_3,uVar8);
            (**(code **)(lVar1 + 0x88))(param_1[1],param_3,uVar8 & 0xff,uVar9);
            (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],param_2);
            FUN_140d97d00((undefined8 *)local_a68);
            uVar5 = 1;
          }
          else {
            pIVar10 = theInstance();
            lVar1 = *(longlong *)param_1[1];
            uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_FLOWER_RECEIVER_NOT_FEMALE");
            (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar11,0xff0000);
            uVar5 = 0;
          }
        }
      }
    }
    else {
      pIVar10 = theInstance();
      lVar1 = *(longlong *)param_1[1];
      uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_FLOWER_SENDOR_NOT_MALE");
      (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar11,0xff0000);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ============================================================
// Function: FUN_140d926c0 @ 140d926c0
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140d926c0(longlong *param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  tm *ptVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_cc8 [32];
  char local_c87;
  uint local_c80;
  uint local_c7c;
  uint local_c78;
  __time64_t local_c70 [3];
  CMsg local_c58 [1040];
  char local_848;
  undefined1 local_847 [510];
  undefined1 local_649;
  char local_648 [511];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_c70[1] = 0xfffffffffffffffe;
  local_48 = DAT_140da2470 ^ (ulonglong)auStackY_cc8;
  local_c78 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_140d9b368);
    uVar4 = 0;
  }
  else if (param_1[1] == 0) {
    uVar4 = 0;
  }
  else {
    iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
    if (iVar6 == 2) {
      bVar3 = false;
      local_c87 = '\0';
      cVar5 = (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],param_2);
      if (cVar5 == '\0') {
        pIVar9 = theInstance();
        lVar1 = *(longlong *)param_1[1];
        uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_SENDER_NOT_ALIVE");
        (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar10,0xff0000);
        uVar4 = 0;
      }
      else {
        local_c80 = 4;
        local_c7c = 0;
        if (param_4 == 0) {
          local_c80 = 4;
          local_c7c = 1;
          bVar3 = true;
          local_c87 = '\x01';
          uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],param_2);
          if (uVar7 < DAT_140da2008) {
            pIVar9 = theInstance();
            lVar1 = *(longlong *)param_1[1];
            uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_LEVEL_TOO_LOW");
            (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar10,0xff0000);
            return 0;
          }
          uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
          uVar10 = FUN_140d910c0(uVar7);
          uVar7 = 1;
          uVar15 = 4;
          if ((char)uVar10 == '\0') {
            local_c70[0] = _time64((__time64_t *)0x0);
            ptVar11 = _localtime64(local_c70);
            if (ptVar11 == (tm *)0x0) {
              log_InlineLogERROR(&DAT_140d9b368);
              return 0;
            }
            pIVar9 = theInstance();
            pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_HAVE_SENT_TODAY");
            _snprintf(local_448,0x400,pcVar12);
            local_49 = 0;
            (**(code **)(*(longlong *)param_1[1] + 0x60))
                      ((longlong *)param_1[1],param_2,local_448,0xff0000);
            return 0;
          }
        }
        else {
          FUN_140d91a70((longlong)param_1,param_4,&local_c80,(int *)&local_c7c);
          uVar7 = local_c7c;
          uVar15 = local_c80;
          if (local_c7c == 0) {
            return 0;
          }
        }
        cVar5 = (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],param_3);
        uVar4 = 0;
        if (cVar5 != '\0') {
          iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_3);
          if (iVar6 == 1) {
            if (!bVar3) {
              if (param_4 == 0) {
                return 0;
              }
              cVar5 = (*(code *)**(undefined8 **)param_1[1])
                                ((undefined8 *)param_1[1],param_2,param_4);
              if (cVar5 == '\0') {
                return 0;
              }
            }
            iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                              ((longlong *)param_1[1],param_3,uVar15);
            bVar3 = false;
            cVar5 = (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1],3);
            uVar16 = uVar7;
            if ((local_c87 != '\0') && (cVar5 != '\0')) {
              uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_2);
              switch(uVar8) {
              case 0:
                break;
              case 1:
                bVar3 = true;
                uVar16 = 2;
                break;
              case 2:
                bVar3 = true;
                uVar16 = 3;
                break;
              case 3:
                bVar3 = true;
                uVar16 = 5;
                break;
              case 4:
                bVar3 = true;
                uVar16 = 10;
                break;
              case 5:
                bVar3 = true;
                uVar16 = 0xf;
                break;
              case 6:
                bVar3 = true;
                uVar16 = 0x1e;
                break;
              default:
                bVar3 = true;
                uVar16 = 0x1e;
              }
            }
            local_c70[0] = CONCAT44(local_c70[0]._4_4_,iVar6 + uVar16);
            (**(code **)(*(longlong *)param_1[1] + 0x38))
                      ((longlong *)param_1[1],param_3,uVar15,iVar6 + uVar16);
            FUN_140d97430(param_1[3],param_3,uVar15,uVar16);
            local_848 = '\0';
            memset(local_847,0,0x1ff);
            FUN_140d97cb0(local_c58);
            plVar2 = (longlong *)param_1[1];
            pcVar12 = (char *)(**(code **)(*plVar2 + 8))(plVar2,param_3);
            pcVar13 = (char *)(**(code **)(*plVar2 + 8))(plVar2,param_2);
            uVar15 = local_c80;
            uVar14 = FUN_140d97d30((longlong)local_c58,1,pcVar13,pcVar12,uVar16,local_c80,local_c87)
            ;
            if ((char)uVar14 == '\0') {
              log_InlineLogERROR(&DAT_140d9b368);
            }
            else if (uVar7 < DAT_140da2020) {
              (**(code **)(*(longlong *)param_1[1] + 0x68))
                        ((longlong *)param_1[1],param_2,local_c58);
              (**(code **)(*(longlong *)param_1[1] + 0x70))
                        ((longlong *)param_1[1],param_3,local_c58,param_2);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0x68))
                        ((longlong *)param_1[1],param_2,local_c58);
              (**(code **)(*(longlong *)param_1[1] + 0x70))
                        ((longlong *)param_1[1],param_3,local_c58,param_2);
              if (uVar15 == 4) {
                if (DAT_140da2020 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_A_99");
                  _snprintf(&local_848,0x200,pcVar12);
                }
                else if (DAT_140da2024 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_A_999");
                  _snprintf(&local_848,0x200,pcVar12);
                }
              }
              else if (uVar15 == 5) {
                if (DAT_140da2020 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_B_99");
                  _snprintf(&local_848,0x200,pcVar12);
                }
                else if (DAT_140da2024 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_B_999");
                  _snprintf(&local_848,0x200,pcVar12);
                }
              }
              else if (uVar15 == 6) {
                if (DAT_140da2020 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_C_99");
                  _snprintf(&local_848,0x200,pcVar12);
                }
                else if (DAT_140da2024 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_C_999");
                  _snprintf(&local_848,0x200,pcVar12);
                }
              }
              else if (uVar15 == 7) {
                if (DAT_140da2020 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_D_99");
                  _snprintf(&local_848,0x200,pcVar12);
                }
                else if (DAT_140da2024 == uVar7) {
                  pIVar9 = theInstance();
                  plVar2 = (longlong *)param_1[1];
                  (**(code **)(*plVar2 + 8))(plVar2,param_2);
                  (**(code **)(*plVar2 + 8))(plVar2,param_3);
                  pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                              (pIVar9,"STR_GIFT_GM_PROMPT_D_999");
                  _snprintf(&local_848,0x200,pcVar12);
                }
              }
              local_649 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x78))
                        ((longlong *)param_1[1],&local_848,0xfc00d5,0x7db);
              pIVar9 = theInstance();
              plVar2 = (longlong *)param_1[1];
              (**(code **)(*param_1 + 0x48))(param_1,local_c80);
              (**(code **)(*plVar2 + 8))(plVar2,local_c78);
              (**(code **)(*plVar2 + 8))(plVar2,param_2);
              pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_GM_PROMPT_ALL");
              _snprintf(&local_848,0x200,pcVar12);
              local_649 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x60))
                        ((longlong *)param_1[1],param_2,&local_848,0xff0000);
              pIVar9 = theInstance();
              (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
              pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)
                                          (pIVar9,"STR_GIFT_RECEIVER_PROMPT");
              _snprintf(&local_848,0x200,pcVar12);
              param_3 = local_c78;
              local_649 = 0;
              (**(code **)(*(longlong *)param_1[1] + 0x60))
                        ((longlong *)param_1[1],local_c78,&local_848,0xff0000);
            }
            if (local_c87 != '\0') {
              if (bVar3) {
                pIVar9 = theInstance();
                (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2);
                pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_VIP_SYS_SEND")
                ;
                _snprintf(local_648,0x200,pcVar12);
                local_449 = 0;
                (**(code **)(*(longlong *)param_1[1] + 0x60))
                          ((longlong *)param_1[1],param_3,local_648,0xff0000);
              }
              iVar6 = FUN_140d91050();
              (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2,iVar6);
            }
            uVar7 = local_c80;
            lVar1 = *(longlong *)param_1[1];
            uVar8 = FUN_140d97400(param_1[3],param_3,local_c80);
            (**(code **)(lVar1 + 0x88))(param_1[1],param_3,uVar7 & 0xff,uVar8);
            (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],param_2);
            FUN_140d97d00((undefined8 *)local_c58);
            uVar4 = 1;
          }
          else {
            pIVar9 = theInstance();
            lVar1 = *(longlong *)param_1[1];
            uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_GIFT_RECEIVER_NOT_MALE");
            (**(code **)(lVar1 + 0x60))(param_1[1],param_2,uVar10,0xff0000);
            uVar4 = 0;
          }
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// ============================================================
// Function: FUN_140d931c0 @ 140d931c0
// ============================================================

undefined8 * FUN_140d931c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = flower::CFlowerService::vftable;
    puVar1[1] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d93210 @ 140d93210
// ============================================================

undefined8 *
FUN_140d93210(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d91b70(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d93240 @ 140d93240
// ============================================================

void FUN_140d93240(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_140d93250 @ 140d93250
// ============================================================

undefined8 FUN_140d93250(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d93260 @ 140d93260
// ============================================================

undefined8 FUN_140d93260(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d93270 @ 140d93270
// ============================================================

undefined8 FUN_140d93270(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d93280 @ 140d93280
// ============================================================

undefined8 FUN_140d93280(void)

{
  return 0;
}



// ============================================================
// Function: FUN_140d93290 @ 140d93290
// ============================================================

undefined8 * FUN_140d93290(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d932f0 @ 140d932f0
// ============================================================

void FUN_140d932f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = flower::CModule::vftable;
  plVar1 = (longlong *)param_1[0x84];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_140d97d00(param_1 + 0x85);
  FUN_140d98060(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}



// ============================================================
// Function: FUN_140d93360 @ 140d93360
// ============================================================

ulonglong FUN_140d93360(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}



// ============================================================
// Function: FUN_140d93380 @ 140d93380
// ============================================================

ulonglong FUN_140d93380(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined7 extraout_var;
  ulonglong extraout_RAX_01;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x30))(*(longlong **)(param_1 + 0x840),9);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x420) == 0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  cVar1 = FUN_140d91490(*(longlong *)(param_1 + 0x420),lVar2);
  if (cVar1 == '\0') {
    log_InlineLogERROR(&DAT_140d9b368);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71(extraout_var,1);
}



// ============================================================
// Function: FUN_140d93460 @ 140d93460
// ============================================================

longlong * FUN_140d93460(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 < 0x3ea) {
      return (longlong *)0x0;
    }
    if (uVar1 < 0x3ec) {
      plVar3 = (longlong *)(param_1 + 0x10);
    }
    else {
      if (uVar1 != 0x47e) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x428);
    }
    cVar2 = (**(code **)(*plVar3 + 8))();
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}



// ============================================================
// Function: FUN_140d934e0 @ 140d934e0
// ============================================================

void FUN_140d934e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d934ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x420))();
  return;
}



// ============================================================
// Function: FUN_140d934f0 @ 140d934f0
// ============================================================

bool FUN_140d934f0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_140d931c0();
  *(undefined8 **)(param_1 + 0x420) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x840) + 8))(*(longlong **)(param_1 + 0x840),0x47e,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0x840) + 8))(*(longlong **)(param_1 + 0x840),0x3ea,param_1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0x840) + 8))(*(longlong **)(param_1 + 0x840),0x3eb,param_1)
  ;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x18))
                    (*(longlong **)(param_1 + 0x840),9,*(undefined8 *)(param_1 + 0x420));
  return cVar1 != '\0';
}



// ============================================================
// Function: FUN_140d935a0 @ 140d935a0
// ============================================================

undefined8 FUN_140d935a0(void)

{
  return 1;
}



// ============================================================
// Function: FUN_140d935b0 @ 140d935b0
// ============================================================

undefined8 * FUN_140d935b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = flower::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_140d98010((CMsg *)(param_1 + 2));
  FUN_140d97cb0((CMsg *)(param_1 + 0x85));
  *(undefined4 *)(param_1 + 0x107) = 0;
  param_1[0x108] = param_2;
  param_1[0x84] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d93630 @ 140d93630
// ============================================================

undefined8 *
FUN_140d93630(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d932f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d93660 @ 140d93660
// ============================================================

undefined2 FUN_140d93660(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_140d93460(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x420));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}



// ============================================================
// Function: ModuleCreate @ 140d936d0
// ============================================================

longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x36d0  1  ModuleCreate */
  puVar2 = operator_new(0x848);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_140d935b0(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140d934f0((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}



// ============================================================
// Function: FUN_140d93750 @ 140d93750
// ============================================================

undefined4 * FUN_140d93750(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = param_2;
  return param_1;
}



// ============================================================
// Function: FUN_140d93760 @ 140d93760
// ============================================================

void FUN_140d93760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),1,param_3,param_4,0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// ============================================================
// Function: FUN_140d937b0 @ 140d937b0
// ============================================================

undefined8 FUN_140d937b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
switchD_140d937d7_default:
    return 0;
  }
  switch(param_2) {
  case 0:
  case 4:
    uVar2 = 2;
    break;
  case 1:
  case 5:
    uVar2 = 3;
    break;
  case 2:
  case 6:
    uVar2 = 4;
    break;
  case 3:
  case 7:
    uVar2 = 5;
    break;
  default:
    goto switchD_140d937d7_default;
  }
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),uVar2);
                    /* WARNING: Could not recover jumptable at 0x000140d93807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  return uVar2;
}



// ============================================================
// Function: FUN_140d93850 @ 140d93850
// ============================================================

void FUN_140d93850(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_140d937b0(param_1,param_2);
    switch(param_2) {
    case 0:
    case 4:
      uVar3 = 2;
      break;
    case 1:
    case 5:
      uVar3 = 3;
      break;
    case 2:
    case 6:
      uVar3 = 4;
      break;
    case 3:
    case 7:
      uVar3 = 5;
      break;
    default:
      goto switchD_140d93895_default;
    }
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),uVar3);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3 + (int)uVar1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  }
switchD_140d93895_default:
  return;
}



// ============================================================
// Function: FUN_140d93910 @ 140d93910
// ============================================================

void FUN_140d93910(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  }
  return;
}



// ============================================================
// Function: FUN_140d939b0 @ 140d939b0
// ============================================================

undefined * FUN_140d939b0(void)

{
  if ((DAT_140da2498 & 1) == 0) {
    DAT_140da2498 = DAT_140da2498 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140da2490,"CTodayFlower");
    atexit((_func_5014 *)&LAB_140d9a760);
  }
  return &DAT_140da2490;
}



// ============================================================
// Function: FUN_140d93a10 @ 140d93a10
// ============================================================

void FUN_140d93a10(__uint64 param_1)

{
  if ((DAT_140da2498 & 1) == 0) {
    DAT_140da2498 = DAT_140da2498 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140da2490,"CTodayFlower");
    atexit((_func_5014 *)&LAB_140d9a760);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d93a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140da2490,param_1);
  return;
}



// ============================================================
// Function: FUN_140d93a70 @ 140d93a70
// ============================================================

void FUN_140d93a70(void *param_1)

{
  if ((DAT_140da2498 & 1) == 0) {
    DAT_140da2498 = DAT_140da2498 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140da2490,"CTodayFlower");
    atexit((_func_5014 *)&LAB_140d9a760);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d93ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140da2490,param_1);
  return;
}



// ============================================================
// Function: FUN_140d93ad0 @ 140d93ad0
// ============================================================

void FUN_140d93ad0(void *param_1)

{
  if ((DAT_140da2498 & 1) == 0) {
    DAT_140da2498 = DAT_140da2498 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140da2490,"CTodayFlower");
    atexit((_func_5014 *)&LAB_140d9a760);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d93b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140da2490,param_1);
  return;
}



// ============================================================
// Function: FUN_140d93bc0 @ 140d93bc0
// ============================================================

exception * FUN_140d93bc0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d93c00 @ 140d93c00
// ============================================================

void FUN_140d93c00(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140d93c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d93c30 @ 140d93c30
// ============================================================

exception * FUN_140d93c30(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d93c90 @ 140d93c90
// ============================================================

void FUN_140d93c90(void)

{
  return;
}



// ============================================================
// Function: FUN_140d93ca0 @ 140d93ca0
// ============================================================

exception *
FUN_140d93ca0(exception *param_1,
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
// Function: FUN_140d93cf0 @ 140d93cf0
// ============================================================

void FUN_140d93cf0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d93d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d93d30 @ 140d93d30
// ============================================================

longlong FUN_140d93d30(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}



// ============================================================
// Function: FUN_140d93d50 @ 140d93d50
// ============================================================

exception * FUN_140d93d50(exception *param_1,uint param_2)

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
// Function: FUN_140d93db0 @ 140d93db0
// ============================================================

exception *
FUN_140d93db0(exception *param_1,
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
// Function: FUN_140d93e10 @ 140d93e10
// ============================================================

void FUN_140d93e10(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d93e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d93e60 @ 140d93e60
// ============================================================

exception * FUN_140d93e60(exception *param_1,uint param_2)

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
// Function: FUN_140d93ed0 @ 140d93ed0
// ============================================================

exception *
FUN_140d93ed0(exception *param_1,
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
// Function: FUN_140d93f30 @ 140d93f30
// ============================================================

void FUN_140d93f30(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140d93f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



// ============================================================
// Function: FUN_140d93f80 @ 140d93f80
// ============================================================

exception * FUN_140d93f80(exception *param_1,uint param_2)

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
// Function: FUN_140d93ff0 @ 140d93ff0
// ============================================================

void * FUN_140d93ff0(void *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d93760((longlong)param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_140d93a70(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d94020 @ 140d94020
// ============================================================

undefined1 FUN_140d94020(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140d9b368);
    return 0;
  }
  *param_1 = param_2;
  plVar1 = (longlong *)InstanceGet();
  (**(code **)(*plVar1 + 0x30))(plVar1,"DELETE FROM flower",1,0);
  return 1;
}



// ============================================================
// Function: FUN_140d94090 @ 140d94090
// ============================================================

bool FUN_140d94090(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d940d0 @ 140d940d0
// ============================================================

bool FUN_140d940d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d94190 @ 140d94190
// ============================================================

longlong FUN_140d94190(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d941b2;
  }
  lVar2 = *plVar1;
LAB_140d941b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140d941d0 @ 140d941d0
// ============================================================

longlong * FUN_140d941d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d941f2;
  }
  lVar2 = *plVar1;
LAB_140d941f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d94210 @ 140d94210
// ============================================================

bool FUN_140d94210(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}



// ============================================================
// Function: FUN_140d942f0 @ 140d942f0
// ============================================================

longlong FUN_140d942f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d94312;
  }
  lVar2 = *plVar1;
LAB_140d94312:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d94330 @ 140d94330
// ============================================================

void FUN_140d94330(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140da0930);
}



// ============================================================
// Function: FUN_140d943a0 @ 140d943a0
// ============================================================

exception * FUN_140d943a0(exception *param_1,exception *param_2)

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
// Function: FUN_140d94410 @ 140d94410
// ============================================================

exception * FUN_140d94410(exception *param_1,exception *param_2)

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
// Function: FUN_140d944f0 @ 140d944f0
// ============================================================

void FUN_140d944f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140d94522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d94600 @ 140d94600
// ============================================================

longlong * FUN_140d94600(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140d94630;
  }
  else {
LAB_140d94630:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140d94658;
  }
  _invalid_parameter_noinfo();
LAB_140d94658:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d946f0 @ 140d946f0
// ============================================================

void FUN_140d946f0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140d94770 @ 140d94770
// ============================================================

void FUN_140d94770(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_1 << 3);
  return;
}



// ============================================================
// Function: FUN_140d947f0 @ 140d947f0
// ============================================================

void FUN_140d947f0(ulonglong param_1)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_1 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d94880 @ 140d94880
// ============================================================

exception * FUN_140d94880(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}



// ============================================================
// Function: FUN_140d948e0 @ 140d948e0
// ============================================================

void * FUN_140d948e0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140d94940 @ 140d94940
// ============================================================

longlong FUN_140d94940(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d94962;
  }
  lVar2 = *plVar1;
LAB_140d94962:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}



// ============================================================
// Function: FUN_140d94980 @ 140d94980
// ============================================================

longlong * FUN_140d94980(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d949a2;
  }
  lVar2 = *plVar1;
LAB_140d949a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d949c0 @ 140d949c0
// ============================================================

bool FUN_140d949c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}



// ============================================================
// Function: FUN_140d94a40 @ 140d94a40
// ============================================================

void FUN_140d94a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d94a50 @ 140d94a50
// ============================================================

longlong FUN_140d94a50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d94a72;
  }
  lVar2 = *plVar1;
LAB_140d94a72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d94a90 @ 140d94a90
// ============================================================

void FUN_140d94a90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d94af0 @ 140d94af0
// ============================================================

longlong * FUN_140d94af0(longlong *param_1)

{
  FUN_140d944f0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d94b10 @ 140d94b10
// ============================================================

void FUN_140d94b10(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140d94b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}



// ============================================================
// Function: FUN_140d94bb0 @ 140d94bb0
// ============================================================

void FUN_140d94bb0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140d94c50 @ 140d94c50
// ============================================================

void FUN_140d94c50(longlong param_1,longlong param_2)

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
// Function: FUN_140d94cb0 @ 140d94cb0
// ============================================================

void FUN_140d94cb0(longlong param_1,longlong *param_2)

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
// Function: FUN_140d94d10 @ 140d94d10
// ============================================================

void FUN_140d94d10(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_2 * 8);
  return;
}



// ============================================================
// Function: FUN_140d94d80 @ 140d94d80
// ============================================================

longlong * FUN_140d94d80(longlong *param_1)

{
  FUN_140d944f0(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d94da0 @ 140d94da0
// ============================================================

longlong * FUN_140d94da0(longlong *param_1,longlong param_2)

{
  FUN_140d94600(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140d94dc0 @ 140d94dc0
// ============================================================

void FUN_140d94dc0(undefined8 param_1,ulonglong param_2)

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
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140da09e8);
  }
  operator_new(param_2 * 0x30);
  return;
}



// ============================================================
// Function: FUN_140d94e40 @ 140d94e40
// ============================================================

undefined8 * FUN_140d94e40(undefined8 *param_1)

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
// Function: FUN_140d94ea0 @ 140d94ea0
// ============================================================

longlong FUN_140d94ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140d94ec2;
  }
  lVar2 = *plVar1;
LAB_140d94ec2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}



// ============================================================
// Function: FUN_140d94ee0 @ 140d94ee0
// ============================================================

void FUN_140d94ee0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d94f00 @ 140d94f00
// ============================================================

void FUN_140d94f00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d94f20 @ 140d94f20
// ============================================================

void FUN_140d94f20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d94f20(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}



// ============================================================
// Function: FUN_140d94f70 @ 140d94f70
// ============================================================

longlong * FUN_140d94f70(longlong *param_1)

{
  FUN_140d94b10(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d94f90 @ 140d94f90
// ============================================================

undefined8 FUN_140d94f90(longlong param_1,ulonglong param_2)

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
      FUN_140d94330();
    }
    lVar1 = FUN_140d94bb0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_140d95000 @ 140d95000
// ============================================================

void FUN_140d95000(longlong param_1)

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
// Function: FUN_140d95040 @ 140d95040
// ============================================================

undefined8 * FUN_140d95040(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140d95080 @ 140d95080
// ============================================================

longlong * FUN_140d95080(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140d94b10(param_1);
  return param_2;
}



// ============================================================
// Function: FUN_140d950b0 @ 140d950b0
// ============================================================

undefined8 * FUN_140d950b0(undefined8 *param_1)

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
// Function: FUN_140d950f0 @ 140d950f0
// ============================================================

longlong * FUN_140d950f0(longlong *param_1,longlong param_2)

{
  FUN_140d94600(param_1,-param_2);
  return param_1;
}



// ============================================================
// Function: FUN_140d95110 @ 140d95110
// ============================================================

undefined8 * FUN_140d95110(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140d95170 @ 140d95170
// ============================================================

void FUN_140d95170(void)

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
// Function: FUN_140d951d0 @ 140d951d0
// ============================================================

undefined8 *
FUN_140d951d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
// Function: FUN_140d95250 @ 140d95250
// ============================================================

undefined8 * FUN_140d95250(undefined8 *param_1)

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
// Function: FUN_140d952a0 @ 140d952a0
// ============================================================

void * FUN_140d952a0(void *param_1,longlong param_2,void *param_3)

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
// Function: FUN_140d952e0 @ 140d952e0
// ============================================================

void FUN_140d952e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d94f20(param_1,(longlong *)plVar2[2]);
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
// Function: FUN_140d95360 @ 140d95360
// ============================================================

longlong * FUN_140d95360(longlong *param_1)

{
  FUN_140d94b10(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d95380 @ 140d95380
// ============================================================

void FUN_140d95380(undefined8 *param_1)

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
// Function: FUN_140d953e0 @ 140d953e0
// ============================================================

void FUN_140d953e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d95400 @ 140d95400
// ============================================================

undefined8 * FUN_140d95400(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
// Function: FUN_140d95440 @ 140d95440
// ============================================================

undefined8 * FUN_140d95440(undefined8 *param_1)

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
// Function: FUN_140d95490 @ 140d95490
// ============================================================

undefined8 * FUN_140d95490(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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
// Function: FUN_140d954f0 @ 140d954f0
// ============================================================

longlong * FUN_140d954f0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140d9555d;
  }
  _invalid_parameter_noinfo();
LAB_140d9555d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}



// ============================================================
// Function: FUN_140d95590 @ 140d95590
// ============================================================

undefined8 * FUN_140d95590(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140d955e0 @ 140d955e0
// ============================================================

undefined8 * FUN_140d955e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140da0a48);
  }
  FUN_140d94b10(param_3);
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
        goto LAB_140d957cc;
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
LAB_140d957cc:
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
            FUN_140d94c50((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d94cb0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140d94c50((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140d94cb0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140d94c50((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140d94cb0((longlong)param_1,plVar7);
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
// Function: FUN_140d959a0 @ 140d959a0
// ============================================================

exception * FUN_140d959a0(exception *param_1,exception *param_2)

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
// Function: FUN_140d95a00 @ 140d95a00
// ============================================================

undefined8 * FUN_140d95a00(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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
// Function: FUN_140d95ae0 @ 140d95ae0
// ============================================================

void FUN_140d95ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d95170();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// Function: FUN_140d95b20 @ 140d95b20
// ============================================================

undefined8 *
FUN_140d95b20(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140da0930);
  }
  plVar5 = FUN_140d951d0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
// Function: FUN_140d95e60 @ 140d95e60
// ============================================================

undefined8 * FUN_140d95e60(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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
// Function: FUN_140d95ec0 @ 140d95ec0
// ============================================================

undefined8 * FUN_140d95ec0(undefined8 *param_1)

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
// Function: FUN_140d95f10 @ 140d95f10
// ============================================================

void FUN_140d95f10(longlong *param_1,longlong *param_2,longlong *param_3)

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
// Function: FUN_140d96020 @ 140d96020
// ============================================================

undefined8 * FUN_140d96020(undefined8 *param_1)

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
// Function: FUN_140d96080 @ 140d96080
// ============================================================

undefined8 * FUN_140d96080(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140d960d0 @ 140d960d0
// ============================================================

undefined8 * FUN_140d960d0(undefined8 *param_1,undefined8 *param_2)

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
// Function: FUN_140d96120 @ 140d96120
// ============================================================

ulonglong FUN_140d96120(longlong *param_1)

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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140d96197;
  }
  _invalid_parameter_noinfo();
LAB_140d96197:
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
// Function: FUN_140d961d0 @ 140d961d0
// ============================================================

void FUN_140d961d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d961f0 @ 140d961f0
// ============================================================

longlong * FUN_140d961f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140d952e0((longlong)param_1);
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
    FUN_140d955e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}



// ============================================================
// Function: FUN_140d963e0 @ 140d963e0
// ============================================================

undefined8 * FUN_140d963e0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140d95a00(param_1,param_2,param_3);
  return param_2;
}



// ============================================================
// Function: FUN_140d96400 @ 140d96400
// ============================================================

void FUN_140d96400(longlong *param_1)

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
  FUN_140d961f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ============================================================
// Function: FUN_140d96470 @ 140d96470
// ============================================================

longlong * FUN_140d96470(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
// Function: FUN_140d96560 @ 140d96560
// ============================================================

longlong * FUN_140d96560(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140d966bd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140d966ec;
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
      goto LAB_140d966bd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140d95b20(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140d966ec:
  param_2[1] = (longlong)local_30;
  return param_2;
}



// ============================================================
// Function: FUN_140d96710 @ 140d96710
// ============================================================

undefined8 * FUN_140d96710(undefined8 *param_1)

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
// Function: FUN_140d96760 @ 140d96760
// ============================================================

void FUN_140d96760(longlong *param_1,longlong *param_2,longlong *param_3)

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
// Function: FUN_140d96850 @ 140d96850
// ============================================================

longlong FUN_140d96850(longlong *param_1,uint *param_2)

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
  
  FUN_140d95a00(param_1,&local_38,param_2);
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
  FUN_140d961f0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}



// ============================================================
// Function: FUN_140d96990 @ 140d96990
// ============================================================

longlong * FUN_140d96990(longlong *param_1,longlong *param_2,uint *param_3)

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
// Function: FUN_140d96a60 @ 140d96a60
// ============================================================

void FUN_140d96a60(longlong *param_1)

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
// Function: FUN_140d96b20 @ 140d96b20
// ============================================================

void FUN_140d96b20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d96b40 @ 140d96b40
// ============================================================

longlong * FUN_140d96b40(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140d95b20(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140d95b20(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140d95b20(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),
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
              FUN_140d95b20(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140d95b20(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140d95b20(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140d95b20(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140d96560(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}



// ============================================================
// Function: FUN_140d96e60 @ 140d96e60
// ============================================================

undefined8 * FUN_140d96e60(undefined8 *param_1)

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
// Function: FUN_140d96eb0 @ 140d96eb0
// ============================================================

undefined8 FUN_140d96eb0(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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
// Function: FUN_140d96fb0 @ 140d96fb0
// ============================================================

undefined8 * FUN_140d96fb0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140d96b40(param_1,local_28,(longlong *)&local_38,local_48);
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
// Function: FUN_140d970b0 @ 140d970b0
// ============================================================

void FUN_140d970b0(longlong *param_1)

{
  FUN_140d96400(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d970e0 @ 140d970e0
// ============================================================

undefined8 * FUN_140d970e0(undefined8 *param_1)

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
  lVar2 = FUN_140d95170();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d97160 @ 140d97160
// ============================================================

void FUN_140d97160(longlong *param_1)

{
  FUN_140d96400(param_1);
  operator_delete((void *)*param_1);
  return;
}



// ============================================================
// Function: FUN_140d97190 @ 140d97190
// ============================================================

void FUN_140d97190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28 [2];
  
  plVar5 = (longlong *)**(longlong **)(param_1 + 0x38);
  plVar8 = *(longlong **)(param_1 + 8);
  lVar6 = 0;
  local_48 = plVar8;
  plStack_40 = plVar5;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if ((plVar8 == (longlong *)0x0) || (plVar8 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar2) break;
    if (plVar8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar8;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5[4] != 0) {
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *plVar8;
      }
      if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      pvVar3 = (void *)plVar5[4];
      if (pvVar3 != (void *)0x0) {
        FUN_140d93760((longlong)pvVar3,param_2,param_3,param_4);
        FUN_140d93a70(pvVar3);
      }
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *plVar8;
      }
      if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar5[4] = 0;
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *plVar8;
      }
      if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar5[4] = 0;
    }
    if (plVar8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (plStack_40 = plVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar5 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        while ((plVar5 = plVar4, plStack_40 = plVar5, cVar1 == '\0' &&
               (plVar2 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar2 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar8 = (longlong *)(param_1 + 8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
  cVar1 = *(char *)((longlong)plVar5 + 0x29);
  while (cVar1 == '\0') {
    FUN_140d94f20(plVar8,(longlong *)plVar5[2]);
    plVar2 = (longlong *)*plVar5;
    operator_delete(plVar5);
    plVar5 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
  plStack_40 = *(longlong **)(param_1 + 0x38);
  local_48 = (longlong *)*plVar8;
  uStack_30 = *plStack_40;
  local_38 = local_48;
  FUN_140d961f0(plVar8,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete((void *)*plVar8);
  return;
}



// ============================================================
// Function: FUN_140d97400 @ 140d97400
// ============================================================

void FUN_140d97400(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140d96eb0(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140d937b0(lVar1,param_3);
  return;
}



// ============================================================
// Function: FUN_140d97430 @ 140d97430
// ============================================================

void FUN_140d97430(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  lVar2 = FUN_140d96eb0(param_1,param_2);
  if (lVar2 == 0) {
    plVar3 = (longlong *)InstanceGet();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,PTR_s_flower_140da22f8);
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140d9b368);
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,0);
      (**(code **)(*plVar4 + 0xb0))(plVar4,0);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,1);
      (**(code **)(*plVar4 + 0xb8))(plVar4,param_2);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
      (**(code **)(*plVar4 + 0xb0))(plVar4,0);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
      (**(code **)(*plVar4 + 0xb0))(plVar4,0);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
      (**(code **)(*plVar4 + 0xb0))(plVar4,0);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,5);
      (**(code **)(*plVar4 + 0xb0))(plVar4,0);
      switch(param_3) {
      case 0:
      case 4:
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
        (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
        break;
      case 1:
      case 5:
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
        (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
        break;
      case 2:
      case 6:
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
        (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
        break;
      case 3:
      case 7:
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,5);
        (**(code **)(*plVar4 + 0xb8))(plVar4,param_4);
        break;
      default:
        (**(code **)*plVar3)(plVar3,1);
        return;
      }
      cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,1);
      if (cVar1 == '\0') {
        (**(code **)*plVar3)(plVar3,1);
      }
      else {
        puVar5 = (undefined4 *)FUN_140d93a10(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_140d93750(puVar5,plVar3,param_2);
        }
        if (puVar5 == (undefined4 *)0x0) {
          (**(code **)*plVar3)(plVar3,1);
          log_InlineLogERROR(&DAT_140d9b368);
        }
        else {
          puVar6 = FUN_140d96fb0((longlong *)(param_1 + 8),local_res10);
          *puVar6 = puVar5;
        }
      }
    }
  }
  else {
    FUN_140d93850(lVar2,param_3,param_4);
  }
  return;
}



// ============================================================
// Function: FUN_140d976f0 @ 140d976f0
// ============================================================

void FUN_140d976f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d96eb0(param_1,param_2);
  if (lVar1 != 0) {
    FUN_140d93910(lVar1);
  }
  return;
}



// ============================================================
// Function: FUN_140d97710 @ 140d97710
// ============================================================

void FUN_140d97710(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_68 [3];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_res10[0] = param_2;
  if (*param_1 == 0) {
    log_InlineLogERROR(&DAT_140d9b368);
  }
  else {
    plVar4 = (longlong *)0x0;
    local_res18 = operator_new(8);
    local_68[0] = plVar4;
    if (local_res18 != (longlong *)0x0) {
      *local_res18 = (longlong)local_68;
      local_68[0] = local_res18;
    }
    local_50 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_res20 = local_res18;
    (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,local_68,param_2,0x21);
    uVar5 = (longlong)local_48 - (longlong)local_50 >> 3;
    if (uVar5 == 0) {
      if (local_50 != (longlong *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
    }
    else {
      if (uVar5 == 1) {
        puVar2 = (undefined8 *)FUN_140d96120((longlong *)local_68);
        plVar7 = (longlong *)*puVar2;
      }
      else {
        plVar7 = plVar4;
        if (1 < uVar5) {
          puVar2 = (undefined8 *)FUN_140d96120((longlong *)local_68);
          plVar3 = local_50;
          plVar7 = (longlong *)*puVar2;
          if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffff8U) != 0) {
            local_48 = local_48 + -1;
          }
          local_res18 = plVar7;
          plVar1 = local_68[0];
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
            plVar1 = local_68[0];
          }
          while( true ) {
            plVar6 = local_48;
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            if ((plVar1 == (longlong *)0x0) || (plVar1 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            if (plVar3 == plVar6) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar6 = plVar4;
            }
            else {
              plVar6 = (longlong *)*plVar1;
            }
            if ((longlong *)plVar6[4] <= plVar3) {
              _invalid_parameter_noinfo();
            }
            puVar2 = (undefined8 *)*plVar3;
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar6 = plVar4;
            }
            else {
              plVar6 = (longlong *)*plVar1;
            }
            if ((longlong *)plVar6[4] <= plVar3) {
              _invalid_parameter_noinfo();
            }
            plVar3 = plVar3 + 1;
          }
          log_InlineLogERROR("CTodayFlowerMgr::OnUserLogin,player(%u) data not only.");
        }
      }
      FUN_140d96a60((longlong *)local_68);
      if (plVar7 == (longlong *)0x0) {
        if (local_50 != (longlong *)0x0) {
          operator_delete(local_50);
        }
        local_50 = (longlong *)0x0;
        local_48 = (longlong *)0x0;
        local_40 = 0;
        operator_delete(local_68[0]);
      }
      else {
        plVar3 = FUN_140d96fb0(param_1 + 1,local_res10);
        if (*plVar3 == 0) {
          local_res18 = (longlong *)FUN_140d93a10(0x10);
          if (local_res18 != (longlong *)0x0) {
            plVar4 = (longlong *)FUN_140d93750((undefined4 *)local_res18,plVar7,param_2);
          }
          if (plVar4 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_140d9b368);
          }
          else {
            puVar2 = FUN_140d96fb0(param_1 + 1,local_res10);
            *puVar2 = plVar4;
          }
        }
        else {
          log_InlineLogERROR("CTodayFlowerMgr::OnUserLogin, player(%u) data already exist.");
        }
        if (local_50 != (longlong *)0x0) {
          operator_delete(local_50);
        }
        local_50 = (longlong *)0x0;
        local_48 = (longlong *)0x0;
        local_40 = 0;
        operator_delete(local_68[0]);
      }
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d97aa0 @ 140d97aa0
// ============================================================

void FUN_140d97aa0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint local_res10 [2];
  
  puVar3 = local_res10;
  local_res10[0] = param_2;
  puVar2 = FUN_140d96fb0((longlong *)(param_1 + 8),puVar3);
  pvVar1 = (void *)*puVar2;
  if (pvVar1 != (void *)0x0) {
    FUN_140d93760((longlong)pvVar1,puVar3,param_3,param_4);
    FUN_140d93a70(pvVar1);
    FUN_140d96850((longlong *)(param_1 + 8),local_res10);
  }
  return;
}



// ============================================================
// Function: FUN_140d97b10 @ 140d97b10
// ============================================================

undefined8 * FUN_140d97b10(undefined8 *param_1)

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
  lVar2 = FUN_140d95170();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// Function: FUN_140d97b90 @ 140d97b90
// ============================================================

undefined8 * FUN_140d97b90(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_140d97b10(param_1 + 1);
  return param_1;
}



// ============================================================
// Function: FUN_140d97bc0 @ 140d97bc0
// ============================================================

undefined8 * FUN_140d97bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_140d97b10(puVar1 + 1);
  }
  return puVar1;
}



// ============================================================
// Function: FUN_140d97c10 @ 140d97c10
// ============================================================

CMsg * FUN_140d97c10(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}



// ============================================================
// Function: FUN_140d97c40 @ 140d97c40
// ============================================================

void FUN_140d97c40(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d97c50 @ 140d97c50
// ============================================================

void FUN_140d97c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d97c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140d97c60 @ 140d97c60
// ============================================================

void FUN_140d97c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d97c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}



// ============================================================
// Function: FUN_140d97c70 @ 140d97c70
// ============================================================

void FUN_140d97c70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d97c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}



// ============================================================
// Function: FUN_140d97c80 @ 140d97c80
// ============================================================

undefined8 * FUN_140d97c80(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d97cb0 @ 140d97cb0
// ============================================================

CMsg * FUN_140d97cb0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = flower::CMsgFlower::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d97d00 @ 140d97d00
// ============================================================

void FUN_140d97d00(undefined8 *param_1)

{
  *param_1 = flower::CMsgFlower::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d97d30 @ 140d97d30
// ============================================================

ulonglong FUN_140d97d30(longlong param_1,undefined2 param_2,char *param_3,char *param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if ((param_3 != (char *)0x0) && (param_4 != (char *)0x0)) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x47e;
    **(undefined2 **)(param_1 + 0x408) = 0x3c;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x10),param_3,0x10);
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x20),param_4,0x10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x34) = param_6;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x38) = param_7;
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d97e20 @ 140d97e20
// ============================================================

undefined8
FUN_140d97e20(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10)

{
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x47e;
  **(undefined2 **)(param_1 + 0x408) = 0x3c;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_10;
  return CONCAT71((uint7)(uint3)((uint)param_10 >> 8),1);
}



// ============================================================
// Function: FUN_140d97ec0 @ 140d97ec0
// ============================================================

bool FUN_140d97ec0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x47e;
}



// ============================================================
// Function: FUN_140d97ef0 @ 140d97ef0
// ============================================================

void FUN_140d97ef0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d9b368);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x408);
    sVar1 = *(short *)(lVar2 + 4);
    if (sVar1 == 2) {
      (**(code **)(*param_3 + 0x20))(param_3);
    }
    else if (sVar1 == 3) {
      (**(code **)(*param_3 + 0x28))(param_3);
    }
    else if (sVar1 == 0) {
      if (*(int *)(lVar2 + 8) != 0) {
        (**(code **)(*param_3 + 0x30))
                  (param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
      }
    }
    else if ((sVar1 == 1) && (*(int *)(lVar2 + 8) != 0)) {
      (**(code **)(*param_3 + 0x38))
                (param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d97fc0 @ 140d97fc0
// ============================================================

undefined8 * FUN_140d97fc0(undefined8 *param_1,byte param_2)

{
  *param_1 = flower::CMsgFlower::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: FUN_140d98010 @ 140d98010
// ============================================================

CMsg * FUN_140d98010(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = flower::CMsgLog::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}



// ============================================================
// Function: FUN_140d98060 @ 140d98060
// ============================================================

void FUN_140d98060(undefined8 *param_1)

{
  *param_1 = flower::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}



// ============================================================
// Function: FUN_140d98090 @ 140d98090
// ============================================================

ulonglong FUN_140d98090(CMsg *param_1,char *param_2,ushort param_3)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  bVar3 = tq::CMsg::Create(param_1,param_2,param_3);
  uVar4 = CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 0x3ea) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 0;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if (uVar1 == 0x3eb) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 1;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// ============================================================
// Function: FUN_140d980f0 @ 140d980f0
// ============================================================

void FUN_140d980f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140d9b368);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x408) + 8);
    if (iVar1 == 0) {
      (**(code **)(*param_3 + 8))(param_3);
    }
    else if (iVar1 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d98170 @ 140d98170
// ============================================================

undefined8 * FUN_140d98170(undefined8 *param_1,byte param_2)

{
  *param_1 = flower::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// ============================================================
// Function: Init @ 140d981e2
// ============================================================

void __thiscall tq::CMsg::Init(CMsg *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140d981e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Init(this);
  return;
}



// ============================================================
// Function: Create @ 140d981e8
// ============================================================

bool __thiscall tq::CMsg::Create(CMsg *this,char *param_1,ushort param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d981e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



// ============================================================
// Function: __CxxFrameHandler3 @ 140d98224
// ============================================================

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98224. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// ============================================================
// Function: FID_conflict:`vector_deleting_destructor' @ 140d9823c
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
// Function: _purecall @ 140d982ac
// ============================================================

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d982ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// ============================================================
// Function: operator_delete @ 140d982b2
// ============================================================

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d982b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



// ============================================================
// Function: FUN_140d982b8 @ 140d982b8
// ============================================================

undefined8 FUN_140d982b8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
// Function: __security_check_cookie @ 140d98360
// ============================================================

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140da2470) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// ============================================================
// Function: memset @ 140d98380
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// Function: operator_new @ 140d98386
// ============================================================

void * __cdecl operator_new(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// ============================================================
// Function: _onexit @ 140d9838c
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
  
  local_res10 = _decode_pointer(DAT_140da2a40);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140da2a40);
    local_res18[0] = _decode_pointer(DAT_140da2a38);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140da2a40 = _encode_pointer(local_res10);
    DAT_140da2a38 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// ============================================================
// Function: atexit @ 140d9843c
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
// Function: what @ 140d98460
// ============================================================

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



// ============================================================
// Function: _CxxThrowException @ 140d98472
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98472. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// Function: FUN_140d98498 @ 140d98498
// ============================================================

bool FUN_140d98498(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140da2a38 = _encode_pointer(puVar1);
  DAT_140da2a40 = DAT_140da2a38;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140d98b94();
    atexit(FUN_140d98bcc);
    atexit((_func_5014 *)&LAB_140d98b88);
  }
  return puVar1 == (undefined8 *)0x0;
}



// ============================================================
// Function: _CRT_INIT @ 140d984f8
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
    if (DAT_140da249c < 1) {
      return 0;
    }
    DAT_140da249c = DAT_140da249c + -1;
    lVar8 = *(longlong *)((longlong)Self + 8);
    while( true ) {
      lVar5 = 0;
      LOCK();
      bVar12 = DAT_140da2a28 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140da2a28;
        lVar2 = DAT_140da2a28;
      }
      DAT_140da2a28 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140d98572;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140d98572:
    if (DAT_140da2a20 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140da2a40);
      if (_Memory != (longlong *)0x0) {
        plVar6 = (longlong *)_decode_pointer(DAT_140da2a38);
        plVar7 = plVar6;
        while (plVar6 = plVar6 + -1, _Memory <= plVar6) {
          if ((*plVar6 != 0) && (lVar8 = _encoded_null(), *plVar6 != lVar8)) {
            pcVar9 = (code *)_decode_pointer(*plVar6);
            lVar8 = _encoded_null();
            *plVar6 = lVar8;
            (*pcVar9)();
            plVar10 = (longlong *)_decode_pointer(DAT_140da2a40);
            plVar11 = (longlong *)_decode_pointer(DAT_140da2a38);
            if ((_Memory != plVar10) || (plVar7 != plVar11)) {
              plVar6 = plVar11;
              _Memory = plVar10;
              plVar7 = plVar11;
            }
          }
        }
        free(_Memory);
        DAT_140da2a38 = _encoded_null();
        DAT_140da2a40 = DAT_140da2a38;
      }
      DAT_140da2a20 = 0;
      if (!bVar1) {
        LOCK();
        DAT_140da2a28 = 0;
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
      bVar12 = DAT_140da2a28 == 0;
      lVar2 = lVar8;
      if (!bVar12) {
        lVar5 = DAT_140da2a28;
        lVar2 = DAT_140da2a28;
      }
      DAT_140da2a28 = lVar2;
      UNLOCK();
      if (bVar12) goto LAB_140d9869b;
      if (lVar5 == lVar8) break;
      Sleep(1000);
    }
    bVar1 = true;
LAB_140d9869b:
    if (DAT_140da2a20 == 0) {
      DAT_140da2a20 = 1;
      iVar3 = _initterm_e(&DAT_140d9b248,&DAT_140d9b258);
      if (iVar3 != 0) {
        return 0;
      }
      _initterm(&DAT_140d9b238,&DAT_140d9b240);
      DAT_140da2a20 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      LOCK();
      DAT_140da2a28 = 0;
      UNLOCK();
    }
    if ((DAT_140da2a30 != (code *)0x0) &&
       (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140da2a30), BVar4 != 0)) {
      (*DAT_140da2a30)(param_1,2,param_3);
    }
    DAT_140da249c = DAT_140da249c + 1;
  }
  return 1;
}



// ============================================================
// Function: __DllMainCRTStartup @ 140d98754
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
  if ((param_2 == 0) && (DAT_140da249c == 0)) {
    uVar4 = 0;
  }
  else {
    _DAT_140da2480 = param_2;
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_140d9ddb0 != (undefined *)0x0) {
        iVar1 = (*(code *)PTR_140d9ddb0)();
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        uVar3 = _CRT_INIT(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
      }
      if (iVar2 == 0) {
        _DAT_140da2480 = 0xffffffff;
        return 0;
      }
    }
    uVar3 = FUN_140d935a0();
    uVar4 = (uint)uVar3;
    if ((param_2 == 1) && (uVar4 == 0)) {
      FUN_140d935a0();
      _CRT_INIT(param_1,0,param_3);
      if (PTR_140d9ddb0 != (undefined *)0x0) {
        (*(code *)PTR_140d9ddb0)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = _CRT_INIT(param_1,param_2,param_3);
      uVar4 = -(uint)((int)uVar3 != 0) & uVar4;
      if ((uVar4 != 0) && (PTR_140d9ddb0 != (undefined *)0x0)) {
        uVar4 = (*(code *)PTR_140d9ddb0)(param_1,param_2,param_3);
      }
    }
  }
  _DAT_140da2480 = 0xffffffff;
  return uVar4;
}



// ============================================================
// Function: entry @ 140d9888c
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
// Function: FUN_140d988cc @ 140d988cc
// ============================================================

undefined8 FUN_140d988cc(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// ============================================================
// Function: __ArrayUnwind @ 140d988e8
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
// Function: `eh_vector_destructor_iterator' @ 140d98934
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
// Function: __GSHandlerCheckCommon @ 140d98994
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
// Function: __GSHandlerCheck @ 140d989f8
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
// Function: __report_gsfailure @ 140d98a18
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
  RtlCaptureContext(&DAT_140da2540);
  local_30 = DAT_140da2638;
  local_38 = RtlLookupFunctionEntry(DAT_140da2638,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140da25d8 = local_res8;
    DAT_140da2638 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140da2540,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140da24b0 = DAT_140da2638;
  _DAT_140da25c0 = local_res8[0];
  _DAT_140da24a0 = 0xc0000409;
  _DAT_140da24a4 = 1;
  local_20 = DAT_140da2470;
  local_18 = DAT_140da2478;
  DAT_140da2538 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140d9ddb8);
  if (DAT_140da2538 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// ============================================================
// Function: _unlock @ 140d98b68
// ============================================================

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



// ============================================================
// Function: __dllonexit @ 140d98b6e
// ============================================================

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



// ============================================================
// Function: _lock @ 140d98b7a
// ============================================================

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



// ============================================================
// Function: FUN_140d98b94 @ 140d98b94
// ============================================================

void FUN_140d98b94(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140d9e470; puVar1 < &DAT_140d9e470; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: FUN_140d98bcc @ 140d98bcc
// ============================================================

void FUN_140d98bcc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140d9e480; puVar1 < &DAT_140d9e480; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// ============================================================
// Function: _ValidateImageBase @ 140d98c10
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
// Function: _FindPESection @ 140d98c40
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
// Function: _IsNonwritableInCurrentImage @ 140d98c90
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
  
  pImageBase = &IMAGE_DOS_HEADER_140d90000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140d90000);
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
// Function: _initterm @ 140d98cd2
// ============================================================

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// ============================================================
// Function: _initterm_e @ 140d98cd8
// ============================================================

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// ============================================================
// Function: _amsg_exit @ 140d98cea
// ============================================================

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



// ============================================================
// Function: __CppXcptFilter @ 140d98cf0
// ============================================================

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// ============================================================
// Function: __security_init_cookie @ 140d98cf8
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
  if (DAT_140da2470 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140da2470 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140da2470 == 0x2b992ddfa232) {
      DAT_140da2470 = 0x2b992ddfa233;
    }
  }
  DAT_140da2478 = ~DAT_140da2470;
  return;
}



// ============================================================
// Function: terminate @ 140d98dac
// ============================================================

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98dac. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// ============================================================
// Function: _type_info_dtor_internal_method @ 140d98db2
// ============================================================

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



// ============================================================
// Function: __crt_debugger_hook @ 140d98db8
// ============================================================

void __cdecl __crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d98db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crt_debugger_hook(param_1);
  return;
}



// ============================================================
// Function: RtlVirtualUnwind @ 140d98de8
// ============================================================

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



// ============================================================
// Function: RtlLookupFunctionEntry @ 140d98dee
// ============================================================

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d98dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// ============================================================
// Function: Unwind@140d98e20 @ 140d98e20
// ============================================================

void Unwind_140d98e20(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d98e40 @ 140d98e40
// ============================================================

void Unwind_140d98e40(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d98e60 @ 140d98e60
// ============================================================

void Unwind_140d98e60(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d98e80 @ 140d98e80
// ============================================================

void Unwind_140d98e80(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@140d98ea0 @ 140d98ea0
// ============================================================

undefined * Catch_140d98ea0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140d91bbf;
}



// ============================================================
// Function: Unwind@140d98ee0 @ 140d98ee0
// ============================================================

void Unwind_140d98ee0(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d98f00 @ 140d98f00
// ============================================================

void Unwind_140d98f00(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(param_2 + 0x70));
  return;
}



// ============================================================
// Function: Catch@140d98f20 @ 140d98f20
// ============================================================

undefined * Catch_140d98f20(void)

{
  log_InlineLogCATCH_ERROR("CFlowerService::SendGift @%s,%d");
  return &DAT_140d93173;
}



// ============================================================
// Function: Unwind@140d98f60 @ 140d98f60
// ============================================================

void Unwind_140d98f60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d98f80 @ 140d98f80
// ============================================================

void Unwind_140d98f80(undefined8 param_1,longlong param_2)

{
  FUN_140d93240(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d98fa0 @ 140d98fa0
// ============================================================

void Unwind_140d98fa0(undefined8 param_1,longlong param_2)

{
  FUN_140d98060((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140d98fc0 @ 140d98fc0
// ============================================================

void Unwind_140d98fc0(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}



// ============================================================
// Function: Catch@140d98fe0 @ 140d98fe0
// ============================================================

undefined * Catch_140d98fe0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140d9332a;
}



// ============================================================
// Function: Unwind@140d99020 @ 140d99020
// ============================================================

void Unwind_140d99020(undefined8 param_1,longlong param_2)

{
  FUN_140d93240(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99040 @ 140d99040
// ============================================================

void Unwind_140d99040(undefined8 param_1,longlong param_2)

{
  FUN_140d98060((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}



// ============================================================
// Function: Unwind@140d99060 @ 140d99060
// ============================================================

void Unwind_140d99060(undefined8 param_1,longlong param_2)

{
  FUN_140d97d00((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}



// ============================================================
// Function: Catch@140d99080 @ 140d99080
// ============================================================

undefined * Catch_140d99080(void)

{
  log_InlineLogCATCH_ERROR("flower::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_140d936b2;
}



// ============================================================
// Function: Unwind@140d990d0 @ 140d990d0
// ============================================================

void Unwind_140d990d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Catch@140d990f0 @ 140d990f0
// ============================================================

undefined8 Catch_140d990f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140d93731;
}



// ============================================================
// Function: Catch@140d99130 @ 140d99130
// ============================================================

undefined * Catch_140d99130(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140d93792;
}



// ============================================================
// Function: Unwind@140d99170 @ 140d99170
// ============================================================

void Unwind_140d99170(void)

{
  DAT_140da2498 = DAT_140da2498 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d99190 @ 140d99190
// ============================================================

void Unwind_140d99190(void)

{
  DAT_140da2498 = DAT_140da2498 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d991b0 @ 140d991b0
// ============================================================

void Unwind_140d991b0(void)

{
  DAT_140da2498 = DAT_140da2498 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d991d0 @ 140d991d0
// ============================================================

void Unwind_140d991d0(void)

{
  DAT_140da2498 = DAT_140da2498 & 0xfffffffe;
  return;
}



// ============================================================
// Function: Unwind@140d991f0 @ 140d991f0
// ============================================================

void Unwind_140d991f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99210 @ 140d99210
// ============================================================

void Unwind_140d99210(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99230 @ 140d99230
// ============================================================

void Unwind_140d99230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99250 @ 140d99250
// ============================================================

void Unwind_140d99250(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99270 @ 140d99270
// ============================================================

void Unwind_140d99270(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99290 @ 140d99290
// ============================================================

void Unwind_140d99290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d992b0 @ 140d992b0
// ============================================================

void Unwind_140d992b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d992d0 @ 140d992d0
// ============================================================

void Unwind_140d992d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d992f0 @ 140d992f0
// ============================================================

void Unwind_140d992f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99310 @ 140d99310
// ============================================================

void Unwind_140d99310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99330 @ 140d99330
// ============================================================

void Unwind_140d99330(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99350 @ 140d99350
// ============================================================

void Unwind_140d99350(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99370 @ 140d99370
// ============================================================

void Unwind_140d99370(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99390 @ 140d99390
// ============================================================

void Unwind_140d99390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d993b0 @ 140d993b0
// ============================================================

void Unwind_140d993b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d993d0 @ 140d993d0
// ============================================================

void Unwind_140d993d0(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d993f0 @ 140d993f0
// ============================================================

void Unwind_140d993f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99410 @ 140d99410
// ============================================================

void Unwind_140d99410(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99430 @ 140d99430
// ============================================================

void Unwind_140d99430(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99450 @ 140d99450
// ============================================================

void Unwind_140d99450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99470 @ 140d99470
// ============================================================

void Unwind_140d99470(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99490 @ 140d99490
// ============================================================

void Unwind_140d99490(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d994b0 @ 140d994b0
// ============================================================

void Unwind_140d994b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d994d0 @ 140d994d0
// ============================================================

void Unwind_140d994d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d994f0 @ 140d994f0
// ============================================================

void Unwind_140d994f0(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99510 @ 140d99510
// ============================================================

void Unwind_140d99510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99530 @ 140d99530
// ============================================================

void Unwind_140d99530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99550 @ 140d99550
// ============================================================

void Unwind_140d99550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d99570 @ 140d99570
// ============================================================

void Unwind_140d99570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d99590 @ 140d99590
// ============================================================

void Unwind_140d99590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}



// ============================================================
// Function: Unwind@140d995b0 @ 140d995b0
// ============================================================

void Unwind_140d995b0(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0((exception *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d995d0 @ 140d995d0
// ============================================================

void Unwind_140d995d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d995f0 @ 140d995f0
// ============================================================

void Unwind_140d995f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99610 @ 140d99610
// ============================================================

void Unwind_140d99610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99630 @ 140d99630
// ============================================================

void Unwind_140d99630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99650 @ 140d99650
// ============================================================

void Unwind_140d99650(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99670 @ 140d99670
// ============================================================

void Unwind_140d99670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d99690 @ 140d99690
// ============================================================

void Unwind_140d99690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d996b0 @ 140d996b0
// ============================================================

void Unwind_140d996b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d996d0 @ 140d996d0
// ============================================================

void Unwind_140d996d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d996f0 @ 140d996f0
// ============================================================

void Unwind_140d996f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d99710 @ 140d99710
// ============================================================

void Unwind_140d99710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d99730 @ 140d99730
// ============================================================

void Unwind_140d99730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}



// ============================================================
// Function: Unwind@140d99750 @ 140d99750
// ============================================================

void Unwind_140d99750(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99770 @ 140d99770
// ============================================================

void Unwind_140d99770(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99790 @ 140d99790
// ============================================================

void Unwind_140d99790(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d997b0 @ 140d997b0
// ============================================================

void Unwind_140d997b0(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Catch@140d997d0 @ 140d997d0
// ============================================================

void Catch_140d997d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d99800 @ 140d99800
// ============================================================

void Unwind_140d99800(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Catch@140d99820 @ 140d99820
// ============================================================

void Catch_140d99820(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ============================================================
// Function: Unwind@140d99850 @ 140d99850
// ============================================================

void Unwind_140d99850(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99870 @ 140d99870
// ============================================================

void Unwind_140d99870(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99890 @ 140d99890
// ============================================================

void Unwind_140d99890(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d998b0 @ 140d998b0
// ============================================================

void Unwind_140d998b0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d998d0 @ 140d998d0
// ============================================================

void Unwind_140d998d0(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d998f0 @ 140d998f0
// ============================================================

void Unwind_140d998f0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99910 @ 140d99910
// ============================================================

void Unwind_140d99910(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99930 @ 140d99930
// ============================================================

void Unwind_140d99930(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99950 @ 140d99950
// ============================================================

void Unwind_140d99950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d99970 @ 140d99970
// ============================================================

void Unwind_140d99970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d99990 @ 140d99990
// ============================================================

void Unwind_140d99990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}



// ============================================================
// Function: Unwind@140d999b0 @ 140d999b0
// ============================================================

void Unwind_140d999b0(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0((exception *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d999d0 @ 140d999d0
// ============================================================

void Unwind_140d999d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d999f0 @ 140d999f0
// ============================================================

void Unwind_140d999f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}



// ============================================================
// Function: Unwind@140d99a10 @ 140d99a10
// ============================================================

void Unwind_140d99a10(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0(*(exception **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99a30 @ 140d99a30
// ============================================================

void Unwind_140d99a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Unwind@140d99a50 @ 140d99a50
// ============================================================

void Unwind_140d99a50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d99a70 @ 140d99a70
// ============================================================

void Unwind_140d99a70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}



// ============================================================
// Function: Unwind@140d99a90 @ 140d99a90
// ============================================================

void Unwind_140d99a90(undefined8 param_1,longlong param_2)

{
  FUN_140d93cf0((exception *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d99ab0 @ 140d99ab0
// ============================================================

void Unwind_140d99ab0(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99ad0 @ 140d99ad0
// ============================================================

void Unwind_140d99ad0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99af0 @ 140d99af0
// ============================================================

void Unwind_140d99af0(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99b10 @ 140d99b10
// ============================================================

void Unwind_140d99b10(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99b30 @ 140d99b30
// ============================================================

void Unwind_140d99b30(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99b50 @ 140d99b50
// ============================================================

void Unwind_140d99b50(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99b70 @ 140d99b70
// ============================================================

void Unwind_140d99b70(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99b90 @ 140d99b90
// ============================================================

void Unwind_140d99b90(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99bb0 @ 140d99bb0
// ============================================================

void Unwind_140d99bb0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99bd0 @ 140d99bd0
// ============================================================

void Unwind_140d99bd0(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99bf0 @ 140d99bf0
// ============================================================

void Unwind_140d99bf0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99c10 @ 140d99c10
// ============================================================

void Unwind_140d99c10(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99c30 @ 140d99c30
// ============================================================

void Unwind_140d99c30(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99c50 @ 140d99c50
// ============================================================

void Unwind_140d99c50(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99c70 @ 140d99c70
// ============================================================

void Unwind_140d99c70(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99c90 @ 140d99c90
// ============================================================

void Unwind_140d99c90(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99cb0 @ 140d99cb0
// ============================================================

void Unwind_140d99cb0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99cd0 @ 140d99cd0
// ============================================================

void Unwind_140d99cd0(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99cf0 @ 140d99cf0
// ============================================================

void Unwind_140d99cf0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99d10 @ 140d99d10
// ============================================================

void Unwind_140d99d10(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99d30 @ 140d99d30
// ============================================================

void Unwind_140d99d30(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99d50 @ 140d99d50
// ============================================================

void Unwind_140d99d50(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99d70 @ 140d99d70
// ============================================================

void Unwind_140d99d70(undefined8 param_1,longlong param_2)

{
  FUN_140d96b20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99d90 @ 140d99d90
// ============================================================

void Unwind_140d99d90(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99db0 @ 140d99db0
// ============================================================

void Unwind_140d99db0(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99dd0 @ 140d99dd0
// ============================================================

void Unwind_140d99dd0(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99df0 @ 140d99df0
// ============================================================

void Unwind_140d99df0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99e10 @ 140d99e10
// ============================================================

void Unwind_140d99e10(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d99e30 @ 140d99e30
// ============================================================

void Unwind_140d99e30(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99e50 @ 140d99e50
// ============================================================

void Unwind_140d99e50(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99e70 @ 140d99e70
// ============================================================

void Unwind_140d99e70(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99e90 @ 140d99e90
// ============================================================

void Unwind_140d99e90(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99eb0 @ 140d99eb0
// ============================================================

void Unwind_140d99eb0(undefined8 param_1,longlong param_2)

{
  FUN_140d96b20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99ed0 @ 140d99ed0
// ============================================================

void Unwind_140d99ed0(undefined8 param_1,longlong param_2)

{
  FUN_140d970b0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99ef0 @ 140d99ef0
// ============================================================

void Unwind_140d99ef0(undefined8 param_1,longlong param_2)

{
  FUN_140d96b20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99f10 @ 140d99f10
// ============================================================

void Unwind_140d99f10(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99f30 @ 140d99f30
// ============================================================

void Unwind_140d99f30(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99f50 @ 140d99f50
// ============================================================

void Unwind_140d99f50(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99f70 @ 140d99f70
// ============================================================

void Unwind_140d99f70(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d99f90 @ 140d99f90
// ============================================================

void Unwind_140d99f90(undefined8 param_1,longlong param_2)

{
  FUN_140d97160((longlong *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}



// ============================================================
// Function: Catch@140d99fb0 @ 140d99fb0
// ============================================================

undefined * Catch_140d99fb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140d97275;
}



// ============================================================
// Function: Unwind@140d99ff0 @ 140d99ff0
// ============================================================

void Unwind_140d99ff0(undefined8 param_1,longlong param_2)

{
  FUN_140d970b0(*(longlong **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140d9a010 @ 140d9a010
// ============================================================

void Unwind_140d9a010(undefined8 param_1,longlong param_2)

{
  FUN_140d96b20(*(undefined8 **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140d9a030 @ 140d9a030
// ============================================================

void Unwind_140d9a030(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140d9a050 @ 140d9a050
// ============================================================

void Unwind_140d9a050(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140d9a070 @ 140d9a070
// ============================================================

void Unwind_140d9a070(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Unwind@140d9a090 @ 140d9a090
// ============================================================

void Unwind_140d9a090(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x80));
  return;
}



// ============================================================
// Function: Catch@140d9a0b0 @ 140d9a0b0
// ============================================================

undefined * Catch_140d9a0b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140d976a8;
}



// ============================================================
// Function: Catch@140d9a0f0 @ 140d9a0f0
// ============================================================

undefined * Catch_140d9a0f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140d9761e;
}



// ============================================================
// Function: Unwind@140d9a130 @ 140d9a130
// ============================================================

void Unwind_140d9a130(undefined8 param_1,longlong param_2)

{
  FUN_140d93a70(*(void **)(param_2 + 0x38));
  return;
}



// ============================================================
// Function: Catch@140d9a150 @ 140d9a150
// ============================================================

undefined8 Catch_140d9a150(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140d9765c;
}



// ============================================================
// Function: Unwind@140d9a190 @ 140d9a190
// ============================================================

void Unwind_140d9a190(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d9a1c0 @ 140d9a1c0
// ============================================================

void Unwind_140d9a1c0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a1e0 @ 140d9a1e0
// ============================================================

void Unwind_140d9a1e0(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a200 @ 140d9a200
// ============================================================

void Unwind_140d9a200(undefined8 param_1,longlong param_2)

{
  FUN_140d95380((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a220 @ 140d9a220
// ============================================================

void Unwind_140d9a220(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a240 @ 140d9a240
// ============================================================

void Unwind_140d9a240(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@140d9a260 @ 140d9a260
// ============================================================

undefined * Catch_140d9a260(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140d97919;
}



// ============================================================
// Function: Unwind@140d9a2a0 @ 140d9a2a0
// ============================================================

void Unwind_140d9a2a0(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a2c0 @ 140d9a2c0
// ============================================================

void Unwind_140d9a2c0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a2e0 @ 140d9a2e0
// ============================================================

void Unwind_140d9a2e0(undefined8 param_1,longlong param_2)

{
  FUN_140d93a70(*(void **)(param_2 + 0xe0));
  return;
}



// ============================================================
// Function: Unwind@140d9a300 @ 140d9a300
// ============================================================

void Unwind_140d9a300(undefined8 param_1,longlong param_2)

{
  FUN_140d94ee0((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Unwind@140d9a320 @ 140d9a320
// ============================================================

void Unwind_140d9a320(undefined8 param_1,longlong param_2)

{
  FUN_140d94a90((undefined8 *)(param_2 + 0x60));
  return;
}



// ============================================================
// Function: Catch@140d9a340 @ 140d9a340
// ============================================================

undefined8 Catch_140d9a340(void)

{
  log_InlineLogCATCH_ERROR("CTodayFlowerMgr::OnUserLogin, idUser:%u @%s,%d");
  return 0x140d97a8c;
}



// ============================================================
// Function: Catch@140d9a380 @ 140d9a380
// ============================================================

undefined * Catch_140d9a380(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140d97ae8;
}



// ============================================================
// Function: Unwind@140d9a3c0 @ 140d9a3c0
// ============================================================

void Unwind_140d9a3c0(void)

{
  FUN_140d93c90();
  return;
}



// ============================================================
// Function: Unwind@140d9a3e0 @ 140d9a3e0
// ============================================================

void Unwind_140d9a3e0(undefined8 param_1,longlong param_2)

{
  FUN_140d94a40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a400 @ 140d9a400
// ============================================================

void Unwind_140d9a400(undefined8 param_1,longlong param_2)

{
  FUN_140d94f00(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a420 @ 140d9a420
// ============================================================

void Unwind_140d9a420(undefined8 param_1,longlong param_2)

{
  FUN_140d953e0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a440 @ 140d9a440
// ============================================================

void Unwind_140d9a440(undefined8 param_1,longlong param_2)

{
  FUN_140d961d0(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a460 @ 140d9a460
// ============================================================

void Unwind_140d9a460(undefined8 param_1,longlong param_2)

{
  FUN_140d96b20(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a480 @ 140d9a480
// ============================================================

void Unwind_140d9a480(undefined8 param_1,longlong param_2)

{
  FUN_140d970b0(*(longlong **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a4a0 @ 140d9a4a0
// ============================================================

void Unwind_140d9a4a0(undefined8 param_1,longlong param_2)

{
  FUN_140d97160((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@140d9a4c0 @ 140d9a4c0
// ============================================================

void Unwind_140d9a4c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a4e0 @ 140d9a4e0
// ============================================================

void Unwind_140d9a4e0(undefined8 param_1,longlong param_2)

{
  FUN_140d97160((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}



// ============================================================
// Function: Unwind@140d9a500 @ 140d9a500
// ============================================================

void Unwind_140d9a500(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a520 @ 140d9a520
// ============================================================

void Unwind_140d9a520(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Catch@140d9a540 @ 140d9a540
// ============================================================

undefined8 Catch_140d9a540(void)

{
  log_InlineLogCATCH_ERROR("CMsgFlower::Process crash. @%s,%d");
  return 0x140d97fb5;
}



// ============================================================
// Function: Unwind@140d9a580 @ 140d9a580
// ============================================================

void Unwind_140d9a580(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a5a0 @ 140d9a5a0
// ============================================================

void Unwind_140d9a5a0(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: Unwind@140d9a5c0 @ 140d9a5c0
// ============================================================

void Unwind_140d9a5c0(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x20));
  return;
}



// ============================================================
// Function: Catch@140d9a5e0 @ 140d9a5e0
// ============================================================

undefined8 Catch_140d9a5e0(void)

{
  log_InlineLogCATCH_ERROR
            ("flower::CMsgLogin::Process(idActor), idActor:%d, Type:%d, MsgType:%d @%s,%d");
  return 0x140d9815f;
}



// ============================================================
// Function: Unwind@140d9a640 @ 140d9a640
// ============================================================

void Unwind_140d9a640(undefined8 param_1,longlong param_2)

{
  FUN_140d97c40(*(undefined8 **)(param_2 + 0x40));
  return;
}



// ============================================================
// Function: FUN_140d9a658 @ 140d9a658
// ============================================================

void FUN_140d9a658(void)

{
  _unlock(8);
  return;
}



// ============================================================
// Function: FUN_140d9a671 @ 140d9a671
// ============================================================

void FUN_140d9a671(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// ============================================================
// Function: FUN_140d9a6a1 @ 140d9a6a1
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d9a6a1(void)

{
  _DAT_140da2480 = 0xffffffff;
  return;
}



// ============================================================
// Function: filt$0 @ 140d9a6ba
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
// Function: fin$0 @ 140d9a6f9
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
// Function: FUN_140d9a730 @ 140d9a730
// ============================================================

bool FUN_140d9a730(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




// Total functions: 402, failed: 0
