#include "DataFormats/Common/interface/Wrapper.h"
#include "PhysicsTools/JetCharge/interface/dataformats.h"
#include "DataFormats/JetReco/interface/CaloJet.h"

namespace {
    namespace {
        edm::RefToBase<reco::Jet>                                rbj;
        edm::reftobase::Holder<reco::Jet,reco::CaloJetRef>       rbj_cj;
        reco::JetChargePair                                      jcp;
        reco::JetChargeCollection                                jcc;
        edm::Wrapper<reco::JetChargeCollection>                  jcc_w;
    }
}
