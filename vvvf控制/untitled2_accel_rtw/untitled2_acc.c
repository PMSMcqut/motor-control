/*
 * This file is not available for use in any application other than as a
 * MATLAB(R) MEX file for use with the Simulink(R) Accelerator product.
 */

/*
 * untitled2_acc.c
 * 
 * Real-Time Workshop code generation for Simulink model "untitled2_acc.mdl".
 *
 * Model Version              : 1.63
 * Real-Time Workshop version : 6.4  (R2006a)  03-Feb-2006
 * C source code generated on : Thu Sep 23 22:06:17 2010
 */

#include <math.h>
#include "untitled2_acc.h"
#include "untitled2_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"

#define CodeFormat                      S-Function
#define AccDefine1                      Accelerator_S-Function

/* Outputs for root system: '<Root>' */

static void mdlOutputs(SimStruct *S, int_T tid)
{
  /* simstruct variables */
  BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
  ContinuousStates_untitled2 *untitled2_X = (ContinuousStates_untitled2*)
    ssGetContStates(S);
  StateDisabled_untitled2 *untitled2_Xdis = (StateDisabled_untitled2*)
    ssGetContStateDisabled(S);
  D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);
  Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
    ssGetDefaultParam(S);

  /* local block i/o variables*/
  real_T rtb_Integrator;
  real_T rtb_phiqs;
  real_T rtb_phiqr;
  real_T rtb_phidr;
  real_T rtb_1Llr[2];
  real_T rtb_phids;
  real_T rtb_1Llr1;
  real_T rtb_1Llr2;
  real_T rtb_Switch1;
  real_T rtb_ids;
  real_T rtb_Switch;
  real_T rtb_iqs;
  real_T rtb_Sum1_a;
  real_T rtb_Integrator1;
  real_T rtb_iqr;
  real_T rtb_idr;
  real_T rtb_Switch_a[4];
  real_T rtb_t;
  real_T rtb_Step;
  real_T rtb_Clock;
  real_T rtb_Product;
  real_T rtb_Clock_k;
  real_T rtb_1_Vb[4];
  real_T rtb_MultiportSwitch[2];
  real_T rtb_MultiportSwitch1[2];
  real_T rtb_1Llr1_f;
  real_T rtb_1Llr3;
  real_T rtb_MultiportSwitch_e;
  real_T rtb_MultiportSwitch1_e;
  real_T rtb_Add2[6];
  real_T rtb_Polynomialfunctionmet;
  real_T rtb_MultiportSwitch_i[2];
  real_T rtb_MultiportSwitch1_l[2];
  real_T rtb_Saturation1[6];
  real_T rtb_Clock_o;
  real_T rtb_th;
  real_T rtb_beta;
  real_T rtb_Sum_h;
  real_T rtb_Sum3_f;
  real_T rtb_Saturation2[6];
  real_T rtb_Abs;
  boolean_T rtb_RelationalOperator_j;

  real_T rtb_Memory1[6];
  real_T rtb_Memory[6];
  boolean_T rtb_RelationalOperator[3];
  boolean_T rtb_RelationalOperator1[3];

  /* Integrator: '<S11>/Integrator' */
  rtb_Integrator = untitled2_X->Integrator_CSTATE;

  /* Integrator: '<S16>/phiqs' */
  rtb_phiqs = untitled2_X->phiqs_CSTATE;

  /* Integrator: '<S15>/phiqr' */
  rtb_phiqr = untitled2_X->phiqr_CSTATE;

  /* Integrator: '<S15>/phidr' */
  rtb_phidr = untitled2_X->phidr_CSTATE;

  rtb_1Llr[0] = rtb_phiqr * untitled2_P->Llr_Gain;
  rtb_1Llr[1] = rtb_phidr * untitled2_P->Llr_Gain;

  /* Integrator: '<S16>/phids' */
  rtb_phids = untitled2_X->phids_CSTATE;

  rtb_1Llr1 = (rtb_phiqs * untitled2_P->Lls_Gain + rtb_1Llr[0]) *
    untitled2_P->Llr1_Gain;

  rtb_1Llr2 = (rtb_phids * untitled2_P->Lls_Gain + rtb_1Llr[1]) *
    untitled2_P->Llr2_Gain;
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant = untitled2_P->Constant_Value;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant > 0.0) {
      if(untitled2_DWork->Saturation_MODE == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Saturation_MODE = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Saturation_MODE == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      untitled2_DWork->Saturation_MODE = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Saturation_MODE == SUBSYS_ENABLED) {

    rtb_Sum_h = rtb_1Llr1 * rtb_1Llr1 + rtb_1Llr2 * rtb_1Llr2;

    rtb_Polynomialfunctionmet = ((((5.0 * rtb_Sum_h + 4.0) * rtb_Sum_h + 3.0) *
      rtb_Sum_h + 2.0) * rtb_Sum_h + 1.0) * rtb_Sum_h;
    if(ssIsSampleHit(S, 1, tid)) {

      untitled2_B->Constant_aj = untitled2_P->Constant_Value_n;
    }

    rtb_RelationalOperator_j = (rtb_Sum_h > untitled2_B->Constant_aj);

    if(rtb_RelationalOperator_j) {

      untitled2_B->Switch_op = rtb_1Llr1 - rtb_1Llr1 * rtb_Polynomialfunctionmet
        * untitled2_P->_Gain_f;
    } else {
      untitled2_B->Switch_op = rtb_1Llr1;
    }

    if(rtb_RelationalOperator_j) {

      untitled2_B->Switch1 = rtb_1Llr2 - rtb_Polynomialfunctionmet * rtb_1Llr2 *
        untitled2_P->_Gain;
    } else {
      untitled2_B->Switch1 = rtb_1Llr2;
    }
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Saturation_SubsysRanBC);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant1 = untitled2_P->Constant1_Value;
  }

  if(untitled2_B->Constant1 >= untitled2_P->Switch1_Threshold) {
    rtb_Switch1 = untitled2_B->Switch1;
  } else {
    rtb_Switch1 = rtb_1Llr2;
  }

  rtb_ids = (rtb_phids - rtb_Switch1) * untitled2_P->Llr2_Gain_j;

  rtb_Sum3_f = rtb_phiqs * rtb_ids;

  if(untitled2_B->Constant1 >= untitled2_P->Switch_Threshold) {
    rtb_Switch = untitled2_B->Switch_op;
  } else {
    rtb_Switch = rtb_1Llr1;
  }

  rtb_iqs = (rtb_phiqs - rtb_Switch) * untitled2_P->Llr_Gain_k;

  rtb_Sum1_a = rtb_phids * rtb_iqs - rtb_Sum3_f;

  /* Integrator: '<S11>/Integrator1' */
  rtb_Integrator1 = untitled2_X->Integrator1_CSTATE;

  untitled2_B->Gain_n[0] = rtb_Integrator * untitled2_P->Gain_Gain[0];
  untitled2_B->Gain_n[1] = rtb_Sum1_a * untitled2_P->Gain_Gain[1];
  untitled2_B->Gain_n[2] = rtb_Integrator1 * untitled2_P->p_Gain *
    untitled2_P->Gain_Gain[2];

  /* Scope: '<Root>/Te' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 26, SS_CALL_MDL_OUTPUTS);

  /* ToWorkspace: '<Root>/To Workspace5' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 27, SS_CALL_MDL_OUTPUTS);

  untitled2_B->MathFunction1 = untitled2_B->Gain_n[0] * untitled2_P->Gain_Gain_b;

  /* ToWorkspace: '<Root>/To Workspace6' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 29, SS_CALL_MDL_OUTPUTS);

  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant3 = untitled2_P->Constant3_Value;
  }

  rtb_iqr = (rtb_phiqr - rtb_Switch) * untitled2_P->Llr_Gain_p;

  rtb_idr = (rtb_phidr - rtb_Switch1) * untitled2_P->Llr2_Gain_b;
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant_hn = untitled2_P->Constant_Value_nf;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant_hn) {
      if(untitled2_DWork->sinthrcosthr_MODE == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->sinthrcosthr_MODE = SUBSYS_ENABLED;
    } else if(untitled2_DWork->sinthrcosthr_MODE == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S19>/sin(thr),cos(thr)' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S29>/sin(thr),cos(thr)' */

        untitled2_B->TrigonometricFunction = untitled2_P->sinthrcosthr_Y0;
        untitled2_B->TrigonometricFunction1 = untitled2_P->sinthrcosthr_Y0;
        untitled2_B->Constant_c[0] = untitled2_P->sinthrcosthr_Y0;
        untitled2_B->Constant_c[1] = untitled2_P->sinthrcosthr_Y0;
      }

      untitled2_DWork->sinthrcosthr_MODE = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->sinthrcosthr_MODE == SUBSYS_ENABLED) {
    if(ssIsSampleHit(S, 1, tid)) {

      untitled2_B->Constant_c[0] = untitled2_P->Constant_Value_cw[0];
      untitled2_B->Constant_c[1] = untitled2_P->Constant_Value_cw[1];
    }

    untitled2_B->TrigonometricFunction = sin(rtb_Integrator1);

    untitled2_B->TrigonometricFunction1 = cos(rtb_Integrator1);
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->sinthrcosthr_SubsysRanBC);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant3_c = untitled2_P->Constant3_Value_m;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant3_c) {
      if(untitled2_DWork->sinbetacosbetasinthcos == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->sinbetacosbetasinthcos = SUBSYS_ENABLED;
    } else if(untitled2_DWork->sinbetacosbetasinthcos == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S19>/sin(beta),cos(beta),sin(th),cos(th)' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S28>/sin(beta),cos(beta), sin(th),cos(th)' */

        untitled2_B->TrigonometricFunction1_d = untitled2_P->sinbetacosbetasint;
        untitled2_B->TrigonometricFunction2 = untitled2_P->sinbetacosbetasint;
        untitled2_B->TrigonometricFunction_e = untitled2_P->sinbetacosbetasint;
        untitled2_B->TrigonometricFunction3 = untitled2_P->sinbetacosbetasint;

        /* (Virtual) Outport Block: '<S28>/we-wr' */

        untitled2_B->wewr = untitled2_P->wewr_Y0;
      }

      untitled2_DWork->sinbetacosbetasinthcos = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->sinbetacosbetasinthcos == SUBSYS_ENABLED) {

    /* Output and update for enable system: '<S19>/sin(beta),cos(beta),sin(th),cos(th)' */
    {
      /* simstruct variables */
      BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
      D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);
      Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
        ssGetDefaultParam(S);

      /* Clock: '<S28>/Clock' */
      rtb_Clock_o = ssGetT(S);

      if(ssIsSampleHit(S, 1, tid)) {

        untitled2_B->we = untitled2_P->we_Value;
      }

      untitled2_B->wewr = untitled2_B->we - rtb_Integrator;

      rtb_th = rtb_Clock_o * untitled2_P->web_psb_Gain_o;

      rtb_beta = rtb_th - rtb_Integrator1;

      untitled2_B->TrigonometricFunction_e = sin(rtb_th);

      untitled2_B->TrigonometricFunction1_d = sin(rtb_beta);

      untitled2_B->TrigonometricFunction2 = cos(rtb_beta);

      untitled2_B->TrigonometricFunction3 = cos(rtb_th);

      if (ssIsMajorTimeStep(S)) {
        srUpdateBC(untitled2_DWork->sinbetacosbetasinthc_e);
      }

      if(ssIsSampleHit(S, 1, tid)) {
      }
    }
  }

  if(untitled2_B->Constant_hn) {
    rtb_Switch_a[0] = untitled2_B->TrigonometricFunction;
    rtb_Switch_a[1] = untitled2_B->TrigonometricFunction1;
    rtb_Switch_a[2] = untitled2_B->Constant_c[0];
    rtb_Switch_a[3] = untitled2_B->Constant_c[1];
  } else {
    rtb_Switch_a[0] = untitled2_B->TrigonometricFunction1_d;
    rtb_Switch_a[1] = untitled2_B->TrigonometricFunction2;
    rtb_Switch_a[2] = untitled2_B->TrigonometricFunction_e;
    rtb_Switch_a[3] = untitled2_B->TrigonometricFunction3;
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant_l = untitled2_P->Constant_Value_o;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant_l) {
      if(untitled2_DWork->Rotorreferenceframe_MODE == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Rotorreferenceframe_MODE = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Rotorreferenceframe_MODE == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S18>/Rotor reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S25>/ira,irb' */

        untitled2_B->ira_c = untitled2_P->irairb_Y0;
        untitled2_B->irb_k = untitled2_P->irairb_Y0;

        /* (Virtual) Outport Block: '<S25>/isa,isb' */

        untitled2_B->isa_c = untitled2_P->isaisb_Y0;
        untitled2_B->isb_h = untitled2_P->isaisb_Y0;
      }

      untitled2_DWork->Rotorreferenceframe_MODE = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Rotorreferenceframe_MODE == SUBSYS_ENABLED) {

    untitled2_B->ira_c = rtb_iqr;

    untitled2_B->irb_k = -(1.7320508075688772 * rtb_idr + rtb_iqr) / 2.0;

    untitled2_B->isa_c = rtb_Switch_a[1] * rtb_iqs + rtb_Switch_a[0] * rtb_ids;

    untitled2_B->isb_h = ((-rtb_Switch_a[1] + 1.7320508075688772 *
      rtb_Switch_a[0]) * rtb_iqs + (-1.7320508075688772E+000 * rtb_Switch_a[1] -
      rtb_Switch_a[0]) * rtb_ids) / 2.0;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Rotorreferenceframe_SubsysRan);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant1_l = untitled2_P->Constant1_Value_e;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant1_l) {
      if(untitled2_DWork->Stationaryreferenceframe_MODE == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Stationaryreferenceframe_MODE = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Stationaryreferenceframe_MODE == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S18>/Stationary reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S26>/ira,irb' */

        untitled2_B->ira_j = untitled2_P->irairb_Y0_o;
        untitled2_B->irb_o = untitled2_P->irairb_Y0_o;

        /* (Virtual) Outport Block: '<S26>/isa,isb' */

        untitled2_B->isa_n = untitled2_P->isaisb_Y0_e;
        untitled2_B->isb_m = untitled2_P->isaisb_Y0_e;
      }

      untitled2_DWork->Stationaryreferenceframe_MODE = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Stationaryreferenceframe_MODE == SUBSYS_ENABLED) {

    untitled2_B->ira_j = rtb_Switch_a[1] * rtb_iqr - rtb_Switch_a[0] * rtb_idr;

    untitled2_B->irb_o = ((-rtb_Switch_a[1] - 1.7320508075688772 *
      rtb_Switch_a[0]) * rtb_iqr + (rtb_Switch_a[0] - 1.7320508075688772 *
      rtb_Switch_a[1]) * rtb_idr) / 2.0;

    untitled2_B->isa_n = rtb_iqs;

    untitled2_B->isb_m = -(1.7320508075688772 * rtb_ids + rtb_iqs) / 2.0;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Stationaryreferenceframe_Subs);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant2_e = untitled2_P->Constant2_Value_j;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant2_e) {
      if(untitled2_DWork->Synchronousreferenceframe_MOD == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Synchronousreferenceframe_MOD = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Synchronousreferenceframe_MOD == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S18>/Synchronous reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S27>/ira,irb' */

        untitled2_B->ira = untitled2_P->irairb_Y0_l;
        untitled2_B->irb = untitled2_P->irairb_Y0_l;

        /* (Virtual) Outport Block: '<S27>/isa,isb' */

        untitled2_B->isa = untitled2_P->isaisb_Y0_d;
        untitled2_B->isb = untitled2_P->isaisb_Y0_d;
      }

      untitled2_DWork->Synchronousreferenceframe_MOD = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Synchronousreferenceframe_MOD == SUBSYS_ENABLED) {

    untitled2_B->ira = rtb_Switch_a[1] * rtb_iqr + rtb_Switch_a[0] * rtb_idr;

    untitled2_B->irb = ((-rtb_Switch_a[1] + 1.7320508075688772 *
      rtb_Switch_a[0]) * rtb_iqr + (-1.7320508075688772E+000 * rtb_Switch_a[1] -
      rtb_Switch_a[0]) * rtb_idr) / 2.0;

    untitled2_B->isa = rtb_Switch_a[3] * rtb_iqs + rtb_Switch_a[2] * rtb_ids;

    untitled2_B->isb = ((-rtb_Switch_a[3] + 1.7320508075688772 *
      rtb_Switch_a[2]) * rtb_iqs + (-1.7320508075688772E+000 * rtb_Switch_a[3] -
      rtb_Switch_a[2]) * rtb_ids) / 2.0;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Synchronousreferenceframe_Sub);
    }
  }

  switch((int32_T)untitled2_B->Constant3) {
   case 1:
    rtb_MultiportSwitch_i[0] = untitled2_B->ira_c;
    rtb_MultiportSwitch_i[1] = untitled2_B->irb_k;
    break;
   case 2:
    rtb_MultiportSwitch_i[0] = untitled2_B->ira_j;
    rtb_MultiportSwitch_i[1] = untitled2_B->irb_o;
    break;
   default:
    rtb_MultiportSwitch_i[0] = untitled2_B->ira;
    rtb_MultiportSwitch_i[1] = untitled2_B->irb;
    break;
  }

  /* Sum: '<S18>/Sum2' */
  rtb_Abs = -rtb_MultiportSwitch_i[0];
  rtb_Abs -= rtb_MultiportSwitch_i[1];

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    {
      int32_T i;

      untitled2_B->Constant3_i = untitled2_P->Constant3_Value_f;

      untitled2_B->Constant6[0] = untitled2_P->Constant6_Value[0];
      untitled2_B->Constant6[1] = untitled2_P->Constant6_Value[1];

      for(i = 0; i < 6; i++) {
        rtb_Memory1[i] = untitled2_DWork->Memory1_PreviousInput[i];
      }

      untitled2_B->m4 = untitled2_P->m4_Value;
    }
  }

  /* Clock: '<S4>/t' */
  rtb_t = ssGetT(S);

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    untitled2_B->Gain2 = untitled2_P->m3_Value * untitled2_P->Gain2_Gain;

    untitled2_B->Constant_a[0] = untitled2_P->Constant_Value_c[0];
    untitled2_B->Constant_a[1] = untitled2_P->Constant_Value_c[1];
    untitled2_B->Constant_a[2] = untitled2_P->Constant_Value_c[2];

    untitled2_B->Constant1_f = untitled2_P->Constant1_Value_p;
  }

  /* Step: '<S7>/Step' */
  if (ssIsMajorTimeStep(S)) {
    real_T currentTime = ssGetTaskTime(S,tid);
    if (currentTime >= untitled2_P->Step_Time) {
      untitled2_DWork->Step_MODE = 1;
    } else {
      untitled2_DWork->Step_MODE = 0;
    }
  }
  /* Output value */
 rtb_Step = (untitled2_DWork->Step_MODE == 1) ? untitled2_P->Step_YFinal :
    untitled2_P->Step_Y0;

  /* Clock: '<S7>/Clock' */
  rtb_Clock = ssGetT(S);

  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant_o = untitled2_P->Constant_Value_i;
  }

  rtb_Product = (rtb_Clock - untitled2_B->Constant_o) * rtb_Step;
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant1_k = untitled2_P->Constant1_Value_j;
  }

  untitled2_B->Output = rtb_Product + untitled2_B->Constant1_k;

  /* Saturate: '<Root>/Saturation'
   *
   * Regarding '<Root>/Saturation':
   *   Lower limit: untitled2_P->Saturation_LowerSat
   *   Upper limit: untitled2_P->Saturation_UpperSat
   */
  if (ssIsMajorTimeStep(S)) {
    if (untitled2_B->Output >= untitled2_P->Saturation_UpperSat) {
      untitled2_DWork->Saturation_MODE_n = 1;
    } else if (untitled2_B->Output <= untitled2_P->Saturation_LowerSat) {
      untitled2_DWork->Saturation_MODE_n = -1;
    } else {
      untitled2_DWork->Saturation_MODE_n = 0;
    }
  }
  /* Output value */
  if (untitled2_DWork->Saturation_MODE_n == 1) {
    untitled2_B->Saturation_d = untitled2_P->Saturation_UpperSat;
  } else if (untitled2_DWork->Saturation_MODE_n == -1) {
    untitled2_B->Saturation_d = untitled2_P->Saturation_LowerSat;
  } else {
    untitled2_B->Saturation_d = untitled2_B->Output;
  }

  untitled2_B->VF = 545.0 * untitled2_B->Saturation_d / 60.0 + 30.0;

  /* Integrator: '<Root>/Integrator' */
  untitled2_B->Integrator = untitled2_X->Integrator_m_CSTATE;

  {
    real_T rtb_Gain_a;

    untitled2_B->ua = sin(untitled2_B->Integrator) * untitled2_B->VF;

    untitled2_B->ub = sin(untitled2_B->Integrator - 2.0943951023931953E+000) *
      untitled2_B->VF;

    untitled2_B->uc = sin(untitled2_B->Integrator - 4.1887902047863905E+000) *
      untitled2_B->VF;

    if(untitled2_B->Constant1_f >= untitled2_P->Switch_Threshold_i) {

      rtb_Gain_a = rtb_t * untitled2_P->Gain_Gain_k + untitled2_B->Gain2;

      untitled2_B->Switch[0] = sin(rtb_Gain_a + untitled2_B->Constant_a[0]) *
        untitled2_B->m4;
      untitled2_B->Switch[1] = sin(rtb_Gain_a + untitled2_B->Constant_a[1]) *
        untitled2_B->m4;
      untitled2_B->Switch[2] = sin(rtb_Gain_a + untitled2_B->Constant_a[2]) *
        untitled2_B->m4;
    } else {

      untitled2_B->Switch[0] = untitled2_B->ua * untitled2_P->Gain2_Gain_e;
      untitled2_B->Switch[1] = untitled2_B->ub * untitled2_P->Gain2_Gain_e;
      untitled2_B->Switch[2] = untitled2_B->uc * untitled2_P->Gain2_Gain_e;
    }
  }

  /* Clock: '<S32>/Clock' */
  rtb_Clock_k = ssGetT(S);

  /* S-Function (sfun_tstart): '<S32>/startTime' */
  /* S-Function Block (sfun_tstart): <S32>/startTime */
  untitled2_B->startTime = ssGetTStart(S);

  untitled2_B->LookUpTable1 = rt_Lookup(untitled2_P->LookUpTable1_XData, 4,
   fmod(rtb_Clock_k - untitled2_B->startTime, 0.00055555555555555556),
   untitled2_P->LookUpTable1_YData);

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    /* RelationalOperator: '<S4>/Relational Operator' */
    if (ssIsMajorTimeStep(S)) {
      untitled2_DWork->RelationalOperator_Mode[0] =
        (boolean_T)(untitled2_B->Switch[0] >= untitled2_B->LookUpTable1);
      untitled2_DWork->RelationalOperator_Mode[1] =
        (boolean_T)(untitled2_B->Switch[1] >= untitled2_B->LookUpTable1);
      untitled2_DWork->RelationalOperator_Mode[2] =
        (boolean_T)(untitled2_B->Switch[2] >= untitled2_B->LookUpTable1);
    }
    rtb_RelationalOperator[0] = (untitled2_DWork->RelationalOperator_Mode[0]);
    rtb_RelationalOperator[1] = (untitled2_DWork->RelationalOperator_Mode[1]);
    rtb_RelationalOperator[2] = (untitled2_DWork->RelationalOperator_Mode[2]);
  }

  {
    boolean_T U[6];
    int32_T i;
    if(ssIsSampleHit(S, 1, tid)) {

      U[0] = rtb_RelationalOperator[0];
      U[1] = !rtb_RelationalOperator[0];
      U[2] = rtb_RelationalOperator[1];
      U[3] = !rtb_RelationalOperator[1];
      U[4] = rtb_RelationalOperator[2];
      U[5] = !rtb_RelationalOperator[2];
      for(i = 0; i < 6; i++) {
        untitled2_B->DataTypeConversion[i] = (real_T)U[i];
      }

      untitled2_B->_n = untitled2_P->_Value_o;
    }

    if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
      if(untitled2_B->_n) {
        if(untitled2_DWork->Tail_MODE == SUBSYS_DISABLED) {

          (void) memset(&(untitled2_Xdis->Integrator_d_CSTATE[0]),0,
           6*sizeof(boolean_T));

          if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
            ssSetSolverNeedsReset(S);
          }

          /* Initial conditions for enable system: '<S33>/Tail' */
          {
            /* simstruct variables */
            ContinuousStates_untitled2 *untitled2_X =
              (ContinuousStates_untitled2*) ssGetContStates(S);
            D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *)
              ssGetRootDWork(S);
            Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
              ssGetDefaultParam(S);

            /* Integrator Block: <S34>/Integrator */
            {
              int_T i1;

              real_T *xc = &untitled2_X->Integrator_d_CSTATE[0];

              for (i1=0; i1 < 6; i1++) {
                xc[i1] = untitled2_P->Integrator_IC_j;
              }
            }

            {
              int32_T i;

              for(i = 0; i < 6; i++) {
                untitled2_DWork->Memory_PreviousInput[i] =
                  untitled2_P->Memory_X0;
              }
            }
          }
        }
        untitled2_DWork->Tail_MODE = SUBSYS_ENABLED;
      } else if(untitled2_DWork->Tail_MODE == SUBSYS_ENABLED) {
        ssSetSolverNeedsReset(S);

        (void) memset(&(untitled2_Xdis->Integrator_d_CSTATE[0]),1,
         6*sizeof(boolean_T));

        untitled2_DWork->Tail_MODE = SUBSYS_DISABLED;
      }
    }
    if(untitled2_DWork->Tail_MODE == SUBSYS_ENABLED) {

      /* Outputs for enable system: '<S33>/Tail' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        ContinuousStates_untitled2 *untitled2_X = (ContinuousStates_untitled2*)
          ssGetContStates(S);
        D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *)
          ssGetRootDWork(S);
        PrevZCSigStates_untitled2 *untitled2_PrevZCSigState =
          (PrevZCSigStates_untitled2 *) _ssGetPrevZCSigState(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        if(ssIsSampleHit(S, 1, tid)) {

          untitled2_B->_d = untitled2_P->_Value;

          untitled2_B->_d1 = untitled2_P->_Value_d;
        }

        /* Integrator: '<S34>/Integrator' */
        if (ssIsMajorTimeStep(S)) {
          ZCEventType zcEvent;
          boolean_T resetIntg = FALSE;

          {
            int_T i1;

            ZCSigState *pzc = &untitled2_PrevZCSigState->Integrator_d_ZCE[0];
            real_T *xc = &untitled2_X->Integrator_d_CSTATE[0];
            const real_T *u1 = untitled2_B->DataTypeConversion;

            for (i1=0; i1 < 6; i1++) {
              zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,&pzc[i1],
               u1[i1]);
              if( zcEvent) {
                resetIntg = TRUE;
                xc[i1] = untitled2_P->Integrator_IC_j;
              }
            }
          }
          if (resetIntg) {
            ssSetSolverNeedsReset(S);
          }
        }
        {
          int_T i1;

          real_T *y0 = rtb_Saturation2;
          real_T *xc = &untitled2_X->Integrator_d_CSTATE[0];

          for (i1=0; i1 < 6; i1++) {
            y0[i1] = xc[i1];
          }
        }

        {
          int32_T i;
          if(ssIsSampleHit(S, 1, tid)) {

            for(i = 0; i < 6; i++) {
              rtb_Memory[i] = untitled2_DWork->Memory_PreviousInput[i];
            }

            untitled2_B->Constant_h = untitled2_P->Constant_Value_e;
          }
        }

        {
          int32_T i;

          for(i = 0; i < 6; i++) {
            untitled2_B->Add[i] = rtb_Saturation2[i] * untitled2_P->u9Tf_Gain +
              untitled2_B->Constant_h;
          }
        }

        /* Saturate: '<S36>/Saturation1'
         *
         * Regarding '<S36>/Saturation1':
         *   Lower limit: untitled2_P->Saturation1_LowerSat
         *   Upper limit: untitled2_P->Saturation1_UpperSat
         */
        if (ssIsMajorTimeStep(S)) {
          {
            int_T i1;

            const real_T *u0 = untitled2_B->Add;
            int_T *mode = &untitled2_DWork->Saturation1_MODE[0];

            for (i1=0; i1 < 6; i1++) {
              if (u0[i1] >= untitled2_P->Saturation1_UpperSat) {
                mode[i1] = 1;
              } else if (u0[i1] <= untitled2_P->Saturation1_LowerSat) {
                mode[i1] = -1;
              } else {
                mode[i1] = 0;
              }
            }
          }
        }
        /* Output value */
        {
          int_T i1;

          const real_T *u0 = untitled2_B->Add;
          int_T *mode = &untitled2_DWork->Saturation1_MODE[0];

          real_T *y0 = rtb_Saturation1;

          for (i1=0; i1 < 6; i1++) {
            if (mode[i1] == 1) {
              y0[i1] = untitled2_P->Saturation1_UpperSat;
            } else if (mode[i1] == -1) {
              y0[i1] = untitled2_P->Saturation1_LowerSat;
            } else {
              y0[i1] = u0[i1];
            }
          }
        }

        if(ssIsSampleHit(S, 1, tid)) {

          untitled2_B->Constant2_k = untitled2_P->Constant2_Value_m;
        }

        {
          int32_T i;

          for(i = 0; i < 6; i++) {
            untitled2_B->uTt[i] = (untitled2_B->Constant2_k -
              rtb_Saturation2[i]) * untitled2_P->uTt_Gain;
          }
        }

        /* Saturate: '<S36>/Saturation2'
         *
         * Regarding '<S36>/Saturation2':
         *   Lower limit: untitled2_P->Saturation2_LowerSat
         *   Upper limit: untitled2_P->Saturation2_UpperSat
         */
        if (ssIsMajorTimeStep(S)) {
          {
            int_T i1;

            const real_T *u0 = untitled2_B->uTt;
            int_T *mode = &untitled2_DWork->Saturation2_MODE[0];

            for (i1=0; i1 < 6; i1++) {
              if (u0[i1] >= untitled2_P->Saturation2_UpperSat) {
                mode[i1] = 1;
              } else if (u0[i1] <= untitled2_P->Saturation2_LowerSat) {
                mode[i1] = -1;
              } else {
                mode[i1] = 0;
              }
            }
          }
        }
        /* Output value */
        {
          int_T i1;

          const real_T *u0 = untitled2_B->uTt;
          int_T *mode = &untitled2_DWork->Saturation2_MODE[0];

          real_T *y0 = rtb_Saturation2;

          for (i1=0; i1 < 6; i1++) {
            if (mode[i1] == 1) {
              y0[i1] = untitled2_P->Saturation2_UpperSat;
            } else if (mode[i1] == -1) {
              y0[i1] = untitled2_P->Saturation2_LowerSat;
            } else {
              y0[i1] = u0[i1];
            }
          }
        }

        {
          int32_T i;

          for(i = 0; i < 6; i++) {
            rtb_Add2[i] = rtb_Saturation1[i] + rtb_Saturation2[i];
          }
          if(ssIsSampleHit(S, 1, tid)) {

            for(i = 0; i < 6; i++) {
              if(untitled2_B->DataTypeConversion[i] >=
               untitled2_P->Switch_Threshold_m) {
                untitled2_B->Switch_o[i] = rtb_Memory1[i];
              } else {
                untitled2_B->Switch_o[i] = rtb_Memory[i];
              }
            }
          }

          for(i = 0; i < 6; i++) {
            untitled2_B->Product[i] = rtb_Add2[i] * untitled2_B->Switch_o[i] *
              untitled2_B->_d1;
          }
        }

        if (ssIsMajorTimeStep(S)) {
          srUpdateBC(untitled2_DWork->Tail_SubsysRanBC);
        }
      }
    }
    if(ssIsSampleHit(S, 1, tid)) {

      untitled2_B->Constant4 = untitled2_P->Constant4_Value;
    }

    switch((int32_T)untitled2_B->Constant4) {
     case 1:
      rtb_MultiportSwitch1_l[0] = untitled2_B->isa_c;
      rtb_MultiportSwitch1_l[1] = untitled2_B->isb_h;
      break;
     case 2:
      rtb_MultiportSwitch1_l[0] = untitled2_B->isa_n;
      rtb_MultiportSwitch1_l[1] = untitled2_B->isb_m;
      break;
     default:
      rtb_MultiportSwitch1_l[0] = untitled2_B->isa;
      rtb_MultiportSwitch1_l[1] = untitled2_B->isb;
      break;
    }

    untitled2_B->ib[0] = rtb_MultiportSwitch_i[0] * untitled2_P->ib_Gain;
    untitled2_B->ib[1] = rtb_MultiportSwitch_i[1] * untitled2_P->ib_Gain;
    untitled2_B->ib[2] = rtb_MultiportSwitch1_l[0] * untitled2_P->ib_Gain;
    untitled2_B->ib[3] = rtb_MultiportSwitch1_l[1] * untitled2_P->ib_Gain;
  }

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    untitled2_B->Source = untitled2_P->Source_Value;
  }
  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spssw_contc) */
  /* Call into Simulink for MEX-version of S-function */
  ssCallAccelRunBlock(S, 16, 87, SS_CALL_MDL_OUTPUTS);

  rtb_1_Vb[0] = untitled2_B->Constant6[0] * untitled2_P->_Vb_Gain;
  rtb_1_Vb[1] = untitled2_B->Constant6[1] * untitled2_P->_Vb_Gain;
  rtb_1_Vb[2] = untitled2_B->StateSpace_o1[6] * untitled2_P->_Vb_Gain;
  rtb_1_Vb[3] = untitled2_B->StateSpace_o1[7] * untitled2_P->_Vb_Gain;
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant_l1 = untitled2_P->Constant_Value_b;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant_l1) {
      if(untitled2_DWork->Rotorreferenceframe_MODE_e == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Rotorreferenceframe_MODE_e = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Rotorreferenceframe_MODE_e == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S17>/Rotor reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S21>/vqr,vdr' */

        untitled2_B->vqr_n = untitled2_P->vqrvdr_Y0;
        untitled2_B->vdr_e = untitled2_P->vqrvdr_Y0;

        /* (Virtual) Outport Block: '<S21>/vqs,vds' */

        untitled2_B->vqs_g = untitled2_P->vqsvds_Y0;
        untitled2_B->vds_k = untitled2_P->vqsvds_Y0;
      }

      untitled2_DWork->Rotorreferenceframe_MODE_e = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Rotorreferenceframe_MODE_e == SUBSYS_ENABLED) {

    untitled2_B->vdr_e = -5.7735026918962573E-001 * rtb_1_Vb[1];

    untitled2_B->vds_k = ((rtb_Switch_a[0] - 1.7320508075688772 *
      rtb_Switch_a[1]) * rtb_1_Vb[3] + 2.0 * rtb_Switch_a[0] * rtb_1_Vb[2]) *
      0.33333333333333331;

    untitled2_B->vqr_n = (2.0 * rtb_1_Vb[0] + rtb_1_Vb[1]) * 0.33333333333333331;

    untitled2_B->vqs_g = ((1.7320508075688772 * rtb_Switch_a[0] +
      rtb_Switch_a[1]) * rtb_1_Vb[3] + 2.0 * rtb_Switch_a[1] * rtb_1_Vb[2]) *
      0.33333333333333331;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Rotorreferenceframe_SubsysR_a);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant1_na = untitled2_P->Constant1_Value_jb;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant1_na) {
      if(untitled2_DWork->Stationaryreferenceframe_MO_h == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Stationaryreferenceframe_MO_h = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Stationaryreferenceframe_MO_h == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S17>/Stationary reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S22>/vqr,vdr' */

        untitled2_B->vqr_j = untitled2_P->vqrvdr_Y0_g;
        untitled2_B->vdr_a = untitled2_P->vqrvdr_Y0_g;

        /* (Virtual) Outport Block: '<S22>/vqs,vds' */

        untitled2_B->vqs_d = untitled2_P->vqsvds_Y0_f;
        untitled2_B->vds_m = untitled2_P->vqsvds_Y0_f;
      }

      untitled2_DWork->Stationaryreferenceframe_MO_h = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Stationaryreferenceframe_MO_h == SUBSYS_ENABLED) {

    untitled2_B->vdr_a = ((-rtb_Switch_a[0] - 1.7320508075688772 *
      rtb_Switch_a[1]) * rtb_1_Vb[1] + -2.0 * rtb_Switch_a[0] * rtb_1_Vb[0]) *
      0.33333333333333331;

    untitled2_B->vds_m = -5.7735026918962573E-001 * rtb_1_Vb[3];

    untitled2_B->vqr_j = ((rtb_Switch_a[1] - 1.7320508075688772 *
      rtb_Switch_a[0]) * rtb_1_Vb[1] + 2.0 * rtb_Switch_a[1] * rtb_1_Vb[0]) *
      0.33333333333333331;

    untitled2_B->vqs_d = (2.0 * rtb_1_Vb[2] + rtb_1_Vb[3]) * 0.33333333333333331;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Stationaryreferenceframe_Su_f);
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant2_kt = untitled2_P->Constant2_Value_je;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Constant2_kt) {
      if(untitled2_DWork->Synchronousreferenceframe_M_g == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->Synchronousreferenceframe_M_g = SUBSYS_ENABLED;
    } else if(untitled2_DWork->Synchronousreferenceframe_M_g == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      /* Disable for enable system: '<S17>/Synchronous reference frame' */
      {
        /* simstruct variables */
        BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
        Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
          ssGetDefaultParam(S);

        /* (Virtual) Outport Block: '<S23>/vqr,vdr' */

        untitled2_B->vqr = untitled2_P->vqrvdr_Y0_a;
        untitled2_B->vdr = untitled2_P->vqrvdr_Y0_a;

        /* (Virtual) Outport Block: '<S23>/vqs,vds' */

        untitled2_B->vqs = untitled2_P->vqsvds_Y0_p;
        untitled2_B->vds = untitled2_P->vqsvds_Y0_p;
      }

      untitled2_DWork->Synchronousreferenceframe_M_g = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->Synchronousreferenceframe_M_g == SUBSYS_ENABLED) {

    untitled2_B->vdr = ((rtb_Switch_a[0] - 1.7320508075688772 * rtb_Switch_a[1])
      * rtb_1_Vb[1] + 2.0 * rtb_Switch_a[0] * rtb_1_Vb[0]) / 3.0;

    untitled2_B->vds = ((rtb_Switch_a[2] - 1.7320508075688772 * rtb_Switch_a[3])
      * rtb_1_Vb[3] + 2.0 * rtb_Switch_a[2] * rtb_1_Vb[2]) / 3.0;

    untitled2_B->vqr = ((1.7320508075688772 * rtb_Switch_a[0] + rtb_Switch_a[1])
      * rtb_1_Vb[1] + 2.0 * rtb_Switch_a[1] * rtb_1_Vb[0]) / 3.0;

    untitled2_B->vqs = ((1.7320508075688772 * rtb_Switch_a[2] + rtb_Switch_a[3])
      * rtb_1_Vb[3] + 2.0 * rtb_Switch_a[3] * rtb_1_Vb[2]) / 3.0;
    if(ssIsMajorTimeStep(S)) {
      srUpdateBC(untitled2_DWork->Synchronousreferenceframe_S_n);
    }
  }

  switch((int32_T)untitled2_B->Constant3_i) {
   case 1:
    rtb_MultiportSwitch[0] = untitled2_B->vqr_n;
    rtb_MultiportSwitch[1] = untitled2_B->vdr_e;
    break;
   case 2:
    rtb_MultiportSwitch[0] = untitled2_B->vqr_j;
    rtb_MultiportSwitch[1] = untitled2_B->vdr_a;
    break;
   default:
    rtb_MultiportSwitch[0] = untitled2_B->vqr;
    rtb_MultiportSwitch[1] = untitled2_B->vdr;
    break;
  }

  /* Sum: '<S18>/Sum3' */
  rtb_Sum3_f = -rtb_MultiportSwitch1_l[0];
  rtb_Sum3_f -= rtb_MultiportSwitch1_l[1];

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    untitled2_B->Constant4_k = untitled2_P->Constant4_Value_n;
  }

  {
    real_T U[18];
    int32_T i;

    switch((int32_T)untitled2_B->Constant4_k) {
     case 1:
      rtb_MultiportSwitch1[0] = untitled2_B->vqs_g;
      rtb_MultiportSwitch1[1] = untitled2_B->vds_k;
      break;
     case 2:
      rtb_MultiportSwitch1[0] = untitled2_B->vqs_d;
      rtb_MultiportSwitch1[1] = untitled2_B->vds_m;
      break;
     default:
      rtb_MultiportSwitch1[0] = untitled2_B->vqs;
      rtb_MultiportSwitch1[1] = untitled2_B->vds;
      break;
    }

    U[0] = rtb_MultiportSwitch_i[0];
    U[1] = rtb_MultiportSwitch_i[1];
    U[2] = rtb_Abs;
    U[3] = rtb_iqr;
    U[4] = rtb_idr;
    U[5] = rtb_phiqr;
    U[6] = rtb_phidr;
    U[7] = rtb_MultiportSwitch[0];
    U[8] = rtb_MultiportSwitch[1];
    U[9] = rtb_MultiportSwitch1_l[0];
    U[10] = rtb_MultiportSwitch1_l[1];
    U[11] = rtb_Sum3_f;
    U[12] = rtb_iqs;
    U[13] = rtb_ids;
    U[14] = rtb_phiqs;
    U[15] = rtb_phids;
    U[16] = rtb_MultiportSwitch1[0];
    U[17] = rtb_MultiportSwitch1[1];
    for(i = 0; i < 18; i++) {
      untitled2_B->Gain_d[i] = U[i] * untitled2_P->Gain_Gain_a[i];
    }
  }

  /* ToWorkspace: '<Root>/To Workspace7' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 100, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/is_abc' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 101, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/n' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 102, SS_CALL_MDL_OUTPUTS);

  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->_Tb2 = 0.0 * untitled2_P->_Tb2_Gain;
  }

  untitled2_B->_2H = ((rtb_Sum1_a - untitled2_B->_Tb2) - rtb_Integrator *
    untitled2_P->F_Gain) * untitled2_P->_2H_Gain;

  untitled2_B->web_psb = rtb_Integrator * untitled2_P->web_psb_Gain;

  rtb_1Llr1_f = rtb_iqr * untitled2_P->Llr1_Gain_g;

  rtb_1Llr3 = rtb_idr * untitled2_P->Llr3_Gain;
  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant1_n = untitled2_P->Constant1_Value_pi;

    untitled2_B->Constant2 = untitled2_P->Constant2_Value;
  }

  switch((int32_T)untitled2_B->Constant1_n) {
   case 1:
    rtb_MultiportSwitch_e = untitled2_B->Constant2;
    break;
   case 2:

    rtb_MultiportSwitch_e = rtb_Integrator * untitled2_P->Gain_Gain_m;
    break;
   default:
    rtb_MultiportSwitch_e = untitled2_B->wewr;
    break;
  }

  untitled2_B->web1 = ((rtb_MultiportSwitch_e * rtb_phiqr +
    rtb_MultiportSwitch[1]) - rtb_1Llr3) * untitled2_P->web1_Gain;

  untitled2_B->web_psb_m = ((rtb_MultiportSwitch[0] - rtb_phidr *
    rtb_MultiportSwitch_e) - rtb_1Llr1_f) * untitled2_P->web_psb_Gain_i;

  if(ssIsSampleHit(S, 1, tid)) {

    untitled2_B->Constant4_o = untitled2_P->Constant4_Value_o;

    untitled2_B->Constant5 = untitled2_P->Constant5_Value;

    untitled2_B->Constant6_m = untitled2_P->Constant6_Value_m;
  }

  switch((int32_T)untitled2_B->Constant4_o) {
   case 1:
    rtb_MultiportSwitch1_e = rtb_Integrator;
    break;
   case 2:
    rtb_MultiportSwitch1_e = untitled2_B->Constant5;
    break;
   default:
    rtb_MultiportSwitch1_e = untitled2_B->Constant6_m;
    break;
  }

  untitled2_B->web1_n = ((rtb_MultiportSwitch1_e * rtb_phiqs +
    rtb_MultiportSwitch1[1]) - (rtb_ids * untitled2_P->Llr3_Gain_g)) *
    untitled2_P->web1_Gain_c;

  untitled2_B->web_psb_p = ((rtb_MultiportSwitch1[0] - (rtb_iqs *
    untitled2_P->Llr1_Gain_e)) - rtb_MultiportSwitch1_e * rtb_phids) *
    untitled2_P->web_psb_Gain_p;

  /* Clock: '<Root>/Clock' */
  untitled2_B->MathFunction1 = ssGetT(S);

  /* ToWorkspace: '<Root>/To Workspace' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 137, SS_CALL_MDL_OUTPUTS);

  untitled2_B->Gain2_g[0] = untitled2_B->StateSpace_o1[15] *
    untitled2_P->Gain2_Gain_l[0];
  untitled2_B->Gain2_g[1] = untitled2_B->StateSpace_o1[16] *
    untitled2_P->Gain2_Gain_l[1];
  untitled2_B->Gain2_g[2] = untitled2_B->StateSpace_o1[18] *
    untitled2_P->Gain2_Gain_l[2];

  /* ToWorkspace: '<Root>/To Workspace1' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 139, SS_CALL_MDL_OUTPUTS);

  /* Integrator: '<S5>/integ' */
  untitled2_B->integ = untitled2_X->integ_CSTATE;

  /* TransportDelay Block: '<S5>/T' */
  {

    real_T **uBuffer = (real_T**)&untitled2_DWork->T_PWORK.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)&untitled2_DWork->T_PWORK.TUbufferPtrs[1];
    real_T simTime = ssGetT(S);

    real_T tMinusDelay = simTime - untitled2_P->T_Delay;

    rtb_Abs = rt_TDelayInterpolate(
      tMinusDelay,
     0.0,
     *tBuffer,
     *uBuffer,
     untitled2_DWork->T_IWORK.CircularBufSize,
     &untitled2_DWork->T_IWORK.Last,
     untitled2_DWork->T_IWORK.Tail,
     untitled2_DWork->T_IWORK.Head,
     untitled2_P->T_InitOutput,
     0,
     (boolean_T) (ssIsMinorTimeStep(S) && (ssGetTimeOfLastOutput(S) ==
       ssGetT(S))));
  }

  untitled2_B->Sum1 = untitled2_B->integ - rtb_Abs;

  /* Abs: '<S5>/Abs' */
  if (ssIsMajorTimeStep(S)) {
    untitled2_DWork->Abs_MODE = untitled2_B->Sum1 >= 0.0;
  }
  rtb_Abs = (untitled2_DWork->Abs_MODE)? untitled2_B->Sum1:-(untitled2_B->Sum1);

  if(rtb_Abs < 0.0) {
    untitled2_B->MathFunction1 = -sqrt(-rtb_Abs);
  } else {
    untitled2_B->MathFunction1 = sqrt(rtb_Abs);
  }

  /* ToWorkspace: '<Root>/To Workspace2' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 145, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/Ubc' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 146, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/ubc' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 147, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/uca' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 148, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/ud' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 149, SS_CALL_MDL_OUTPUTS);

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    untitled2_B->Mode = untitled2_P->Mode_Value;
  }

  if(ssIsSampleHit(S, 1, tid) && ssIsMajorTimeStep(S)) {
    if(untitled2_B->Mode > 0.0) {
      if(untitled2_DWork->StoreData_MODE == SUBSYS_DISABLED) {

        if(ssGetTStart(S) != ssGetTaskTime(S,tid)) {
          ssSetSolverNeedsReset(S);
        }
      }
      untitled2_DWork->StoreData_MODE = SUBSYS_ENABLED;
    } else if(untitled2_DWork->StoreData_MODE == SUBSYS_ENABLED) {
      ssSetSolverNeedsReset(S);

      untitled2_DWork->StoreData_MODE = SUBSYS_DISABLED;
    }
  }
  if(untitled2_DWork->StoreData_MODE == SUBSYS_ENABLED) {

    /* Output and update for enable system: '<S3>/StoreData' */
    {
      /* simstruct variables */
      D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);

      /* ToWorkspace: '<S30>/To Workspace' */
      /* Call into Simulink for To Workspace */
      ssCallAccelRunBlock(S, 12, 0, SS_CALL_MDL_OUTPUTS);

      if (ssIsMajorTimeStep(S)) {
        srUpdateBC(untitled2_DWork->StoreData_SubsysRanBC);
      }
    }
  }

  untitled2_B->Gain = untitled2_B->Gain2_g[0] * untitled2_B->Gain2_g[0] *
    untitled2_P->Gain_Gain_n;

  /* Scope: '<Root>/O' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 154, SS_CALL_MDL_OUTPUTS);

  /* Integrator: '<S6>/integ' */
  untitled2_B->integ_g = untitled2_X->integ_d_CSTATE;

  /* TransportDelay Block: '<S6>/T' */
  {

    real_T **uBuffer = (real_T**)&untitled2_DWork->T_PWORK_l.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)&untitled2_DWork->T_PWORK_l.TUbufferPtrs[1];
    real_T simTime = ssGetT(S);

    real_T tMinusDelay = simTime - untitled2_P->T_Delay_f;

    rtb_Abs = rt_TDelayInterpolate(
      tMinusDelay,
     0.0,
     *tBuffer,
     *uBuffer,
     untitled2_DWork->T_IWORK_m.CircularBufSize,
     &untitled2_DWork->T_IWORK_m.Last,
     untitled2_DWork->T_IWORK_m.Tail,
     untitled2_DWork->T_IWORK_m.Head,
     untitled2_P->T_InitOutput_g,
     0,
     (boolean_T) (ssIsMinorTimeStep(S) && (ssGetTimeOfLastOutput(S) ==
       ssGetT(S))));
  }

  untitled2_B->Sum1_b = untitled2_B->integ_g - rtb_Abs;

  /* Abs: '<S6>/Abs' */
  if (ssIsMajorTimeStep(S)) {
    untitled2_DWork->Abs_MODE_a = untitled2_B->Sum1_b >= 0.0;
  }
  rtb_Abs = (untitled2_DWork->Abs_MODE_a)?
    untitled2_B->Sum1_b:-(untitled2_B->Sum1_b);

  if(rtb_Abs < 0.0) {
    untitled2_B->MathFunction1 = -sqrt(-rtb_Abs);
  } else {
    untitled2_B->MathFunction1 = sqrt(rtb_Abs);
  }

  /* ToWorkspace: '<Root>/To Workspace10' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 160, SS_CALL_MDL_OUTPUTS);

  /* ToWorkspace: '<Root>/To Workspace3' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 161, SS_CALL_MDL_OUTPUTS);

  /* ToWorkspace: '<Root>/To Workspace4' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 162, SS_CALL_MDL_OUTPUTS);

  /* ToWorkspace: '<Root>/To Workspace8' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 163, SS_CALL_MDL_OUTPUTS);

  /* ToWorkspace: '<Root>/To Workspace9' */
  /* Call into Simulink for To Workspace */
  ssCallAccelRunBlock(S, 16, 164, SS_CALL_MDL_OUTPUTS);

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    untitled2_B->u = untitled2_P->u_Value;
  }

  {
    int32_T i;

    for(i = 0; i < 6; i++) {
      untitled2_B->Ron[i] = untitled2_B->StateSpace_o1[i] *
        untitled2_P->Ron_Gain;
    }

    if(ssIsMajorTimeStep(S)) {
      for(i = 0; i < 6; i++) {
        untitled2_DWork->Switch_Mode[i] = (untitled2_B->StateSpace_o2[i] >=
          untitled2_P->Switch_Threshold_iw);
      }
    }
    for(i = 0; i < 6; i++) {
      if(untitled2_DWork->Switch_Mode[i] == 1) {
        untitled2_B->Switch_h[i] = untitled2_B->Ron[i];
      } else {
        untitled2_B->Switch_h[i] = untitled2_B->u;
      }
    }
  }

  /* Saturate: '<S33>/Saturation'
   *
   * Regarding '<S33>/Saturation':
   *   Lower limit: untitled2_P->Saturation_LowerSat_k
   *   Upper limit: untitled2_P->Saturation_UpperSat_a
   */
  if (ssIsMajorTimeStep(S)) {
    {
      int_T i1;

      const real_T *u0 = untitled2_B->Switch_h;
      int_T *mode = &untitled2_DWork->Saturation_MODE_h[0];

      for (i1=0; i1 < 6; i1++) {
        if (u0[i1] >= untitled2_P->Saturation_UpperSat_a) {
          mode[i1] = 1;
        } else if (u0[i1] <= untitled2_P->Saturation_LowerSat_k) {
          mode[i1] = -1;
        } else {
          mode[i1] = 0;
        }
      }
    }
  }
  /* Output value */
  {
    int_T i1;

    const real_T *u0 = untitled2_B->Switch_h;
    int_T *mode = &untitled2_DWork->Saturation_MODE_h[0];

    real_T *y0 = untitled2_B->Saturation;

    for (i1=0; i1 < 6; i1++) {
      if (mode[i1] == 1) {
        y0[i1] = untitled2_P->Saturation_UpperSat_a;
      } else if (mode[i1] == -1) {
        y0[i1] = untitled2_P->Saturation_LowerSat_k;
      } else {
        y0[i1] = u0[i1];
      }
    }
  }

  /* Scope: '<Root>/V' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 175, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/f' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 176, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/sin1' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 177, SS_CALL_MDL_OUTPUTS);

  /* Scope: '<Root>/sin3' */
  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 16, 178, SS_CALL_MDL_OUTPUTS);

  untitled2_B->Gain1 = untitled2_B->Saturation_d * untitled2_P->Gain1_Gain;

  untitled2_B->Gain3[0] = untitled2_B->Switch[0] * untitled2_P->Gain3_Gain;
  untitled2_B->Gain3[1] = untitled2_B->Switch[1] * untitled2_P->Gain3_Gain;
  untitled2_B->Gain3[2] = untitled2_B->Switch[2] * untitled2_P->Gain3_Gain;

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    /* RelationalOperator: '<S4>/Relational Operator1' */
    if (ssIsMajorTimeStep(S)) {
      untitled2_DWork->RelationalOperator1_Mode[0] =
        (boolean_T)(untitled2_B->Gain3[0] >= untitled2_B->LookUpTable1);
      untitled2_DWork->RelationalOperator1_Mode[1] =
        (boolean_T)(untitled2_B->Gain3[1] >= untitled2_B->LookUpTable1);
      untitled2_DWork->RelationalOperator1_Mode[2] =
        (boolean_T)(untitled2_B->Gain3[2] >= untitled2_B->LookUpTable1);
    }
    rtb_RelationalOperator1[0] = (untitled2_DWork->RelationalOperator1_Mode[0]);
    rtb_RelationalOperator1[1] = (untitled2_DWork->RelationalOperator1_Mode[1]);
    rtb_RelationalOperator1[2] = (untitled2_DWork->RelationalOperator1_Mode[2]);
  }

  untitled2_B->Gain_h = untitled2_B->ua * untitled2_B->ua *
    untitled2_P->Gain_Gain_f;
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{

  /* simstruct variables */
  BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
  D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);
  Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
    ssGetDefaultParam(S);

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if (ssIsSampleHit(S, 1, tid)) {       /* Sample time: [0.0s, 1.0s] */

    {
      int32_T i;

      for(i = 0; i < 6; i++) {
        untitled2_DWork->Memory1_PreviousInput[i] = untitled2_B->Saturation[i];
      }
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(untitled2_DWork->Tail_MODE == SUBSYS_ENABLED) {

    /* Update for enable system: '<S33>/Tail' */
    {

      /* simstruct variables */
      BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
      D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);

      if(ssIsSampleHit(S, 1, tid)) {
      }

      {
        int32_T i;
        if(ssIsSampleHit(S, 1, tid)) {

          for(i = 0; i < 6; i++) {
            untitled2_DWork->Memory_PreviousInput[i] = untitled2_B->Switch_o[i];
          }
        }
      }

      if(ssIsSampleHit(S, 1, tid)) {
      }

      if(ssIsSampleHit(S, 1, tid)) {
      }
    }
  }
  if(ssIsSampleHit(S, 1, tid)) {
  }

  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spssw_contc) */
  /* Call into Simulink for MEX-version of S-function */
  ssCallAccelRunBlock(S, 16, 87, SS_CALL_MDL_UPDATE);

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  if(ssIsSampleHit(S, 1, tid)) {
  }

  /* TransportDelay Block: '<S5>/T' */
  {
    real_T **uBuffer = (real_T**)&untitled2_DWork->T_PWORK.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)&untitled2_DWork->T_PWORK.TUbufferPtrs[1];

    real_T simTime = ssGetT(S);

    untitled2_DWork->T_IWORK.Head = ((untitled2_DWork->T_IWORK.Head <
      (untitled2_DWork->T_IWORK.CircularBufSize-1)) ?
      (untitled2_DWork->T_IWORK.Head+1) : 0);

    if (untitled2_DWork->T_IWORK.Head == untitled2_DWork->T_IWORK.Tail) {

      if (!rt_TDelayUpdateTailOrGrowBuf(
        &untitled2_DWork->T_IWORK.CircularBufSize,
        &untitled2_DWork->T_IWORK.Tail, &untitled2_DWork->T_IWORK.Head,
        &untitled2_DWork->T_IWORK.Last, simTime - untitled2_P->T_Delay, tBuffer,
        uBuffer, NULL, (boolean_T)0, false,
        &untitled2_DWork->T_IWORK.MaxNewBufSize)) {
        ssSetErrorStatus(S, "tdelay memory allocation error");
      }
    }

    (*tBuffer)[untitled2_DWork->T_IWORK.Head] = simTime;
    (*uBuffer)[untitled2_DWork->T_IWORK.Head] = untitled2_B->integ;
  }

  /* TransportDelay Block: '<S6>/T' */
  {
    real_T **uBuffer = (real_T**)&untitled2_DWork->T_PWORK_l.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)&untitled2_DWork->T_PWORK_l.TUbufferPtrs[1];

    real_T simTime = ssGetT(S);

    untitled2_DWork->T_IWORK_m.Head = ((untitled2_DWork->T_IWORK_m.Head <
      (untitled2_DWork->T_IWORK_m.CircularBufSize-1)) ?
      (untitled2_DWork->T_IWORK_m.Head+1) : 0);

    if (untitled2_DWork->T_IWORK_m.Head == untitled2_DWork->T_IWORK_m.Tail) {

      if (!rt_TDelayUpdateTailOrGrowBuf(
        &untitled2_DWork->T_IWORK_m.CircularBufSize,
        &untitled2_DWork->T_IWORK_m.Tail, &untitled2_DWork->T_IWORK_m.Head,
        &untitled2_DWork->T_IWORK_m.Last, simTime - untitled2_P->T_Delay_f,
        tBuffer, uBuffer, NULL, (boolean_T)0, false,
        &untitled2_DWork->T_IWORK_m.MaxNewBufSize)) {
        ssSetErrorStatus(S, "tdelay memory allocation error");
      }
    }

    (*tBuffer)[untitled2_DWork->T_IWORK_m.Head] = simTime;
    (*uBuffer)[untitled2_DWork->T_IWORK_m.Head] = untitled2_B->integ_g;
  }
}

