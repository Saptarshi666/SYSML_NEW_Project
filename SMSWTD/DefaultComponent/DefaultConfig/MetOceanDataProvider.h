/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.h
*********************************************************************/

#ifndef MetOceanDataProvider_H
#define MetOceanDataProvider_H

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
//## package SMSWTD_Architecture

//## class MetOceanDataProvider
class MetOceanDataProvider : public OMReactive {
public :

//#[ ignore
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
        void connectMetOceanDataProvider(MetOceanDataProvider* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMetOceanDataProvider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit MetOceanDataProvider(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~MetOceanDataProvider(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    //## auto_generated
    const Location getRecAirLoc1(void) const;
    
    //## auto_generated
    void setRecAirLoc1(const Location p_RecAirLoc1);
    
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
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    Location RecAirLoc1;		//## attribute RecAirLoc1
    
    ////    Relations and components    ////
    
//#[ ignore
    out_C out;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SendData:
    //## statechart_method
    inline RhpBoolean SendData_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum MetOceanDataProvider_Enum {
        OMNonState = 0,
        SendData = 1,
        Idle = 2
    };
//#]

private :

//#[ ignore
    MetOceanDataProvider_Enum rootState_subState;
    
    MetOceanDataProvider_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMetOceanDataProvider : virtual public AOMInstance {
    DECLARE_REACTIVE_META(MetOceanDataProvider, OMAnimatedMetOceanDataProvider)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SendData_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean MetOceanDataProvider::rootState_IN(void) const {
    return true;
}

inline RhpBoolean MetOceanDataProvider::SendData_IN(void) const {
    return rootState_subState == SendData;
}

inline RhpBoolean MetOceanDataProvider::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.h
*********************************************************************/
