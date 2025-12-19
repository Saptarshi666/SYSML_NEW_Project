/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensingInterfaceSubsystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensingInterfaceSubsystem.h
*********************************************************************/

#ifndef SensingInterfaceSubsystem_H
#define SensingInterfaceSubsystem_H

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
//## link itsDataIngestionSubsystem
class DataIngestionSubsystem;

//## package SMSWTD_Architecture

//## class SensingInterfaceSubsystem
class SensingInterfaceSubsystem : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensingInterfaceSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SensingInterfaceSubsystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SensingInterfaceSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getValueproperty_1(void) const;
    
    //## auto_generated
    void setValueproperty_1(const int p_valueproperty_1);
    
    //## auto_generated
    const DataIngestionSubsystem* getItsDataIngestionSubsystem(void) const;
    
    //## auto_generated
    void setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    int valueproperty_1;		//## attribute valueproperty_1
    
    ////    Relations and components    ////
    
    DataIngestionSubsystem* itsDataIngestionSubsystem;		//## link itsDataIngestionSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    void _setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    void _clearItsDataIngestionSubsystem(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // CollectData:
    //## statechart_method
    inline RhpBoolean CollectData_IN(void) const;
    
    // CheckDataStatus:
    //## statechart_method
    inline RhpBoolean CheckDataStatus_IN(void) const;
    
    //## statechart_method
    void CheckDataStatus_entDef(void);
    
    //## statechart_method
    void CheckDataStatus_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CheckDataStatus_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CheckDataStatus_handleEvent(void);
    
    // state_5:
    //## statechart_method
    inline RhpBoolean state_5_IN(void) const;
    
    //## statechart_method
    void state_5_entDef(void);
    
    //## statechart_method
    void state_5_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_processEvent(void);
    
    // checkMetOcean:
    //## statechart_method
    inline RhpBoolean checkMetOcean_IN(void) const;
    
    // state_4:
    //## statechart_method
    inline RhpBoolean state_4_IN(void) const;
    
    //## statechart_method
    void state_4_entDef(void);
    
    //## statechart_method
    void state_4_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_processEvent(void);
    
    // StatusSeismic:
    //## statechart_method
    inline RhpBoolean StatusSeismic_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SensingInterfaceSubsystem_Enum {
        OMNonState = 0,
        Idle = 1,
        CollectData = 2,
        CheckDataStatus = 3,
        state_5 = 4,
        checkMetOcean = 5,
        state_4 = 6,
        StatusSeismic = 7
    };
//#]

private :

//#[ ignore
    SensingInterfaceSubsystem_Enum rootState_subState;
    
    SensingInterfaceSubsystem_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
    
    SensingInterfaceSubsystem_Enum state_5_subState;
    
    SensingInterfaceSubsystem_Enum state_5_active;
    
    SensingInterfaceSubsystem_Enum state_4_subState;
    
    SensingInterfaceSubsystem_Enum state_4_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensingInterfaceSubsystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SensingInterfaceSubsystem, OMAnimatedSensingInterfaceSubsystem)
    
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
    void CheckDataStatus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkMetOcean_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StatusSeismic_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SensingInterfaceSubsystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SensingInterfaceSubsystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean SensingInterfaceSubsystem::CollectData_IN(void) const {
    return rootState_subState == CollectData;
}

inline RhpBoolean SensingInterfaceSubsystem::CheckDataStatus_IN(void) const {
    return rootState_subState == CheckDataStatus;
}

inline RhpBoolean SensingInterfaceSubsystem::state_5_IN(void) const {
    return CheckDataStatus_IN();
}

inline RhpBoolean SensingInterfaceSubsystem::checkMetOcean_IN(void) const {
    return state_5_subState == checkMetOcean;
}

inline RhpBoolean SensingInterfaceSubsystem::state_4_IN(void) const {
    return CheckDataStatus_IN();
}

inline RhpBoolean SensingInterfaceSubsystem::StatusSeismic_IN(void) const {
    return state_4_subState == StatusSeismic;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensingInterfaceSubsystem.h
*********************************************************************/
