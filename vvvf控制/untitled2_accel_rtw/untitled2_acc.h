/*
 * untitled2_acc.h
 *
 * Real-Time Workshop code generation for Simulink model "untitled2_acc.mdl".
 *
 * Model Version              : 1.63
 * Real-Time Workshop version : 6.4  (R2006a)  03-Feb-2006
 * C source code generated on : Thu Sep 23 22:06:17 2010
 */
#ifndef _RTW_HEADER_untitled2_acc_h_
#define _RTW_HEADER_untitled2_acc_h_

#ifndef _untitled2_acc_COMMON_INCLUDES_
# define _untitled2_acc_COMMON_INCLUDES_
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define S_FUNCTION_NAME                 simulink_only_sfcn
#define S_FUNCTION_LEVEL                2
#define RTW_GENERATED_S_FUNCTION

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rtlibsrc.h"
#include "rt_nonfinite.h"

#endif                                  /* _untitled2_acc_COMMON_INCLUDES_ */

#include "untitled2_acc_types.h"

/* Block signals (auto storage) */
typedef struct {
  real_T Constant;                      /* '<S14>/Constant' */
  real_T Constant1;                     /* '<S14>/Constant1' */
  real_T Constant3;                     /* '<S18>/Constant3' */
  real_T Constant3_i;                   /* '<S17>/Constant3' */
  real_T Constant6[2];                  /* '<S24>/Constant6' */
  real_T m4;                            /* '<S4>/m4' */
  real_T Gain2;                         /* '<S4>/Gain2' */
  real_T Constant_a[3];                 /* '<S4>/Constant' */
  real_T Constant1_f;                   /* '<S4>/Constant1' */
  real_T Constant_o;                    /* '<S7>/Constant' */
  real_T Constant1_k;                   /* '<S7>/Constant1' */
  real_T Output;                        /* '<S7>/Output' */
  real_T ua;                            /* '<Root>/ua' */
  real_T ub;                            /* '<Root>/ub' */
  real_T uc;                            /* '<Root>/uc' */
  real_T Switch[3];                     /* '<S4>/Switch' */
  real_T startTime;                     /* '<S32>/startTime' */
  real_T LookUpTable1;                  /* '<S32>/Look-Up Table1' */
  real_T DataTypeConversion[6];         /* '<S4>/Data Type  Conversion' */
  real_T Constant4;                     /* '<S18>/Constant4' */
  real_T ib[4];                         /* '<S18>/ib' */
  real_T Source;                        /* '<S8>/Source' */
  real_T StateSpace_o1[25];             /* '<S37>/State-Space' */
  real_T StateSpace_o2[6];              /* '<S37>/State-Space' */
  real_T Constant4_k;                   /* '<S17>/Constant4' */
  real_T _Tb2;                          /* '<S11>/1_Tb2' */
  real_T _2H;                           /* '<S11>/1_2H' */
  real_T web_psb;                       /* '<S11>/web_psb' */
  real_T Constant1_n;                   /* '<S19>/Constant1' */
  real_T Constant2;                     /* '<S19>/Constant2' */
  real_T web1;                          /* '<S15>/web1' */
  real_T web_psb_m;                     /* '<S15>/web_psb' */
  real_T Constant4_o;                   /* '<S19>/Constant4' */
  real_T Constant5;                     /* '<S19>/Constant5' */
  real_T Constant6_m;                   /* '<S19>/Constant6' */
  real_T web1_n;                        /* '<S16>/web1' */
  real_T web_psb_p;                     /* '<S16>/web_psb' */
  real_T Gain2_g[3];                    /* '<S3>/Gain2' */
  real_T integ;                         /* '<S5>/integ' */
  real_T Sum1;                          /* '<S5>/Sum1' */
  real_T Mode;                          /* '<S3>/Mode' */
  real_T Gain;                          /* '<S5>/Gain' */
  real_T integ_g;                       /* '<S6>/integ' */
  real_T Sum1_b;                        /* '<S6>/Sum1' */
  real_T u;                             /* '<S33>/0 1' */
  real_T Ron[6];                        /* '<S33>/1//Ron' */
  real_T Switch_h[6];                   /* '<S33>/Switch' */
  real_T Saturation[6];                 /* '<S33>/Saturation' */
  real_T Gain1;                         /* '<Root>/Gain1' */
  real_T Gain3[3];                      /* '<S4>/Gain3' */
  real_T Gain_h;                        /* '<S6>/Gain' */
  real_T _d;                            /* '<S34>/1' */
  real_T _d1;                           /* '<S34>/2' */
  real_T Constant_h;                    /* '<S36>/Constant' */
  real_T Add[6];                        /* '<S36>/Add' */
  real_T Constant2_k;                   /* '<S36>/Constant2' */
  real_T uTt[6];                        /* '<S36>/0.1//Tt' */
  real_T Switch_o[6];                   /* '<S34>/Switch' */
  real_T Product[6];                    /* '<S34>/Product' */
  real_T Constant_c[2];                 /* '<S29>/Constant' */
  real_T TrigonometricFunction;         /* '<S29>/Trigonometric Function' */
  real_T TrigonometricFunction1;        /* '<S29>/Trigonometric Function1' */
  real_T we;                            /* '<S28>/we' */
  real_T wewr;                          /* '<S28>/Sum' */
  real_T TrigonometricFunction_e;       /* '<S28>/Trigonometric Function' */
  real_T TrigonometricFunction1_d;      /* '<S28>/Trigonometric Function1' */
  real_T TrigonometricFunction2;        /* '<S28>/Trigonometric Function2' */
  real_T TrigonometricFunction3;        /* '<S28>/Trigonometric Function3' */
  real_T ira;                           /* '<S27>/ira' */
  real_T irb;                           /* '<S27>/irb' */
  real_T isa;                           /* '<S27>/isa' */
  real_T isb;                           /* '<S27>/isb' */
  real_T ira_j;                         /* '<S26>/ira' */
  real_T irb_o;                         /* '<S26>/irb' */
  real_T isa_n;                         /* '<S26>/isa' */
  real_T isb_m;                         /* '<S26>/isb' */
  real_T ira_c;                         /* '<S25>/ira' */
  real_T irb_k;                         /* '<S25>/irb' */
  real_T isa_c;                         /* '<S25>/isa' */
  real_T isb_h;                         /* '<S25>/isb' */
  real_T vdr;                           /* '<S23>/vdr' */
  real_T vds;                           /* '<S23>/vds' */
  real_T vqr;                           /* '<S23>/vqr' */
  real_T vqs;                           /* '<S23>/vqs' */
  real_T vdr_a;                         /* '<S22>/vdr' */
  real_T vds_m;                         /* '<S22>/vds' */
  real_T vqr_j;                         /* '<S22>/vqr' */
  real_T vqs_d;                         /* '<S22>/vqs' */
  real_T vdr_e;                         /* '<S21>/vdr' */
  real_T vds_k;                         /* '<S21>/vds' */
  real_T vqr_n;                         /* '<S21>/vqr' */
  real_T vqs_g;                         /* '<S21>/vqs' */
  real_T Constant_aj;                   /* '<S20>/Constant' */
  real_T Switch_op;                     /* '<S20>/Switch' */
  real_T Switch1;                       /* '<S20>/Switch1' */
  real_T Gain_n[3];                     /* '<S11>/Gain' */
  real_T Saturation_d;                  /* '<Root>/Saturation' */
  real_T VF;                            /* '<Root>/V-F' */
  real_T Integrator;                    /* '<Root>/Integrator' */
  real_T Gain_d[18];                    /* '<S13>/Gain' */
  real_T MathFunction1;                 /* '<S6>/Math Function1' */
  boolean_T Constant_hn;                /* '<S19>/Constant' */
  boolean_T Constant3_c;                /* '<S19>/Constant3' */
  boolean_T Constant_l;                 /* '<S18>/Constant' */
  boolean_T Constant1_l;                /* '<S18>/Constant1' */
  boolean_T Constant2_e;                /* '<S18>/Constant2' */
  boolean_T _n;                         /* '<S33>/2' */
  boolean_T Constant_l1;                /* '<S17>/Constant' */
  boolean_T Constant1_na;               /* '<S17>/Constant1' */
  boolean_T Constant2_kt;               /* '<S17>/Constant2' */
  char pad_Constant2_kt[7];
} BlockIO_untitled2;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[6];          /* '<S37>/State-Space' */
  real_T Memory1_PreviousInput[6];      /* '<S33>/Memory1' */
  real_T Memory_PreviousInput[6];       /* '<S34>/Memory' */
  struct {
    void *LoggedData;
  } Te_PWORK;                           /* '<Root>/Te' */
  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                 /* '<Root>/To Workspace5' */
  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                 /* '<Root>/To Workspace6' */
  void *StateSpace_PWORK[16];           /* '<S37>/State-Space' */
  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                 /* '<Root>/To Workspace7' */
  struct {
    void *LoggedData;
  } is_abc_PWORK;                       /* '<Root>/is_abc' */
  struct {
    void *LoggedData;
  } n_PWORK;                            /* '<Root>/n' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                  /* '<Root>/To Workspace' */
  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                 /* '<Root>/To Workspace1' */
  struct {
    void *TUbufferPtrs[2];
  } T_PWORK;                            /* '<S5>/T' */
  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                 /* '<Root>/To Workspace2' */
  struct {
    void *LoggedData;
  } Ubc_PWORK;                          /* '<Root>/Ubc' */
  struct {
    void *LoggedData;
  } ubc_PWORK;                          /* '<Root>/ubc' */
  struct {
    void *LoggedData;
  } uca_PWORK;                          /* '<Root>/uca' */
  struct {
    void *LoggedData;
  } ud_PWORK;                           /* '<Root>/ud' */
  struct {
    void *LoggedData;
  } O_PWORK;                            /* '<Root>/O' */
  struct {
    void *TUbufferPtrs[2];
  } T_PWORK_l;                          /* '<S6>/T' */
  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;                /* '<Root>/To Workspace10' */
  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                 /* '<Root>/To Workspace3' */
  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                 /* '<Root>/To Workspace4' */
  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                 /* '<Root>/To Workspace8' */
  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                 /* '<Root>/To Workspace9' */
  struct {
    void *LoggedData;
  } V_PWORK;                            /* '<Root>/V' */
  struct {
    void *LoggedData;
  } f_PWORK;                            /* '<Root>/f' */
  struct {
    void *LoggedData;
  } sin1_PWORK;                         /* '<Root>/sin1' */
  struct {
    void *LoggedData;
  } sin3_PWORK;                         /* '<Root>/sin3' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_a;                /* '<S30>/To Workspace' */
  int_T StateSpace_IWORK[4];            /* '<S37>/State-Space' */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
    int_T MaxNewBufSize;
  } T_IWORK;                            /* '<S5>/T' */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
    int_T MaxNewBufSize;
  } T_IWORK_m;                          /* '<S6>/T' */
  int_T Saturation_MODE;                /* '<S14>/Saturation' */
  int_T sinthrcosthr_MODE;              /* '<S19>/sin(thr),cos(thr)' */
  int_T sinbetacosbetasinthcos;         /* '<S19>/sin(beta),cos(beta),sin(th),cos(th)' */
  int_T Rotorreferenceframe_MODE;       /* '<S18>/Rotor reference frame' */
  int_T Stationaryreferenceframe_MODE; /* '<S18>/Stationary reference frame' */
  int_T Synchronousreferenceframe_MOD; /* '<S18>/Synchronous reference frame' */
  int_T Step_MODE;                      /* '<S7>/Step' */
  int_T Saturation_MODE_n;              /* '<Root>/Saturation' */
  int_T Tail_MODE;                      /* '<S33>/Tail' */
  int_T StateSpace_MODE[6];             /* '<S37>/State-Space' */
  int_T Rotorreferenceframe_MODE_e;     /* '<S17>/Rotor reference frame' */
  int_T Stationaryreferenceframe_MO_h; /* '<S17>/Stationary reference frame' */
  int_T Synchronousreferenceframe_M_g; /* '<S17>/Synchronous reference frame' */
  int_T Abs_MODE;                       /* '<S5>/Abs' */
  int_T StoreData_MODE;                 /* '<S3>/StoreData' */
  int_T Abs_MODE_a;                     /* '<S6>/Abs' */
  int_T Saturation_MODE_h[6];           /* '<S33>/Saturation' */
  int_T Saturation1_MODE[6];            /* '<S36>/Saturation1' */
  int_T Saturation2_MODE[6];            /* '<S36>/Saturation2' */
  int8_T Saturation_SubsysRanBC;        /* '<S14>/Saturation' */
  int8_T sinthrcosthr_SubsysRanBC;      /* '<S19>/sin(thr),cos(thr)' */
  int8_T sinbetacosbetasinthc_e;        /* '<S19>/sin(beta),cos(beta),sin(th),cos(th)' */
  int8_T Rotorreferenceframe_SubsysRan; /* '<S18>/Rotor reference frame' */
  int8_T Stationaryreferenceframe_Subs; /* '<S18>/Stationary reference frame' */
  int8_T Synchronousreferenceframe_Sub; /* '<S18>/Synchronous reference frame' */
  int8_T Tail_SubsysRanBC;              /* '<S33>/Tail' */
  int8_T Rotorreferenceframe_SubsysR_a; /* '<S17>/Rotor reference frame' */
  int8_T Stationaryreferenceframe_Su_f; /* '<S17>/Stationary reference frame' */
  int8_T Synchronousreferenceframe_S_n; /* '<S17>/Synchronous reference frame' */
  int8_T StoreData_SubsysRanBC;         /* '<S3>/StoreData' */
  boolean_T RelationalOperator_Mode[3]; /* '<S4>/Relational Operator' */
  boolean_T Switch_Mode[6];             /* '<S33>/Switch' */
  boolean_T RelationalOperator1_Mode[3]; /* '<S4>/Relational Operator1' */
  char pad_RelationalOperator1_Mode[5];
} D_Work_untitled2;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;             /* '<S11>/Integrator' */
  real_T phiqs_CSTATE;                  /* '<S16>/phiqs' */
  real_T phiqr_CSTATE;                  /* '<S15>/phiqr' */
  real_T phidr_CSTATE;                  /* '<S15>/phidr' */
  real_T phids_CSTATE;                  /* '<S16>/phids' */
  real_T Integrator1_CSTATE;            /* '<S11>/Integrator1' */
  real_T Integrator_m_CSTATE;           /* '<Root>/Integrator' */
  real_T integ_CSTATE;                  /* '<S5>/integ' */
  real_T integ_d_CSTATE;                /* '<S6>/integ' */
  real_T Integrator_d_CSTATE[6];        /* '<S34>/Integrator' */
} ContinuousStates_untitled2;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;             /* '<S11>/Integrator' */
  real_T phiqs_CSTATE;                  /* '<S16>/phiqs' */
  real_T phiqr_CSTATE;                  /* '<S15>/phiqr' */
  real_T phidr_CSTATE;                  /* '<S15>/phidr' */
  real_T phids_CSTATE;                  /* '<S16>/phids' */
  real_T Integrator1_CSTATE;            /* '<S11>/Integrator1' */
  real_T Integrator_m_CSTATE;           /* '<Root>/Integrator' */
  real_T integ_CSTATE;                  /* '<S5>/integ' */
  real_T integ_d_CSTATE;                /* '<S6>/integ' */
  real_T Integrator_d_CSTATE[6];        /* '<S34>/Integrator' */
} StateDerivatives_untitled2;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;          /* '<S11>/Integrator' */
  boolean_T phiqs_CSTATE;               /* '<S16>/phiqs' */
  boolean_T phiqr_CSTATE;               /* '<S15>/phiqr' */
  boolean_T phidr_CSTATE;               /* '<S15>/phidr' */
  boolean_T phids_CSTATE;               /* '<S16>/phids' */
  boolean_T Integrator1_CSTATE;         /* '<S11>/Integrator1' */
  boolean_T Integrator_m_CSTATE;        /* '<Root>/Integrator' */
  boolean_T integ_CSTATE;               /* '<S5>/integ' */
  boolean_T integ_d_CSTATE;             /* '<S6>/integ' */
  boolean_T Integrator_d_CSTATE[6];     /* '<S34>/Integrator' */
} StateDisabled_untitled2;