/* Derivatives for root system: '<Root>' */
#define MDL_DERIVATIVES

static void mdlDerivatives(SimStruct *S)
{

  /* simstruct variables */
  BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
  StateDerivatives_untitled2 *untitled2_Xdot = (StateDerivatives_untitled2*)
    ssGetdX(S);
  D_Work_untitled2 *untitled2_DWork = (D_Work_untitled2 *) ssGetRootDWork(S);

  /* Integrator Block: <S11>/Integrator */
  {

    untitled2_Xdot->Integrator_CSTATE = untitled2_B->_2H;
  }

  /* Integrator Block: <S16>/phiqs */
  {

    untitled2_Xdot->phiqs_CSTATE = untitled2_B->web_psb_p;
  }

  /* Integrator Block: <S15>/phiqr */
  {

    untitled2_Xdot->phiqr_CSTATE = untitled2_B->web_psb_m;
  }

  /* Integrator Block: <S15>/phidr */
  {

    untitled2_Xdot->phidr_CSTATE = untitled2_B->web1;
  }

  /* Integrator Block: <S16>/phids */
  {

    untitled2_Xdot->phids_CSTATE = untitled2_B->web1_n;
  }

  /* Integrator Block: <S11>/Integrator1 */
  {

    untitled2_Xdot->Integrator1_CSTATE = untitled2_B->web_psb;
  }

  /* Integrator Block: <Root>/Integrator */
  {

    untitled2_Xdot->Integrator_m_CSTATE = untitled2_B->Gain1;
  }

  if(untitled2_DWork->Tail_MODE == SUBSYS_ENABLED) {

    /* Derivatives for enable system: '<S33>/Tail' */
    {

      /* simstruct variables */
      BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
      StateDerivatives_untitled2 *untitled2_Xdot = (StateDerivatives_untitled2*)
        ssGetdX(S);

      /* Integrator Block: <S34>/Integrator */
      {

        {
          int_T i1;

          real_T *xdot = &untitled2_Xdot->Integrator_d_CSTATE[0];

          for (i1=0; i1 < 6; i1++) {
            xdot[i1] = untitled2_B->_d;
          }
        }
      }
    }
  } else {
    {
      real_T *dx;
      int_T i;

      dx = &(untitled2_Xdot->Integrator_d_CSTATE[0]);
      for (i=0; i < 6; i++) {
        dx[i] = 0.0;
      }
    }
  }

  /* Integrator Block: <S5>/integ */
  {

    untitled2_Xdot->integ_CSTATE = untitled2_B->Gain;
  }

  /* Integrator Block: <S6>/integ */
  {

    untitled2_Xdot->integ_d_CSTATE = untitled2_B->Gain_h;
  }
}

