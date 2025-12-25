/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Context
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD_Context.h"
//#[ ignore
#define Context_SMSWTD_Context_SMSWTD_Context_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class SMSWTD_Context
SMSWTD_Context::SMSWTD_Context(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD_Context, SMSWTD_Context(), 0, Context_SMSWTD_Context_SMSWTD_Context_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            sei.setShouldDelete(false);
        }
    }
    initRelations();
}

SMSWTD_Context::~SMSWTD_Context(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD_Context, true);
}

const BroadcastMedia* SMSWTD_Context::getBm(void) const {
    return &bm;
}

const CommunicationsEnvironment* SMSWTD_Context::getComm(void) const {
    return &comm;
}

const EmergencyAuthorityOperator* SMSWTD_Context::getEao(void) const {
    return &eao;
}

const GovAlertNetwork* SMSWTD_Context::getGan(void) const {
    return &gan;
}

const Maintainers* SMSWTD_Context::getMaint(void) const {
    return &maint;
}

const MetOceanDataProvider* SMSWTD_Context::getMet(void) const {
    return &met;
}

const MobilePushService* SMSWTD_Context::getMps(void) const {
    return &mps;
}

const OperationalEnvironment* SMSWTD_Context::getOps(void) const {
    return &ops;
}

const PhysicalEnvironment* SMSWTD_Context::getPhys(void) const {
    return &phys;
}

const Researchers* SMSWTD_Context::getRes(void) const {
    return &res;
}

const SeismicTsunamiNetwork* SMSWTD_Context::getSei(void) const {
    return &sei;
}

const SMSWTD* SMSWTD_Context::getSmswtd(void) const {
    return &smswtd;
}

const SirenPASystem* SMSWTD_Context::getSps(void) const {
    return &sps;
}

const TelecomSMSNetwork* SMSWTD_Context::getTel(void) const {
    return &tel;
}

const ThreatEnvironment* SMSWTD_Context::getThreat(void) const {
    return &threat;
}

bool SMSWTD_Context::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = sei.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD_Context::initRelations(void) {
    {
        
        met.get_out()->setItsDefaultRequiredInterface(smswtd.get_dataIn()->getItsDefaultProvidedInterface());
        
    }{
        
        smswtd.get_dataIn()->addItsDefaultRequiredInterface(met.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        sei.get_out()->setItsDefaultRequiredInterface(smswtd.get_dataIn()->getItsDefaultProvidedInterface());
        
    }{
        
        smswtd.get_dataIn()->addItsDefaultRequiredInterface(sei.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_alertOut()->addItsDefaultRequiredInterface(tel.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        tel.get_in()->setItsDefaultRequiredInterface(smswtd.get_alertOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_alertOut()->addItsDefaultRequiredInterface(gan.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        gan.get_in()->setItsDefaultRequiredInterface(smswtd.get_alertOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_alertOut()->addItsDefaultRequiredInterface(mps.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        mps.get_in()->setItsDefaultRequiredInterface(smswtd.get_alertOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_alertOut()->addItsDefaultRequiredInterface(bm.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        bm.get_in()->setItsDefaultRequiredInterface(smswtd.get_alertOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        eao.get_out()->setItsDefaultRequiredInterface(smswtd.get_policyIn()->getItsDefaultProvidedInterface());
        
    }{
        
        smswtd.get_policyIn()->setItsDefaultRequiredInterface(eao.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_alertOut()->addItsDefaultRequiredInterface(sps.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        sps.get_in()->setItsDefaultRequiredInterface(smswtd.get_alertOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        res.get_query()->setItsDefaultRequiredInterface(smswtd.get_query()->getItsDefaultProvidedInterface());
        
    }{
        
        smswtd.get_query()->setItsDefaultRequiredInterface(res.get_query()->getItsDefaultProvidedInterface());
        
    }
    {
        
        maint.get_maintenance()->setItsDefaultRequiredInterface(smswtd.get_maintenance()->getItsDefaultProvidedInterface());
        
    }{
        
        smswtd.get_maintenance()->setItsDefaultRequiredInterface(maint.get_maintenance()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_healthOut()->addItsDefaultRequiredInterface(maint.get_healthIn()->getItsDefaultProvidedInterface());
        
    }{
        
        maint.get_healthIn()->setItsDefaultRequiredInterface(smswtd.get_healthOut()->getItsDefaultProvidedInterface());
        
    }
    {
        
        smswtd.get_healthOut()->addItsDefaultRequiredInterface(eao.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        eao.get_in()->setItsDefaultRequiredInterface(smswtd.get_healthOut()->getItsDefaultProvidedInterface());
        
    }
}

void SMSWTD_Context::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        sei.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD_Context::destroy(void) {
    sei.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD_Context::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("smswtd", true, true);
    aomsRelations->ADD_ITEM(&myReal->smswtd);
    aomsRelations->addRelation("met", true, true);
    aomsRelations->ADD_ITEM(&myReal->met);
    aomsRelations->addRelation("sei", true, true);
    aomsRelations->ADD_ITEM(&myReal->sei);
    aomsRelations->addRelation("eao", true, true);
    aomsRelations->ADD_ITEM(&myReal->eao);
    aomsRelations->addRelation("maint", true, true);
    aomsRelations->ADD_ITEM(&myReal->maint);
    aomsRelations->addRelation("res", true, true);
    aomsRelations->ADD_ITEM(&myReal->res);
    aomsRelations->addRelation("tel", true, true);
    aomsRelations->ADD_ITEM(&myReal->tel);
    aomsRelations->addRelation("gan", true, true);
    aomsRelations->ADD_ITEM(&myReal->gan);
    aomsRelations->addRelation("mps", true, true);
    aomsRelations->ADD_ITEM(&myReal->mps);
    aomsRelations->addRelation("bm", true, true);
    aomsRelations->ADD_ITEM(&myReal->bm);
    aomsRelations->addRelation("sps", true, true);
    aomsRelations->ADD_ITEM(&myReal->sps);
    aomsRelations->addRelation("phys", true, true);
    aomsRelations->ADD_ITEM(&myReal->phys);
    aomsRelations->addRelation("comm", true, true);
    aomsRelations->ADD_ITEM(&myReal->comm);
    aomsRelations->addRelation("ops", true, true);
    aomsRelations->ADD_ITEM(&myReal->ops);
    aomsRelations->addRelation("threat", true, true);
    aomsRelations->ADD_ITEM(&myReal->threat);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(SMSWTD_Context, Context, Context, false, OMAnimatedSMSWTD_Context)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.cpp
*********************************************************************/
