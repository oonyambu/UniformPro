// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// WilliamC
Rcpp::NumericMatrix WilliamC(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_WilliamC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(WilliamC(x));
    return rcpp_result_gen;
END_RCPP
}
// William
Rcpp::IntegerVector William(const Rcpp::IntegerMatrix& x);
RcppExport SEXP _UniformPro_William(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(William(x));
    return rcpp_result_gen;
END_RCPP
}
// WilliamInv
Rcpp::IntegerVector WilliamInv(const Rcpp::IntegerVector& x, int levels);
RcppExport SEXP _UniformPro_WilliamInv(SEXP xSEXP, SEXP levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type levels(levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(WilliamInv(x, levels));
    return rcpp_result_gen;
END_RCPP
}
// d2
double d2(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_d2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(d2(x));
    return rcpp_result_gen;
END_RCPP
}
// rho_ave
double rho_ave(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_rho_ave(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rho_ave(x));
    return rcpp_result_gen;
END_RCPP
}
// CD
double CD(const Rcpp::NumericMatrix& y);
RcppExport SEXP _UniformPro_CD(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(CD(y));
    return rcpp_result_gen;
END_RCPP
}
// CD2
double CD2(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_CD2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(CD2(x));
    return rcpp_result_gen;
END_RCPP
}
// construct
Rcpp::NumericMatrix construct(int n);
RcppExport SEXP _UniformPro_construct(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(construct(n));
    return rcpp_result_gen;
END_RCPP
}
// phi
double phi(const Rcpp::NumericMatrix& x, int k);
RcppExport SEXP _UniformPro_phi(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(phi(x, k));
    return rcpp_result_gen;
END_RCPP
}
// phi2
double phi2(const Rcpp::NumericMatrix& x, int k);
RcppExport SEXP _UniformPro_phi2(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(phi2(x, k));
    return rcpp_result_gen;
END_RCPP
}
// phi3
double phi3(const Rcpp::NumericMatrix& x, int k);
RcppExport SEXP _UniformPro_phi3(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(phi3(x, k));
    return rcpp_result_gen;
END_RCPP
}
// phi2D
double phi2D(const Rcpp::NumericMatrix& x, int s);
RcppExport SEXP _UniformPro_phi2D(SEXP xSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(phi2D(x, s));
    return rcpp_result_gen;
END_RCPP
}
// phiEff
double phiEff(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_phiEff(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(phiEff(x));
    return rcpp_result_gen;
END_RCPP
}
// psi
double psi(const Rcpp::NumericMatrix& x);
RcppExport SEXP _UniformPro_psi(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(psi(x));
    return rcpp_result_gen;
END_RCPP
}
// psi2
double psi2(const Rcpp::NumericMatrix x);
RcppExport SEXP _UniformPro_psi2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(psi2(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_UniformPro_WilliamC", (DL_FUNC) &_UniformPro_WilliamC, 1},
    {"_UniformPro_William", (DL_FUNC) &_UniformPro_William, 1},
    {"_UniformPro_WilliamInv", (DL_FUNC) &_UniformPro_WilliamInv, 2},
    {"_UniformPro_d2", (DL_FUNC) &_UniformPro_d2, 1},
    {"_UniformPro_rho_ave", (DL_FUNC) &_UniformPro_rho_ave, 1},
    {"_UniformPro_CD", (DL_FUNC) &_UniformPro_CD, 1},
    {"_UniformPro_CD2", (DL_FUNC) &_UniformPro_CD2, 1},
    {"_UniformPro_construct", (DL_FUNC) &_UniformPro_construct, 1},
    {"_UniformPro_phi", (DL_FUNC) &_UniformPro_phi, 2},
    {"_UniformPro_phi2", (DL_FUNC) &_UniformPro_phi2, 2},
    {"_UniformPro_phi3", (DL_FUNC) &_UniformPro_phi3, 2},
    {"_UniformPro_phi2D", (DL_FUNC) &_UniformPro_phi2D, 2},
    {"_UniformPro_phiEff", (DL_FUNC) &_UniformPro_phiEff, 1},
    {"_UniformPro_psi", (DL_FUNC) &_UniformPro_psi, 1},
    {"_UniformPro_psi2", (DL_FUNC) &_UniformPro_psi2, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_UniformPro(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
