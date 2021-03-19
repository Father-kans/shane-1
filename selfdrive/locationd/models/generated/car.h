/******************************************************************************
 *                      Code generated with sympy 1.7.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_4027694559470514117);
void inv_err_fun(double *nom_x, double *true_x, double *out_8507919023939217086);
void H_mod_fun(double *state, double *out_1677876367940249289);
void f_fun(double *state, double dt, double *out_6750061827209278564);
void F_fun(double *state, double dt, double *out_7305228190968570131);
void h_25(double *state, double *unused, double *out_2157924752769980818);
void H_25(double *state, double *unused, double *out_1747640802642817127);
void h_24(double *state, double *unused, double *out_2019807019224875027);
void H_24(double *state, double *unused, double *out_3010029866838557259);
void h_30(double *state, double *unused, double *out_1882730690485474929);
void H_30(double *state, double *unused, double *out_7866258108306366153);
void h_26(double *state, double *unused, double *out_6884403958146320574);
void H_26(double *state, double *unused, double *out_7452233957582026400);
void h_27(double *state, double *unused, double *out_8556966270183829964);
void H_27(double *state, double *unused, double *out_9153840096142991465);
void h_29(double *state, double *unused, double *out_4919516741929807614);
void H_29(double *state, double *unused, double *out_6756687196274353510);
void h_28(double *state, double *unused, double *out_4493908427890942782);
void H_28(double *state, double *unused, double *out_8418881728634499491);
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
void set_mass(double x);

void set_rotational_inertia(double x);

void set_center_to_front(double x);

void set_center_to_rear(double x);

void set_stiffness_front(double x);

void set_stiffness_rear(double x);
