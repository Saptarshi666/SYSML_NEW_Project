/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicTsunamiNetwork
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.h
*********************************************************************/

#ifndef SeismicTsunamiNetwork_H
#define SeismicTsunamiNetwork_H

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
//#[ ignore
#define OMAnim_SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSTNHealth_int_ARGS_DECLARATION int p_CaseSTNHealth;

#define OMAnim_SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSeismic_int_ARGS_DECLARATION int p_CaseSeismic;
//#]

//## package SMSWTD_Architecture

//## class SeismicTsunamiNetwork
class SeismicTsunamiNetwork : public OMReactive {
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
        void connectSeismicTsunamiNetwork(SeismicTsunamiNetwork* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSeismicTsunamiNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SeismicTsunamiNetwork(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SeismicTsunamiNetwork(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    //## auto_generated
    const int getCaseSTNHealth(void) const;
    
    //## auto_generated
    void setCaseSTNHealth(const int p_CaseSTNHealth);
    
    //## auto_generated
    const int getCaseSeismic(void) const;
    
    //## auto_generated
    void setCaseSeismic(const int p_CaseSeismic);
    
    //## auto_generated
    const FloatArray getCurrEQD(void) const;
    
    //## auto_generated
    void setCurrEQD(const FloatArray p_CurrEQD);
    
    //## auto_generated
    const FloatArray getCurrEQM(void) const;
    
    //## auto_generated
    void setCurrEQM(const FloatArray p_CurrEQM);
    
    //## auto_generated
    const FloatArray getCurrHealth(void) const;
    
    //## auto_generated
    void setCurrHealth(const FloatArray p_CurrHealth);
    
    //## auto_generated
    const FloatArray getCurrSCM(void) const;
    
    //## auto_generated
    void setCurrSCM(const FloatArray p_CurrSCM);
    
    //## auto_generated
    const FloatArray getCurrWPM(void) const;
    
    //## auto_generated
    void setCurrWPM(const FloatArray p_CurrWPM);
    
    //## auto_generated
    const int getPrevSTN(void) const;
    
    //## auto_generated
    void setPrevSTN(const int p_PrevSTN);
    
    //## auto_generated
    const SimData getRecEQD1(void) const;
    
    //## auto_generated
    void setRecEQD1(const SimData p_RecEQD1);
    
    //## auto_generated
    const SimData getRecEQD2(void) const;
    
    //## auto_generated
    void setRecEQD2(const SimData p_RecEQD2);
    
    //## auto_generated
    const SimData getRecEQM1(void) const;
    
    //## auto_generated
    void setRecEQM1(const SimData p_RecEQM1);
    
    //## auto_generated
    const SimData getRecEQM2(void) const;
    
    //## auto_generated
    void setRecEQM2(const SimData p_RecEQM2);
    
    //## auto_generated
    const SimData getRecHealth1(void) const;
    
    //## auto_generated
    void setRecHealth1(const SimData p_RecHealth1);
    
    //## auto_generated
    const SimData getRecHealth2(void) const;
    
    //## auto_generated
    void setRecHealth2(const SimData p_RecHealth2);
    
    //## auto_generated
    const SimData getRecSCM1(void) const;
    
    //## auto_generated
    void setRecSCM1(const SimData p_RecSCM1);
    
    //## auto_generated
    const SimData getRecSCM2(void) const;
    
    //## auto_generated
    void setRecSCM2(const SimData p_RecSCM2);
    
    //## auto_generated
    const SimData getRecWPM1(void) const;
    
    //## auto_generated
    void setRecWPM1(const SimData p_RecWPM1);
    
    //## auto_generated
    const SimData getRecWPM2(void) const;
    
    //## auto_generated
    void setRecWPM2(const SimData p_RecWPM2);
    
    //## auto_generated
    const int getSTNStatus(void) const;
    
    //## auto_generated
    void setSTNStatus(const int p_STNStatus);
    
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

    int CaseSTNHealth;		//## attribute CaseSTNHealth
    
    // Simulates different conditions from Seismic Tsunami Sensor Network.
    int CaseSeismic;		//## attribute CaseSeismic
    
    FloatArray CurrEQD;		//## attribute CurrEQD
    
    FloatArray CurrEQM;		//## attribute CurrEQM
    
    FloatArray CurrHealth;		//## attribute CurrHealth
    
    FloatArray CurrSCM;		//## attribute CurrSCM
    
    FloatArray CurrWPM;		//## attribute CurrWPM
    
    int PrevSTN;		//## attribute PrevSTN
    
    SimData RecEQD1;		//## attribute RecEQD1
    
    SimData RecEQD2;		//## attribute RecEQD2
    
    SimData RecEQM1;		//## attribute RecEQM1
    
    SimData RecEQM2;		//## attribute RecEQM2
    
    SimData RecHealth1;		//## attribute RecHealth1
    
    SimData RecHealth2;		//## attribute RecHealth2
    
    SimData RecSCM1;		//## attribute RecSCM1
    
    SimData RecSCM2;		//## attribute RecSCM2
    
    SimData RecWPM1;		//## attribute RecWPM1
    
    SimData RecWPM2;		//## attribute RecWPM2
    
    int STNStatus;		//## attribute STNStatus
    
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
    enum SeismicTsunamiNetwork_Enum {
        OMNonState = 0,
        SendData = 1,
        Idle = 2
    };
//#]

private :

//#[ ignore
    SeismicTsunamiNetwork_Enum rootState_subState;
    
    SeismicTsunamiNetwork_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSTNHealth_int)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSeismic_int)

//#[ ignore
class OMAnimatedSeismicTsunamiNetwork : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SeismicTsunamiNetwork, OMAnimatedSeismicTsunamiNetwork)
    
    DECLARE_META_OP(SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSTNHealth_int)
    
    DECLARE_META_OP(SMSWTD_Architecture_SeismicTsunamiNetwork_setCaseSeismic_int)
    
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

inline RhpBoolean SeismicTsunamiNetwork::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SeismicTsunamiNetwork::SendData_IN(void) const {
    return rootState_subState == SendData;
}

inline RhpBoolean SeismicTsunamiNetwork::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.h
*********************************************************************/
