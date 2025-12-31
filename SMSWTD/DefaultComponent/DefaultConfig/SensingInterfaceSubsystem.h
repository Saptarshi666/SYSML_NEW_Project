/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensingInterfaceSubsystem
//!	Generated Date	: Wed, 31, Dec 2025  
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
//## auto_generated
#include <OMDefaultMulticastReactivePort.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsRiskAssessmentSubsystem
class RiskAssessmentSubsystem;

//## package SMSWTD_Architecture

//## class SensingInterfaceSubsystem
class SensingInterfaceSubsystem : public OMReactive {
public :

//#[ ignore
    //## package SMSWTD_Architecture
    class in_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        in_C(void);
        
        //## auto_generated
        virtual ~in_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSensingInterfaceSubsystem(SensingInterfaceSubsystem* part);
        
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
        void connectSensingInterfaceSubsystem(SensingInterfaceSubsystem* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
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
    in_C* getIn(void) const;
    
    //## auto_generated
    in_C* get_in(void) const;
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
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
    const AirData getCurrPlaneData(void) const;
    
    //## auto_generated
    void setCurrPlaneData(const AirData p_CurrPlaneData);
    
    //## auto_generated
    const AirData getCurrPlaneDataFinal(void) const;
    
    //## auto_generated
    void setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal);
    
    //## auto_generated
    const FloatArray getCurrSCM(void) const;
    
    //## auto_generated
    void setCurrSCM(const FloatArray p_CurrSCM);
    
    //## auto_generated
    const SatData getCurrSatData(void) const;
    
    //## auto_generated
    void setCurrSatData(const SatData p_CurrSatData);
    
    //## auto_generated
    const SatData getCurrSatDataFinal(void) const;
    
    //## auto_generated
    void setCurrSatDataFinal(const SatData p_CurrSatDataFinal);
    
    //## auto_generated
    const FloatArray getCurrWPM(void) const;
    
    //## auto_generated
    void setCurrWPM(const FloatArray p_CurrWPM);
    
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
    const bool getFlagPrevSat(void) const;
    
    //## auto_generated
    void setFlagPrevSat(const bool p_FlagPrevSat);
    
    //## auto_generated
    const AirData getPrevPlaneData(void) const;
    
    //## auto_generated
    void setPrevPlaneData(const AirData p_PrevPlaneData);
    
    //## auto_generated
    const SatData getPrevSatData(void) const;
    
    //## auto_generated
    void setPrevSatData(const SatData p_PrevSatData);
    
    //## auto_generated
    const STNData getPrev_STN_Final(void) const;
    
    //## auto_generated
    void setPrev_STN_Final(const STNData p_Prev_STN_Final);
    
    //## auto_generated
    const int getSTNStatus(void) const;
    
    //## auto_generated
    void setSTNStatus(const int p_STNStatus);
    
    //## auto_generated
    const bool getObtainedMetOcean(void) const;
    
    //## auto_generated
    void setObtainedMetOcean(const bool p_obtainedMetOcean);
    
    //## auto_generated
    const bool getObtainedSeismic(void) const;
    
    //## auto_generated
    void setObtainedSeismic(const bool p_obtainedSeismic);
    
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

    FloatArray CurrEQD;		//## attribute CurrEQD
    
    FloatArray CurrEQM;		//## attribute CurrEQM
    
    FloatArray CurrHealth;		//## attribute CurrHealth
    
    AirData CurrPlaneData;		//## attribute CurrPlaneData
    
    AirData CurrPlaneDataFinal;		//## attribute CurrPlaneDataFinal
    
    FloatArray CurrSCM;		//## attribute CurrSCM
    
    SatData CurrSatData;		//## attribute CurrSatData
    
    SatData CurrSatDataFinal;		//## attribute CurrSatDataFinal
    
    FloatArray CurrWPM;		//## attribute CurrWPM
    
    STNData Curr_STN;		//## attribute Curr_STN
    
    bool FlagPrevAir;		//## attribute FlagPrevAir
    
    bool FlagPrevSTN;		//## attribute FlagPrevSTN
    
    bool FlagPrevSat;		//## attribute FlagPrevSat
    
    AirData PrevPlaneData;		//## attribute PrevPlaneData
    
    SatData PrevSatData;		//## attribute PrevSatData
    
    STNData Prev_STN_Final;		//## attribute Prev_STN_Final
    
    int STNStatus;		//## attribute STNStatus
    
    bool obtainedMetOcean;		//## attribute obtainedMetOcean
    
    bool obtainedSeismic;		//## attribute obtainedSeismic
    
    ////    Relations and components    ////
    
//#[ ignore
    in_C in;
    
    out_C out;
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CollectData_handleEvent(void);
    
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
