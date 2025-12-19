/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.h
*********************************************************************/

#ifndef SMSWTD_Architecture_H
#define SMSWTD_Architecture_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class AlertingSubsystem;

//## auto_generated
class AnalyticsSubsystem;

//## auto_generated
class DataIngestionSubsystem;

//## auto_generated
class DataManagementSubsystem;

//## classInstance itsMetOceanDataProvider
class MetOceanDataProvider;

//## auto_generated
class OpsSafetySecuritySubsystem;

//## auto_generated
class RiskAssessmentSubsystem;

//## auto_generated
class SMSWTD_System;

//## classInstance itsSeismicTsunamiNetwork
class SeismicTsunamiNetwork;

//## classInstance itsSensingInterfaceSubsystem
class SensingInterfaceSubsystem;

//## auto_generated
class UserInterfaceSubsystem;

//## package SMSWTD_Architecture


//## type FloatArray
struct FloatArray {
    double data[6];		//## attribute data
};

//## classInstance itsMetOceanDataProvider
extern MetOceanDataProvider itsMetOceanDataProvider;

//## classInstance itsSeismicTsunamiNetwork
extern SeismicTsunamiNetwork itsSeismicTsunamiNetwork;

//## classInstance itsSensingInterfaceSubsystem
extern SensingInterfaceSubsystem itsSensingInterfaceSubsystem;

//## auto_generated
void SMSWTD_Architecture_initRelations(void);

//## auto_generated
bool SMSWTD_Architecture_startBehavior(void);

//#[ ignore
class SMSWTD_Architecture_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSWTD_Architecture_OMInitializer(void);
    
    //## auto_generated
    ~SMSWTD_Architecture_OMInitializer(void);
};
//#]

//## event startdatacollector()
class startdatacollector : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstartdatacollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    startdatacollector(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstartdatacollector : virtual public AOMEvent {
    DECLARE_META_EVENT(startdatacollector)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID startdatacollector_SMSWTD_Architecture_id;
//#]

//## event evStartDataCollector()
class evStartDataCollector : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartDataCollector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartDataCollector(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartDataCollector : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartDataCollector)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartDataCollector_SMSWTD_Architecture_id;
//#]

//## event evCheckData()
class evCheckData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCheckData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCheckData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCheckData : virtual public AOMEvent {
    DECLARE_META_EVENT(evCheckData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evCheckData_SMSWTD_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.h
*********************************************************************/
