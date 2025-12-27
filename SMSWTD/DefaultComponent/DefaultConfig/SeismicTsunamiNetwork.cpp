/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicTsunamiNetwork
//!	Generated Date	: Sat, 27, Dec 2025  
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

SeismicTsunamiNetwork::SeismicTsunamiNetwork(IOxfActive* const theActiveContext) : OMReactive(), CaseSeismic(0), PrevSTN(0) {
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

const int SeismicTsunamiNetwork::getCaseSeismic(void) const {
    return CaseSeismic;
}

void SeismicTsunamiNetwork::setCaseSeismic(const int p_CaseSeismic) {
    CaseSeismic = p_CaseSeismic;
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
                    CaseSeismic = 1;
                    PrevSTN = 0;
                    // Fill Normal history
                    RecEQM1 = fillHistRamp(0.0001); // EQ Magnitude
                    RecEQD1 = fillHistRamp(0.001); // ED displacement
                    RecSCM1 = fillHistRamp(0.01); // Slow crustal Movement
                    RecWPM1 = fillHistRamp(2.6); // Change in water pressure
                    
                    // Fill worst case values for Energency scenario
                    RecEQM2 = fillHistSineWave(2.0,5,6);
                    RecEQD2 = fillHistSineWave();
                    RecSCM2 = fillHistRamp(1.6);
                    RecWPM2 = fillHistSineWave(5.4,2,1.1);
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
                    FloatArray CurrEQD, CurrEQM, CurrSCM, CurrWPM;
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
                    printf("Success: Data will be set for Case = %d .\n", CaseSeismic);
                    
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
                            NOTIFY_STATE_EXITED("ROOT.SendData");
                            NOTIFY_STATE_ENTERED("ROOT.SendData");
                            rootState_subState = SendData;
                            rootState_active = SendData;
                            //#[ state SendData.(Entry) 
                            if(PrevSTN >= 18) {
                            	printf("Resetting timeline to continue...\t\t");
                            	PrevSTN = 0;
                            	}
                            FloatArray CurrEQD, CurrEQM, CurrSCM, CurrWPM;
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
                            printf("Success: Data will be set for Case = %d .\n", CaseSeismic);
                            
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
