/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskAssessmentSubsystem
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "RiskAssessmentSubsystem.h"
//## link itsAlertingSubsystem
#include "AlertingSubsystem.h"
//## link itsSensingInterfaceSubsystem
#include "SensingInterfaceSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_RiskAssessmentSubsystem_RiskAssessmentSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class RiskAssessmentSubsystem
//#[ ignore
RiskAssessmentSubsystem::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

RiskAssessmentSubsystem::in_C::~in_C(void) {
}

void RiskAssessmentSubsystem::in_C::connectRiskAssessmentSubsystem(RiskAssessmentSubsystem* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

RiskAssessmentSubsystem::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

RiskAssessmentSubsystem::out_C::~out_C(void) {
}

void RiskAssessmentSubsystem::out_C::connectRiskAssessmentSubsystem(RiskAssessmentSubsystem* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

RiskAssessmentSubsystem::RiskAssessmentSubsystem(IOxfActive* const theActiveContext) : OMReactive(), itsAlertingSubsystem(NULL), itsSensingInterfaceSubsystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(RiskAssessmentSubsystem, RiskAssessmentSubsystem(), 0, SMSWTD_Architecture_RiskAssessmentSubsystem_RiskAssessmentSubsystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

RiskAssessmentSubsystem::~RiskAssessmentSubsystem(void) {
    NOTIFY_DESTRUCTOR(~RiskAssessmentSubsystem, true);
    cleanUpRelations();
    cancelTimeouts();
}

RiskAssessmentSubsystem::in_C* RiskAssessmentSubsystem::getIn(void) const {
    return (RiskAssessmentSubsystem::in_C*) &in;
}

RiskAssessmentSubsystem::in_C* RiskAssessmentSubsystem::get_in(void) const {
    return (RiskAssessmentSubsystem::in_C*) &in;
}

RiskAssessmentSubsystem::out_C* RiskAssessmentSubsystem::getOut(void) const {
    return (RiskAssessmentSubsystem::out_C*) &out;
}

RiskAssessmentSubsystem::out_C* RiskAssessmentSubsystem::get_out(void) const {
    return (RiskAssessmentSubsystem::out_C*) &out;
}

const AirData RiskAssessmentSubsystem::getCurrPlaneDataFinal(void) const {
    return CurrPlaneDataFinal;
}

void RiskAssessmentSubsystem::setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal) {
    CurrPlaneDataFinal = p_CurrPlaneDataFinal;
}

const SatData RiskAssessmentSubsystem::getCurrSatDataFinal(void) const {
    return CurrSatDataFinal;
}

void RiskAssessmentSubsystem::setCurrSatDataFinal(const SatData p_CurrSatDataFinal) {
    CurrSatDataFinal = p_CurrSatDataFinal;
}

const STNData RiskAssessmentSubsystem::getCurr_STN(void) const {
    return Curr_STN;
}

void RiskAssessmentSubsystem::setCurr_STN(const STNData p_Curr_STN) {
    Curr_STN = p_Curr_STN;
}

const bool RiskAssessmentSubsystem::getReceivedMetOcean(void) const {
    return ReceivedMetOcean;
}

void RiskAssessmentSubsystem::setReceivedMetOcean(const bool p_ReceivedMetOcean) {
    ReceivedMetOcean = p_ReceivedMetOcean;
}

const bool RiskAssessmentSubsystem::getReceivedSTN(void) const {
    return ReceivedSTN;
}

void RiskAssessmentSubsystem::setReceivedSTN(const bool p_ReceivedSTN) {
    ReceivedSTN = p_ReceivedSTN;
}

const AlertingSubsystem* RiskAssessmentSubsystem::getItsAlertingSubsystem(void) const {
    return itsAlertingSubsystem;
}

void RiskAssessmentSubsystem::setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem) {
    if(p_AlertingSubsystem != NULL)
        {
            p_AlertingSubsystem->_setItsRiskAssessmentSubsystem(this);
        }
    _setItsAlertingSubsystem(p_AlertingSubsystem);
}

const SensingInterfaceSubsystem* RiskAssessmentSubsystem::getItsSensingInterfaceSubsystem(void) const {
    return itsSensingInterfaceSubsystem;
}

void RiskAssessmentSubsystem::setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    if(p_SensingInterfaceSubsystem != NULL)
        {
            p_SensingInterfaceSubsystem->_setItsRiskAssessmentSubsystem(this);
        }
    _setItsSensingInterfaceSubsystem(p_SensingInterfaceSubsystem);
}

bool RiskAssessmentSubsystem::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool RiskAssessmentSubsystem::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void RiskAssessmentSubsystem::initRelations(void) {
    if (get_in() != NULL) {
        get_in()->connectRiskAssessmentSubsystem(this);
    }
    if (get_out() != NULL) {
        get_out()->connectRiskAssessmentSubsystem(this);
    }
}

