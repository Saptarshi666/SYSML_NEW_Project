/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertingSubsystem
//!	Generated Date	: Tue, 30, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.h
*********************************************************************/

#ifndef AlertingSubsystem_H
#define AlertingSubsystem_H

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
//## link itsRiskAssessmentSubsystem
class RiskAssessmentSubsystem;

//#[ ignore
#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString_ARGS_DECLARATION RhpString p_AlertMessage;

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString_ARGS_DECLARATION RhpString p_CurrSTNMessage;

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString_ARGS_DECLARATION RhpString p_HealthStatusMessage;

#define OMAnim_SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString_ARGS_DECLARATION RhpString p_PredMessage;
//#]

//## package SMSWTD_Architecture

//## class AlertingSubsystem
class AlertingSubsystem : public OMReactive {
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
        void connectAlertingSubsystem(AlertingSubsystem* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlertingSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit AlertingSubsystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~AlertingSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    in_C* getIn(void) const;
    
    //## auto_generated
    in_C* get_in(void) const;
    
    //## auto_generated
    const bool getAlert(void) const;
    
    //## auto_generated
    void setAlert(const bool p_Alert);
    
    //## auto_generated
    const RhpString getAlertMessage(void) const;
    
    //## auto_generated
    void setAlertMessage(const RhpString p_AlertMessage);
    
    //## auto_generated
    const bool getBroadcastMedia(void) const;
    
    //## auto_generated
    void setBroadcastMedia(const bool p_BroadcastMedia);
    
    //## auto_generated
    const RhpString getCurrSTNMessage(void) const;
    
    //## auto_generated
    void setCurrSTNMessage(const RhpString p_CurrSTNMessage);
    
    //## auto_generated
    const bool getEmergencyAuthorityOperator(void) const;
    
    //## auto_generated
    void setEmergencyAuthorityOperator(const bool p_EmergencyAuthorityOperator);
    
    //## auto_generated
    const bool getGovAlertNetwork(void) const;
    
    //## auto_generated
    void setGovAlertNetwork(const bool p_GovAlertNetwork);
    
    //## auto_generated
    const RhpString getHealthStatusMessage(void) const;
    
    //## auto_generated
    void setHealthStatusMessage(const RhpString p_HealthStatusMessage);
    
    //## auto_generated
    const int getLedCase(void) const;
    
    //## auto_generated
    void setLedCase(const int p_LedCase);
    
    //## auto_generated
    const bool getMaintainer(void) const;
    
    //## auto_generated
    void setMaintainer(const bool p_Maintainer);
    
    //## auto_generated
    const bool getManual_Verification(void) const;
    
    //## auto_generated
    void setManual_Verification(const bool p_Manual_Verification);
    
    //## auto_generated
    const bool getMobilePushService(void) const;
    
    //## auto_generated
    void setMobilePushService(const bool p_MobilePushService);
    
    //## auto_generated
    const RhpString getPredMessage(void) const;
    
    //## auto_generated
    void setPredMessage(const RhpString p_PredMessage);
    
    //## auto_generated
    const bool getPrediction(void) const;
    
    //## auto_generated
    void setPrediction(const bool p_Prediction);
    
    //## auto_generated
    const bool getResearcher(void) const;
    
    //## auto_generated
    void setResearcher(const bool p_Researcher);
    
    //## auto_generated
    const bool getSirenPASystem(void) const;
    
    //## auto_generated
    void setSirenPASystem(const bool p_SirenPASystem);
    
    //## auto_generated
    const bool getTelecomSMSNetwork(void) const;
    
    //## auto_generated
    void setTelecomSMSNetwork(const bool p_TelecomSMSNetwork);
    
    //## auto_generated
    const RiskAssessmentSubsystem* getItsRiskAssessmentSubsystem(void) const;
    
    //## auto_generated
    void setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem);
    
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
    
    bool BroadcastMedia;		//## attribute BroadcastMedia
    
    RhpString CurrSTNMessage;		//## attribute CurrSTNMessage
    
