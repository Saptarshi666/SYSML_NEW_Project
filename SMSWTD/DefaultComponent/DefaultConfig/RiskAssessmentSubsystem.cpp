/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskAssessmentSubsystem
//!	Generated Date	: Wed, 31, Dec 2025  
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

RiskAssessmentSubsystem::RiskAssessmentSubsystem(IOxfActive* const theActiveContext) : OMReactive(), Alert(false), AlertMessage(""), CurrSTNMessage(""), HealthStatusMessage(""), LedCase(-1), Manual_Verification(false), PredMessage(""), Prediction(false), itsAlertingSubsystem(NULL), itsSensingInterfaceSubsystem(NULL) {
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

const bool RiskAssessmentSubsystem::getAlert(void) const {
    return Alert;
}

void RiskAssessmentSubsystem::setAlert(const bool p_Alert) {
    Alert = p_Alert;
}

const RhpString RiskAssessmentSubsystem::getAlertMessage(void) const {
    return AlertMessage;
}

void RiskAssessmentSubsystem::setAlertMessage(const RhpString p_AlertMessage) {
    AlertMessage = p_AlertMessage;
}

const RhpString RiskAssessmentSubsystem::getAlertMessageMetO(void) const {
    return AlertMessageMetO;
}

void RiskAssessmentSubsystem::setAlertMessageMetO(const RhpString p_AlertMessageMetO) {
    AlertMessageMetO = p_AlertMessageMetO;
}

const bool RiskAssessmentSubsystem::getAlertMetO(void) const {
    return AlertMetO;
}

void RiskAssessmentSubsystem::setAlertMetO(const bool p_AlertMetO) {
    AlertMetO = p_AlertMetO;
}

const AirData RiskAssessmentSubsystem::getCurrPlaneDataFinal(void) const {
    return CurrPlaneDataFinal;
}

void RiskAssessmentSubsystem::setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal) {
    CurrPlaneDataFinal = p_CurrPlaneDataFinal;
}

const RhpString RiskAssessmentSubsystem::getCurrSTNMessage(void) const {
    return CurrSTNMessage;
}

