/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertingSubsystem
//!	Generated Date	: Wed, 31, Dec 2025  
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

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_AlertMessage)

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_CurrSTNMessage)

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_HealthStatusMessage)

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString_SERIALIZE_RET_VAL

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_PredMessage)

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString_SERIALIZE_RET_VAL
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

AlertingSubsystem::AlertingSubsystem(IOxfActive* const theActiveContext) : OMReactive(), Alert(false), AlertMessage(""), BroadcastMedia(false), EmergencyAuthorityOperator(false), GovAlertNetwork(false), Maintainer(false), Manual_Verification(false), MobilePushService(false), Prediction(false), Researcher(false), SirenPASystem(false), TelecomSMSNetwork(false), itsRiskAssessmentSubsystem(NULL) {
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

const RhpString AlertingSubsystem::getAlertMessage(void) const {
    return AlertMessage;
}

void AlertingSubsystem::setAlertMessage(const RhpString p_AlertMessage) {
    AlertMessage = p_AlertMessage;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getBroadcastMedia(void) const {
    return BroadcastMedia;
}

void AlertingSubsystem::setBroadcastMedia(const bool p_BroadcastMedia) {
    BroadcastMedia = p_BroadcastMedia;
    NOTIFY_SET_OPERATION;
}

const RhpString AlertingSubsystem::getCurrSTNMessage(void) const {
    return CurrSTNMessage;
}

void AlertingSubsystem::setCurrSTNMessage(const RhpString p_CurrSTNMessage) {
    CurrSTNMessage = p_CurrSTNMessage;
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

const RhpString AlertingSubsystem::getHealthStatusMessage(void) const {
    return HealthStatusMessage;
}

void AlertingSubsystem::setHealthStatusMessage(const RhpString p_HealthStatusMessage) {
    HealthStatusMessage = p_HealthStatusMessage;
    NOTIFY_SET_OPERATION;
}

const int AlertingSubsystem::getLedCase(void) const {
    return LedCase;
}

void AlertingSubsystem::setLedCase(const int p_LedCase) {
    LedCase = p_LedCase;
}

const bool AlertingSubsystem::getMaintainer(void) const {
    return Maintainer;
}

void AlertingSubsystem::setMaintainer(const bool p_Maintainer) {
    Maintainer = p_Maintainer;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getManual_Verification(void) const {
    return Manual_Verification;
}

void AlertingSubsystem::setManual_Verification(const bool p_Manual_Verification) {
    Manual_Verification = p_Manual_Verification;
    NOTIFY_SET_OPERATION;
}

const bool AlertingSubsystem::getMobilePushService(void) const {
    return MobilePushService;
}

void AlertingSubsystem::setMobilePushService(const bool p_MobilePushService) {
    MobilePushService = p_MobilePushService;
    NOTIFY_SET_OPERATION;
}

const RhpString AlertingSubsystem::getPredMessage(void) const {
    return PredMessage;
}

void AlertingSubsystem::setPredMessage(const RhpString p_PredMessage) {
    PredMessage = p_PredMessage;
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
    state_4_subState = OMNonState;
    state_4_active = OMNonState;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
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

void AlertingSubsystem::AlertGeneration_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.AlertGeneration");
    rootState_subState = AlertGeneration;
    rootState_active = AlertGeneration;
    //#[ state AlertGeneration.(Entry) 
    /*switch(Ledcase):
    {
    
    }*/
    //#]
    rootState_timeout = scheduleTimeout(3000, "ROOT.AlertGeneration");
    state_3_entDef();
    NOTIFY_STATE_ENTERED("ROOT.AlertGeneration.state_4");
}

void AlertingSubsystem::AlertGeneration_exit(void) {
    state_3_exit();
    state_4_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.AlertGeneration.state_4");
    cancel(rootState_timeout);
    NOTIFY_STATE_EXITED("ROOT.AlertGeneration");
}

IOxfReactive::TakeEventStatus AlertingSubsystem::AlertGeneration_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_3
        omComponentStatus = state_3_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(AlertGeneration) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(res == eventNotConsumed)
        {
            res = AlertGeneration_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus AlertingSubsystem::AlertGeneration_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    AlertGeneration_exit();
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus AlertingSubsystem::state_4_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

void AlertingSubsystem::state_3_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.AlertGeneration.state_3");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.AlertGeneration.state_3.AlertSeismic");
    state_3_subState = AlertSeismic;
    state_3_active = AlertSeismic;
    //#[ state AlertGeneration.state_3.AlertSeismic.(Entry) 
    switch (LedCase)
    {
        case 1:
            SirenPASystem = false;
            BroadcastMedia = false;
            MobilePushService = false;
            GovAlertNetwork = false;
            TelecomSMSNetwork = false;
            EmergencyAuthorityOperator = true;
            Maintainer = true;
            Researcher = true;
            break;
    
        case 2:
            SirenPASystem = true;
            BroadcastMedia = true;
            MobilePushService = true;
            GovAlertNetwork = true;
            TelecomSMSNetwork = true;
            EmergencyAuthorityOperator = true;
            Maintainer = false;
            Researcher = false;
            break;
    
        case 3:
            SirenPASystem = false;
            BroadcastMedia = false;
            MobilePushService = false;
            GovAlertNetwork = false;
            TelecomSMSNetwork = false;
            EmergencyAuthorityOperator = true;
            Maintainer = false;
            Researcher = false;
            break;
    
        default:
            SirenPASystem = false;
            BroadcastMedia = false;
            MobilePushService = false;
            GovAlertNetwork = false;
            TelecomSMSNetwork = false;
            EmergencyAuthorityOperator = true;
            Maintainer = false;
            Researcher = false;
            break; // optional but nice
    }
    
    //#]
    NOTIFY_TRANSITION_TERMINATED("4");
}

void AlertingSubsystem::state_3_exit(void) {
    // State AlertSeismic
    if(state_3_subState == AlertSeismic)
        {
            NOTIFY_STATE_EXITED("ROOT.AlertGeneration.state_3.AlertSeismic");
        }
    state_3_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.AlertGeneration.state_3");
}

IOxfReactive::TakeEventStatus AlertingSubsystem::state_3_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State AlertSeismic
    
    return res;
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
                    AlertGeneration_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evPushSeismicAlert_SMSWTD_Architecture_id) == 1)
                    {
                        OMSETPARAMS(evPushSeismicAlert);
                        NOTIFY_TRANSITION_STARTED("5");
                        //#[ transition 5 
                        Alert = params->getAlert();
                        AlertMessage = params->getAlertMessage();
                        CurrSTNMessage = params->getCurrSTNMessage();
                        HealthStatusMessage = params->getHealthStatusMessage();
                        LedCase = params->getLedCase();
                        Manual_Verification = params->getManual_Verification();
                        PredMessage = params->getPredMessage();
                        Prediction = params->getPrediction();
                        GEN(StartAlertGen());
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("5");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State AlertGeneration
        case AlertGeneration:
        {
            res = AlertGeneration_processEvent();
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
    aomsAttributes->addAttribute("LedCase", x2String(myReal->LedCase));
    aomsAttributes->addAttribute("HealthStatusMessage", x2String(myReal->HealthStatusMessage));
    aomsAttributes->addAttribute("Manual_Verification", x2String(myReal->Manual_Verification));
    aomsAttributes->addAttribute("CurrSTNMessage", x2String(myReal->CurrSTNMessage));
    aomsAttributes->addAttribute("AlertMessage", x2String(myReal->AlertMessage));
    aomsAttributes->addAttribute("PredMessage", x2String(myReal->PredMessage));
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
    state_3_serializeStates(aomsState);
    state_4_serializeStates(aomsState);
}

void OMAnimatedAlertingSubsystem::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertGeneration.state_4");
}

void OMAnimatedAlertingSubsystem::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertGeneration.state_3");
    if(myReal->state_3_subState == AlertingSubsystem::AlertSeismic)
        {
            AlertSeismic_serializeStates(aomsState);
        }
}

