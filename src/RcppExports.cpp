// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Mean_c
double Mean_c(NumericVector x);
RcppExport SEXP _genomation_Mean_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Mean_c(x));
    return rcpp_result_gen;
END_RCPP
}
// binMean
NumericVector binMean(NumericVector x, int n);
RcppExport SEXP _genomation_binMean(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binMean(x, n));
    return rcpp_result_gen;
END_RCPP
}
// Median_c
double Median_c(NumericVector x);
RcppExport SEXP _genomation_Median_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Median_c(x));
    return rcpp_result_gen;
END_RCPP
}
// binMedian
NumericVector binMedian(NumericVector x, int n);
RcppExport SEXP _genomation_binMedian(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binMedian(x, n));
    return rcpp_result_gen;
END_RCPP
}
// Max_c
double Max_c(NumericVector x);
RcppExport SEXP _genomation_Max_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Max_c(x));
    return rcpp_result_gen;
END_RCPP
}
// binMax
NumericVector binMax(NumericVector x, int n);
RcppExport SEXP _genomation_binMax(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binMax(x, n));
    return rcpp_result_gen;
END_RCPP
}
// Min_c
double Min_c(NumericVector x);
RcppExport SEXP _genomation_Min_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Min_c(x));
    return rcpp_result_gen;
END_RCPP
}
// binMin
NumericVector binMin(NumericVector x, int n);
RcppExport SEXP _genomation_binMin(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binMin(x, n));
    return rcpp_result_gen;
END_RCPP
}
// Sum_c
double Sum_c(NumericVector x);
RcppExport SEXP _genomation_Sum_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Sum_c(x));
    return rcpp_result_gen;
END_RCPP
}
// binSum
NumericVector binSum(NumericVector x, int n);
RcppExport SEXP _genomation_binSum(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binSum(x, n));
    return rcpp_result_gen;
END_RCPP
}
// listSliceMean
NumericMatrix listSliceMean(List xlist, int n);
RcppExport SEXP _genomation_listSliceMean(SEXP xlistSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xlist(xlistSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(listSliceMean(xlist, n));
    return rcpp_result_gen;
END_RCPP
}
// listSliceMedian
NumericMatrix listSliceMedian(List xlist, int n);
RcppExport SEXP _genomation_listSliceMedian(SEXP xlistSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xlist(xlistSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(listSliceMedian(xlist, n));
    return rcpp_result_gen;
END_RCPP
}
// listSliceMax
NumericMatrix listSliceMax(List xlist, int n);
RcppExport SEXP _genomation_listSliceMax(SEXP xlistSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xlist(xlistSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(listSliceMax(xlist, n));
    return rcpp_result_gen;
END_RCPP
}
// listSliceMin
NumericMatrix listSliceMin(List xlist, int n);
RcppExport SEXP _genomation_listSliceMin(SEXP xlistSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xlist(xlistSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(listSliceMin(xlist, n));
    return rcpp_result_gen;
END_RCPP
}
// listSliceSum
NumericMatrix listSliceSum(List xlist, int n);
RcppExport SEXP _genomation_listSliceSum(SEXP xlistSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xlist(xlistSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(listSliceSum(xlist, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_genomation_Mean_c", (DL_FUNC) &_genomation_Mean_c, 1},
    {"_genomation_binMean", (DL_FUNC) &_genomation_binMean, 2},
    {"_genomation_Median_c", (DL_FUNC) &_genomation_Median_c, 1},
    {"_genomation_binMedian", (DL_FUNC) &_genomation_binMedian, 2},
    {"_genomation_Max_c", (DL_FUNC) &_genomation_Max_c, 1},
    {"_genomation_binMax", (DL_FUNC) &_genomation_binMax, 2},
    {"_genomation_Min_c", (DL_FUNC) &_genomation_Min_c, 1},
    {"_genomation_binMin", (DL_FUNC) &_genomation_binMin, 2},
    {"_genomation_Sum_c", (DL_FUNC) &_genomation_Sum_c, 1},
    {"_genomation_binSum", (DL_FUNC) &_genomation_binSum, 2},
    {"_genomation_listSliceMean", (DL_FUNC) &_genomation_listSliceMean, 2},
    {"_genomation_listSliceMedian", (DL_FUNC) &_genomation_listSliceMedian, 2},
    {"_genomation_listSliceMax", (DL_FUNC) &_genomation_listSliceMax, 2},
    {"_genomation_listSliceMin", (DL_FUNC) &_genomation_listSliceMin, 2},
    {"_genomation_listSliceSum", (DL_FUNC) &_genomation_listSliceSum, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_genomation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
