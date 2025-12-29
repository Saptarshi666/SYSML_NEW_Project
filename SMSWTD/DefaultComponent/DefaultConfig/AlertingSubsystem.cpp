/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertingSubsystem
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AlertingSubsystem.h"
//## link itsRiskAssessmentSubsystem
#include "RiskAssessmentSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_AlertingSubsystem_AlertingSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class AlertingSubsystem
//#[ ignore
AlertingSubsystem::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

AlertingSubsystem::in_C::~in_C(void) {
}

void AlertingSubsystem::in_C::connectAlertingSubsystem(AlertingSubsystem* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

AlertingSubsystem::AlertingSubsystem(IOxfActive* const theActiveContext) : OMReactive(), Alert(false), BroadcastMedia(false), EmergencyAuthorityOperator(false), GovAlertNetwork(false), Maintainer(false), MobilePushService(false), Prediction(false), Researcher(false), SirenPASystem(false), TelecomSMSNetwork(false), itsRiskAssessmentSubsystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AlertingSubsystem, AlertingSubsystem(), 0, SMSWTD_Architecture_AlertingSubsystem_AlertingSubsystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

AlertingSubsystem::~AlertingSubsystem(void) {
    NOTIFY_DESTRUCTOR(~AlertingSubsystem, true);
    cleanUpRelations();
    cancelTimeouts();
}

AlertingSubsystem::in_C* AlertingSubsystem::getIn(void) const {
    return (AlertingSubsystem::in_C*) &in;
}

AlertingSubsystem::in_C* AlertingSubsystem::get_in(void) const {
    return (AlertingSubsystem::in_C*) &in;
}

const bool AlertingSubsystem::getAlert(void) const {
    return Alert;
}

void AlertingSubsystem::setAlert(const bool p_Alert) {
    Alert = p_Alert;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getBroadcastMedia(void) const {
    return BroadcastMedia;
}

void AlertingSubsystem::setBroadcastMedia(const bool p_BroadcastMedia) {
    BroadcastMedia = p_BroadcastMedia;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getEmergencyAuthorityOperator(void) const {
    return EmergencyAuthorityOperator;
}

void AlertingSubsystem::setEmergencyAuthorityOperator(const bool p_EmergencyAuthorityOperator) {
    EmergencyAuthorityOperator = p_EmergencyAuthorityOperator;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getGovAlertNetwork(void) const {
    return GovAlertNetwork;
}

void AlertingSubsystem::setGovAlertNetwork(const bool p_GovAlertNetwork) {
    GovAlertNetwork = p_GovAlertNetwork;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getMaintainer(void) const {
    return Maintainer;
}

void AlertingSubsystem::setMaintainer(const bool p_Maintainer) {
    Maintainer = p_Maintainer;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getMobilePushService(void) const {
    return MobilePushService;
}

void AlertingSubsystem::setMobilePushService(const bool p_MobilePushService) {
    MobilePushService = p_MobilePushService;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getPrediction(void) const {
    return Prediction;
}

void AlertingSubsystem::setPrediction(const bool p_Prediction) {
    Prediction = p_Prediction;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getResearcher(void) const {
    return Researcher;
}

void AlertingSubsystem::setResearcher(const bool p_Researcher) {
    Researcher = p_Researcher;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getSirenPASystem(void) const {
    return SirenPASystem;
}

void AlertingSubsystem::setSirenPASystem(const bool p_SirenPASystem) {
    SirenPASystem = p_SirenPASystem;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getTelecomSMSNetwork(void) const {
    return TelecomSMSNetwork;
}

void AlertingSubsystem::setTelecomSMSNetwork(const bool p_TelecomSMSNetwork) {
    TelecomSMSNetwork = p_TelecomSMSNetwork;
    NOTIFY_SET_OPERATION;
}

const RiskAssessmentSubsystem* AlertingSubsystem::getItsRiskAssessmentSubsystem(void) const {
    return itsRiskAssessmentSubsystem;
}

void AlertingSubsystem::setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem) {
    if(p_RiskAssessmentSubsystem != NULL)
        {
            p_RiskAssessmentSubsystem->_setItsAlertingSubsystem(this);
        }
    _setItsRiskAssessmentSubsystem(p_RiskAssessmentSubsystem);
}

bool AlertingSubsystem::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool AlertingSubsystem::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AlertingSubsystem::initRelations(void) {
    if (get_in() != NULL) {
        get_in()->connectAlertingSubsystem(this);
    }
}

void AlertingSubsystem::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void AlertingSubsystem::cleanUpRelations(void) {
    if(itsRiskAssessmentSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRiskAssessmentSubsystem");
            const AlertingSubsystem* p_AlertingSubsystem = itsRiskAssessmentSubsystem->getItsAlertingSubsystem();
            if(p_AlertingSubsystem != NULL)
                {
                    itsRiskAssessmentSubsystem->__setItsAlertingSubsystem(NULL);
                }
            itsRiskAssessmentSubsystem = NULL;
        }
}

void AlertingSubsystem::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void AlertingSubsystem::__setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem) {
    itsRiskAssessmentSubsystem = p_RiskAssessmentSubsystem;
    if(p_RiskAssessmentSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRiskAssessmentSubsystem", p_RiskAssessmentSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRiskAssessmentSubsystem");
        }
}

void AlertingSubsystem::_setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem) {
    if(itsRiskAssessmentSubsystem != NULL)
        {
            itsRiskAssessmentSubsystem->__setItsAlertingSubsystem(NULL);
        }
    __setItsRiskAssessmentSubsystem(p_RiskAssessmentSubsystem);
}

void AlertingSubsystem::_clearItsRiskAssessmentSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsRiskAssessmentSubsystem");
    itsRiskAssessmentSubsystem = NULL;
}

void AlertingSubsystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus AlertingSubsystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(StartAS_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(StartAlertGen_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.CollectData");
                    NOTIFY_STATE_ENTERED("ROOT.AlertGeneration");
                    rootState_subState = AlertGeneration;
                    rootState_active = AlertGeneration;
                    rootState_timeout = scheduleTimeout(3000, "ROOT.AlertGeneration");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State AlertGeneration
        case AlertGeneration:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.AlertGeneration");
                            NOTIFY_STATE_ENTERED("ROOT.CollectData");
                            rootState_subState = CollectData;
                            rootState_active = CollectData;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlertingSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("SirenPASystem", x2String(myReal->SirenPASystem));
    aomsAttributes->addAttribute("BroadcastMedia", x2String(myReal->BroadcastMedia));
    aomsAttributes->addAttribute("MobilePushService", x2String(myReal->MobilePushService));
    aomsAttributes->addAttribute("GovAlertNetwork", x2String(myReal->GovAlertNetwork));
    aomsAttributes->addAttribute("TelecomSMSNetwork", x2String(myReal->TelecomSMSNetwork));
    aomsAttributes->addAttribute("EmergencyAuthorityOperator", x2String(myReal->EmergencyAuthorityOperator));
    aomsAttributes->addAttribute("Maintainer", x2String(myReal->Maintainer));
    aomsAttributes->addAttribute("Researcher", x2String(myReal->Researcher));
    aomsAttributes->addAttribute("Alert", x2String(myReal->Alert));
    aomsAttributes->addAttribute("Prediction", x2String(myReal->Prediction));
}

void OMAnimatedAlertingSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRiskAssessmentSubsystem", false, true);
    if(myReal->itsRiskAssessmentSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsRiskAssessmentSubsystem);
        }
}

void OMAnimatedAlertingSubsystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AlertingSubsystem::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case AlertingSubsystem::CollectData:
        {
            CollectData_serializeStates(aomsState);
        }
        break;
        case AlertingSubsystem::AlertGeneration:
        {
            AlertGeneration_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAlertingSubsystem::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedAlertingSubsystem::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}

void OMAnimatedAlertingSubsystem::AlertGeneration_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertGeneration");
}
//#]

IMPLEMENT_REACTIVE_META_P(AlertingSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedAlertingSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.cpp
*********************************************************************/