/* ZeroCrossings for root system: '<Root>' */
#define MDL_ZERO_CROSSINGS

static void mdlZeroCrossings(SimStruct *S)
{
  /* simstruct variables */
  BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
  Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
    ssGetDefaultParam(S);
  NonsampledZCs_untitled2 *untitled2_NonsampledZC = (NonsampledZCs_untitled2 *)
    ssGetNonsampledZCs(S);

  /* Step Block: '<S7>/Step' */
  untitled2_NonsampledZC->Step_NSZC = ssGetT(S) - untitled2_P->Step_Time;

  /* Saturate Block: '<Root>/Saturation' */
  /* Do zero crossings for the upper limit */
  untitled2_NonsampledZC->Saturation_j_NSZC[0] = untitled2_B->Output -
    untitled2_P->Saturation_UpperSat;
  /* Do zero crossings for the lower limit */
  untitled2_NonsampledZC->Saturation_j_NSZC[1] = untitled2_B->Output -
    untitled2_P->Saturation_LowerSat;

  /* RelationalOperator Block: '<S4>/Relational Operator' */
  untitled2_NonsampledZC->RelationalOperator_NSZC[0] = untitled2_B->Switch[0] -
    untitled2_B->LookUpTable1;
  untitled2_NonsampledZC->RelationalOperator_NSZC[1] = untitled2_B->Switch[1] -
    untitled2_B->LookUpTable1;
  untitled2_NonsampledZC->RelationalOperator_NSZC[2] = untitled2_B->Switch[2] -
    untitled2_B->LookUpTable1;

  /* ZeroCrossings for enable system: '<S33>/Tail' */
  {
    /* simstruct variables */
    BlockIO_untitled2 *untitled2_B = (BlockIO_untitled2 *) _ssGetBlockIO(S);
    Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
      ssGetDefaultParam(S);
    NonsampledZCs_untitled2 *untitled2_NonsampledZC = (NonsampledZCs_untitled2
      *) ssGetNonsampledZCs(S);

    /* Saturate Block: '<S36>/Saturation1' */
    /* Do zero crossings for the upper limit */
    {
      int_T i1;

      const real_T *u0 = untitled2_B->Add;
      real_T *nszc = &untitled2_NonsampledZC->Saturation1_NSZC[0];

      for (i1=0; i1 < 6; i1++) {
        nszc[i1] = u0[i1] -
          untitled2_P->Saturation1_UpperSat;
      }
    }
    /* Do zero crossings for the lower limit */
    {
      int_T i1;

      const real_T *u0 = untitled2_B->Add;
      real_T *nszc = &untitled2_NonsampledZC->Saturation1_NSZC[0];

      for (i1=0; i1 < 6; i1++) {
        nszc[i1 + 6] = u0[i1] -
          untitled2_P->Saturation1_LowerSat;
      }
    }

    /* Saturate Block: '<S36>/Saturation2' */
    /* Do zero crossings for the upper limit */
    {
      int_T i1;

      const real_T *u0 = untitled2_B->uTt;
      real_T *nszc = &untitled2_NonsampledZC->Saturation2_NSZC[0];

      for (i1=0; i1 < 6; i1++) {
        nszc[i1] = u0[i1] -
          untitled2_P->Saturation2_UpperSat;
      }
    }
    /* Do zero crossings for the lower limit */
    {
      int_T i1;

      const real_T *u0 = untitled2_B->uTt;
      real_T *nszc = &untitled2_NonsampledZC->Saturation2_NSZC[0];

      for (i1=0; i1 < 6; i1++) {
        nszc[i1 + 6] = u0[i1] -
          untitled2_P->Saturation2_LowerSat;
      }
    }
  }

  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spssw_contc) */
  /* Call into Simulink for MEX-version of S-function */
  ssCallAccelRunBlock(S, 16, 87, SS_CALL_MDL_ZERO_CROSSINGS);

  /* Abs Block: '<S5>/Abs' */
  untitled2_NonsampledZC->Abs_NSZC = untitled2_B->Sum1;

  /* Abs Block: '<S6>/Abs' */
  untitled2_NonsampledZC->Abs_f_NSZC = untitled2_B->Sum1_b;

  {
    int32_T i;

    for(i = 0; i < 6; i++) {
      untitled2_NonsampledZC->Switch_iv_NSZC[i] = untitled2_B->StateSpace_o2[i]
        - untitled2_P->Switch_Threshold_iw;
    }
  }

  /* Saturate Block: '<S33>/Saturation' */
  /* Do zero crossings for the upper limit */
  {
    int_T i1;

    const real_T *u0 = untitled2_B->Switch_h;
    real_T *nszc = &untitled2_NonsampledZC->Saturation_m_NSZC[0];

    for (i1=0; i1 < 6; i1++) {
      nszc[i1] = u0[i1] -
        untitled2_P->Saturation_UpperSat_a;
    }
  }
  /* Do zero crossings for the lower limit */
  {
    int_T i1;

    const real_T *u0 = untitled2_B->Switch_h;
    real_T *nszc = &untitled2_NonsampledZC->Saturation_m_NSZC[0];

    for (i1=0; i1 < 6; i1++) {
      nszc[i1 + 6] = u0[i1] -
        untitled2_P->Saturation_LowerSat_k;
    }
  }

  /* RelationalOperator Block: '<S4>/Relational Operator1' */
  untitled2_NonsampledZC->RelationalOperator1_NSZC[0] = untitled2_B->Gain3[0] -
    untitled2_B->LookUpTable1;
  untitled2_NonsampledZC->RelationalOperator1_NSZC[1] = untitled2_B->Gain3[1] -
    untitled2_B->LookUpTable1;
  untitled2_NonsampledZC->RelationalOperator1_NSZC[2] = untitled2_B->Gain3[2] -
    untitled2_B->LookUpTable1;
}

