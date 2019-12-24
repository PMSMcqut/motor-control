/*
 * untitled2_acc_data.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled2_acc.mdl".
 *
 * Model Version              : 1.63
 * Real-Time Workshop version : 6.4  (R2006a)  03-Feb-2006
 * C source code generated on : Thu Sep 23 22:06:17 2010
 */

#include "untitled2_acc.h"
#include "untitled2_acc_private.h"

/* Block parameters (auto storage) */
Parameters_untitled2 untitled2_DefaultParameters = {
  0.0 ,                                 /* Integrator_IC : '<S11>/Integrator'
                                         */
  0.0 ,                                 /* phiqs_IC : '<S16>/phiqs'
                                         */
  0.0 ,                                 /* phiqr_IC : '<S15>/phiqr'
                                         */
  0.0 ,                                 /* phidr_IC : '<S15>/phidr'
                                         */
  2.9023989392497633E+001 ,             /* Llr_Gain : '<S14>/1\Llr'
                                         */
  0.0 ,                                 /* phids_IC : '<S16>/phids'
                                         */
  2.9023989392497633E+001 ,             /* Lls_Gain : '<S14>/1\Lls'
                                         */
  1.7008009898610163E-002 ,             /* Llr1_Gain : '<S14>/1\Llr1'
                                         */
  1.7008009898610163E-002 ,             /* Llr2_Gain : '<S14>/1\Llr2'
                                         */
  0.0 ,                                 /* Constant_Value : '<S14>/Constant'
                                         */
  0.0 ,                                 /* Constant1_Value : '<S14>/Constant1'
                                         */
  0.9 ,                                 /* Switch1_Threshold : '<S14>/Switch1'
                                         */
  2.9023989392497633E+001 ,             /* Llr2_Gain_j : '<S16>/1\Llr2'
                                         */
  0.9 ,                                 /* Switch_Threshold : '<S14>/Switch'
                                         */
  2.9023989392497633E+001 ,             /* Llr_Gain_k : '<S16>/1\Llr'
                                         */
  0.0 ,                                 /* Integrator1_IC : '<S11>/Integrator1'
                                         */
  0.5 ,                                 /* p_Gain : '<S11>/1\p'
                                         */
  /*  Gain_Gain : '<S11>/Gain'
   */
  { 1.8849555921538757E+002, 1.9788264591092322E+001, 1.0 } ,
  9.55 ,                                /* Gain_Gain_b : '<Root>/Gain'
                                         */
  1.0 ,                                 /* Constant3_Value : '<S18>/Constant3'
                                         */
  2.9023989392497633E+001 ,             /* Llr_Gain_p : '<S15>/1\Llr'
                                         */
  2.9023989392497633E+001 ,             /* Llr2_Gain_b : '<S15>/1\Llr2'
                                         */
  1.0 ,                                 /* Constant3_Value_f : '<S17>/Constant3'
                                         */
  /*  Constant6_Value : '<S24>/Constant6'
   */
  { 0.0, 0.0 } ,
  0.0 ,                                 /* Memory1_X0 : '<S33>/Memory1'
                                         */
  0.4 ,                                 /* m4_Value : '<S4>/m4'
                                         */
  0.0 ,                                 /* m3_Value : '<S4>/m3'
                                         */
  1.7453292519943295E-002 ,             /* Gain2_Gain : '<S4>/Gain2'
                                         */
  /*  Constant_Value_c : '<S4>/Constant'
   */
  { 0.0, -2.0943951023931953E+000, 2.0943951023931953E+000 } ,
  0.0 ,                                 /* Constant1_Value_p : '<S4>/Constant1'
                                         */
  0.0 ,                                 /* Step_Time : '<S7>/Step'
                                         */
  0.0 ,                                 /* Step_Y0 : '<S7>/Step'
                                         */
  30.0 ,                                /* Step_YFinal : '<S7>/Step'
                                         */
  0.0 ,                                 /* Constant_Value_i : '<S7>/Constant'
                                         */
  0.0 ,                                 /* Constant1_Value_j : '<S7>/Constant1'
                                         */
  60.0 ,                                /* Saturation_UpperSat : '<Root>/Saturation'
                                         */
  -0.5 ,                                /* Saturation_LowerSat : '<Root>/Saturation'
                                         */
  0.0 ,                                 /* Integrator_IC_c : '<Root>/Integrator'
                                         */
  0.5 ,                                 /* Switch_Threshold_i : '<S4>/Switch'
                                         */
  /*  LookUpTable1_XData : '<S32>/Look-Up Table1'
   */
  { 0.0, 1.3888888888888889E-004, 4.1666666666666669E-004,
    5.5555555555555556E-004 } ,
  /*  LookUpTable1_YData : '<S32>/Look-Up Table1'
   */
  { 0.0, -1.0, 1.0, 0.0 } ,
  1.0 ,                                 /* Constant4_Value : '<S18>/Constant4'
                                         */
  5.2965778206268137E+000 ,             /* ib_Gain : '<S18>/ib'
                                         */
  720.0 ,                               /* Source_Value : '<S8>/Source'
                                         */
  /*  StateSpace_P1_Size : '<S37>/State-Space'
   */
  { 0.0, 0.0 } ,
  /*  StateSpace_P2_Size : '<S37>/State-Space'
   */
  { 0.0, 9.0 } ,
  /*  StateSpace_P3_Size : '<S37>/State-Space'
   */
  { 25.0, 0.0 } ,
  /*  StateSpace_P4_Size : '<S37>/State-Space'
   */
  { 25.0, 9.0 } ,
  /*  StateSpace_P4 : '<S37>/State-Space'
   */
  { -50000.0, 50000.0, 0.0, 0.0, 0.0, 0.0, 50000.0, 0.0, -50000.0, 50000.0, 0.0,
    0.0, 0.0, 0.0, 50000.0, 0.0, -50000.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 50000.0, -50000.0, 0.0, 0.0, 0.0, 0.0, -50000.0, 0.0, 50000.0,
    -50000.0, 0.0, 0.0, 0.0, 0.0, -50000.0, 0.0, 50000.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -50000.0, 50000.0, 0.0, 0.0, -50000.0,
    50000.0, 0.0, 0.0, -50000.0, 50000.0, 0.0, 0.0, -50000.0, 50000.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 50000.0, -50000.0, 0.0, 0.0,
    50000.0, -50000.0, 0.0, 0.0, 50000.0, -50000.0, 0.0, 0.0, 50000.0, -50000.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -50000.0,
    50000.0, 0.0, -50000.0, 0.0, 0.0, 0.0, 0.0, -50000.0, 50000.0, 0.0,
    -50000.0, 50000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 50000.0, -50000.0, 0.0, 50000.0, 0.0, 0.0, 0.0, 0.0, 50000.0, -50000.0,
    0.0, 50000.0, -50000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 50000.0,
    -50000.0, 0.0, 0.0, -50000.0, 50000.0, -50000.0, -50000.0, 50000.0,
    -50000.0, 0.0, 0.0, -50000.0, 50000.0, -50000.0, -50000.0, 1.0E+005, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 50000.0, -50000.0, -50000.0,
    50000.0, 50000.0, -1.0E+005, 0.0, 0.0, 50000.0, -50000.0, -50000.0, 50000.0,
    50000.0, -1.0E+005, 50000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5,
    0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0,
    0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 } ,
  /*  StateSpace_P5_Size : '<S37>/State-Space'
   */
  { 0.0, 1.0 } ,
  /*  StateSpace_P6_Size : '<S37>/State-Space'
   */
  { 1.0, 6.0 } ,
  /*  StateSpace_P6 : '<S37>/State-Space'
   */
  { 0.001, 0.001, 0.001, 0.001, 0.001, 0.001 } ,
  /*  StateSpace_P7_Size : '<S37>/State-Space'
   */
  { 1.0, 6.0 } ,
  /*  StateSpace_P7 : '<S37>/State-Space'
   */
  { 7.0, 7.0, 7.0, 7.0, 7.0, 7.0 } ,
  /*  StateSpace_P8_Size : '<S37>/State-Space'
   */
  { 1.0, 6.0 } ,
  /*  StateSpace_P8 : '<S37>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 } ,
  /*  StateSpace_P9_Size : '<S37>/State-Space'
   */
  { 1.0, 6.0 } ,
  /*  StateSpace_P9 : '<S37>/State-Space'
   */
  { 20.0, 21.0, 22.0, 23.0, 24.0, 25.0 } ,
  2.1299910806810243E-003 ,             /* _Vb_Gain : '<S17>/1_Vb'
                                         */
  1.0 ,                                 /* Constant4_Value_n : '<S17>/Constant4'
                                         */
  /*  Gain_Gain_a : '<S13>/Gain'
   */
  { 5.2965778206268137E+000, 5.2965778206268137E+000, 5.2965778206268137E+000,
    5.2965778206268137E+000, 5.2965778206268137E+000, 1.2453490575260107E+000,
    1.2453490575260107E+000, 4.6948553403344249E+002, 4.6948553403344249E+002,
    5.2965778206268137E+000, 5.2965778206268137E+000, 5.2965778206268137E+000,
    5.2965778206268137E+000, 5.2965778206268137E+000, 1.2453490575260107E+000,
    1.2453490575260107E+000, 4.6948553403344249E+002, 4.6948553403344249E+002 }
  ,
  5.0535002470613294E-002 ,             /* _Tb2_Gain : '<S11>/1_Tb2'
                                         */
  2.3756905135319219E-002 ,             /* F_Gain : '<S11>/F'
                                         */
  5.2490002081377778E+000 ,             /* _2H_Gain : '<S11>/1_2H'
                                         */
  3.7699111843077515E+002 ,             /* web_psb_Gain : '<S11>/web_psb'
                                         */
  2.1480287334593572E-002 ,             /* Llr1_Gain_g : '<S15>/1\Llr1'
                                         */
  2.1480287334593572E-002 ,             /* Llr3_Gain : '<S15>/1\Llr3'
                                         */
  1.0 ,                                 /* Constant1_Value_pi : '<S19>/Constant1'
                                         */
  0.0 ,                                 /* Constant2_Value : '<S19>/Constant2'
                                         */
  3.7699111843077515E+002 ,             /* web1_Gain : '<S15>/web1'
                                         */
  3.7699111843077515E+002 ,             /* web_psb_Gain_i : '<S15>/web_psb'
                                         */
  2.3161255198487711E-002 ,             /* Llr1_Gain_e : '<S16>/1\Llr1'
                                         */
  2.3161255198487711E-002 ,             /* Llr3_Gain_g : '<S16>/1\Llr3'
                                         */
  1.0 ,                                 /* Constant4_Value_o : '<S19>/Constant4'
                                         */
  0.0 ,                                 /* Constant5_Value : '<S19>/Constant5'
                                         */
  1.0 ,                                 /* Constant6_Value_m : '<S19>/Constant6'
                                         */
  3.7699111843077515E+002 ,             /* web1_Gain_c : '<S16>/web1'
                                         */
  3.7699111843077515E+002 ,             /* web_psb_Gain_p : '<S16>/web_psb'
                                         */
  /*  Gain2_Gain_l : '<S3>/Gain2'
   */
  { 1.0, 1.0, 1.0 } ,
  0.0 ,                                 /* integ_IC : '<S5>/integ'
                                         */
  1.6666666666666666E-002 ,             /* T_Delay : '<S5>/T'
                                         */
  0.0 ,                                 /* T_InitOutput : '<S5>/T'
                                         */
  0.0 ,                                 /* Mode_Value : '<S3>/Mode'
                                         */
  60.0 ,                                /* Gain_Gain_n : '<S5>/Gain'
                                         */
  0.0 ,                                 /* integ_IC_g : '<S6>/integ'
                                         */
  1.6666666666666666E-002 ,             /* T_Delay_f : '<S6>/T'
                                         */
  0.0 ,                                 /* T_InitOutput_g : '<S6>/T'
                                         */
  0.0 ,                                 /* u_Value : '<S33>/0 1'
                                         */
  1000.0 ,                              /* Ron_Gain : '<S33>/1//Ron'
                                         */
  0.5 ,                                 /* Switch_Threshold_iw : '<S33>/Switch'
                                         */
  0.0 ,                                 /* Saturation_UpperSat_a : '<S33>/Saturation'
                                         */
  0.0 ,                                 /* Saturation_LowerSat_k : '<S33>/Saturation'
                                         */
  6.2831853071795862E+000 ,             /* Gain1_Gain : '<Root>/Gain1'
                                         */
  -1.0 ,                                /* Gain3_Gain : '<S4>/Gain3'
                                         */
  60.0 ,                                /* Gain_Gain_f : '<S6>/Gain'
                                         */
  1.2719402230487944E-002 ,             /* _Gain : '<S20>/?????'
                                         */
  1.2719402230487944E-002 ,             /* _Gain_f : '<S20>/????'
                                         */
  1.0E+014 ,                            /* Constant_Value_n : '<S20>/Constant'
                                         */
  0.0 ,                                 /* vqrvdr_Y0 : 'synthesized block'
                                         */
  0.0 ,                                 /* vqsvds_Y0 : 'synthesized block'
                                         */
  0.0 ,                                 /* vqrvdr_Y0_g : 'synthesized block'
                                         */
  0.0 ,                                 /* vqsvds_Y0_f : 'synthesized block'
                                         */
  0.0 ,                                 /* vqrvdr_Y0_a : 'synthesized block'
                                         */
  0.0 ,                                 /* vqsvds_Y0_p : 'synthesized block'
                                         */
  0.0 ,                                 /* irairb_Y0 : 'synthesized block'
                                         */
  0.0 ,                                 /* isaisb_Y0 : 'synthesized block'
                                         */
  0.0 ,                                 /* irairb_Y0_o : 'synthesized block'
                                         */
  0.0 ,                                 /* isaisb_Y0_e : 'synthesized block'
                                         */
  0.0 ,                                 /* irairb_Y0_l : 'synthesized block'
                                         */
  0.0 ,                                 /* isaisb_Y0_d : 'synthesized block'
                                         */
  -1.0 ,                                /* Gain_Gain_m : '<S19>/Gain'
                                         */
  0.0 ,                                 /* sinbetacosbetasint : 'synthesized block'
                                         */
  0.0 ,                                 /* wewr_Y0 : 'synthesized block'
                                         */
  1.0 ,                                 /* we_Value : '<S28>/we'
                                         */
  3.7699111843077515E+002 ,             /* web_psb_Gain_o : '<S28>/web_psb'
                                         */
  0.0 ,                                 /* sinthrcosthr_Y0 : 'synthesized block'
                                         */
  /*  Constant_Value_cw : '<S29>/Constant'
   */
  { 0.0, 0.0 } ,
  1.7391304347826088E-003 ,             /* Gain2_Gain_e : '<Root>/Gain2'
                                         */
  3.7699111843077515E+002 ,             /* Gain_Gain_k : '<S4>/Gain'
                                         */
  0.0 ,                                 /* itail_Y0 : 'synthesized block'
                                         */
  1.0 ,                                 /* _Value : '<S34>/1'
                                         */
  1.0 ,                                 /* _Value_d : '<S34>/2'
                                         */
  0.0 ,                                 /* Integrator_IC_j : '<S34>/Integrator'
                                         */
  0.0 ,                                 /* Memory_X0 : '<S34>/Memory'
                                         */
  0.9 ,                                 /* Constant_Value_e : '<S36>/Constant'
                                         */
  -8.9999999980015995E+005 ,            /* u9Tf_Gain : '<S36>/-0.9//Tf'
                                         */
  0.9 ,                                 /* Saturation1_UpperSat : '<S36>/Saturation1'
                                         */
  0.0 ,                                 /* Saturation1_LowerSat : '<S36>/Saturation1'
                                         */
  3.0E-006 ,                            /* Constant2_Value_m : '<S36>/Constant2'
                                         */
  4.9999999994448888E+004 ,             /* uTt_Gain : '<S36>/0.1//Tt'
                                         */
  0.1 ,                                 /* Saturation2_UpperSat : '<S36>/Saturation2'
                                         */
  0.0 ,                                 /* Saturation2_LowerSat : '<S36>/Saturation2'
                                         */
  0.5 ,                                 /* Switch_Threshold_m : '<S34>/Switch'
                                         */
  1 ,                                   /* Constant_Value_nf : '<S19>/Constant'
                                         */
  0 ,                                   /* Constant3_Value_m : '<S19>/Constant3'
                                         */
  1 ,                                   /* Constant_Value_o : '<S18>/Constant'
                                         */
  0 ,                                   /* Constant1_Value_e : '<S18>/Constant1'
                                         */
  0 ,                                   /* Constant2_Value_j : '<S18>/Constant2'
                                         */
  1 ,                                   /* _Value_o : '<S33>/2'
                                         */
  1 ,                                   /* Constant_Value_b : '<S17>/Constant'
                                         */
  0 ,                                   /* Constant1_Value_jb : '<S17>/Constant1'
                                         */
  0 ,                                   /* Constant2_Value_je : '<S17>/Constant2'
                                         */
  {'a','a','a','a','a','a','a'}         /* Constant2_Value_je : '<S17>/Constant2'
                                         */
};

