/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensingInterfaceSubsystem
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensingInterfaceSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SensingInterfaceSubsystem.h"
//## link itsDataIngestionSubsystem
#include "DataIngestionSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_SensingInterfaceSubsystem_SensingInterfaceSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class SensingInterfaceSubsystem
//#[ ignore
SensingInterfaceSubsystem::port_2_C::port_2_C(void) : OMDefaultMulticastReactivePort(), _p_(0) {
}

SensingInterfaceSubsystem::port_2_C::~port_2_C(void) {
}

void SensingInterfaceSubsystem::port_2_C::connectSensingInterfaceSubsystem(SensingInterfaceSubsystem* part) {
    InBound.addItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

SensingInterfaceSubsystem::SensingInterfaceSubsystem(IOxfActive* const theActiveContext) : OMReactive(), Prev_STN_Final({-1,-1,-1,-1,false}), itsDataIngestionSubsystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SensingInterfaceSubsystem, SensingInterfaceSubsystem(), 0, SMSWTD_Architecture_SensingInterfaceSubsystem_SensingInterfaceSubsystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

SensingInterfaceSubsystem::~SensingInterfaceSubsystem(void) {
    NOTIFY_DESTRUCTOR(~SensingInterfaceSubsystem, true);
    cleanUpRelations();
    cancelTimeouts();
}

SensingInterfaceSubsystem::port_2_C* SensingInterfaceSubsystem::getPort_2(void) const {
    return (SensingInterfaceSubsystem::port_2_C*) &port_2;
}

SensingInterfaceSubsystem::port_2_C* SensingInterfaceSubsystem::get_port_2(void) const {
    return (SensingInterfaceSubsystem::port_2_C*) &port_2;
}

const FloatArray SensingInterfaceSubsystem::getCurrEQD(void) const {
    return CurrEQD;
}

void SensingInterfaceSubsystem::setCurrEQD(const FloatArray p_CurrEQD) {
    CurrEQD = p_CurrEQD;
}

const FloatArray SensingInterfaceSubsystem::getCurrEQM(void) const {
    return CurrEQM;
}

void SensingInterfaceSubsystem::setCurrEQM(const FloatArray p_CurrEQM) {
    CurrEQM = p_CurrEQM;
}

const FloatArray SensingInterfaceSubsystem::getCurrHealth(void) const {
    return CurrHealth;
}

void SensingInterfaceSubsystem::setCurrHealth(const FloatArray p_CurrHealth) {
    CurrHealth = p_CurrHealth;
}

const FloatArray SensingInterfaceSubsystem::getCurrSCM(void) const {
    return CurrSCM;
}

void SensingInterfaceSubsystem::setCurrSCM(const FloatArray p_CurrSCM) {
    CurrSCM = p_CurrSCM;
}

const FloatArray SensingInterfaceSubsystem::getCurrWPM(void) const {
    return CurrWPM;
}

void SensingInterfaceSubsystem::setCurrWPM(const FloatArray p_CurrWPM) {
    CurrWPM = p_CurrWPM;
}

const STNData SensingInterfaceSubsystem::getCurr_STN(void) const {
    return Curr_STN;
}

void SensingInterfaceSubsystem::setCurr_STN(const STNData p_Curr_STN) {
    Curr_STN = p_Curr_STN;
}

const STNData SensingInterfaceSubsystem::getPrev_STN_Final(void) const {
    return Prev_STN_Final;
}

void SensingInterfaceSubsystem::setPrev_STN_Final(const STNData p_Prev_STN_Final) {
    Prev_STN_Final = p_Prev_STN_Final;
}

const int SensingInterfaceSubsystem::getSTNStatus(void) const {
    return STNStatus;
}

void SensingInterfaceSubsystem::setSTNStatus(const int p_STNStatus) {
    STNStatus = p_STNStatus;
}

const DataIngestionSubsystem* SensingInterfaceSubsystem::getItsDataIngestionSubsystem(void) const {
    return itsDataIngestionSubsystem;
}

void SensingInterfaceSubsystem::setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    if(p_DataIngestionSubsystem != NULL)
        {
            p_DataIngestionSubsystem->_setItsSensingInterfaceSubsystem(this);
        }
    _setItsDataIngestionSubsystem(p_DataIngestionSubsystem);
}

bool SensingInterfaceSubsystem::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool SensingInterfaceSubsystem::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SensingInterfaceSubsystem::initRelations(void) {
    if (get_port_2() != NULL) {
        get_port_2()->connectSensingInterfaceSubsystem(this);
    }
}

void SensingInterfaceSubsystem::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
    state_5_subState = OMNonState;
    state_5_active = OMNonState;
    state_4_subState = OMNonState;
    state_4_active = OMNonState;
}

void SensingInterfaceSubsystem::cleanUpRelations(void) {
    if(itsDataIngestionSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
            const SensingInterfaceSubsystem* p_SensingInterfaceSubsystem = itsDataIngestionSubsystem->getItsSensingInterfaceSubsystem();
            if(p_SensingInterfaceSubsystem != NULL)
                {
                    itsDataIngestionSubsystem->__setItsSensingInterfaceSubsystem(NULL);
                }
            itsDataIngestionSubsystem = NULL;
        }
}

