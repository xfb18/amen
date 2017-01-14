// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_EZ_cpp
arma::cube get_EZ_cpp(Rcpp::List Xlist, arma::vec beta, arma::mat ab, arma::mat U, arma::mat V);
RcppExport SEXP amen_get_EZ_cpp(SEXP XlistSEXP, SEXP betaSEXP, SEXP abSEXP, SEXP USEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ab(abSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(get_EZ_cpp(Xlist, beta, ab, U, V));
    return rcpp_result_gen;
END_RCPP
}
// rZ_bin_fc_cpp
arma::mat rZ_bin_fc_cpp(arma::mat Z, arma::mat EZ, double rho, arma::mat Y);
RcppExport SEXP amen_rZ_bin_fc_cpp(SEXP ZSEXP, SEXP EZSEXP, SEXP rhoSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type EZ(EZSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(rZ_bin_fc_cpp(Z, EZ, rho, Y));
    return rcpp_result_gen;
END_RCPP
}
// rbeta_ab_rep_fc_cpp
List rbeta_ab_rep_fc_cpp(arma::cube ZT, arma::cube Xr, arma::cube Xc, arma::cube mX, arma::cube mXt, arma::cube XX, arma::cube XXt, arma::mat iSe2, arma::mat Sabs, int k, arma::mat G);
RcppExport SEXP amen_rbeta_ab_rep_fc_cpp(SEXP ZTSEXP, SEXP XrSEXP, SEXP XcSEXP, SEXP mXSEXP, SEXP mXtSEXP, SEXP XXSEXP, SEXP XXtSEXP, SEXP iSe2SEXP, SEXP SabsSEXP, SEXP kSEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type ZT(ZTSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type mXt(mXtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type XXt(XXtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type iSe2(iSe2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sabs(SabsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(rbeta_ab_rep_fc_cpp(ZT, Xr, Xc, mX, mXt, XX, XXt, iSe2, Sabs, k, G));
    return rcpp_result_gen;
END_RCPP
}
// rbeta_rep_cpp
List rbeta_rep_cpp(arma::cube ZT, double to, double td, arma::cube Xr, arma::cube Xc, arma::cube mX, arma::cube mXt, arma::cube XX, arma::cube XXt);
RcppExport SEXP amen_rbeta_rep_cpp(SEXP ZTSEXP, SEXP toSEXP, SEXP tdSEXP, SEXP XrSEXP, SEXP XcSEXP, SEXP mXSEXP, SEXP mXtSEXP, SEXP XXSEXP, SEXP XXtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type ZT(ZTSEXP);
    Rcpp::traits::input_parameter< double >::type to(toSEXP);
    Rcpp::traits::input_parameter< double >::type td(tdSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type mXt(mXtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type XXt(XXtSEXP);
    rcpp_result_gen = Rcpp::wrap(rbeta_rep_cpp(ZT, to, td, Xr, Xc, mX, mXt, XX, XXt));
    return rcpp_result_gen;
END_RCPP
}
// rrho_mh_rep_cpp
double rrho_mh_rep_cpp(arma::cube ET, double rho, double s2);
RcppExport SEXP amen_rrho_mh_rep_cpp(SEXP ETSEXP, SEXP rhoSEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type ET(ETSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(rrho_mh_rep_cpp(ET, rho, s2));
    return rcpp_result_gen;
END_RCPP
}
// rs2_rep_fc_cpp
double rs2_rep_fc_cpp(arma::cube ET, arma::mat rhoMat);
RcppExport SEXP amen_rs2_rep_fc_cpp(SEXP ETSEXP, SEXP rhoMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type ET(ETSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rhoMat(rhoMatSEXP);
    rcpp_result_gen = Rcpp::wrap(rs2_rep_fc_cpp(ET, rhoMat));
    return rcpp_result_gen;
END_RCPP
}
// rwish_cpp
arma::mat rwish_cpp(arma::mat S0, int nu);
RcppExport SEXP amen_rwish_cpp(SEXP S0SEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type S0(S0SEXP);
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(rwish_cpp(S0, nu));
    return rcpp_result_gen;
END_RCPP
}
// rUV_rep_fc_cpp
List rUV_rep_fc_cpp(arma::cube ET, arma::mat U, arma::mat V, double rho, double s2, arma::mat iSe2, double maxmargin, bool shrink, NumericVector rLoopIDs);
RcppExport SEXP amen_rUV_rep_fc_cpp(SEXP ETSEXP, SEXP USEXP, SEXP VSEXP, SEXP rhoSEXP, SEXP s2SEXP, SEXP iSe2SEXP, SEXP maxmarginSEXP, SEXP shrinkSEXP, SEXP rLoopIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type ET(ETSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type iSe2(iSe2SEXP);
    Rcpp::traits::input_parameter< double >::type maxmargin(maxmarginSEXP);
    Rcpp::traits::input_parameter< bool >::type shrink(shrinkSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rLoopIDs(rLoopIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(rUV_rep_fc_cpp(ET, U, V, rho, s2, iSe2, maxmargin, shrink, rLoopIDs));
    return rcpp_result_gen;
END_RCPP
}
// rUV_sym_fc_cpp
List rUV_sym_fc_cpp(arma::mat E, arma::mat U, arma::mat V, double s2, bool shrink, NumericVector uLoopIDs);
RcppExport SEXP amen_rUV_sym_fc_cpp(SEXP ESEXP, SEXP USEXP, SEXP VSEXP, SEXP s2SEXP, SEXP shrinkSEXP, SEXP uLoopIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< bool >::type shrink(shrinkSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type uLoopIDs(uLoopIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(rUV_sym_fc_cpp(E, U, V, s2, shrink, uLoopIDs));
    return rcpp_result_gen;
END_RCPP
}
