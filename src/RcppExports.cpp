// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// point_in_polygon
bool point_in_polygon(NumericVector vertx, NumericVector verty, double pointx, double pointy);
RcppExport SEXP _rlas_point_in_polygon(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< double >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< double >::type pointy(pointySEXP);
    rcpp_result_gen = Rcpp::wrap(point_in_polygon(vertx, verty, pointx, pointy));
    return rcpp_result_gen;
END_RCPP
}
// lasheaderreader
List lasheaderreader(CharacterVector file);
RcppExport SEXP _rlas_lasheaderreader(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(lasheaderreader(file));
    return rcpp_result_gen;
END_RCPP
}
// lasfilterusage
void lasfilterusage();
RcppExport SEXP _rlas_lasfilterusage() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    lasfilterusage();
    return R_NilValue;
END_RCPP
}
// lasdatareader
List lasdatareader(CharacterVector ifiles, CharacterVector ofile, CharacterVector filter, bool i, bool r, bool n, bool d, bool e, bool c, bool a, bool u, bool p, bool rgb, bool t, IntegerVector eb);
RcppExport SEXP _rlas_lasdatareader(SEXP ifilesSEXP, SEXP ofileSEXP, SEXP filterSEXP, SEXP iSEXP, SEXP rSEXP, SEXP nSEXP, SEXP dSEXP, SEXP eSEXP, SEXP cSEXP, SEXP aSEXP, SEXP uSEXP, SEXP pSEXP, SEXP rgbSEXP, SEXP tSEXP, SEXP ebSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ifiles(ifilesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type ofile(ofileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< bool >::type i(iSEXP);
    Rcpp::traits::input_parameter< bool >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type c(cSEXP);
    Rcpp::traits::input_parameter< bool >::type a(aSEXP);
    Rcpp::traits::input_parameter< bool >::type u(uSEXP);
    Rcpp::traits::input_parameter< bool >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type rgb(rgbSEXP);
    Rcpp::traits::input_parameter< bool >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type eb(ebSEXP);
    rcpp_result_gen = Rcpp::wrap(lasdatareader(ifiles, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb));
    return rcpp_result_gen;
END_RCPP
}
// lasdatareader_inpoly
List lasdatareader_inpoly(CharacterVector ifiles, NumericVector x, NumericVector y, CharacterVector ofile, CharacterVector filter, bool i, bool r, bool n, bool d, bool e, bool c, bool a, bool u, bool p, bool rgb, bool t, IntegerVector eb);
RcppExport SEXP _rlas_lasdatareader_inpoly(SEXP ifilesSEXP, SEXP xSEXP, SEXP ySEXP, SEXP ofileSEXP, SEXP filterSEXP, SEXP iSEXP, SEXP rSEXP, SEXP nSEXP, SEXP dSEXP, SEXP eSEXP, SEXP cSEXP, SEXP aSEXP, SEXP uSEXP, SEXP pSEXP, SEXP rgbSEXP, SEXP tSEXP, SEXP ebSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ifiles(ifilesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type ofile(ofileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< bool >::type i(iSEXP);
    Rcpp::traits::input_parameter< bool >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type c(cSEXP);
    Rcpp::traits::input_parameter< bool >::type a(aSEXP);
    Rcpp::traits::input_parameter< bool >::type u(uSEXP);
    Rcpp::traits::input_parameter< bool >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type rgb(rgbSEXP);
    Rcpp::traits::input_parameter< bool >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type eb(ebSEXP);
    rcpp_result_gen = Rcpp::wrap(lasdatareader_inpoly(ifiles, x, y, ofile, filter, i, r, n, d, e, c, a, u, p, rgb, t, eb));
    return rcpp_result_gen;
END_RCPP
}
// C_writer
void C_writer(CharacterVector file, List LASheader, DataFrame data);
RcppExport SEXP _rlas_C_writer(SEXP fileSEXP, SEXP LASheaderSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< List >::type LASheader(LASheaderSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    C_writer(file, LASheader, data);
    return R_NilValue;
END_RCPP
}
// laswriter
void laswriter(CharacterVector file, List LASheader, NumericVector X, NumericVector Y, NumericVector Z, DataFrame ExtraBytes, IntegerVector I, IntegerVector RN, IntegerVector NoR, IntegerVector SDF, IntegerVector EoF, IntegerVector C, IntegerVector SA, IntegerVector UD, IntegerVector PSI, NumericVector T, IntegerVector R, IntegerVector G, IntegerVector B);
RcppExport SEXP _rlas_laswriter(SEXP fileSEXP, SEXP LASheaderSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP ExtraBytesSEXP, SEXP ISEXP, SEXP RNSEXP, SEXP NoRSEXP, SEXP SDFSEXP, SEXP EoFSEXP, SEXP CSEXP, SEXP SASEXP, SEXP UDSEXP, SEXP PSISEXP, SEXP TSEXP, SEXP RSEXP, SEXP GSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< List >::type LASheader(LASheaderSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type ExtraBytes(ExtraBytesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type I(ISEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type RN(RNSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type NoR(NoRSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type SDF(SDFSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type EoF(EoFSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type SA(SASEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type UD(UDSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type PSI(PSISEXP);
    Rcpp::traits::input_parameter< NumericVector >::type T(TSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type G(GSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type B(BSEXP);
    laswriter(file, LASheader, X, Y, Z, ExtraBytes, I, RN, NoR, SDF, EoF, C, SA, UD, PSI, T, R, G, B);
    return R_NilValue;
END_RCPP
}
// laxwriter
void laxwriter(CharacterVector file);
RcppExport SEXP _rlas_laxwriter(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    laxwriter(file);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rlas_point_in_polygon", (DL_FUNC) &_rlas_point_in_polygon, 4},
    {"_rlas_lasheaderreader", (DL_FUNC) &_rlas_lasheaderreader, 1},
    {"_rlas_lasfilterusage", (DL_FUNC) &_rlas_lasfilterusage, 0},
    {"_rlas_lasdatareader", (DL_FUNC) &_rlas_lasdatareader, 15},
    {"_rlas_lasdatareader_inpoly", (DL_FUNC) &_rlas_lasdatareader_inpoly, 17},
    {"_rlas_C_writer", (DL_FUNC) &_rlas_C_writer, 3},
    {"_rlas_laswriter", (DL_FUNC) &_rlas_laswriter, 19},
    {"_rlas_laxwriter", (DL_FUNC) &_rlas_laxwriter, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rlas(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