void RiskAssessmentSubsystem::setCurrSTNMessage(const RhpString p_CurrSTNMessage) {
    CurrSTNMessage = p_CurrSTNMessage;
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

const bool RiskAssessmentSubsystem::getFlagPrevAir(void) const {
    return FlagPrevAir;
}

void RiskAssessmentSubsystem::setFlagPrevAir(const bool p_FlagPrevAir) {
    FlagPrevAir = p_FlagPrevAir;
}

const bool RiskAssessmentSubsystem::getFlagPrevSTN(void) const {
    return FlagPrevSTN;
}

void RiskAssessmentSubsystem::setFlagPrevSTN(const bool p_FlagPrevSTN) {
    FlagPrevSTN = p_FlagPrevSTN;
}

const int RiskAssessmentSubsystem::getFlagPrevSat(void) const {
    return FlagPrevSat;
}

void RiskAssessmentSubsystem::setFlagPrevSat(const int p_FlagPrevSat) {
    FlagPrevSat = p_FlagPrevSat;
}

const RhpString RiskAssessmentSubsystem::getHealthStatusMessage(void) const {
    return HealthStatusMessage;
}

void RiskAssessmentSubsystem::setHealthStatusMessage(const RhpString p_HealthStatusMessage) {
    HealthStatusMessage = p_HealthStatusMessage;
}

const RhpString RiskAssessmentSubsystem::getHealthStatusMessageMetO(void) const {
    return HealthStatusMessageMetO;
}

void RiskAssessmentSubsystem::setHealthStatusMessageMetO(const RhpString p_HealthStatusMessageMetO) {
    HealthStatusMessageMetO = p_HealthStatusMessageMetO;
}

const int RiskAssessmentSubsystem::getLedCase(void) const {
    return LedCase;
}

void RiskAssessmentSubsystem::setLedCase(const int p_LedCase) {
    LedCase = p_LedCase;
}

const int RiskAssessmentSubsystem::getLedCaseMetO(void) const {
    return LedCaseMetO;
}

void RiskAssessmentSubsystem::setLedCaseMetO(const int p_LedCaseMetO) {
    LedCaseMetO = p_LedCaseMetO;
}

const bool RiskAssessmentSubsystem::getManual_Verification(void) const {
    return Manual_Verification;
}

void RiskAssessmentSubsystem::setManual_Verification(const bool p_Manual_Verification) {
    Manual_Verification = p_Manual_Verification;
}

const bool RiskAssessmentSubsystem::getManual_Verification_MetO(void) const {
    return Manual_Verification_MetO;
}

void RiskAssessmentSubsystem::setManual_Verification_MetO(const bool p_Manual_Verification_MetO) {
    Manual_Verification_MetO = p_Manual_Verification_MetO;
}

const RhpString RiskAssessmentSubsystem::getPlaneDataMessage(void) const {
    return PlaneDataMessage;
}

void RiskAssessmentSubsystem::setPlaneDataMessage(const RhpString p_PlaneDataMessage) {
    PlaneDataMessage = p_PlaneDataMessage;
}

const RhpString RiskAssessmentSubsystem::getPredMessage(void) const {
    return PredMessage;
}

void RiskAssessmentSubsystem::setPredMessage(const RhpString p_PredMessage) {
    PredMessage = p_PredMessage;
}

const RhpString RiskAssessmentSubsystem::getPredMessageMetO(void) const {
    return PredMessageMetO;
}

void RiskAssessmentSubsystem::setPredMessageMetO(const RhpString p_PredMessageMetO) {
    PredMessageMetO = p_PredMessageMetO;
}

const bool RiskAssessmentSubsystem::getPrediction(void) const {
    return Prediction;
}

void RiskAssessmentSubsystem::setPrediction(const bool p_Prediction) {
    Prediction = p_Prediction;
}

const bool RiskAssessmentSubsystem::getPredictionMetO(void) const {
    return PredictionMetO;
}

void RiskAssessmentSubsystem::setPredictionMetO(const bool p_PredictionMetO) {
    PredictionMetO = p_PredictionMetO;
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

const RhpString RiskAssessmentSubsystem::getSatDataMessage(void) const {
    return SatDataMessage;
}

void RiskAssessmentSubsystem::setSatDataMessage(const RhpString p_SatDataMessage) {
    SatDataMessage = p_SatDataMessage;
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
    state_4_subState = OMNonState;
    state_4_active = OMNonState;
    state_3_subState = OMNonState;
    state_3_active = OMNonState;
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

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::CollectData_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(startAnalysis_SMSWTD_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.CollectData");
            Analysis_entDef();
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
                FlagPrevAir = params->getFlagPrevAir();
                FlagPrevSat = params->getFlagPrevSat();
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
                    FlagPrevSTN = params->getFlagPrevSTN();
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
        
    
    return res;
}

void RiskAssessmentSubsystem::Analysis_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Analysis");
    rootState_subState = Analysis;
    rootState_active = Analysis;
    rootState_timeout = scheduleTimeout(3000, "ROOT.Analysis");
    state_3_entDef();
    state_4_entDef();
}

void RiskAssessmentSubsystem::Analysis_exit(void) {
    state_3_exit();
    state_4_exit();
    cancel(rootState_timeout);
    NOTIFY_STATE_EXITED("ROOT.Analysis");
}

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::Analysis_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_3
        omComponentStatus = state_3_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(Analysis) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_4
            omComponentStatus = state_4_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Analysis_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::Analysis_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    Analysis_exit();
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
    
    return res;
}

void RiskAssessmentSubsystem::state_4_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Analysis.state_4");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Analysis.state_4.AnalyzeMetO");
    state_4_subState = AnalyzeMetO;
    state_4_active = AnalyzeMetO;
    //#[ state Analysis.state_4.AnalyzeMetO.(Entry) 
    // ********************* METOCEAN RISK ASSESSMENT SUBSYSTEM ************************
    
    // INPUT DATA:
    // CurrPlaneDataFinal : AirData
    // CurrSatDataFinal   : SatData
    // FlagPrevAir        : bool
    // FlagPrevSat        : bool
    
    
    // ========== THRESHOLDS ==========
    const double STORM_CLASS_WARNING   = 5.0;
    const double STORM_CLASS_CRITICAL  = 9.0;
    
    const double TEMP_GRAD_CRITICAL    = 8.0;   // single critical threshold
    
    const double STORM_WIND_THRESHOLD  = 25.0;
    const double LOW_PRESSURE_THRESHOLD = 980.0;
    
    const double HEATWAVE_TEMP_THRESHOLD = 38.0;
    const double HEATWAVE_HUMIDITY_THRESHOLD = 20.0;
    
    
    // ========== STEP 1: DETERMINE DATA HEALTH STATUS ==========
    int planeHealthCase = 0;
    int satHealthCase   = 0;
    
    // ---- Plane Data Health ----
    if(CurrPlaneDataFinal.FinalC == true && FlagPrevAir == true) {
        planeHealthCase = 1;   // Not possible
    }
    else if(CurrPlaneDataFinal.FinalC == false && FlagPrevAir == true) {
        planeHealthCase = 2;   // Low confidence, prev data
    }
    else if(CurrPlaneDataFinal.FinalC == true && FlagPrevAir == false) {
        planeHealthCase = 3;   // High confidence, new data
    }
    else {
        planeHealthCase = 4;   // Questionable new data
    }
    
    // ---- Satellite Data Health ----
    if(CurrSatDataFinal.FinalC == true && FlagPrevSat == true) {
        satHealthCase = 1;     // Not possible
    }
    else if(CurrSatDataFinal.FinalC == false && FlagPrevSat == true) {
        satHealthCase = 2;
    }
    else if(CurrSatDataFinal.FinalC == true && FlagPrevSat == false) {
        satHealthCase = 3;
    }
    else {
        satHealthCase = 4;
    }
    
    Manual_Verification_MetO = false;
    HealthStatusMessageMetO = "";
    LedCaseMetO = -1;
    // ========== STEP 2: MANUAL APPROVAL CHECK ==========
    if(planeHealthCase == 4 || satHealthCase == 4) {
        Manual_Verification_MetO = true;
    	LedCaseMetO = 1;
        if(planeHealthCase == 4) {
            HealthStatusMessageMetO =  "Questionable PLANE data:\n Operator approval recommended.\n\n";
        }
    
        if(satHealthCase == 4) {
            HealthStatusMessageMetO = "Questionable SATELLITE data:\n Operator approval recommended.\n\n";
        }
    }
    
    
    // ========== STEP 3: METOCEAN RISK ANALYSIS ==========
    bool decisionAlert = false;
    bool decisionPrediction = false;
    AlertMetO = false;
    AlertMessageMetO = "";
    PlaneDataMessage = "";
    SatDataMessage = "";
    PredictionMetO = false;
    PredMessageMetO = "";
    // ---------- Satellite-Based Storm Analysis ----------
    
    // Compute storm distance (km)
    double stormDistance =
        sqrt((CurrSatDataFinal.StLocX * CurrSatDataFinal.StLocX) +
             (CurrSatDataFinal.StLocY * CurrSatDataFinal.StLocY));
    
    if(stormDistance < 100.0) {
    
        if(CurrSatDataFinal.StSize >= STORM_CLASS_CRITICAL &&
           CurrSatDataFinal.TempG  >= TEMP_GRAD_CRITICAL) {
    
            decisionAlert = true;
            AlertMetO = true;
            LedCaseMetO = 2;
    		AlertMessageMetO = "Severe nearby storm detected\n";
    		char buf[1024];
    		std::snprintf(buf, sizeof(buf),
        "Storm Class = %d\n"
        "Storm Distance = %.2f km\n"
        "Satellite Data:\n"
        "  Temperature Gradient (TempG) = %.2f\n"
        "  Storm Size (StSize) = %d\n"
        "  Storm Location X (StLocX) = %.2f\n"
        "  Storm Location Y (StLocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (int)CurrSatDataFinal.StSize,
        (double)stormDistance,
        (double)CurrSatDataFinal.TempG,
        (int)CurrSatDataFinal.StSize,
        (double)CurrSatDataFinal.StLocX,
        (double)CurrSatDataFinal.StLocY,
        (double)CurrSatDataFinal.FinalC
    );
    
    SatDataMessage = buf;
        }
        else if(CurrSatDataFinal.StSize >= STORM_CLASS_WARNING &&
                CurrSatDataFinal.TempG  >= TEMP_GRAD_CRITICAL) {
    
            decisionPrediction = true;
    		PredictionMetO = true;
    		LedCaseMetO = 3;
    		PredMessageMetO = "Storm developing very close\n";
            char buf[1024];
    		std::snprintf(buf, sizeof(buf),
        "Storm Class = %d\n"
        "Storm Distance = %.2f km\n"
        "Satellite Data:\n"
        "  Temperature Gradient (TempG) = %.2f\n"
        "  Storm Size (StSize) = %d\n"
        "  Storm Location X (StLocX) = %.2f\n"
        "  Storm Location Y (StLocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (int)CurrSatDataFinal.StSize,
        (double)stormDistance,
        (double)CurrSatDataFinal.TempG,
        (int)CurrSatDataFinal.StSize,
        (double)CurrSatDataFinal.StLocX,
        (double)CurrSatDataFinal.StLocY,
        (double)CurrSatDataFinal.FinalC
    );
    
    SatDataMessage = buf;
        }
    }
    else if(stormDistance < 500.0) {
    
        if(CurrSatDataFinal.StSize >= STORM_CLASS_WARNING &&
           CurrSatDataFinal.TempG  >= TEMP_GRAD_CRITICAL) {
    
            decisionPrediction = true;
    		PredictionMetO = true;
    		LedCaseMetO = 3;
    		PredMessageMetO = "Regional storm detected\n";
            char buf[1024];
    		std::snprintf(buf, sizeof(buf),
        "Storm Class = %d\n"
        "Storm Distance = %.2f km\n"
        "Satellite Data:\n"
        "  Temperature Gradient (TempG) = %.2f\n"
        "  Storm Size (StSize) = %d\n"
        "  Storm Location X (StLocX) = %.2f\n"
        "  Storm Location Y (StLocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (int)CurrSatDataFinal.StSize,
        (double)stormDistance,
        (double)CurrSatDataFinal.TempG,
        (int)CurrSatDataFinal.StSize,
        (double)CurrSatDataFinal.StLocX,
        (double)CurrSatDataFinal.StLocY,
        (double)CurrSatDataFinal.FinalC
    );
    
    SatDataMessage = buf;
        }
    }
    
    
    // ---------- Plane-Based Weather Analysis ----------
    
    // Compute plane distance (km)
    double planeDistance =
        sqrt((CurrPlaneDataFinal.LocX * CurrPlaneDataFinal.LocX) +
             (CurrPlaneDataFinal.LocY * CurrPlaneDataFinal.LocY));
    
    if(planeDistance < 100.0) {
    
        if(CurrPlaneDataFinal.WinS >= STORM_WIND_THRESHOLD &&
           CurrPlaneDataFinal.AirP <= LOW_PRESSURE_THRESHOLD) {
    
            decisionAlert = true;
            AlertMetO = true;
            LedCaseMetO = 2;
    		AlertMessageMetO = "Severe storm conditions detected by aircraft (close range)\n";
    		char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Plane Distance = %.2f km\n"
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)planeDistance,
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;   // rhpstring assignment (same pattern as your CurrSTNMessage)
        }
        else if(CurrPlaneDataFinal.Temp >= HEATWAVE_TEMP_THRESHOLD &&
                CurrPlaneDataFinal.Humd <= HEATWAVE_HUMIDITY_THRESHOLD) {
    
            decisionAlert = true;
    		AlertMetO = true;
            LedCaseMetO = 2;
    		AlertMessageMetO ="Heat wave detected by aircraft (close range)\n";
            char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Plane Distance = %.2f km\n"
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)planeDistance,
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
        }
        else {
            char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
        }
    }
    else if(planeDistance < 250.0) {
    
        if(CurrPlaneDataFinal.WinS >= STORM_WIND_THRESHOLD &&
           CurrPlaneDataFinal.AirP <= LOW_PRESSURE_THRESHOLD) {
    
            decisionPrediction = true;
            PredictionMetO = true;
    		LedCaseMetO = 3;
    		PredMessageMetO = "Possible storm conditions detected (mid range)\n";
            char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Plane Distance = %.2f km\n"
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)planeDistance,
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
        }
        else if(CurrPlaneDataFinal.Temp >= HEATWAVE_TEMP_THRESHOLD &&
                CurrPlaneDataFinal.Humd <= HEATWAVE_HUMIDITY_THRESHOLD) {
    
            decisionPrediction = true;
    		PredictionMetO = true;
    		LedCaseMetO = 3;
    		PredMessageMetO = "Possible heat wave developing (mid range)\n";
            char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
        }
        else {
            char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
        }
    }
    else {
        // Too far away – informational only
        char buf[1024];
    
    std::snprintf(buf, sizeof(buf),
        "Aircraft Data:\n"
        "  Temperature (Temp) = %.2f\n"
        "  Humidity (Humd) = %.2f\n"
        "  Air Pressure (AirP) = %.2f\n"
        "  Wind Speed (WinS) = %.2f\n"
        "  Measurement Certainty (MesC) = %.2f\n"
        "  Location X (LocX) = %.2f\n"
        "  Location Y (LocY) = %.2f\n"
        "  Final Certainty = %.2f\n",
        (double)CurrPlaneDataFinal.Temp,
        (double)CurrPlaneDataFinal.Humd,
        (double)CurrPlaneDataFinal.AirP,
        (double)CurrPlaneDataFinal.WinS,
        (double)CurrPlaneDataFinal.MesC,
        (double)CurrPlaneDataFinal.LocX,
        (double)CurrPlaneDataFinal.LocY,
        (double)CurrPlaneDataFinal.FinalC
    );
    
    PlaneDataMessage = buf;
    }
    
    
    // ========== STEP 4: FINAL DECISION ==========
    if((decisionAlert || decisionPrediction) &&
       (planeHealthCase == 4 || satHealthCase == 4)) {
    	Manual_Verification_MetO = true;
    	LedCaseMetO = 4;
    }
    OUT_PORT(out)->GEN(evPushMetOceanAlert (Manual_Verification_MetO,HealthStatusMessageMetO, AlertMetO, LedCaseMetO, AlertMessageMetO,PlaneDataMessage,SatDataMessage,PredictionMetO,PredMessageMetO));
    std::cout << "MetOcean risk assessment complete.\n\n";
    
    //#]
    NOTIFY_TRANSITION_TERMINATED("7");
}

