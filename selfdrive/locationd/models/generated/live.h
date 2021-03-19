/******************************************************************************
 *                      Code generated with sympy 1.7.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_7152926933569509186);
void inv_err_fun(double *nom_x, double *true_x, double *out_4632455866854333471);
void H_mod_fun(double *state, double *out_4598261170154948848);
void f_fun(double *state, double dt, double *out_6478297202778111491);
void F_fun(double *state, double dt, double *out_660014650936689019);
void h_3(double *state, double *unused, double *out_1471459540266224911);
void H_3(double *state, double *unused, double *out_2851283008706844859);
void h_4(double *state, double *unused, double *out_4151697265232050473);
void H_4(double *state, double *unused, double *out_2644123273249573608);
void h_9(double *state, double *unused, double *out_9146378577191820575);
void H_9(double *state, double *unused, double *out_4966628817120429578);
void h_10(double *state, double *unused, double *out_1008823884195233690);
void H_10(double *state, double *unused, double *out_828581380476668922);
void h_12(double *state, double *unused, double *out_8187487355830850200);
void H_12(double *state, double *unused, double *out_4750678784988783177);
void h_31(double *state, double *unused, double *out_1216103471388289313);
void H_31(double *state, double *unused, double *out_2075589009845363356);
void h_32(double *state, double *unused, double *out_6127398489341376594);
void H_32(double *state, double *unused, double *out_125087288197611709);
void h_13(double *state, double *unused, double *out_5610640053571873786);
void H_13(double *state, double *unused, double *out_1326915980275315154);
void h_14(double *state, double *unused, double *out_9146378577191820575);
void H_14(double *state, double *unused, double *out_4966628817120429578);
void h_19(double *state, double *unused, double *out_8607189249774656114);
void H_19(double *state, double *unused, double *out_9047435405486690857);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);