void OMAnimatedAlertingSubsystem::AlertSeismic_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AlertGeneration.state_3.AlertSeismic");
}
//#]

IMPLEMENT_REACTIVE_META_P(AlertingSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedAlertingSubsystem)

IMPLEMENT_META_OP(OMAnimatedAlertingSubsystem, SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString, "setAlertMessage", FALSE, "setAlertMessage(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString, AlertingSubsystem, setAlertMessage(p_AlertMessage), NO_OP())

IMPLEMENT_META_OP(OMAnimatedAlertingSubsystem, SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString, "setCurrSTNMessage", FALSE, "setCurrSTNMessage(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString, AlertingSubsystem, setCurrSTNMessage(p_CurrSTNMessage), NO_OP())

IMPLEMENT_META_OP(OMAnimatedAlertingSubsystem, SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString, "setHealthStatusMessage", FALSE, "setHealthStatusMessage(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString, AlertingSubsystem, setHealthStatusMessage(p_HealthStatusMessage), NO_OP())

IMPLEMENT_META_OP(OMAnimatedAlertingSubsystem, SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString, "setPredMessage", FALSE, "setPredMessage(RhpString)", 1)

IMPLEMENT_OP_CALL(SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString, AlertingSubsystem, setPredMessage(p_PredMessage), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.cpp
*********************************************************************/
