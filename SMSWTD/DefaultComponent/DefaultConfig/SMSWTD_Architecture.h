/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Mon, 29, Dec 2025  
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
};

//## type SimLoc
struct SimLoc {
    Location data[18];		//## attribute data
};

//## type LocArray
struct LocArray {
    Location data[6];		//## attribute data
};

//## type AirData
struct AirData {
    double Temp;		//## attribute Temp
    double Humd;		//## attribute Humd
    double AirP;		//## attribute AirP
    double WinS;		//## attribute WinS
    double MesC;		//## attribute MesC
    double LocX;		//## attribute LocX
    double LocY;		//## attribute LocY
    bool FinalC;		//## attribute FinalC
};

//## type SatData
struct SatData {
    double TempG;		//## attribute TempG
    double StSize;		//## attribute StSize
    double StLocX;		//## attribute StLocX
    double StLocY;		//## attribute StLocY
    bool FinalC;		//## attribute FinalC
};

// Stores final data selected from currData of STN with Data Confidence (DataC) in boolean.
//## type STNData
struct STNData {
    double EQM;		//## attribute EQM
    double EQD;		//## attribute EQD
    double SCM;		//## attribute SCM
    double WPM;		//## attribute WPM
    bool DataC;		//## attribute DataC
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

//## operation printAirData(AirData)
void printAirData(const AirData& curr_air);

//## operation printArray(FloatArray)
void printArray(const FloatArray& curr_data);

// Print all the elements inside the Input variable of SimData datatype
//## operation printHistory(SimData)
void printHistory(const SimData& HistData);

//## operation printLocation(Location)
void printLocation(const Location& curr_loc = {0,0});

//## operation printSTNData(STNData)
void printSTNData(const STNData& curr_stn);

//## operation printSatData(SatData)
void printSatData(const SatData& curr_sat);

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

//## event evSeismicUpdate(FloatArray,FloatArray,FloatArray,FloatArray,int,FloatArray)
class evSeismicUpdate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSeismicUpdate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSeismicUpdate(void);
    
    //## auto_generated
    evSeismicUpdate(const FloatArray p_CurrEQD, const FloatArray p_CurrEQM, const FloatArray p_CurrSCM, const FloatArray p_CurrWPM, const int p_STNStatus, const FloatArray p_CurrHealth);
    
    ////    Additional operations    ////
    
    //## auto_generated
    FloatArray getCurrEQD(void) const;
    
    //## auto_generated
    void setCurrEQD(const FloatArray p_CurrEQD);
    
    //## auto_generated
    FloatArray getCurrEQM(void) const;
    
    //## auto_generated
    void setCurrEQM(const FloatArray p_CurrEQM);
    
    //## auto_generated
    FloatArray getCurrSCM(void) const;
    
    //## auto_generated
    void setCurrSCM(const FloatArray p_CurrSCM);
    
    //## auto_generated
    FloatArray getCurrWPM(void) const;
    
    //## auto_generated
    void setCurrWPM(const FloatArray p_CurrWPM);
    
    //## auto_generated
    int getSTNStatus(void) const;
    
    //## auto_generated
    void setSTNStatus(const int p_STNStatus);
    
    //## auto_generated
    FloatArray getCurrHealth(void) const;
    
    //## auto_generated
    void setCurrHealth(const FloatArray p_CurrHealth);
    
    ////    Framework    ////

private :

    FloatArray CurrEQD;		//## auto_generated
    
    FloatArray CurrEQM;		//## auto_generated
    
    FloatArray CurrSCM;		//## auto_generated
    
    FloatArray CurrWPM;		//## auto_generated
    
    int STNStatus;		//## auto_generated
    
    FloatArray CurrHealth;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSeismicUpdate : virtual public AOMEvent {
    DECLARE_META_EVENT(evSeismicUpdate)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSeismicUpdate_SMSWTD_Architecture_id;
//#]

//## event evMetOceanUpdate(AirData,SatData)
class evMetOceanUpdate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMetOceanUpdate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMetOceanUpdate(void);
    
    //## auto_generated
    evMetOceanUpdate(const AirData p_CurrPlaneData, const SatData p_CurrSatData);
    
    ////    Additional operations    ////
    
    //## auto_generated
    AirData getCurrPlaneData(void) const;
    
    //## auto_generated
    void setCurrPlaneData(const AirData p_CurrPlaneData);
    
    //## auto_generated
    SatData getCurrSatData(void) const;
    
    //## auto_generated
    void setCurrSatData(const SatData p_CurrSatData);
    
    ////    Framework    ////

private :

    AirData CurrPlaneData;		//## auto_generated
    
    SatData CurrSatData;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMetOceanUpdate : virtual public AOMEvent {
    DECLARE_META_EVENT(evMetOceanUpdate)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evMetOceanUpdate_SMSWTD_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.h
*********************************************************************/