/* Function to initialize sizes */
static void mdlInitializeSizes(SimStruct *S)
{

  /* checksum */
  ssSetChecksumVal(S, 0, 2694725139U);
  ssSetChecksumVal(S, 1, 3340724650U);
  ssSetChecksumVal(S, 2, 538018100U);
  ssSetChecksumVal(S, 3, 423130547U);

  /* options */
  ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE);

  /* Accelerator check memory map size match for DWork */
  if (ssGetSizeofDWork(S) != sizeof(D_Work_untitled2)) {
    ssSetErrorStatus(S,"Unexpected error: Internal DWork sizes do "
     "not match for accelerator mex file.");
  }

  /* Accelerator check memory map size match for BlockIO */
  if (ssGetSizeofGlobalBlockIO(S) != sizeof(BlockIO_untitled2)) {
    ssSetErrorStatus(S,"Unexpected error: Internal BlockIO sizes do "
     "not match for accelerator mex file.");
  }

  /* model parameters */
  _ssSetDefaultParam(S, (real_T *) &untitled2_DefaultParameters);

  /* non-finites */

  rt_InitInfAndNaN(sizeof(real_T));
  /* non-finite (run-time) assignments */
  {
    /* simstruct variables */
    Parameters_untitled2 *untitled2_P = (Parameters_untitled2 *)
      ssGetDefaultParam(S);

    untitled2_P->Saturation_UpperSat_a = rtInf;
  }
}

/* Empty mdlInitializeSampleTimes function (never called) */
static void mdlInitializeSampleTimes(SimStruct *S) { }

/* Empty mdlTerminate function (never called) */
static void mdlTerminate(SimStruct *S) { }

/* MATLAB MEX Glue */
#include "simulink.c"
