// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count_row_na_cpp
IntegerVector count_row_na_cpp(DataFrame df, bool parallel);
RcppExport SEXP _naniar_count_row_na_cpp(SEXP dfSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(count_row_na_cpp(df, parallel));
    return rcpp_result_gen;
END_RCPP
}
// prop_row_na_cpp
NumericVector prop_row_na_cpp(DataFrame df, bool parallel);
RcppExport SEXP _naniar_prop_row_na_cpp(SEXP dfSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(prop_row_na_cpp(df, parallel));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_naniar_count_row_na_cpp", (DL_FUNC) &_naniar_count_row_na_cpp, 2},
    {"_naniar_prop_row_na_cpp", (DL_FUNC) &_naniar_prop_row_na_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_naniar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
