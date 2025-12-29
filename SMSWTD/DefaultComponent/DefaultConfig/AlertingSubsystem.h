/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertingSubsystem
//!	Generated Date	: Mon, 29, Dec 2025  
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
    
    ////    Relations and components    ////

private :

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
        AlertGeneration = 3
    };
//#]

private :

//#[ ignore
    AlertingSubsystem_Enum rootState_subState;
    
    AlertingSubsystem_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlertingSubsystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AlertingSubsystem, OMAnimatedAlertingSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CollectData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AlertGeneration_serializeStates(AOMSState* aomsState) const;
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.h
*********************************************************************/