void RiskAssessmentSubsystem::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void RiskAssessmentSubsystem::cleanUpRelations(void) {
    if(itsAlertingSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlertingSubsystem");
            const RiskAssessmentSubsystem* p_RiskAssessmentSubsystem = itsAlertingSubsystem->getItsRiskAssessmentSubsystem();
            if(p_RiskAssessmentSubsystem != NULL)
                {
                    itsAlertingSubsystem->__setItsRiskAssessmentSubsystem(NULL);
                }
            itsAlertingSubsystem = NULL;
        }
    if(itsSensingInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
            const RiskAssessmentSubsystem* p_RiskAssessmentSubsystem = itsSensingInterfaceSubsystem->getItsRiskAssessmentSubsystem();
            if(p_RiskAssessmentSubsystem != NULL)
                {
                    itsSensingInterfaceSubsystem->__setItsRiskAssessmentSubsystem(NULL);
                }
            itsSensingInterfaceSubsystem = NULL;
        }
}

void RiskAssessmentSubsystem::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void RiskAssessmentSubsystem::__setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem) {
    itsAlertingSubsystem = p_AlertingSubsystem;
    if(p_AlertingSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlertingSubsystem", p_AlertingSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlertingSubsystem");
        }
}

void RiskAssessmentSubsystem::_setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem) {
    if(itsAlertingSubsystem != NULL)
        {
            itsAlertingSubsystem->__setItsRiskAssessmentSubsystem(NULL);
        }
    __setItsAlertingSubsystem(p_AlertingSubsystem);
}

void RiskAssessmentSubsystem::_clearItsAlertingSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsAlertingSubsystem");
    itsAlertingSubsystem = NULL;
}

void RiskAssessmentSubsystem::__setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    itsSensingInterfaceSubsystem = p_SensingInterfaceSubsystem;
    if(p_SensingInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensingInterfaceSubsystem", p_SensingInterfaceSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
        }
}

void RiskAssessmentSubsystem::_setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    if(itsSensingInterfaceSubsystem != NULL)
        {
            itsSensingInterfaceSubsystem->__setItsRiskAssessmentSubsystem(NULL);
        }
    __setItsSensingInterfaceSubsystem(p_SensingInterfaceSubsystem);
}

void RiskAssessmentSubsystem::_clearItsSensingInterfaceSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
    itsSensingInterfaceSubsystem = NULL;
}

void RiskAssessmentSubsystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evStartRA_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    ReceivedMetOcean = false;
                    ReceivedSTN = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(startAnalysis_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.CollectData");
                    NOTIFY_STATE_ENTERED("ROOT.Analysis");
                    rootState_subState = Analysis;
                    rootState_active = Analysis;
                    rootState_timeout = scheduleTimeout(3000, "ROOT.Analysis");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evPushMetOceanRA_SMSWTD_Architecture_id) == 1)
                    {
                        OMSETPARAMS(evPushMetOceanRA);
                        NOTIFY_TRANSITION_STARTED("3");
                        //#[ transition 3 
                        CurrPlaneDataFinal = params->getCurrPlaneDataFinal();
                        CurrSatDataFinal = params->getCurrSatDataFinal();
                        ReceivedMetOcean = true;
                        if (ReceivedMetOcean && ReceivedSTN)
                        {
                        GEN(startAnalysis());
                        }
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
                else {
                    if(IS_EVENT_TYPE_OF(evPushSeismicRA_SMSWTD_Architecture_id) == 1)
                        {
                            OMSETPARAMS(evPushSeismicRA);
                            NOTIFY_TRANSITION_STARTED("2");
                            //#[ transition 2 
                            Curr_STN = params->getCurr_STN();
                            ReceivedSTN = true;
                            if (ReceivedMetOcean && ReceivedSTN)
                            {
                            GEN(startAnalysis());
                            }
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    }
                    
                }
                
            
        }
        break;
        // State Analysis
        case Analysis:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Analysis");
                            NOTIFY_STATE_ENTERED("ROOT.CollectData");
                            rootState_subState = CollectData;
                            rootState_active = CollectData;
                            //#[ state CollectData.(Entry) 
                            ReceivedMetOcean = false;
                            ReceivedSTN = false;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
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
void OMAnimatedRiskAssessmentSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Curr_STN", UNKNOWN2STRING(myReal->Curr_STN));
    aomsAttributes->addAttribute("CurrPlaneDataFinal", UNKNOWN2STRING(myReal->CurrPlaneDataFinal));
    aomsAttributes->addAttribute("CurrSatDataFinal", UNKNOWN2STRING(myReal->CurrSatDataFinal));
    aomsAttributes->addAttribute("ReceivedSTN", x2String(myReal->ReceivedSTN));
    aomsAttributes->addAttribute("ReceivedMetOcean", x2String(myReal->ReceivedMetOcean));
}

void OMAnimatedRiskAssessmentSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlertingSubsystem", false, true);
    if(myReal->itsAlertingSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlertingSubsystem);
        }
    aomsRelations->addRelation("itsSensingInterfaceSubsystem", false, true);
    if(myReal->itsSensingInterfaceSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensingInterfaceSubsystem);
        }
}

void OMAnimatedRiskAssessmentSubsystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case RiskAssessmentSubsystem::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case RiskAssessmentSubsystem::CollectData:
        {
            CollectData_serializeStates(aomsState);
        }
        break;
        case RiskAssessmentSubsystem::Analysis:
        {
            Analysis_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedRiskAssessmentSubsystem::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedRiskAssessmentSubsystem::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}

void OMAnimatedRiskAssessmentSubsystem::Analysis_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Analysis");
}
//#]

IMPLEMENT_REACTIVE_META_P(RiskAssessmentSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedRiskAssessmentSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentSubsystem.cpp
*********************************************************************/