    bool EmergencyAuthorityOperator;		//## attribute EmergencyAuthorityOperator
    
    bool GovAlertNetwork;		//## attribute GovAlertNetwork
    
    RhpString HealthStatusMessage;		//## attribute HealthStatusMessage
    
    int LedCase;		//## attribute LedCase
    
    bool Maintainer;		//## attribute Maintainer
    
    bool Manual_Verification;		//## attribute Manual_Verification
    
    bool MobilePushService;		//## attribute MobilePushService
    
    RhpString PredMessage;		//## attribute PredMessage
    
    bool Prediction;		//## attribute Prediction
    
    bool Researcher;		//## attribute Researcher
    
    bool SirenPASystem;		//## attribute SirenPASystem
    
    bool TelecomSMSNetwork;		//## attribute TelecomSMSNetwork
    
    ////    Relations and components    ////
    
//#[ ignore
    in_C in;
//#]

    RiskAssessmentSubsystem* itsRiskAssessmentSubsystem;		//## link itsRiskAssessmentSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem);
    
    //## auto_generated
    void _setItsRiskAssessmentSubsystem(RiskAssessmentSubsystem* const p_RiskAssessmentSubsystem);
    
    //## auto_generated
    void _clearItsRiskAssessmentSubsystem(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // CollectData:
    //## statechart_method
    inline RhpBoolean CollectData_IN(void) const;
    
    // AlertGeneration:
    //## statechart_method
    inline RhpBoolean AlertGeneration_IN(void) const;
    
    //## statechart_method
    void AlertGeneration_entDef(void);
    
    //## statechart_method
    void AlertGeneration_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AlertGeneration_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AlertGeneration_handleEvent(void);
    
    // state_4:
    //## statechart_method
    inline RhpBoolean state_4_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_processEvent(void);
    
    // state_3:
    //## statechart_method
    inline RhpBoolean state_3_IN(void) const;
    
    //## statechart_method
    void state_3_entDef(void);
    
    //## statechart_method
    void state_3_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_processEvent(void);
    
    // AlertSeismic:
    //## statechart_method
    inline RhpBoolean AlertSeismic_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum AlertingSubsystem_Enum {
        OMNonState = 0,
        Idle = 1,
        CollectData = 2,
        AlertGeneration = 3,
        state_4 = 4,
        state_3 = 5,
        AlertSeismic = 6
    };
//#]

private :

//#[ ignore
    AlertingSubsystem_Enum rootState_subState;
    
    AlertingSubsystem_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
    
    AlertingSubsystem_Enum state_4_subState;
    
    AlertingSubsystem_Enum state_4_active;
    
    AlertingSubsystem_Enum state_3_subState;
    
    AlertingSubsystem_Enum state_3_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString)

//#[ ignore
class OMAnimatedAlertingSubsystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AlertingSubsystem, OMAnimatedAlertingSubsystem)
    
    DECLARE_META_OP(SMSWTD_Architecture_AlertingSubsystem_setAlertMessage_RhpString)
    
    DECLARE_META_OP(SMSWTD_Architecture_AlertingSubsystem_setCurrSTNMessage_RhpString)
    
    DECLARE_META_OP(SMSWTD_Architecture_AlertingSubsystem_setHealthStatusMessage_RhpString)
    
    DECLARE_META_OP(SMSWTD_Architecture_AlertingSubsystem_setPredMessage_RhpString)
    
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
    void AlertGeneration_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AlertSeismic_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean AlertingSubsystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean AlertingSubsystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean AlertingSubsystem::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

inline RhpBoolean AlertingSubsystem::AlertGeneration_IN(void) const {
    return rootState_subState == AlertGeneration;
}

inline RhpBoolean AlertingSubsystem::state_4_IN(void) const {
    return AlertGeneration_IN();
}

inline RhpBoolean AlertingSubsystem::state_3_IN(void) const {
    return AlertGeneration_IN();
}

inline RhpBoolean AlertingSubsystem::AlertSeismic_IN(void) const {
    return state_3_subState == AlertSeismic;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.h
*********************************************************************/
