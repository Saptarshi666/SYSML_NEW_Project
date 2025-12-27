/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Sat, 27, Dec 2025  
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
class Public;

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


// Can store 6 double elements.
//## type FloatArray
struct FloatArray {
    double data[6];		//## attribute data
};

// Store long term recorded data for simulation use. 18 elements (double values) can be stored.
//## type SimData
struct SimData {
    double data[18];		//## attribute data
};

//## type Location
struct Location {
    double x;		//## attribute x
    double y;		//## attribute y
    double z;		//## attribute z
};

//## type SimLoc
struct SimLoc {
    Location data[18];		//## attribute data
};

//## type LocArray
struct LocArray {
    Location data[6];		//## attribute data
};

//## classInstance itsMetOceanDataProvider
extern MetOceanDataProvider itsMetOceanDataProvider;

//## classInstance itsSeismicTsunamiNetwork
extern SeismicTsunamiNetwork itsSeismicTsunamiNetwork;

//## classInstance itsSensingInterfaceSubsystem
extern SensingInterfaceSubsystem itsSensingInterfaceSubsystem;

//## operation extractCurrData(SimData,int)
FloatArray extractCurrData(const SimData& inputData, int index_prev);

// Generate wave data with a certain amplitude.
//## operation fillHistRamp(double)
SimData fillHistRamp(double maxAmplitude);

//## operation fillHistSineWave(double,double,double)
SimData fillHistSineWave(double maxAmplitude = 1, double frequency = 2, double offset_Ydir = 0);

//## operation printArray(FloatArray)
void printArray(const FloatArray& curr_data);

// Print all the elements inside the Input variable of SimData datatype
//## operation printHistory(SimData)
void printHistory(const SimData& HistData);

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
    virtual ~SMSWTD_Architecture_OMInitializer(void);
};
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

//## event evStartDataSend()
class evStartDataSend : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartDataSend;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartDataSend(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartDataSend : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartDataSend)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartDataSend_SMSWTD_Architecture_id;
//#]

//## event evStartDataMet()
class evStartDataMet : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartDataMet;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartDataMet(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartDataMet : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartDataMet)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartDataMet_SMSWTD_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.h
*********************************************************************/
