/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Context
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.cpp
*********************************************************************/

//## auto_generated
#include "SMSWTD_Context.h"
//## package Context

//## class SMSWTD_Context
SMSWTD_Context::SMSWTD_Context(void) {
    initRelations();
}

SMSWTD_Context::~SMSWTD_Context(void) {
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.cpp
*********************************************************************/