void SensingInterfaceSubsystem::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void SensingInterfaceSubsystem::__setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    itsDataIngestionSubsystem = p_DataIngestionSubsystem;
    if(p_DataIngestionSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataIngestionSubsystem", p_DataIngestionSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
        }
}

void SensingInterfaceSubsystem::_setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    if(itsDataIngestionSubsystem != NULL)
        {
            itsDataIngestionSubsystem->__setItsSensingInterfaceSubsystem(NULL);
        }
    __setItsDataIngestionSubsystem(p_DataIngestionSubsystem);
}

void SensingInterfaceSubsystem::_clearItsDataIngestionSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
    itsDataIngestionSubsystem = NULL;
}

void SensingInterfaceSubsystem::CheckDataStatus_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.CheckDataStatus");
    rootState_subState = CheckDataStatus;
    rootState_active = CheckDataStatus;
    rootState_timeout = scheduleTimeout(3000, "ROOT.CheckDataStatus");
    state_4_entDef();
    state_5_entDef();
}

void SensingInterfaceSubsystem::CheckDataStatus_exit(void) {
    state_4_exit();
    state_5_exit();
    cancel(rootState_timeout);
    NOTIFY_STATE_EXITED("ROOT.CheckDataStatus");
}

IOxfReactive::TakeEventStatus SensingInterfaceSubsystem::CheckDataStatus_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_4
        omComponentStatus = state_4_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(CheckDataStatus) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_5
            omComponentStatus = state_5_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = CheckDataStatus_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus SensingInterfaceSubsystem::CheckDataStatus_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    CheckDataStatus_exit();
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    
                    
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void SensingInterfaceSubsystem::state_5_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.CheckDataStatus.state_5");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.CheckDataStatus.state_5.checkMetOcean");
    state_5_subState = checkMetOcean;
    state_5_active = checkMetOcean;
    //#[ state CheckDataStatus.state_5.checkMetOcean.(Entry) 
    //std::cout<<"Hello i am in status metOcean\n";
    //#]
    NOTIFY_TRANSITION_TERMINATED("4");
}

void SensingInterfaceSubsystem::state_5_exit(void) {
    // State checkMetOcean
    if(state_5_subState == checkMetOcean)
        {
            NOTIFY_STATE_EXITED("ROOT.CheckDataStatus.state_5.checkMetOcean");
        }
    state_5_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.CheckDataStatus.state_5");
}

IOxfReactive::TakeEventStatus SensingInterfaceSubsystem::state_5_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State checkMetOcean
    
    return res;
}

void SensingInterfaceSubsystem::state_4_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.CheckDataStatus.state_4");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.CheckDataStatus.state_4.StatusSeismic");
    state_4_subState = StatusSeismic;
    state_4_active = StatusSeismic;
    //#[ state CheckDataStatus.state_4.StatusSeismic.(Entry) 
    if(STNStatus == 0)
    {
    for(int i = 5; i >=0; i--)
    {
     if (CurrHealth.data[i]> 0.85)
     {
       Prev_STN_Final = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],true};	
       Curr_STN = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],true};	
       break;
     }
    }
    }
    else if(STNStatus == -1)
    {
    Curr_STN = Prev_STN_Final ;
    }
    else
    {
    for(int i = 5; i >=0; i--)
    {
     if (CurrHealth.data[i]> 0.85)
     {
       Prev_STN_Final = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],false};
       Curr_STN = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],false};
       break;
     }
    }
    }
    std::cout<<"I AM IN STATUSSEISMIC AND HERE IS ALL THE DATA"<<std::endl;
    std::cout<<Curr_STN.EQM<<" IS EQM"<<std::endl;
    std::cout<<Curr_STN.EQD<<" IS EQD"<<std::endl;
    std::cout<<Curr_STN.SCM<<" IS SCM"<<std::endl;
    std::cout<<Curr_STN.WPM<<" IS WPM"<<std::endl;
    std::cout<<Curr_STN.DataC<<" IS DataC"<<std::endl;
    //#]
    NOTIFY_TRANSITION_TERMINATED("3");
}

void SensingInterfaceSubsystem::state_4_exit(void) {
    // State StatusSeismic
    if(state_4_subState == StatusSeismic)
        {
            NOTIFY_STATE_EXITED("ROOT.CheckDataStatus.state_4.StatusSeismic");
        }
    state_4_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.CheckDataStatus.state_4");
}

