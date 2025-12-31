/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Wed, 31, Dec 2025  
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
//## classInstance itsAlertingSubsystem
class AlertingSubsystem;

//## auto_generated
class DataManagementSubsystem;

//## classInstance itsMetOceanDataProvider
class MetOceanDataProvider;

//## auto_generated
class OpsSafetySecuritySubsystem;

//## auto_generated
class Public;

//## classInstance itsRiskAssessmentSubsystem
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

//## classInstance itsAlertingSubsystem
extern AlertingSubsystem itsAlertingSubsystem;

//## classInstance itsMetOceanDataProvider
extern MetOceanDataProvider itsMetOceanDataProvider;

//## classInstance itsRiskAssessmentSubsystem
extern RiskAssessmentSubsystem itsRiskAssessmentSubsystem;

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

//## event evStartRA()
class evStartRA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartRA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartRA(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartRA : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartRA)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartRA_SMSWTD_Architecture_id;
//#]

//## event evPushSeismicRA(STNData,bool)
class evPushSeismicRA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPushSeismicRA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPushSeismicRA(void);
    
    //## auto_generated
    evPushSeismicRA(const STNData p_Curr_STN, const bool p_FlagPrevSTN);
    
    ////    Additional operations    ////
    
    //## auto_generated
    STNData getCurr_STN(void) const;
    
    //## auto_generated
    void setCurr_STN(const STNData p_Curr_STN);
    
    //## auto_generated
    bool getFlagPrevSTN(void) const;
    
    //## auto_generated
    void setFlagPrevSTN(const bool p_FlagPrevSTN);
    
    ////    Framework    ////

private :

    STNData Curr_STN;		//## auto_generated
    
    bool FlagPrevSTN;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPushSeismicRA : virtual public AOMEvent {
    DECLARE_META_EVENT(evPushSeismicRA)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPushSeismicRA_SMSWTD_Architecture_id;
//#]

//## event evPushMetOceanRA(AirData,SatData,bool,bool)
class evPushMetOceanRA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPushMetOceanRA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPushMetOceanRA(void);
    
    //## auto_generated
    evPushMetOceanRA(const AirData p_CurrPlaneDataFinal, const SatData p_CurrSatDataFinal, const bool p_FlagPrevSat, const bool p_FlagPrevAir);
    
    ////    Additional operations    ////
    
    //## auto_generated
    AirData getCurrPlaneDataFinal(void) const;
    
    //## auto_generated
    void setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal);
    
    //## auto_generated
    SatData getCurrSatDataFinal(void) const;
    
    //## auto_generated
    void setCurrSatDataFinal(const SatData p_CurrSatDataFinal);
    
    //## auto_generated
    bool getFlagPrevSat(void) const;
    
    //## auto_generated
    void setFlagPrevSat(const bool p_FlagPrevSat);
    
    //## auto_generated
    bool getFlagPrevAir(void) const;
    
    //## auto_generated
    void setFlagPrevAir(const bool p_FlagPrevAir);
    
    ////    Framework    ////

