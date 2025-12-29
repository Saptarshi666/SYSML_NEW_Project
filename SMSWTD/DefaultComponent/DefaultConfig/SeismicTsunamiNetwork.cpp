/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicTsunamiNetwork
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SeismicTsunamiNetwork.h"
//#[ ignore
#define SMSWTD_Architecture_SeismicTsunamiNetwork_SeismicTsunamiNetwork_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class SeismicTsunamiNetwork
//#[ ignore
SeismicTsunamiNetwork::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SeismicTsunamiNetwork::out_C::~out_C(void) {
}

void SeismicTsunamiNetwork::out_C::connectSeismicTsunamiNetwork(SeismicTsunamiNetwork* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

SeismicTsunamiNetwork::SeismicTsunamiNetwork(IOxfActive* const theActiveContext) : OMReactive(), CaseSTNHealth(0), CaseSeismic(0), PrevSTN(0), STNStatus(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SeismicTsunamiNetwork, SeismicTsunamiNetwork(), 0, SMSWTD_Architecture_SeismicTsunamiNetwork_SeismicTsunamiNetwork_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

SeismicTsunamiNetwork::~SeismicTsunamiNetwork(void) {
    NOTIFY_DESTRUCTOR(~SeismicTsunamiNetwork, true);
    cancelTimeouts();
}

SeismicTsunamiNetwork::out_C* SeismicTsunamiNetwork::getOut(void) const {
    return (SeismicTsunamiNetwork::out_C*) &out;
}

SeismicTsunamiNetwork::out_C* SeismicTsunamiNetwork::get_out(void) const {
    return (SeismicTsunamiNetwork::out_C*) &out;
}

const int SeismicTsunamiNetwork::getCaseSTNHealth(void) const {
    return CaseSTNHealth;
}

void SeismicTsunamiNetwork::setCaseSTNHealth(const int p_CaseSTNHealth) {
    CaseSTNHealth = p_CaseSTNHealth;
}

const int SeismicTsunamiNetwork::getCaseSeismic(void) const {
    return CaseSeismic;
}

void SeismicTsunamiNetwork::setCaseSeismic(const int p_CaseSeismic) {
    CaseSeismic = p_CaseSeismic;
}

const FloatArray SeismicTsunamiNetwork::getCurrEQD(void) const {
    return CurrEQD;
}

void SeismicTsunamiNetwork::setCurrEQD(const FloatArray p_CurrEQD) {
    CurrEQD = p_CurrEQD;
}

const FloatArray SeismicTsunamiNetwork::getCurrEQM(void) const {
    return CurrEQM;
}

void SeismicTsunamiNetwork::setCurrEQM(const FloatArray p_CurrEQM) {
    CurrEQM = p_CurrEQM;
}

const FloatArray SeismicTsunamiNetwork::getCurrHealth(void) const {
    return CurrHealth;
}

void SeismicTsunamiNetwork::setCurrHealth(const FloatArray p_CurrHealth) {
    CurrHealth = p_CurrHealth;
}

const FloatArray SeismicTsunamiNetwork::getCurrSCM(void) const {
    return CurrSCM;
}

void SeismicTsunamiNetwork::setCurrSCM(const FloatArray p_CurrSCM) {
    CurrSCM = p_CurrSCM;
}

const FloatArray SeismicTsunamiNetwork::getCurrWPM(void) const {
    return CurrWPM;
}

void SeismicTsunamiNetwork::setCurrWPM(const FloatArray p_CurrWPM) {
    CurrWPM = p_CurrWPM;
}

const int SeismicTsunamiNetwork::getPrevSTN(void) const {
    return PrevSTN;
}

void SeismicTsunamiNetwork::setPrevSTN(const int p_PrevSTN) {
    PrevSTN = p_PrevSTN;
}

const SimData SeismicTsunamiNetwork::getRecEQD1(void) const {
    return RecEQD1;
}

void SeismicTsunamiNetwork::setRecEQD1(const SimData p_RecEQD1) {
    RecEQD1 = p_RecEQD1;
}

const SimData SeismicTsunamiNetwork::getRecEQD2(void) const {
    return RecEQD2;
}

void SeismicTsunamiNetwork::setRecEQD2(const SimData p_RecEQD2) {
    RecEQD2 = p_RecEQD2;
}

const SimData SeismicTsunamiNetwork::getRecEQM1(void) const {
    return RecEQM1;
}

void SeismicTsunamiNetwork::setRecEQM1(const SimData p_RecEQM1) {
    RecEQM1 = p_RecEQM1;
}

const SimData SeismicTsunamiNetwork::getRecEQM2(void) const {
    return RecEQM2;
}

void SeismicTsunamiNetwork::setRecEQM2(const SimData p_RecEQM2) {
    RecEQM2 = p_RecEQM2;
}

const SimData SeismicTsunamiNetwork::getRecHealth1(void) const {
    return RecHealth1;
}

void SeismicTsunamiNetwork::setRecHealth1(const SimData p_RecHealth1) {
    RecHealth1 = p_RecHealth1;
}

const SimData SeismicTsunamiNetwork::getRecHealth2(void) const {
    return RecHealth2;
}

void SeismicTsunamiNetwork::setRecHealth2(const SimData p_RecHealth2) {
    RecHealth2 = p_RecHealth2;
}

const SimData SeismicTsunamiNetwork::getRecSCM1(void) const {
    return RecSCM1;
}

void SeismicTsunamiNetwork::setRecSCM1(const SimData p_RecSCM1) {
    RecSCM1 = p_RecSCM1;
}

const SimData SeismicTsunamiNetwork::getRecSCM2(void) const {
    return RecSCM2;
}

void SeismicTsunamiNetwork::setRecSCM2(const SimData p_RecSCM2) {
    RecSCM2 = p_RecSCM2;
}

const SimData SeismicTsunamiNetwork::getRecWPM1(void) const {
    return RecWPM1;
}

void SeismicTsunamiNetwork::setRecWPM1(const SimData p_RecWPM1) {
    RecWPM1 = p_RecWPM1;
}

const SimData SeismicTsunamiNetwork::getRecWPM2(void) const {
    return RecWPM2;
}

void SeismicTsunamiNetwork::setRecWPM2(const SimData p_RecWPM2) {
    RecWPM2 = p_RecWPM2;
}

const int SeismicTsunamiNetwork::getSTNStatus(void) const {
    return STNStatus;
}

void SeismicTsunamiNetwork::setSTNStatus(const int p_STNStatus) {
    STNStatus = p_STNStatus;
}

bool SeismicTsunamiNetwork::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool SeismicTsunamiNetwork::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SeismicTsunamiNetwork::initRelations(void) {
    if (get_out() != NULL) {
        get_out()->connectSeismicTsunamiNetwork(this);
    }
}

void SeismicTsunamiNetwork::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void SeismicTsunamiNetwork::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void SeismicTsunamiNetwork::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state Idle.(Entry) 
        //std::cout << fabs(-23.4) << " " << sin(2.4) << std::endl;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SeismicTsunamiNetwork::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evStartDataSend_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state Idle.(Exit) 
                    printf("Resetting STN data to normal case\n");
                    CaseSeismic = 1; CaseSTNHealth = 1;
                    PrevSTN = 0;
                    // Generate Normal history data
                    RecEQM1 = fillHistRamp(0.0001); // EQ Magnitude
                    RecEQD1 = fillHistRamp(0.001); // ED displacement
                    RecSCM1 = fillHistRamp(0.01); // Slow crustal Movement
                    RecWPM1 = fillHistRamp(2.6); // Change in water pressure
                    
                    // Generate worst case data for Energency scenario
                    RecEQM2 = fillHistSineWave(2.0,5,6);
                    RecEQD2 = fillHistSineWave();
                    RecSCM2 = fillHistRamp(1.6);
                    RecWPM2 = fillHistSineWave(5.4,2,1.1);
                    
                    // Generate Measurement Certainty (Health) Data
                    RecHealth1 = fillHistSineWave(0.12,1,0.86);	// Sensors Work Normally
                    RecHealth2 = fillHistSineWave(1,1,0);	// Sensors Glitch out Occationally
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.SendData");
                    rootState_subState = SendData;
                    rootState_active = SendData;
                    //#[ state SendData.(Entry) 
                    if(PrevSTN >= 18) {
                    	printf("Resetting timeline to continue...\t\t");
                    	PrevSTN = 0;
                    	}
                    
                    // Simulating Sensor Health Data
                    switch (CaseSTNHealth) {
                        case 1: // Normal health (sensors work normally)
                            CurrHealth = extractCurrData(RecHealth1, PrevSTN);
                            break;
                        case 2: // Degraded / glitchy health
                            CurrHealth = extractCurrData(RecHealth2, PrevSTN);
                            break;
                        default:
                            // Default: fall back to normal health data
                            std::cout << "Abnormal CaseSTNHealth value of "
                                      << CaseSTNHealth
                                      << " was given.\nSwitching to normal health data...\n";
                            CurrHealth = extractCurrData(RecHealth1, PrevSTN);
                            break;
                    }
                    printf("Success: Data will be set for STN Health = %d .\n", CaseSTNHealth);
                    
                    // Sending Actual Data Now
                    switch(CaseSeismic) {
                    	case 1: // normal case
                    		CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                    		CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                    		CurrSCM = extractCurrData(RecSCM1,PrevSTN);
                    		CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                    		PrevSTN++;
                    		// send normal data set (data set 1)
                    		break;
                    	case 2: // early prediction case
                    		CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                    		CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                    		CurrSCM = extractCurrData(RecSCM2,PrevSTN); // prediction data
                    		CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                    		PrevSTN++;
                    		// send prediction data set (MIXED data set)
                    		break;
                    	case 3: //event detection case
                    		CurrEQD = extractCurrData(RecEQD2,PrevSTN);
                    		CurrEQM = extractCurrData(RecEQM2,PrevSTN);
                    		CurrSCM = extractCurrData(RecSCM2,PrevSTN);
                    		CurrWPM = extractCurrData(RecWPM2,PrevSTN);
                    		PrevSTN++;
                    		// send detection data (data set 2)
                    		break;
                    	default:
                    		// default -- execute normal case with warning
                    		std::cout << "Abnormal case value of "<< CaseSeismic << " was given to STN.\n Switching to basic case...\n";
                    		FloatArray CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                    		FloatArray CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                    		FloatArray CurrSCM = extractCurrData(RecSCM1,PrevSTN);
                    		FloatArray CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                    		PrevSTN++;
                    		break;
                    	}
                    printf("Success: Data will be set for STN Data Case = %d .\n", CaseSeismic);
                    OUT_PORT(out)->GEN(evSeismicUpdate(CurrEQD,CurrEQM,CurrSCM,CurrWPM,STNStatus,CurrHealth));
                    
                    
                    //#]
                    rootState_timeout = scheduleTimeout(3000, "ROOT.SendData");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SendData
        case SendData:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            //#[ state SendData.(Exit) 
                            //FloatArray CurrEQD, CurrEQM, CurrSCM, CurrWPM;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.SendData");
                            NOTIFY_STATE_ENTERED("ROOT.SendData");
                            rootState_subState = SendData;
                            rootState_active = SendData;
                            //#[ state SendData.(Entry) 
                            if(PrevSTN >= 18) {
                            	printf("Resetting timeline to continue...\t\t");
                            	PrevSTN = 0;
                            	}
                            
                            // Simulating Sensor Health Data
                            switch (CaseSTNHealth) {
                                case 1: // Normal health (sensors work normally)
                                    CurrHealth = extractCurrData(RecHealth1, PrevSTN);
                                    break;
                                case 2: // Degraded / glitchy health
                                    CurrHealth = extractCurrData(RecHealth2, PrevSTN);
                                    break;
                                default:
                                    // Default: fall back to normal health data
                                    std::cout << "Abnormal CaseSTNHealth value of "
                                              << CaseSTNHealth
                                              << " was given.\nSwitching to normal health data...\n";
                                    CurrHealth = extractCurrData(RecHealth1, PrevSTN);
                                    break;
                            }
                            printf("Success: Data will be set for STN Health = %d .\n", CaseSTNHealth);
                            
                            // Sending Actual Data Now
                            switch(CaseSeismic) {
                            	case 1: // normal case
                            		CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                            		CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                            		CurrSCM = extractCurrData(RecSCM1,PrevSTN);
                            		CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                            		PrevSTN++;
                            		// send normal data set (data set 1)
                            		break;
                            	case 2: // early prediction case
                            		CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                            		CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                            		CurrSCM = extractCurrData(RecSCM2,PrevSTN); // prediction data
                            		CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                            		PrevSTN++;
                            		// send prediction data set (MIXED data set)
                            		break;
                            	case 3: //event detection case
                            		CurrEQD = extractCurrData(RecEQD2,PrevSTN);
                            		CurrEQM = extractCurrData(RecEQM2,PrevSTN);
                            		CurrSCM = extractCurrData(RecSCM2,PrevSTN);
                            		CurrWPM = extractCurrData(RecWPM2,PrevSTN);
                            		PrevSTN++;
                            		// send detection data (data set 2)
                            		break;
                            	default:
                            		// default -- execute normal case with warning
                            		std::cout << "Abnormal case value of "<< CaseSeismic << " was given to STN.\n Switching to basic case...\n";
                            		FloatArray CurrEQD = extractCurrData(RecEQD1,PrevSTN);
                            		FloatArray CurrEQM = extractCurrData(RecEQM1,PrevSTN);
                            		FloatArray CurrSCM = extractCurrData(RecSCM1,PrevSTN);
                            		FloatArray CurrWPM = extractCurrData(RecWPM1,PrevSTN);
                            		PrevSTN++;
                            		break;
                            	}
                            printf("Success: Data will be set for STN Data Case = %d .\n", CaseSeismic);
                            OUT_PORT(out)->GEN(evSeismicUpdate(CurrEQD,CurrEQM,CurrSCM,CurrWPM,STNStatus,CurrHealth));
                            
                            
                            //#]
                            rootState_timeout = scheduleTimeout(3000, "ROOT.SendData");
                            NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedSeismicTsunamiNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CaseSeismic", x2String(myReal->CaseSeismic));
    aomsAttributes->addAttribute("RecEQM1", UNKNOWN2STRING(myReal->RecEQM1));
    aomsAttributes->addAttribute("RecEQM2", UNKNOWN2STRING(myReal->RecEQM2));
    aomsAttributes->addAttribute("RecEQD1", UNKNOWN2STRING(myReal->RecEQD1));
    aomsAttributes->addAttribute("RecEQD2", UNKNOWN2STRING(myReal->RecEQD2));
    aomsAttributes->addAttribute("RecWPM1", UNKNOWN2STRING(myReal->RecWPM1));
    aomsAttributes->addAttribute("RecWPM2", UNKNOWN2STRING(myReal->RecWPM2));
    aomsAttributes->addAttribute("RecSCM1", UNKNOWN2STRING(myReal->RecSCM1));
    aomsAttributes->addAttribute("RecSCM2", UNKNOWN2STRING(myReal->RecSCM2));
    aomsAttributes->addAttribute("PrevSTN", x2String(myReal->PrevSTN));
    aomsAttributes->addAttribute("CurrEQD", UNKNOWN2STRING(myReal->CurrEQD));
    aomsAttributes->addAttribute("CurrEQM", UNKNOWN2STRING(myReal->CurrEQM));
    aomsAttributes->addAttribute("CurrSCM", UNKNOWN2STRING(myReal->CurrSCM));
    aomsAttributes->addAttribute("CurrWPM", UNKNOWN2STRING(myReal->CurrWPM));
    aomsAttributes->addAttribute("STNStatus", x2String(myReal->STNStatus));
    aomsAttributes->addAttribute("CurrHealth", UNKNOWN2STRING(myReal->CurrHealth));
    aomsAttributes->addAttribute("RecHealth1", UNKNOWN2STRING(myReal->RecHealth1));
    aomsAttributes->addAttribute("RecHealth2", UNKNOWN2STRING(myReal->RecHealth2));
    aomsAttributes->addAttribute("CaseSTNHealth", x2String(myReal->CaseSTNHealth));
}

void OMAnimatedSeismicTsunamiNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SeismicTsunamiNetwork::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case SeismicTsunamiNetwork::SendData:
        {
            SendData_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSeismicTsunamiNetwork::SendData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SendData");
}

void OMAnimatedSeismicTsunamiNetwork::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(SeismicTsunamiNetwork, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedSeismicTsunamiNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.cpp
*********************************************************************/