IOxfReactive::TakeEventStatus SensingInterfaceSubsystem::state_4_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State StatusSeismic
    if(state_4_active == StatusSeismic)
        {
            if(IS_EVENT_TYPE_OF(evCheckData_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    //#[ transition 7 
                    if(STNStatus == 0)
                    {
                    for(int i = 5; i >=0; i--)
                    {
                     if (CurrHealth.data[i]> 0.85)
                     {
                       Prev_STN_Final = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],true};	
                       Curr_STN = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],true};	
                       break;
                     }
                    }
                    }
                    else if(STNStatus == -1)
                    {
                    Curr_STN = Prev_STN_Final ;
                    }
                    else
                    {
                    for(int i = 5; i >=0; i--)
                    {
                     if (CurrHealth.data[i]> 0.85)
                     {
                       Prev_STN_Final = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],false};
                       Curr_STN = {CurrEQM.data[i],CurrEQD.data[i],CurrSCM.data[i],CurrWPM.data[i],false};
                       break;
                     }
                    }
                    }
                    std::cout<<"I AM IN STATUSSEISMIC AND HERE IS ALL THE DATA"<<std::endl;
                    std::cout<<Curr_STN.EQM<<" IS EQM"<<std::endl;
                    std::cout<<Curr_STN.EQD<<" IS EQD"<<std::endl;
                    std::cout<<Curr_STN.SCM<<" IS SCM"<<std::endl;
                    std::cout<<Curr_STN.WPM<<" IS WPM"<<std::endl;
                    std::cout<<Curr_STN.DataC<<" IS DataC"<<std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void SensingInterfaceSubsystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SensingInterfaceSubsystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evStartDataCollector_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state Idle.(Exit) 
                    //GEN(evStartDataSend(), itsSeismicTsunamiNetwork);
                    
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.CollectData");
                    rootState_subState = CollectData;
                    rootState_active = CollectData;
                    //#[ state CollectData.(Entry) 
                    
                    
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CollectData
        case CollectData:
        {
            if(IS_EVENT_TYPE_OF(evCheckData_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.CollectData");
                    CheckDataStatus_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evSeismicUpdate_SMSWTD_Architecture_id) == 1)
                    {
                        OMSETPARAMS(evSeismicUpdate);
                        NOTIFY_TRANSITION_STARTED("6");
                        //#[ transition 6 
                        CurrEQD = params->getCurrEQD();
                        CurrEQM = params->getCurrEQM();
                        CurrSCM = params->getCurrSCM();
                        CurrWPM = params->getCurrWPM();
                        STNStatus = params->getSTNStatus();
                        CurrHealth = params->getCurrHealth();
                        GEN(evCheckData());
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("6");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State CheckDataStatus
        case CheckDataStatus:
        {
            res = CheckDataStatus_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensingInterfaceSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CurrEQD", UNKNOWN2STRING(myReal->CurrEQD));
    aomsAttributes->addAttribute("CurrEQM", UNKNOWN2STRING(myReal->CurrEQM));
    aomsAttributes->addAttribute("CurrSCM", UNKNOWN2STRING(myReal->CurrSCM));
    aomsAttributes->addAttribute("CurrWPM", UNKNOWN2STRING(myReal->CurrWPM));
    aomsAttributes->addAttribute("STNStatus", x2String(myReal->STNStatus));
    aomsAttributes->addAttribute("CurrHealth", UNKNOWN2STRING(myReal->CurrHealth));
    aomsAttributes->addAttribute("Prev_STN_Final", UNKNOWN2STRING(myReal->Prev_STN_Final));
    aomsAttributes->addAttribute("Curr_STN", UNKNOWN2STRING(myReal->Curr_STN));
}

void OMAnimatedSensingInterfaceSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataIngestionSubsystem", false, true);
    if(myReal->itsDataIngestionSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataIngestionSubsystem);
        }
}

void OMAnimatedSensingInterfaceSubsystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SensingInterfaceSubsystem::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case SensingInterfaceSubsystem::CollectData:
        {
            CollectData_serializeStates(aomsState);
        }
        break;
        case SensingInterfaceSubsystem::CheckDataStatus:
        {
            CheckDataStatus_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSensingInterfaceSubsystem::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedSensingInterfaceSubsystem::CollectData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CollectData");
}

void OMAnimatedSensingInterfaceSubsystem::CheckDataStatus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckDataStatus");
    state_4_serializeStates(aomsState);
    state_5_serializeStates(aomsState);
}

void OMAnimatedSensingInterfaceSubsystem::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckDataStatus.state_5");
    if(myReal->state_5_subState == SensingInterfaceSubsystem::checkMetOcean)
        {
            checkMetOcean_serializeStates(aomsState);
        }
}

void OMAnimatedSensingInterfaceSubsystem::checkMetOcean_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckDataStatus.state_5.checkMetOcean");
}

void OMAnimatedSensingInterfaceSubsystem::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckDataStatus.state_4");
    if(myReal->state_4_subState == SensingInterfaceSubsystem::StatusSeismic)
        {
            StatusSeismic_serializeStates(aomsState);
        }
}

void OMAnimatedSensingInterfaceSubsystem::StatusSeismic_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckDataStatus.state_4.StatusSeismic");
}
//#]

IMPLEMENT_REACTIVE_META_P(SensingInterfaceSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedSensingInterfaceSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensingInterfaceSubsystem.cpp
*********************************************************************/
