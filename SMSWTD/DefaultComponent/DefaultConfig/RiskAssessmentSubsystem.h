/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskAssessmentSubsystem
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentSubsystem.h
*********************************************************************/

#ifndef RiskAssessmentSubsystem_H
#define RiskAssessmentSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsAlertingSubsystem
class AlertingSubsystem;

//## link itsSensingInterfaceSubsystem
class SensingInterfaceSubsystem;

//## package SMSWTD_Architecture

//## class RiskAssessmentSubsystem
class RiskAssessmentSubsystem : public OMReactive {
public :

//#[ ignore
    //## package SMSWTD_Architecture
    class in_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        in_C(void);
        
        //## auto_generated
        virtual ~in_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRiskAssessmentSubsystem(RiskAssessmentSubsystem* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package SMSWTD_Architecture
    class out_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        out_C(void);
        
        //## auto_generated
        virtual ~out_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRiskAssessmentSubsystem(RiskAssessmentSubsystem* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedRiskAssessmentSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit RiskAssessmentSubsystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~RiskAssessmentSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    in_C* getIn(void) const;
    
    //## auto_generated
    in_C* get_in(void) const;
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    //## auto_generated
    const bool getAlert(void) const;
    
    //## auto_generated
    void setAlert(const bool p_Alert);
    
    //## auto_generated
    const RhpString getAlertMessage(void) const;
    
    //## auto_generated
    void setAlertMessage(const RhpString p_AlertMessage);
    
    //## auto_generated
    const RhpString getAlertMessageMetO(void) const;
    
    //## auto_generated
    void setAlertMessageMetO(const RhpString p_AlertMessageMetO);
    
    //## auto_generated
    const bool getAlertMetO(void) const;
    
    //## auto_generated
    void setAlertMetO(const bool p_AlertMetO);
    
    //## auto_generated
    const AirData getCurrPlaneDataFinal(void) const;
    
    //## auto_generated
    void setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal);
    
    //## auto_generated
    const RhpString getCurrSTNMessage(void) const;
    
    //## auto_generated
    void setCurrSTNMessage(const RhpString p_CurrSTNMessage);
    
    //## auto_generated
    const SatData getCurrSatDataFinal(void) const;
    
    //## auto_generated
    void setCurrSatDataFinal(const SatData p_CurrSatDataFinal);
    
    //## auto_generated
    const STNData getCurr_STN(void) const;
    
    //## auto_generated
    void setCurr_STN(const STNData p_Curr_STN);
    
    //## auto_generated
    const bool getFlagPrevAir(void) const;
    
    //## auto_generated
    void setFlagPrevAir(const bool p_FlagPrevAir);
    
    //## auto_generated
    const bool getFlagPrevSTN(void) const;
    
    //## auto_generated
    void setFlagPrevSTN(const bool p_FlagPrevSTN);
    
    //## auto_generated
    const int getFlagPrevSat(void) const;
    
    //## auto_generated
    void setFlagPrevSat(const int p_FlagPrevSat);
    
    //## auto_generated
    const RhpString getHealthStatusMessage(void) const;
    
    //## auto_generated
    void setHealthStatusMessage(const RhpString p_HealthStatusMessage);
    
    //## auto_generated
    const RhpString getHealthStatusMessageMetO(void) const;
    
    //## auto_generated
    void setHealthStatusMessageMetO(const RhpString p_HealthStatusMessageMetO);
    
    //## auto_generated
    const int getLedCase(void) const;
    
    //## auto_generated
    void setLedCase(const int p_LedCase);
    
    //## auto_generated
    const int getLedCaseMetO(void) const;
    
    //## auto_generated
    void setLedCaseMetO(const int p_LedCaseMetO);
    
    //## auto_generated
    const bool getManual_Verification(void) const;
    
    //## auto_generated
    void setManual_Verification(const bool p_Manual_Verification);
    
    //## auto_generated
    const bool getManual_Verification_MetO(void) const;
    
    //## auto_generated
    void setManual_Verification_MetO(const bool p_Manual_Verification_MetO);
    
    //## auto_generated
    const RhpString getPlaneDataMessage(void) const;
    
    //## auto_generated
    void setPlaneDataMessage(const RhpString p_PlaneDataMessage);
    
    //## auto_generated
    const RhpString getPredMessage(void) const;
    
    //## auto_generated
    void setPredMessage(const RhpString p_PredMessage);
    
    //## auto_generated
    const RhpString getPredMessageMetO(void) const;
    
    //## auto_generated
    void setPredMessageMetO(const RhpString p_PredMessageMetO);
    
    //## auto_generated
    const bool getPrediction(void) const;
    
    //## auto_generated
    void setPrediction(const bool p_Prediction);
    
    //## auto_generated
    const bool getPredictionMetO(void) const;
    
    //## auto_generated
    void setPredictionMetO(const bool p_PredictionMetO);
    
    //## auto_generated
    const bool getReceivedMetOcean(void) const;
    
    //## auto_generated
    void setReceivedMetOcean(const bool p_ReceivedMetOcean);
    
    //## auto_generated
    const bool getReceivedSTN(void) const;
    
    //## auto_generated
    void setReceivedSTN(const bool p_ReceivedSTN);
    
    //## auto_generated
    const RhpString getSatDataMessage(void) const;
    
    //## auto_generated
    void setSatDataMessage(const RhpString p_SatDataMessage);
    
    //## auto_generated
    const AlertingSubsystem* getItsAlertingSubsystem(void) const;
    
    //## auto_generated
    void setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem);
    
