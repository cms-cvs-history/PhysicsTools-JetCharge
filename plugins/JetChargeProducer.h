#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/InputTag.h"

#include "DataFormats/JetReco/interface/Jet.h"
#include "DataFormats/BTauReco/interface/JetTracksAssociation.h"

#include "PhysicsTools/JetCharge/interface/JetCharge.h"
#include "PhysicsTools/JetCharge/interface/dataformats.h"

class JetChargeProducer : public edm::EDProducer {
    public:
        explicit JetChargeProducer(const edm::ParameterSet &cfg) ;
        virtual void produce(edm::Event&, const edm::EventSetup&);
    private:
        edm::InputTag src_;
        JetCharge     algo_;
};



