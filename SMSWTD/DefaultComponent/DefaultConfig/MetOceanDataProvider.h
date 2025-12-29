/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Mon, 29, Dec 2025  
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
//#[ ignore
#define OMAnim_SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneData_int_ARGS_DECLARATION int p_CasePlaneData;

#define OMAnim_SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneLoc_int_ARGS_DECLARATION int p_CasePlaneLoc;

#define OMAnim_SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneMC_int_ARGS_DECLARATION int p_CasePlaneMC;

#define OMAnim_SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormData_int_ARGS_DECLARATION int p_CaseSatStormData;

#define OMAnim_SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormLoc_int_ARGS_DECLARATION int p_CaseSatStormLoc;
//#]

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
    const int getCasePlaneData(void) const;
    
    //## auto_generated
    void setCasePlaneData(const int p_CasePlaneData);
    
    //## auto_generated
    const int getCasePlaneLoc(void) const;
    
    //## auto_generated
    void setCasePlaneLoc(const int p_CasePlaneLoc);
    
    //## auto_generated
    const int getCasePlaneMC(void) const;
    
    //## auto_generated
    void setCasePlaneMC(const int p_CasePlaneMC);
    
    //## auto_generated
    const int getCaseSatStormData(void) const;
    
    //## auto_generated
    void setCaseSatStormData(const int p_CaseSatStormData);
    
    //## auto_generated
    const int getCaseSatStormLoc(void) const;
    
    //## auto_generated
    void setCaseSatStormLoc(const int p_CaseSatStormLoc);
    
    //## auto_generated
    const AirData getCurrPlaneData(void) const;
    
    //## auto_generated
    void setCurrPlaneData(const AirData p_CurrPlaneData);
    
    //## auto_generated
    const SatData getCurrSatData(void) const;
    
    //## auto_generated
    void setCurrSatData(const SatData p_CurrSatData);
    
    //## auto_generated
    const int getPrevMetO(void) const;
    
    //## auto_generated
    void setPrevMetO(const int p_PrevMetO);
    
    //## auto_generated
    const SimData getRecAMC1(void) const;
    
    //## auto_generated
    void setRecAMC1(const SimData p_RecAMC1);
    
    //## auto_generated
    const SimData getRecAMC2(void) const;
    
    //## auto_generated
    void setRecAMC2(const SimData p_RecAMC2);
    
    //## auto_generated
    const SimData getRecAMC3(void) const;
    
    //## auto_generated
    void setRecAMC3(const SimData p_RecAMC3);
    
    //## auto_generated
    const SimData getRecAP1(void) const;
    
    //## auto_generated
    void setRecAP1(const SimData p_RecAP1);
    
    //## auto_generated
    const SimData getRecAP2(void) const;
    
    //## auto_generated
    void setRecAP2(const SimData p_RecAP2);
    
    //## auto_generated
    const Location getRecAirLoc1(void) const;
    
    //## auto_generated
    void setRecAirLoc1(const Location p_RecAirLoc1);
    
    //## auto_generated
    const Location getRecAirLoc2(void) const;
    
    //## auto_generated
    void setRecAirLoc2(const Location p_RecAirLoc2);
    
    //## auto_generated
    const Location getRecAirLoc3(void) const;
    
    //## auto_generated
    void setRecAirLoc3(const Location p_RecAirLoc3);
    
    //## auto_generated
    const SimData getRecHumd1(void) const;
    
    //## auto_generated
    void setRecHumd1(const SimData p_RecHumd1);
    
    //## auto_generated
    const SimData getRecHumd2(void) const;
    
    //## auto_generated
    void setRecHumd2(const SimData p_RecHumd2);
    
    //## auto_generated
    const SimData getRecHumd3(void) const;
    
    //## auto_generated
    void setRecHumd3(const SimData p_RecHumd3);
    
    //## auto_generated
    const Location getRecSatLoc1(void) const;
    
    //## auto_generated
    void setRecSatLoc1(const Location p_RecSatLoc1);
    
    //## auto_generated
    const Location getRecSatLoc2(void) const;
    
    //## auto_generated
    void setRecSatLoc2(const Location p_RecSatLoc2);
    
    //## auto_generated
    const Location getRecSatLoc3(void) const;
    
    //## auto_generated
    void setRecSatLoc3(const Location p_RecSatLoc3);
    
    //## auto_generated
    const SimData getRecSatTempGrad1(void) const;
    
    //## auto_generated
    void setRecSatTempGrad1(const SimData p_RecSatTempGrad1);
    
    //## auto_generated
    const SimData getRecSatTempGrad2(void) const;
    
    //## auto_generated
    void setRecSatTempGrad2(const SimData p_RecSatTempGrad2);
    
    //## auto_generated
    const SimData getRecStormSize1(void) const;
    
    //## auto_generated
    void setRecStormSize1(const SimData p_RecStormSize1);
    
    //## auto_generated
    const SimData getRecStormSize2(void) const;
    
    //## auto_generated
    void setRecStormSize2(const SimData p_RecStormSize2);
    
    //## auto_generated
    const SimData getRecStormSize3(void) const;
    
    //## auto_generated
    void setRecStormSize3(const SimData p_RecStormSize3);
    
    //## auto_generated
    const SimData getRecTemp1(void) const;
    
    //## auto_generated
    void setRecTemp1(const SimData p_RecTemp1);
    
    //## auto_generated
    const SimData getRecTemp2(void) const;
    
    //## auto_generated
    void setRecTemp2(const SimData p_RecTemp2);
    
    //## auto_generated
    const SimData getRecTemp3(void) const;
    
    //## auto_generated
    void setRecTemp3(const SimData p_RecTemp3);
    
    //## auto_generated
    const SimData getRecWS1(void) const;
    
    //## auto_generated
    void setRecWS1(const SimData p_RecWS1);
    
    //## auto_generated
    const SimData getRecWS2(void) const;
    
    //## auto_generated
    void setRecWS2(const SimData p_RecWS2);
    
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

    int CasePlaneData;		//## attribute CasePlaneData
    
    // Dictates Planes Location and Measurement Uncertainty.
    int CasePlaneLoc;		//## attribute CasePlaneLoc
    
    int CasePlaneMC;		//## attribute CasePlaneMC
    
    int CaseSatStormData;		//## attribute CaseSatStormData
    
    int CaseSatStormLoc;		//## attribute CaseSatStormLoc
    
    AirData CurrPlaneData;		//## attribute CurrPlaneData
    
    SatData CurrSatData;		//## attribute CurrSatData
    
    int PrevMetO;		//## attribute PrevMetO
    
    SimData RecAMC1;		//## attribute RecAMC1
    
    SimData RecAMC2;		//## attribute RecAMC2
    
    SimData RecAMC3;		//## attribute RecAMC3
    
    SimData RecAP1;		//## attribute RecAP1
    
    SimData RecAP2;		//## attribute RecAP2
    
    Location RecAirLoc1;		//## attribute RecAirLoc1
    
    Location RecAirLoc2;		//## attribute RecAirLoc2
    
    Location RecAirLoc3;		//## attribute RecAirLoc3
    
    SimData RecHumd1;		//## attribute RecHumd1
    
    SimData RecHumd2;		//## attribute RecHumd2
    
    SimData RecHumd3;		//## attribute RecHumd3
    
    Location RecSatLoc1;		//## attribute RecSatLoc1
    
    Location RecSatLoc2;		//## attribute RecSatLoc2
    
    Location RecSatLoc3;		//## attribute RecSatLoc3
    
    SimData RecSatTempGrad1;		//## attribute RecSatTempGrad1
    
    SimData RecSatTempGrad2;		//## attribute RecSatTempGrad2
    
    SimData RecStormSize1;		//## attribute RecStormSize1
    
    SimData RecStormSize2;		//## attribute RecStormSize2
    
    SimData RecStormSize3;		//## attribute RecStormSize3
    
    SimData RecTemp1;		//## attribute RecTemp1
    
    SimData RecTemp2;		//## attribute RecTemp2
    
    SimData RecTemp3;		//## attribute RecTemp3
    
    SimData RecWS1;		//## attribute RecWS1
    
    SimData RecWS2;		//## attribute RecWS2
    
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
DECLARE_OPERATION_CLASS(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneData_int)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneLoc_int)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneMC_int)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormData_int)

DECLARE_OPERATION_CLASS(SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormLoc_int)

//#[ ignore
class OMAnimatedMetOceanDataProvider : virtual public AOMInstance {
    DECLARE_REACTIVE_META(MetOceanDataProvider, OMAnimatedMetOceanDataProvider)
    
    DECLARE_META_OP(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneData_int)
    
    DECLARE_META_OP(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneLoc_int)
    
    DECLARE_META_OP(SMSWTD_Architecture_MetOceanDataProvider_setCasePlaneMC_int)
    
    DECLARE_META_OP(SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormData_int)
    
    DECLARE_META_OP(SMSWTD_Architecture_MetOceanDataProvider_setCaseSatStormLoc_int)
    
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