    //## auto_generated
    const SensingInterfaceSubsystem* getItsSensingInterfaceSubsystem(void) const;
    
    //## auto_generated
    void setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    bool Alert;		//## attribute Alert
    
    RhpString AlertMessage;		//## attribute AlertMessage
    
    RhpString AlertMessageMetO;		//## attribute AlertMessageMetO
    
    bool AlertMetO;		//## attribute AlertMetO
    
    AirData CurrPlaneDataFinal;		//## attribute CurrPlaneDataFinal
    
    RhpString CurrSTNMessage;		//## attribute CurrSTNMessage
    
    SatData CurrSatDataFinal;		//## attribute CurrSatDataFinal
    
    STNData Curr_STN;		//## attribute Curr_STN
    
    bool FlagPrevAir;		//## attribute FlagPrevAir
    
    bool FlagPrevSTN;		//## attribute FlagPrevSTN
    
    int FlagPrevSat;		//## attribute FlagPrevSat
    
    RhpString HealthStatusMessage;		//## attribute HealthStatusMessage
    
    RhpString HealthStatusMessageMetO;		//## attribute HealthStatusMessageMetO
    
    int LedCase;		//## attribute LedCase
    
    int LedCaseMetO;		//## attribute LedCaseMetO
    
    bool Manual_Verification;		//## attribute Manual_Verification
    
    bool Manual_Verification_MetO;		//## attribute Manual_Verification_MetO
    
    RhpString PlaneDataMessage;		//## attribute PlaneDataMessage
    
    RhpString PredMessage;		//## attribute PredMessage
    
    RhpString PredMessageMetO;		//## attribute PredMessageMetO
    
    bool Prediction;		//## attribute Prediction
    
    bool PredictionMetO;		//## attribute PredictionMetO
    
    bool ReceivedMetOcean;		//## attribute ReceivedMetOcean
    
    bool ReceivedSTN;		//## attribute ReceivedSTN
    
    RhpString SatDataMessage;		//## attribute SatDataMessage
    
    ////    Relations and components    ////
    
//#[ ignore
    in_C in;
    
    out_C out;
//#]

    AlertingSubsystem* itsAlertingSubsystem;		//## link itsAlertingSubsystem
    
    SensingInterfaceSubsystem* itsSensingInterfaceSubsystem;		//## link itsSensingInterfaceSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem);
    
    //## auto_generated
    void _setItsAlertingSubsystem(AlertingSubsystem* const p_AlertingSubsystem);
    
    //## auto_generated
    void _clearItsAlertingSubsystem(void);
    
    //## auto_generated
    void __setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);
    
    //## auto_generated
    void _setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);
    
    //## auto_generated
    void _clearItsSensingInterfaceSubsystem(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // CollectData:
    //## statechart_method
    inline RhpBoolean CollectData_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CollectData_handleEvent(void);
    
    // Analysis:
    //## statechart_method
    inline RhpBoolean Analysis_IN(void) const;
    
    //## statechart_method
    void Analysis_entDef(void);
    
    //## statechart_method
    void Analysis_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Analysis_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Analysis_handleEvent(void);
    
    // state_4:
    //## statechart_method
    inline RhpBoolean state_4_IN(void) const;
    
    //## statechart_method
    void state_4_entDef(void);
    
    //## statechart_method
    void state_4_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_processEvent(void);
    
    // AnalyzeMetO:
    //## statechart_method
    inline RhpBoolean AnalyzeMetO_IN(void) const;
    
    // state_3:
    //## statechart_method
    inline RhpBoolean state_3_IN(void) const;
    
    //## statechart_method
    void state_3_entDef(void);
    
    //## statechart_method
    void state_3_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent(void);
    
    // AnalyzeSeismic:
    //## statechart_method
    inline RhpBoolean AnalyzeSeismic_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum RiskAssessmentSubsystem_Enum {
        OMNonState = 0,
        Idle = 1,
        CollectData = 2,
        Analysis = 3,
        state_4 = 4,
        AnalyzeMetO = 5,
        state_3 = 6,
        AnalyzeSeismic = 7
    };
//#]

private :

//#[ ignore
    RiskAssessmentSubsystem_Enum rootState_subState;
    
    RiskAssessmentSubsystem_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
    
    RiskAssessmentSubsystem_Enum state_4_subState;
    
    RiskAssessmentSubsystem_Enum state_4_active;
    
    RiskAssessmentSubsystem_Enum state_3_subState;
    
    RiskAssessmentSubsystem_Enum state_3_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRiskAssessmentSubsystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(RiskAssessmentSubsystem, OMAnimatedRiskAssessmentSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CollectData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Analysis_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AnalyzeMetO_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AnalyzeSeismic_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean RiskAssessmentSubsystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean RiskAssessmentSubsystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean RiskAssessmentSubsystem::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

inline RhpBoolean RiskAssessmentSubsystem::Analysis_IN(void) const {
    return rootState_subState == Analysis;
}

inline RhpBoolean RiskAssessmentSubsystem::state_4_IN(void) const {
    return Analysis_IN();
}

inline RhpBoolean RiskAssessmentSubsystem::AnalyzeMetO_IN(void) const {
    return state_4_subState == AnalyzeMetO;
}

inline RhpBoolean RiskAssessmentSubsystem::state_3_IN(void) const {
    return Analysis_IN();
}

inline RhpBoolean RiskAssessmentSubsystem::AnalyzeSeismic_IN(void) const {
    return state_3_subState == AnalyzeSeismic;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentSubsystem.h
*********************************************************************/
