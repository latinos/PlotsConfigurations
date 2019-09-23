#include "HiggsAnalysis/CombinedLimit/interface/utils.h"

#include "RooStats/ModelConfig.h"
#include "RooAbsPdf.h"

RooAbsPdf*
makeNuisancePdf(RooStats::ModelConfig* mc)
{
  return utils::makeNuisancePdf(*mc);
}