private :

    AirData CurrPlaneDataFinal;		//## auto_generated
    
    SatData CurrSatDataFinal;		//## auto_generated
    
    bool FlagPrevSat;		//## auto_generated
    
    bool FlagPrevAir;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPushMetOceanRA : virtual public AOMEvent {
    DECLARE_META_EVENT(evPushMetOceanRA)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPushMetOceanRA_SMSWTD_Architecture_id;
//#]

//## event startAnalysis()
class startAnalysis : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstartAnalysis;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    startAnalysis(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstartAnalysis : virtual public AOMEvent {
    DECLARE_META_EVENT(startAnalysis)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID startAnalysis_SMSWTD_Architecture_id;
//#]

//## event StartAS()
class StartAS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartAS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartAS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartAS : virtual public AOMEvent {
    DECLARE_META_EVENT(StartAS)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID StartAS_SMSWTD_Architecture_id;
//#]

//## event StartAlertGen()
class StartAlertGen : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartAlertGen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartAlertGen(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartAlertGen : virtual public AOMEvent {
    DECLARE_META_EVENT(StartAlertGen)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID StartAlertGen_SMSWTD_Architecture_id;
//#]

//## event evPushSeismicAlert(RhpString,bool,RhpString,bool,int,RhpString,bool,RhpString)
class evPushSeismicAlert : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPushSeismicAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPushSeismicAlert(void);
    
    //## auto_generated
    evPushSeismicAlert(const RhpString p_HealthStatusMessage, const bool p_Manual_Verification, const RhpString p_CurrSTNMessage, const bool p_Alert, const int p_LedCase, const RhpString p_AlertMessage, const bool p_Prediction, const RhpString p_PredMessage);
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpString getHealthStatusMessage(void) const;
    
    //## auto_generated
    void setHealthStatusMessage(const RhpString p_HealthStatusMessage);
    
    //## auto_generated
    bool getManual_Verification(void) const;
    
    //## auto_generated
    void setManual_Verification(const bool p_Manual_Verification);
    
    //## auto_generated
    RhpString getCurrSTNMessage(void) const;
    
    //## auto_generated
    void setCurrSTNMessage(const RhpString p_CurrSTNMessage);
    
    //## auto_generated
    bool getAlert(void) const;
    
    //## auto_generated
    void setAlert(const bool p_Alert);
    
    //## auto_generated
    int getLedCase(void) const;
    
    //## auto_generated
    void setLedCase(const int p_LedCase);
    
    //## auto_generated
    RhpString getAlertMessage(void) const;
    
    //## auto_generated
    void setAlertMessage(const RhpString p_AlertMessage);
    
    //## auto_generated
    bool getPrediction(void) const;
    
    //## auto_generated
    void setPrediction(const bool p_Prediction);
    
    //## auto_generated
    RhpString getPredMessage(void) const;
    
    //## auto_generated
    void setPredMessage(const RhpString p_PredMessage);
    
    ////    Framework    ////

private :

    RhpString HealthStatusMessage;		//## auto_generated
    
    bool Manual_Verification;		//## auto_generated
    
    RhpString CurrSTNMessage;		//## auto_generated
    
    bool Alert;		//## auto_generated
    
    int LedCase;		//## auto_generated
    
    RhpString AlertMessage;		//## auto_generated
    
    bool Prediction;		//## auto_generated
    
    RhpString PredMessage;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPushSeismicAlert : virtual public AOMEvent {
    DECLARE_META_EVENT(evPushSeismicAlert)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPushSeismicAlert_SMSWTD_Architecture_id;
//#]

//## event evPushMetOceanAlert(bool,RhpString,bool,int,RhpString,RhpString,RhpString,bool,RhpString)
class evPushMetOceanAlert : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPushMetOceanAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPushMetOceanAlert(void);
    
    //## auto_generated
    evPushMetOceanAlert(const bool p_Manual_Verification_MetO, const RhpString p_HealthStatusMessageMetO, const bool p_AlertMetO, const int p_LedCaseMetO, const RhpString p_AlertMessageMetO, const RhpString p_PlaneDataMessage, const RhpString p_SatDataMessage, const bool p_PredictionMetO, const RhpString p_PredMessageMetO);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getManual_Verification_MetO(void) const;
    
    //## auto_generated
    void setManual_Verification_MetO(const bool p_Manual_Verification_MetO);
    
    //## auto_generated
    RhpString getHealthStatusMessageMetO(void) const;
    
    //## auto_generated
    void setHealthStatusMessageMetO(const RhpString p_HealthStatusMessageMetO);
    
    //## auto_generated
    bool getAlertMetO(void) const;
    
    //## auto_generated
    void setAlertMetO(const bool p_AlertMetO);
    
    //## auto_generated
    int getLedCaseMetO(void) const;
    
    //## auto_generated
    void setLedCaseMetO(const int p_LedCaseMetO);
    
    //## auto_generated
    RhpString getAlertMessageMetO(void) const;
    
    //## auto_generated
    void setAlertMessageMetO(const RhpString p_AlertMessageMetO);
    
    //## auto_generated
    RhpString getPlaneDataMessage(void) const;
    
    //## auto_generated
    void setPlaneDataMessage(const RhpString p_PlaneDataMessage);
    
    //## auto_generated
    RhpString getSatDataMessage(void) const;
    
    //## auto_generated
    void setSatDataMessage(const RhpString p_SatDataMessage);
    
    //## auto_generated
    bool getPredictionMetO(void) const;
    
    //## auto_generated
    void setPredictionMetO(const bool p_PredictionMetO);
    
    //## auto_generated
    RhpString getPredMessageMetO(void) const;
    
    //## auto_generated
    void setPredMessageMetO(const RhpString p_PredMessageMetO);
    
    ////    Framework    ////

private :

    bool Manual_Verification_MetO;		//## auto_generated
    
    RhpString HealthStatusMessageMetO;		//## auto_generated
    
    bool AlertMetO;		//## auto_generated
    
    int LedCaseMetO;		//## auto_generated
    
    RhpString AlertMessageMetO;		//## auto_generated
    
    RhpString PlaneDataMessage;		//## auto_generated
    
    RhpString SatDataMessage;		//## auto_generated
    
    bool PredictionMetO;		//## auto_generated
    
    RhpString PredMessageMetO;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPushMetOceanAlert : virtual public AOMEvent {
    DECLARE_META_EVENT(evPushMetOceanAlert)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPushMetOceanAlert_SMSWTD_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.h
*********************************************************************/
