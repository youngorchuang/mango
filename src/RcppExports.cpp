// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vector_join
std::string vector_join(const std::vector<std::string>& v, const std::string& token);
RcppExport SEXP mango_vector_join(SEXP vSEXP, SEXP tokenSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::vector<std::string>& >::type v(vSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type token(tokenSEXP );
        std::string __result = vector_join(v, token);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// string_split
std::vector<std::string> string_split(const std::string& s, const std::string& delimiter);
RcppExport SEXP mango_string_split(SEXP sSEXP, SEXP delimiterSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type delimiter(delimiterSEXP );
        std::vector<std::string> __result = string_split(s, delimiter);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseFastq
std::string parseFastq(std::string fastq1, std::string fastq2, std::string basename, int minlength = 15, int maxlength = 25, bool keepempty = false, bool verbose = true, std::string linker1 = "GTTGGATAAG", std::string linker2 = "GTTGGAATGT");
RcppExport SEXP mango_parseFastq(SEXP fastq1SEXP, SEXP fastq2SEXP, SEXP basenameSEXP, SEXP minlengthSEXP, SEXP maxlengthSEXP, SEXP keepemptySEXP, SEXP verboseSEXP, SEXP linker1SEXP, SEXP linker2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type fastq1(fastq1SEXP );
        Rcpp::traits::input_parameter< std::string >::type fastq2(fastq2SEXP );
        Rcpp::traits::input_parameter< std::string >::type basename(basenameSEXP );
        Rcpp::traits::input_parameter< int >::type minlength(minlengthSEXP );
        Rcpp::traits::input_parameter< int >::type maxlength(maxlengthSEXP );
        Rcpp::traits::input_parameter< bool >::type keepempty(keepemptySEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        Rcpp::traits::input_parameter< std::string >::type linker1(linker1SEXP );
        Rcpp::traits::input_parameter< std::string >::type linker2(linker2SEXP );
        std::string __result = parseFastq(fastq1, fastq2, basename, minlength, maxlength, keepempty, verbose, linker1, linker2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildBedpe
void buildBedpe(std::string sam1, std::string sam2, std::string bedpefile);
RcppExport SEXP mango_buildBedpe(SEXP sam1SEXP, SEXP sam2SEXP, SEXP bedpefileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type sam1(sam1SEXP );
        Rcpp::traits::input_parameter< std::string >::type sam2(sam2SEXP );
        Rcpp::traits::input_parameter< std::string >::type bedpefile(bedpefileSEXP );
        buildBedpe(sam1, sam2, bedpefile);
    }
    return R_NilValue;
END_RCPP
}
// removeDupBedpe
void removeDupBedpe(std::string infile, std::string outfile);
RcppExport SEXP mango_removeDupBedpe(SEXP infileSEXP, SEXP outfileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP );
        Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP );
        removeDupBedpe(infile, outfile);
    }
    return R_NilValue;
END_RCPP
}
// splitBedpe
std::vector<std::string> splitBedpe(std::string bedpein, std::string outnamebase);
RcppExport SEXP mango_splitBedpe(SEXP bedpeinSEXP, SEXP outnamebaseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedpein(bedpeinSEXP );
        Rcpp::traits::input_parameter< std::string >::type outnamebase(outnamebaseSEXP );
        std::vector<std::string> __result = splitBedpe(bedpein, outnamebase);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildTagAlign
void buildTagAlign(std::string bedpefile, std::string TagAlignfile);
RcppExport SEXP mango_buildTagAlign(SEXP bedpefileSEXP, SEXP TagAlignfileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type bedpefile(bedpefileSEXP );
        Rcpp::traits::input_parameter< std::string >::type TagAlignfile(TagAlignfileSEXP );
        buildTagAlign(bedpefile, TagAlignfile);
    }
    return R_NilValue;
END_RCPP
}
