/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Context
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.h
*********************************************************************/

#ifndef SMSWTD_Context_H
#define SMSWTD_Context_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance bm
#include "BroadcastMedia.h"
//## classInstance comm
#include "CommunicationsEnvironment.h"
//## classInstance eao
#include "EmergencyAuthorityOperator.h"
//## classInstance gan
#include "GovAlertNetwork.h"
//## classInstance maint
#include "Maintainers.h"
//## classInstance met
#include "MetOceanDataProvider.h"
//## classInstance mps
#include "MobilePushService.h"
//## classInstance ops
#include "OperationalEnvironment.h"
//## classInstance phys
#include "PhysicalEnvironment.h"
//## classInstance res
#include "Researchers.h"
//## classInstance sei
#include "SeismicTsunamiNetwork.h"
//## classInstance sps
#include "SirenPASystem.h"
//## classInstance smswtd
#include "SMSWTD.h"
//## classInstance tel
#include "TelecomSMSNetwork.h"
//## classInstance threat
#include "ThreatEnvironment.h"
//## package Context

//## class SMSWTD_Context
class SMSWTD_Context : public OMReactive {
public :

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD_Context;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD_Context(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD_Context(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const BroadcastMedia* getBm(void) const;
    
    //## auto_generated
    const CommunicationsEnvironment* getComm(void) const;
    
    //## auto_generated
    const EmergencyAuthorityOperator* getEao(void) const;
    
    //## auto_generated
    const GovAlertNetwork* getGan(void) const;
    
    //## auto_generated
    const Maintainers* getMaint(void) const;
    
    //## auto_generated
    const MetOceanDataProvider* getMet(void) const;
    
    //## auto_generated
    const MobilePushService* getMps(void) const;
    
    //## auto_generated
    const OperationalEnvironment* getOps(void) const;
    
    //## auto_generated
    const PhysicalEnvironment* getPhys(void) const;
    
    //## auto_generated
    const Researchers* getRes(void) const;
    
    //## auto_generated
    const SeismicTsunamiNetwork* getSei(void) const;
    
    //## auto_generated
    const SMSWTD* getSmswtd(void) const;
    
    //## auto_generated
    const SirenPASystem* getSps(void) const;
    
    //## auto_generated
    const TelecomSMSNetwork* getTel(void) const;
    
    //## auto_generated
    const ThreatEnvironment* getThreat(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

    BroadcastMedia bm;		//## classInstance bm
    
    CommunicationsEnvironment comm;		//## classInstance comm
    
    EmergencyAuthorityOperator eao;		//## classInstance eao
    
    GovAlertNetwork gan;		//## classInstance gan
    
    Maintainers maint;		//## classInstance maint
    
    MetOceanDataProvider met;		//## classInstance met
    
    MobilePushService mps;		//## classInstance mps
    
    OperationalEnvironment ops;		//## classInstance ops
    
    PhysicalEnvironment phys;		//## classInstance phys
    
    Researchers res;		//## classInstance res
    
    SeismicTsunamiNetwork sei;		//## classInstance sei
    
    SMSWTD smswtd;		//## classInstance smswtd
    
    SirenPASystem sps;		//## classInstance sps
    
    TelecomSMSNetwork tel;		//## classInstance tel
    
    ThreatEnvironment threat;		//## classInstance threat
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD_Context : virtual public AOMInstance {
    DECLARE_META(SMSWTD_Context, OMAnimatedSMSWTD_Context)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Context.h
*********************************************************************/
