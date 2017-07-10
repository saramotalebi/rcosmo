// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pix2angC
NumericMatrix pix2angC(int Nside, bool Nest, Rcpp::Nullable<Rcpp::IntegerVector> spix);
RcppExport SEXP rcosmo_pix2angC(SEXP NsideSEXP, SEXP NestSEXP, SEXP spixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Nside(NsideSEXP);
    Rcpp::traits::input_parameter< bool >::type Nest(NestSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type spix(spixSEXP);
    rcpp_result_gen = Rcpp::wrap(pix2angC(Nside, Nest, spix));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"rcosmo_pix2angC", (DL_FUNC) &rcosmo_pix2angC, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rcosmo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