void RiskAssessmentSubsystem::state_4_exit(void) {
    // State AnalyzeMetO
    if(state_4_subState == AnalyzeMetO)
        {
            NOTIFY_STATE_EXITED("ROOT.Analysis.state_4.AnalyzeMetO");
        }
    state_4_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Analysis.state_4");
}

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::state_4_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State AnalyzeMetO
    
    return res;
}

void RiskAssessmentSubsystem::state_3_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Analysis.state_3");
    NOTIFY_TRANSITION_STARTED("6");
    NOTIFY_STATE_ENTERED("ROOT.Analysis.state_3.AnalyzeSeismic");
    state_3_subState = AnalyzeSeismic;
    state_3_active = AnalyzeSeismic;
    //#[ state Analysis.state_3.AnalyzeSeismic.(Entry) 
    // Risk Assessment Code for the Risk Assessment Block
    // ========== DEFINE THRESHOLDS ==========
    const double CRITICAL_EQM = 4.0;      // Critical earthquake magnitude
    const double CRITICAL_WPM = 1;      // Critical water pressure change
    const double WARNING_EQM = 10.0;       // Warning earthquake magnitude
    const double WARNING_WPM = 10.0;       // Warning water pressure
    const double WARNING_SCM = 1.4;       // Warning slow crustal movement
     
    // ========== STEP 1: DETERMINE DATA HEALTH STATUS ==========
    int dataHealthCase = 0;
    char buf[512];
    if(Curr_STN.DataC == true && FlagPrevSTN == true) {
        dataHealthCase = 1;
    } 
    else if(Curr_STN.DataC == false && FlagPrevSTN == true) {
        dataHealthCase = 2;
    }
    else if(Curr_STN.DataC == true && FlagPrevSTN == false) {
        dataHealthCase = 3;
    }
    else if(Curr_STN.DataC == false && FlagPrevSTN == false) {
        dataHealthCase = 4;
    }
    HealthStatusMessage = "";
    Manual_Verification = false;
    CurrSTNMessage = ""; 
    Alert = false;
    AlertMessage = "";
    Prediction = false;
    PredMessage = "";
    LedCase = -1;
    // Print data health status
    switch(dataHealthCase) {
        case 1:
            HealthStatusMessage =  "Case 1: System fault or unknown status. Using PREVIOUS data.\n";
            break;
        case 2:
            HealthStatusMessage =  "Case 2: System operational but LOW confidence. Using PREVIOUS data.\n";
            break;
        case 3:
            HealthStatusMessage =  "Case 3: System operational with HIGH confidence. Using NEW data.\n";
            break;
        case 4:
            HealthStatusMessage = "Case 4: System status UNKNOWN but HIGH confidence data received. WARNING: Data reliability questionable!\n";
            break;
        default:
            HealthStatusMessage = "ERROR: Unknown data health case!\n";
            break;
    }
     
    // ========== STEP 2: PROCESS DATA AND MAKE DECISION ==========
     
    if(dataHealthCase == 4) {
        // Special handling for Case 4 - Request manual approval
        Manual_Verification = true;
        LedCase = 1;
        char buf[256];
    std::snprintf(buf, sizeof(buf),
        "Station Data:\n"
        "  EQM = %f\n"
        "  EQD = %f\n"
        "  SCM = %f\n"
        "  WPM = %f\n"
        "  DataC = %s",
        Curr_STN.EQM, Curr_STN.EQD, Curr_STN.SCM, Curr_STN.WPM,
        Curr_STN.DataC ? "true" : "false"
    ); 
    CurrSTNMessage = buf;
    }
     
    // Process data for all cases (1, 2, 3, and 4 after approval notice)
    if(dataHealthCase >= 1 && dataHealthCase <= 4) {
        // Check for CRITICAL ALERT conditions
        if(Curr_STN.EQM > CRITICAL_EQM && Curr_STN.WPM > CRITICAL_WPM) {
        	Alert = true;
        	LedCase = 2;
        	AlertMessage = "Critical earthquake magnitude combined with severe water pressure anomaly.\n\n";
            std::snprintf(buf, sizeof(buf),
        "Station Data:\n"
        "  EQM = %f\n"
        "  EQD = %f\n"
        "  SCM = %f\n"
        "  WPM = %f\n"
        "  DataC = %s",
        Curr_STN.EQM, Curr_STN.EQD, Curr_STN.SCM, Curr_STN.WPM,
        Curr_STN.DataC ? "true" : "false"
    ); 
    CurrSTNMessage = buf;
        }
        // Check for PREDICTION/WARNING conditions
        else if(Curr_STN.SCM > WARNING_SCM || 
                (Curr_STN.EQM > WARNING_EQM && Curr_STN.WPM > WARNING_WPM)) {
            Prediction = true;
            LedCase = 3;
            if(Curr_STN.SCM > WARNING_SCM) {
                PredMessage = "Significant slow crustal movement detected.\n";
            }
            if(Curr_STN.EQM > WARNING_EQM && Curr_STN.WPM > WARNING_WPM) {
                PredMessage =  "Elevated seismic activity with water pressure changes.\n";
            }
            char buf[256];
    
    std::snprintf(buf, sizeof(buf),
        "Station Data:\n"
        "  EQM = %.2f\n"
        "  EQD = %.2f\n"
        "  SCM = %.2f\n"
        "  WPM = %.2f\n",
        (double)Curr_STN.EQM,
        (double)Curr_STN.EQD,
        (double)Curr_STN.SCM,
        (double)Curr_STN.WPM
    );
    
    CurrSTNMessage = buf;
    
        }
        // NO ALERT - Normal conditions
        else {
            // Silent operation - no output for normal conditions
            // (Optional: uncomment below for debugging)
            // std::cout << "No alert: Seismic activity within normal parameters.\n";
        }
    }
    //send Curr_STN to the next stage
    OUT_PORT(out)->GEN(evPushSeismicAlert(HealthStatusMessage,Manual_Verification,CurrSTNMessage,Alert,LedCase,AlertMessage,Prediction,PredMessage));
    std::cout << "Risk assessment complete.\n\n";
    //#]
    NOTIFY_TRANSITION_TERMINATED("6");
}

