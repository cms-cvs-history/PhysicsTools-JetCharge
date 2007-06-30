#include "DataFormats/JetReco/interface/Jet.h"
#include "DataFormats/Common/interface/RefToBase.h"

#include <vector>

namespace reco {
    typedef std::pair <edm::RefToBase<reco::Jet>, float> JetChargePair;
    typedef std::vector< JetChargePair > JetChargeCollection;
 }