/* Zero-crossing (trigger) state */
typedef struct {
  real_T Step_NSZC;                     /* '<S7>/Step' */
  real_T Saturation_j_NSZC[2];          /* '<Root>/Saturation' */
  real_T RelationalOperator_NSZC[3];    /* '<S4>/Relational Operator' */
  real_T StateSpace_NSZC[12];           /* '<S37>/State-Space' */
  real_T Abs_NSZC;                      /* '<S5>/Abs' */
  real_T Abs_f_NSZC;                    /* '<S6>/Abs' */
  real_T Switch_iv_NSZC[6];             /* '<S33>/Switch' */
  real_T Saturation_m_NSZC[12];         /* '<S33>/Saturation' */
  real_T RelationalOperator1_NSZC[3];   /* '<S4>/Relational Operator1' */
  real_T Saturation1_NSZC[12];          /* '<S36>/Saturation1' */
  real_T Saturation2_NSZC[12];          /* '<S36>/Saturation2' */
} NonsampledZCs_untitled2;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_d_ZCE[6];       /* '<S34>/Integrator' */
} PrevZCSigStates_untitled2;

/* Parameters (auto storage) */
struct _Parameters_untitled2 {
  real_T Integrator_IC;                 /* Expression: wmo
                                         * '<S11>/Integrator'
                                         */
  real_T phiqs_IC;                      /* Expression: phisqo
                                         * '<S16>/phiqs'
                                         */
  real_T phiqr_IC;                      /* Expression: phirqo
                                         * '<S15>/phiqr'
                                         */
  real_T phidr_IC;                      /* Expression: phirdo
                                         * '<S15>/phidr'
                                         */
  real_T Llr_Gain;                      /* Expression: 1/Llr
                                         * '<S14>/1\Llr'
                                         */
  real_T phids_IC;                      /* Expression: phisdo
                                         * '<S16>/phids'
                                         */
  real_T Lls_Gain;                      /* Expression: 1/Lls
                                         * '<S14>/1\Lls'
                                         */
  real_T Llr1_Gain;                     /* Expression: Laq
                                         * '<S14>/1\Llr1'
                                         */
  real_T Llr2_Gain;                     /* Expression: Lad
                                         * '<S14>/1\Llr2'
                                         */
  real_T Constant_Value;                /* Expression: ensat
                                         * '<S14>/Constant'
                                         */
  real_T Constant1_Value;               /* Expression: ensat
                                         * '<S14>/Constant1'
                                         */
  real_T Switch1_Threshold;             /* Expression: 0.9
                                         * '<S14>/Switch1'
                                         */
  real_T Llr2_Gain_j;                   /* Expression: 1/Lls
                                         * '<S16>/1\Llr2'
                                         */
  real_T Switch_Threshold;              /* Expression: 0.9
                                         * '<S14>/Switch'
                                         */
  real_T Llr_Gain_k;                    /* Expression: 1/Lls
                                         * '<S16>/1\Llr'
                                         */
  real_T Integrator1_IC;                /* Expression: tho
                                         * '<S11>/Integrator1'
                                         */
  real_T p_Gain;                        /* Expression: 1/p
                                         * '<S11>/1\p'
                                         */
  real_T Gain_Gain[3];                  /* Expression: [Nb2;Tb2;1]
                                         * '<S11>/Gain'
                                         */
  real_T Gain_Gain_b;                   /* Expression: 9.55
                                         * '<Root>/Gain'
                                         */
  real_T Constant3_Value;               /* Expression: ctrl
                                         * '<S18>/Constant3'
                                         */
  real_T Llr_Gain_p;                    /* Expression: 1/Llr
                                         * '<S15>/1\Llr'
                                         */
  real_T Llr2_Gain_b;                   /* Expression: 1/Llr
                                         * '<S15>/1\Llr2'
                                         */
  real_T Constant3_Value_f;             /* Expression: ctrl
                                         * '<S17>/Constant3'
                                         */
  real_T Constant6_Value[2];            /* Expression: [0;0]
                                         * '<S24>/Constant6'
                                         */
  real_T Memory1_X0;                    /* Expression: 0
                                         * '<S33>/Memory1'
                                         */
  real_T m4_Value;                      /* Expression: mIndex
                                         * '<S4>/m4'
                                         */
  real_T m3_Value;                      /* Expression: Phase
                                         * '<S4>/m3'
                                         */
  real_T Gain2_Gain;                    /* Expression: pi/180
                                         * '<S4>/Gain2'
                                         */
  real_T Constant_Value_c[3];           /* Expression: Internal_Phase
                                         * '<S4>/Constant'
                                         */
  real_T Constant1_Value_p;             /* Expression: Internal
                                         * '<S4>/Constant1'
                                         */
  real_T Step_Time;                     /* Expression: start
                                         * '<S7>/Step'
                                         */
  real_T Step_Y0;                       /* Expression: 0
                                         * '<S7>/Step'
                                         */
  real_T Step_YFinal;                   /* Expression: slope
                                         * '<S7>/Step'
                                         */
  real_T Constant_Value_i;              /* Expression: start
                                         * '<S7>/Constant'
                                         */
  real_T Constant1_Value_j;             /* Expression: X0
                                         * '<S7>/Constant1'
                                         */
  real_T Saturation_UpperSat;           /* Expression: 60
                                         * '<Root>/Saturation'
                                         */
  real_T Saturation_LowerSat;           /* Expression: -0.5
                                         * '<Root>/Saturation'
                                         */
  real_T Integrator_IC_c;               /* Expression: 0
                                         * '<Root>/Integrator'
                                         */
  real_T Switch_Threshold_i;            /* Expression: 0.5
                                         * '<S4>/Switch'
                                         */
  real_T LookUpTable1_XData[4];         /* Expression: rep_seq_t - min(rep_seq_t)
                                         * '<S32>/Look-Up Table1'
                                         */
  real_T LookUpTable1_YData[4];         /* Expression: rep_seq_y
                                         * '<S32>/Look-Up Table1'
                                         */
  real_T Constant4_Value;               /* Expression: ctrl
                                         * '<S18>/Constant4'
                                         */
  real_T ib_Gain;                       /* Expression: ib
                                         * '<S18>/ib'
                                         */
  real_T Source_Value;                  /* Expression: Amplitude
                                         * '<S8>/Source'
                                         */
  real_T StateSpace_P1_Size[2];         /* Computed Parameter: P1Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P2_Size[2];         /* Computed Parameter: P2Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P3_Size[2];         /* Computed Parameter: P3Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P4_Size[2];         /* Computed Parameter: P4Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P4[225];            /* Expression: D
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P5_Size[2];         /* Computed Parameter: P5Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P6_Size[2];         /* Computed Parameter: P6Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P6[6];              /* Expression: SwitchResistance
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P7_Size[2];         /* Computed Parameter: P7Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P7[6];              /* Expression: SwitchType
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P8_Size[2];         /* Computed Parameter: P8Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P8[6];              /* Expression: SwitchGateInitialValue
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P9_Size[2];         /* Computed Parameter: P9Size
                                         * '<S37>/State-Space'
                                         */
  real_T StateSpace_P9[6];              /* Expression: OutputsToResetToZero
                                         * '<S37>/State-Space'
                                         */
  real_T _Vb_Gain;                      /* Expression: 1/Vb
                                         * '<S17>/1_Vb'
                                         */
  real_T Constant4_Value_n;             /* Expression: ctrl
                                         * '<S17>/Constant4'
                                         */
  real_T Gain_Gain_a[18];               /* Expression: [ib2*ones(5,1);phib2;phib2;Vb2;Vb2;ib2*ones(5,1);phib2;phib2;Vb2;Vb2]
                                         * '<S13>/Gain'
                                         */
  real_T _Tb2_Gain;                     /* Expression: 1/Tb2
                                         * '<S11>/1_Tb2'
                                         */
  real_T F_Gain;                        /* Expression: F
                                         * '<S11>/F'
                                         */
  real_T _2H_Gain;                      /* Expression: 1/(2*H)
                                         * '<S11>/1_2H'
                                         */
  real_T web_psb_Gain;                  /* Expression: web_psb
                                         * '<S11>/web_psb'
                                         */
  real_T Llr1_Gain_g;                   /* Expression: Rr
                                         * '<S15>/1\Llr1'
                                         */
  real_T Llr3_Gain;                     /* Expression: Rr
                                         * '<S15>/1\Llr3'
                                         */
  real_T Constant1_Value_pi;            /* Expression: ctrl
                                         * '<S19>/Constant1'
                                         */
  real_T Constant2_Value;               /* Expression: 0
                                         * '<S19>/Constant2'
                                         */
  real_T web1_Gain;                     /* Expression: web_psb
                                         * '<S15>/web1'
                                         */
  real_T web_psb_Gain_i;                /* Expression: web_psb
                                         * '<S15>/web_psb'
                                         */
  real_T Llr1_Gain_e;                   /* Expression: Rs
                                         * '<S16>/1\Llr1'
                                         */
  real_T Llr3_Gain_g;                   /* Expression: Rs
                                         * '<S16>/1\Llr3'
                                         */
  real_T Constant4_Value_o;             /* Expression: ctrl
                                         * '<S19>/Constant4'
                                         */
  real_T Constant5_Value;               /* Expression: 0
                                         * '<S19>/Constant5'
                                         */
  real_T Constant6_Value_m;             /* Expression: 1
                                         * '<S19>/Constant6'
                                         */
  real_T web1_Gain_c;                   /* Expression: web_psb
                                         * '<S16>/web1'
                                         */
  real_T web_psb_Gain_p;                /* Expression: web_psb
                                         * '<S16>/web_psb'
                                         */
  real_T Gain2_Gain_l[3];               /* Expression: Gain
                                         * '<S3>/Gain2'
                                         */
  real_T integ_IC;                      /* Expression: 0
                                         * '<S5>/integ'
                                         */
  real_T T_Delay;                       /* Expression: 1/f1
                                         * '<S5>/T'
                                         */
  real_T T_InitOutput;                  /* Expression: 0
                                         * '<S5>/T'
                                         */
  real_T Mode_Value;                    /* Expression: Display
                                         * '<S3>/Mode'
                                         */
  real_T Gain_Gain_n;                   /* Expression: f1
                                         * '<S5>/Gain'
                                         */
  real_T integ_IC_g;                    /* Expression: 0
                                         * '<S6>/integ'
                                         */
  real_T T_Delay_f;                     /* Expression: 1/f1
                                         * '<S6>/T'
                                         */
  real_T T_InitOutput_g;                /* Expression: 0
                                         * '<S6>/T'
                                         */
  real_T u_Value;                       /* Expression: 0
                                         * '<S33>/0 1'
                                         */
  real_T Ron_Gain;                      /* Expression: 1./Ron
                                         * '<S33>/1//Ron'
                                         */
  real_T Switch_Threshold_iw;           /* Expression: 0.5
                                         * '<S33>/Switch'
                                         */
  real_T Saturation_UpperSat_a;         /* Expression: inf
                                         * '<S33>/Saturation'
                                         */
  real_T Saturation_LowerSat_k;         /* Expression: 0
                                         * '<S33>/Saturation'
                                         */
  real_T Gain1_Gain;                    /* Expression: 2*pi
                                         * '<Root>/Gain1'
                                         */
  real_T Gain3_Gain;                    /* Expression: -1
                                         * '<S4>/Gain3'
                                         */
  real_T Gain_Gain_f;                   /* Expression: f1
                                         * '<S6>/Gain'
                                         */
  real_T _Gain;                         /* Expression: Lad/Lm
                                         * '<S20>/?????'
                                         */
  real_T _Gain_f;                       /* Expression: Laq/Lm
                                         * '<S20>/????'
                                         */
  real_T Constant_Value_n;              /* Expression: phis.^2
                                         * '<S20>/Constant'
                                         */
  real_T vqrvdr_Y0;                     /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T vqsvds_Y0;                     /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T vqrvdr_Y0_g;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T vqsvds_Y0_f;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T vqrvdr_Y0_a;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T vqsvds_Y0_p;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T irairb_Y0;                     /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T isaisb_Y0;                     /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T irairb_Y0_o;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T isaisb_Y0_e;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T irairb_Y0_l;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T isaisb_Y0_d;                   /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T Gain_Gain_m;                   /* Expression: -1
                                         * '<S19>/Gain'
                                         */
  real_T sinbetacosbetasint;            /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T wewr_Y0;                       /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T we_Value;                      /* Expression: 1
                                         * '<S28>/we'
                                         */
  real_T web_psb_Gain_o;                /* Expression: web_psb
                                         * '<S28>/web_psb'
                                         */
  real_T sinthrcosthr_Y0;               /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T Constant_Value_cw[2];          /* Expression: [0; 0]
                                         * '<S29>/Constant'
                                         */
  real_T Gain2_Gain_e;                  /* Expression: 1/575
                                         * '<Root>/Gain2'
                                         */
  real_T Gain_Gain_k;                   /* Expression: 2*pi*Freq
                                         * '<S4>/Gain'
                                         */
  real_T itail_Y0;                      /* Expression: 0
                                         * 'synthesized block'
                                         */
  real_T _Value;                        /* Expression: 1
                                         * '<S34>/1'
                                         */
  real_T _Value_d;                      /* Computed Parameter: Value
                                         * '<S34>/2'
                                         */
  real_T Integrator_IC_j;               /* Expression: 0
                                         * '<S34>/Integrator'
                                         */
  real_T Memory_X0;                     /* Expression: 0
                                         * '<S34>/Memory'
                                         */
  real_T Constant_Value_e;              /* Expression: 0.9
                                         * '<S36>/Constant'
                                         */
  real_T u9Tf_Gain;                     /* Expression: -0.9./(Tf+eps)
                                         * '<S36>/-0.9//Tf'
                                         */
  real_T Saturation1_UpperSat;          /* Expression: 0.9
                                         * '<S36>/Saturation1'
                                         */
  real_T Saturation1_LowerSat;          /* Expression: 0
                                         * '<S36>/Saturation1'
                                         */
  real_T Constant2_Value_m;             /* Expression: Tf+Tt
                                         * '<S36>/Constant2'
                                         */
  real_T uTt_Gain;                      /* Expression: 0.1./(Tt+eps)
                                         * '<S36>/0.1//Tt'
                                         */
  real_T Saturation2_UpperSat;          /* Expression: 0.1
                                         * '<S36>/Saturation2'
                                         */
  real_T Saturation2_LowerSat;          /* Expression: 0
                                         * '<S36>/Saturation2'
                                         */
  real_T Switch_Threshold_m;            /* Expression: 0.5
                                         * '<S34>/Switch'
                                         */
  boolean_T Constant_Value_nf;          /* Expression: ctrl<3
                                         * '<S19>/Constant'
                                         */
  boolean_T Constant3_Value_m;          /* Expression: ctrl==3
                                         * '<S19>/Constant3'
                                         */
  boolean_T Constant_Value_o;           /* Expression: ctrl==1
                                         * '<S18>/Constant'
                                         */
  boolean_T Constant1_Value_e;          /* Expression: ctrl==2
                                         * '<S18>/Constant1'
                                         */
  boolean_T Constant2_Value_j;          /* Expression: ctrl==3
                                         * '<S18>/Constant2'
                                         */
  boolean_T _Value_o;                   /* Expression: Tf_sps>0 | Tt_sps>0
                                         * '<S33>/2'
                                         */
  boolean_T Constant_Value_b;           /* Expression: ctrl==1
                                         * '<S17>/Constant'
                                         */
  boolean_T Constant1_Value_jb;         /* Expression: ctrl==2
                                         * '<S17>/Constant1'
                                         */
  boolean_T Constant2_Value_je;         /* Expression: ctrl==3
                                         * '<S17>/Constant2'
                                         */
  char pad_Constant2_Value_je[7];
};

extern Parameters_untitled2 untitled2_DefaultParameters; /* parameters */

#endif                                  /* _RTW_HEADER_untitled2_acc_h_ */