void RiskAssessmentSubsystem::state_3_exit(void) {
    // State AnalyzeSeismic
    if(state_3_subState == AnalyzeSeismic)
        {
            NOTIFY_STATE_EXITED("ROOT.Analysis.state_3.AnalyzeSeismic");
        }
    state_3_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Analysis.state_3");
}

IOxfReactive::TakeEventStatus RiskAssessmentSubsystem::state_3_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State AnalyzeSeismic
    
    return res;
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
            res = CollectData_handleEvent();
        }
        break;
        // State Analysis
        case Analysis:
        {
            res = Analysis_processEvent();
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
    aomsAttributes->addAttribute("FlagPrevAir", x2String(myReal->FlagPrevAir));
    aomsAttributes->addAttribute("FlagPrevSTN", x2String(myReal->FlagPrevSTN));
    aomsAttributes->addAttribute("FlagPrevSat", x2String(myReal->FlagPrevSat));
    aomsAttributes->addAttribute("HealthStatusMessage", x2String(myReal->HealthStatusMessage));
    aomsAttributes->addAttribute("Manual_Verification", x2String(myReal->Manual_Verification));
    aomsAttributes->addAttribute("CurrSTNMessage", x2String(myReal->CurrSTNMessage));
    aomsAttributes->addAttribute("Alert", x2String(myReal->Alert));
    aomsAttributes->addAttribute("LedCase", x2String(myReal->LedCase));
    aomsAttributes->addAttribute("AlertMessage", x2String(myReal->AlertMessage));
    aomsAttributes->addAttribute("Prediction", x2String(myReal->Prediction));
    aomsAttributes->addAttribute("PredMessage", x2String(myReal->PredMessage));
    aomsAttributes->addAttribute("Manual_Verification_MetO", x2String(myReal->Manual_Verification_MetO));
    aomsAttributes->addAttribute("HealthStatusMessageMetO", x2String(myReal->HealthStatusMessageMetO));
    aomsAttributes->addAttribute("AlertMetO", x2String(myReal->AlertMetO));
    aomsAttributes->addAttribute("LedCaseMetO", x2String(myReal->LedCaseMetO));
    aomsAttributes->addAttribute("AlertMessageMetO", x2String(myReal->AlertMessageMetO));
    aomsAttributes->addAttribute("PlaneDataMessage", x2String(myReal->PlaneDataMessage));
    aomsAttributes->addAttribute("SatDataMessage", x2String(myReal->SatDataMessage));
    aomsAttributes->addAttribute("PredictionMetO", x2String(myReal->PredictionMetO));
    aomsAttributes->addAttribute("PredMessageMetO", x2String(myReal->PredMessageMetO));
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
    state_3_serializeStates(aomsState);
    state_4_serializeStates(aomsState);
}

void OMAnimatedRiskAssessmentSubsystem::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Analysis.state_4");
    if(myReal->state_4_subState == RiskAssessmentSubsystem::AnalyzeMetO)
        {
            AnalyzeMetO_serializeStates(aomsState);
        }
}

void OMAnimatedRiskAssessmentSubsystem::AnalyzeMetO_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Analysis.state_4.AnalyzeMetO");
}

void OMAnimatedRiskAssessmentSubsystem::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Analysis.state_3");
    if(myReal->state_3_subState == RiskAssessmentSubsystem::AnalyzeSeismic)
        {
            AnalyzeSeismic_serializeStates(aomsState);
        }
}

void OMAnimatedRiskAssessmentSubsystem::AnalyzeSeismic_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Analysis.state_3.AnalyzeSeismic");
}
//#]

IMPLEMENT_REACTIVE_META_P(RiskAssessmentSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedRiskAssessmentSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentSubsystem.cpp
*********************************************************************/
