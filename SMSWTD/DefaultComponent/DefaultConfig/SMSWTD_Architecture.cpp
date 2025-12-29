/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD_Architecture.h"
//## classInstance itsAlertingSubsystem
#include "AlertingSubsystem.h"
//## classInstance itsMetOceanDataProvider
#include "MetOceanDataProvider.h"
//## classInstance itsRiskAssessmentSubsystem
#include "RiskAssessmentSubsystem.h"
//## classInstance itsSeismicTsunamiNetwork
#include "SeismicTsunamiNetwork.h"
//## classInstance itsSensingInterfaceSubsystem
#include "SensingInterfaceSubsystem.h"
//## auto_generated
#include "DataManagementSubsystem.h"
//## auto_generated
#include "OpsSafetySecuritySubsystem.h"
//## auto_generated
#include "Public.h"
//## auto_generated
#include "SMSWTD_System.h"
//## auto_generated
#include "UserInterfaceSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_extractCurrData_SERIALIZE \
    aomsmethod->addAttribute("inputData", UNKNOWN2STRING(inputData));\
    aomsmethod->addAttribute("index_prev", x2String(index_prev));
#define SMSWTD_Architecture_fillHistSineWave_SERIALIZE \
    aomsmethod->addAttribute("maxAmplitude", x2String(maxAmplitude));\
    aomsmethod->addAttribute("frequency", x2String(frequency));\
    aomsmethod->addAttribute("offset_Ydir", x2String(offset_Ydir));
#define evSeismicUpdate_SERIALIZE \
    OMADD_SER(CurrEQD, UNKNOWN2STRING(myEvent->CurrEQD))\
    OMADD_SER(CurrEQM, UNKNOWN2STRING(myEvent->CurrEQM))\
    OMADD_SER(CurrSCM, UNKNOWN2STRING(myEvent->CurrSCM))\
    OMADD_SER(CurrWPM, UNKNOWN2STRING(myEvent->CurrWPM))\
    OMADD_SER(STNStatus, x2String(myEvent->STNStatus))\
    OMADD_SER(CurrHealth, UNKNOWN2STRING(myEvent->CurrHealth))
#define evSeismicUpdate_UNSERIALIZE \
    OMADD_UNSER(FloatArray, CurrEQD, OMDestructiveString2X)\
    OMADD_UNSER(FloatArray, CurrEQM, OMDestructiveString2X)\
    OMADD_UNSER(FloatArray, CurrSCM, OMDestructiveString2X)\
    OMADD_UNSER(FloatArray, CurrWPM, OMDestructiveString2X)\
    OMADD_UNSER(int, STNStatus, OMDestructiveString2X)\
    OMADD_UNSER(FloatArray, CurrHealth, OMDestructiveString2X)
#define evMetOceanUpdate_SERIALIZE \
    OMADD_SER(CurrPlaneData, UNKNOWN2STRING(myEvent->CurrPlaneData))\
    OMADD_SER(CurrSatData, UNKNOWN2STRING(myEvent->CurrSatData))
#define evMetOceanUpdate_UNSERIALIZE \
    OMADD_UNSER(AirData, CurrPlaneData, OMDestructiveString2X)\
    OMADD_UNSER(SatData, CurrSatData, OMDestructiveString2X)
#define evPushMetOceanRA_SERIALIZE \
    OMADD_SER(CurrPlaneDataFinal, UNKNOWN2STRING(myEvent->CurrPlaneDataFinal))\
    OMADD_SER(CurrSatDataFinal, UNKNOWN2STRING(myEvent->CurrSatDataFinal))
#define evPushMetOceanRA_UNSERIALIZE \
    OMADD_UNSER(AirData, CurrPlaneDataFinal, OMDestructiveString2X)\
    OMADD_UNSER(SatData, CurrSatDataFinal, OMDestructiveString2X)
#define SMSWTD_Architecture_fillHistRamp_SERIALIZE aomsmethod->addAttribute("maxAmplitude", x2String(maxAmplitude));

#define SMSWTD_Architecture_printAirData_SERIALIZE aomsmethod->addAttribute("curr_air", UNKNOWN2STRING(curr_air));

#define SMSWTD_Architecture_printArray_SERIALIZE aomsmethod->addAttribute("curr_data", UNKNOWN2STRING(curr_data));

#define SMSWTD_Architecture_printHistory_SERIALIZE aomsmethod->addAttribute("HistData", UNKNOWN2STRING(HistData));

#define SMSWTD_Architecture_printLocation_SERIALIZE aomsmethod->addAttribute("curr_loc", UNKNOWN2STRING(curr_loc));

#define SMSWTD_Architecture_printSTNData_SERIALIZE aomsmethod->addAttribute("curr_stn", UNKNOWN2STRING(curr_stn));

#define SMSWTD_Architecture_printSatData_SERIALIZE aomsmethod->addAttribute("curr_sat", UNKNOWN2STRING(curr_sat));

#define evStartDataCollector_SERIALIZE OM_NO_OP

#define evStartDataCollector_UNSERIALIZE OM_NO_OP

#define evStartDataCollector_CONSTRUCTOR evStartDataCollector()

#define evCheckData_SERIALIZE OM_NO_OP

#define evCheckData_UNSERIALIZE OM_NO_OP

#define evCheckData_CONSTRUCTOR evCheckData()

#define evStartDataSend_SERIALIZE OM_NO_OP

#define evStartDataSend_UNSERIALIZE OM_NO_OP

#define evStartDataSend_CONSTRUCTOR evStartDataSend()

#define evStartDataMet_SERIALIZE OM_NO_OP

#define evStartDataMet_UNSERIALIZE OM_NO_OP

#define evStartDataMet_CONSTRUCTOR evStartDataMet()

#define evSeismicUpdate_CONSTRUCTOR evSeismicUpdate(CurrEQD, CurrEQM, CurrSCM, CurrWPM, STNStatus, CurrHealth)

#define evMetOceanUpdate_CONSTRUCTOR evMetOceanUpdate(CurrPlaneData, CurrSatData)

#define evStartRA_SERIALIZE OM_NO_OP

#define evStartRA_UNSERIALIZE OM_NO_OP

#define evStartRA_CONSTRUCTOR evStartRA()

#define evPushSeismicRA_SERIALIZE OMADD_SER(Curr_STN, UNKNOWN2STRING(myEvent->Curr_STN))

#define evPushSeismicRA_UNSERIALIZE OMADD_UNSER(STNData, Curr_STN, OMDestructiveString2X)

#define evPushSeismicRA_CONSTRUCTOR evPushSeismicRA(Curr_STN)

#define evPushMetOceanRA_CONSTRUCTOR evPushMetOceanRA(CurrPlaneDataFinal, CurrSatDataFinal)

#define startAnalysis_SERIALIZE OM_NO_OP

#define startAnalysis_UNSERIALIZE OM_NO_OP

#define startAnalysis_CONSTRUCTOR startAnalysis()

#define StartAS_SERIALIZE OM_NO_OP

#define StartAS_UNSERIALIZE OM_NO_OP

#define StartAS_CONSTRUCTOR StartAS()

#define StartAlertGen_SERIALIZE OM_NO_OP

#define StartAlertGen_UNSERIALIZE OM_NO_OP

#define StartAlertGen_CONSTRUCTOR StartAlertGen()
//#]

//## package SMSWTD_Architecture


//## classInstance itsAlertingSubsystem
AlertingSubsystem itsAlertingSubsystem;

//## classInstance itsMetOceanDataProvider
MetOceanDataProvider itsMetOceanDataProvider;

//## classInstance itsRiskAssessmentSubsystem
RiskAssessmentSubsystem itsRiskAssessmentSubsystem;

//## classInstance itsSeismicTsunamiNetwork
SeismicTsunamiNetwork itsSeismicTsunamiNetwork;

//## classInstance itsSensingInterfaceSubsystem
SensingInterfaceSubsystem itsSensingInterfaceSubsystem;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSWTD_Architecture, SMSWTD_Architecture)
#endif // _OMINSTRUMENT

//## operation extractCurrData(SimData,int)
FloatArray extractCurrData(const SimData& inputData, int index_prev) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, extractCurrData, extractCurrData(SimData,int), 2, SMSWTD_Architecture_extractCurrData_SERIALIZE);
    //#[ operation extractCurrData(SimData,int)
        FloatArray result;
        
        // Check if index_prev is out of valid range
        if(index_prev > 17) {
            printf("Error: index_prev = %d is out of range (max 17). Setting to 0.\n", index_prev);
            index_prev = 0;
        }
        
        // Extract 6 consecutive values with wrap-around
        for(int i = 0; i < 6; i++) {
            int sourceIndex = (index_prev + i) % 18;  // Wrap around using modulo
            result.data[i] = inputData.data[sourceIndex];
        }
        /*
        printf("Extracted 6 values starting from index %d:\n", index_prev);
        for(int i = 0; i < 6; i++) {
            int sourceIndex = (index_prev + i) % 18;
            printf("result.data[%d] = %f (from inputData.data[%d])\n", 
                   i, result.data[i], sourceIndex);
        }
        */
        return result;
    //#]
}

//## operation fillHistRamp(double)
SimData fillHistRamp(double maxAmplitude) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, fillHistRamp, fillHistRamp(double), 1, SMSWTD_Architecture_fillHistRamp_SERIALIZE);
    //#[ operation fillHistRamp(double)
    	// Initialize the correct history datatype
    	SimData historyData;
    	
    	// First half: ramp up from 0 to maxAmplitude (points 0-8)
        for(int i = 0; i < 9; i++) {
            historyData.data[i] = (maxAmplitude * i) / 9.0;
        }
        
        // Second half: ramp down from maxAmplitude to 0 (points 9-17)
        for(int i = 9; i < 18; i++) {
            historyData.data[i] = maxAmplitude * (18.0 - i) / 9.0;
        }
        // test message for task completion
        std::cout << "History filled with half-wave (max amplitude = " << maxAmplitude << "):" << std::endl;
     
        return historyData;
    //#]
}

//## operation fillHistSineWave(double,double,double)
SimData fillHistSineWave(double maxAmplitude, double frequency, double offset_Ydir) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, fillHistSineWave, fillHistSineWave(double,double,double), 3, SMSWTD_Architecture_fillHistSineWave_SERIALIZE);
    //#[ operation fillHistSineWave(double,double,double)
    	// Initialize the correct history datatype
    	SimData historyData;
    
        //Compute the sine wave with for loop
    	for(int i = 0; i < 18; i++) {
            // Sine wave with adjustable frequency and vertical offset
            double angle = (3.14159265359 * frequency * i) / 18.0;
            historyData.data[i] = (sin(angle) * maxAmplitude) + offset_Ydir;
        }
        
        printf("History filled with sine wave (max amplitude = %f, frequency = %f, y-offset = %f):\n", 
               maxAmplitude, frequency, offset_Ydir);
        
    	return historyData;
    //#]
}

//## operation printAirData(AirData)
void printAirData(const AirData& curr_air) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printAirData, printAirData(AirData), 1, SMSWTD_Architecture_printAirData_SERIALIZE);
    //#[ operation printAirData(AirData)
        std::cout << "Aircraft Data:\n";
        std::cout << "  Temperature (Temp) = " << curr_air.Temp << std::endl;
        std::cout << "  Humidity (Humd) = " << curr_air.Humd << std::endl;
        std::cout << "  Air Pressure (AirP) = " << curr_air.AirP << std::endl;
        std::cout << "  Wind Speed (WinS) = " << curr_air.WinS << std::endl;
        std::cout << "  Measurement Certainty (MesC) = " << curr_air.MesC << std::endl;
        std::cout << "  Location X (LocX) = " << curr_air.LocX << std::endl;
        std::cout << "  Location Y (LocY) = " << curr_air.LocY << std::endl;
        std::cout <<" Final Certainity = "<<curr_air.FinalC <<std::endl;
    //#]
}

//## operation printArray(FloatArray)
void printArray(const FloatArray& curr_data) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printArray, printArray(FloatArray), 1, SMSWTD_Architecture_printArray_SERIALIZE);
    //#[ operation printArray(FloatArray)
    	std::cout << "Data filled in the current FloatArray = :\n";
        for(int i = 0; i < 6; i++) {
            std::cout << "FloatArray.data[" << i << "] = " << curr_data.data[i] << std::endl;
        }
    //#]
}

//## operation printHistory(SimData)
void printHistory(const SimData& HistData) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printHistory, printHistory(SimData), 1, SMSWTD_Architecture_printHistory_SERIALIZE);
    //#[ operation printHistory(SimData)
        std::cout << "History filled with half-wave:" << std::endl;
        for(int i = 0; i < 18; i++) {
            std::cout << "History.data[" << i << "] = " << HistData.data[i] << std::endl;
        }
    //#]
}

//## operation printLocation(Location)
void printLocation(const Location& curr_loc) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printLocation, printLocation(Location), 1, SMSWTD_Architecture_printLocation_SERIALIZE);
    //#[ operation printLocation(Location)
        std::cout << "Location Data:\n";
        std::cout << "  x = " << curr_loc.x << std::endl;
        std::cout << "  y = " << curr_loc.y << std::endl;
    //#]
}

//## operation printSTNData(STNData)
void printSTNData(const STNData& curr_stn) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printSTNData, printSTNData(STNData), 1, SMSWTD_Architecture_printSTNData_SERIALIZE);
    //#[ operation printSTNData(STNData)
        std::cout << "Station Data:\n";
        std::cout << "  Earthquake Magnitude (EQM) = " << curr_stn.EQM << std::endl;
        std::cout << "  Earthquake Depth (EQD) = " << curr_stn.EQD << std::endl;
        std::cout << "  Seismic Count Measure (SCM) = " << curr_stn.SCM << std::endl;
        std::cout << "  Wave Propagation Measure (WPM) = " << curr_stn.WPM << std::endl;
        std::cout << "  Data Complete (DataC) = " << (curr_stn.DataC ? "true" : "false") << std::endl;
    //#]
}

//## operation printSatData(SatData)
void printSatData(const SatData& curr_sat) {
    NOTIFY_FUNCTION(SMSWTD_Architecture, printSatData, printSatData(SatData), 1, SMSWTD_Architecture_printSatData_SERIALIZE);
    //#[ operation printSatData(SatData)
        std::cout << "Satellite Data:\n";
        std::cout << "  Temperature Gradient (TempG) = " << curr_sat.TempG << std::endl;
        std::cout << "  Storm Size (StSize) = " << curr_sat.StSize << std::endl;
        std::cout << "  Storm Location X (StLocX) = " << curr_sat.StLocX << std::endl;
        std::cout << "  Storm Location Y (StLocY) = " << curr_sat.StLocY << std::endl;
        std::cout <<" Final Certainity = "<<curr_sat.FinalC <<std::endl;
    //#]
}

void SMSWTD_Architecture_initRelations(void) {
    {
        {
            itsSeismicTsunamiNetwork.setShouldDelete(false);
        }
        {
            itsSensingInterfaceSubsystem.setShouldDelete(false);
        }
        {
            itsMetOceanDataProvider.setShouldDelete(false);
        }
        {
            itsRiskAssessmentSubsystem.setShouldDelete(false);
        }
        {
            itsAlertingSubsystem.setShouldDelete(false);
        }
    }
    {
        
        itsSeismicTsunamiNetwork.get_out()->setItsDefaultRequiredInterface(itsSensingInterfaceSubsystem.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        itsSensingInterfaceSubsystem.get_in()->addItsDefaultRequiredInterface(itsSeismicTsunamiNetwork.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsMetOceanDataProvider.get_out()->setItsDefaultRequiredInterface(itsSensingInterfaceSubsystem.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        itsSensingInterfaceSubsystem.get_in()->addItsDefaultRequiredInterface(itsMetOceanDataProvider.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsSensingInterfaceSubsystem.get_out()->setItsDefaultRequiredInterface(itsRiskAssessmentSubsystem.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        itsRiskAssessmentSubsystem.get_in()->setItsDefaultRequiredInterface(itsSensingInterfaceSubsystem.get_out()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsRiskAssessmentSubsystem.get_out()->setItsDefaultRequiredInterface(itsAlertingSubsystem.get_in()->getItsDefaultProvidedInterface());
        
    }{
        
        itsAlertingSubsystem.get_in()->setItsDefaultRequiredInterface(itsRiskAssessmentSubsystem.get_out()->getItsDefaultProvidedInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SMSWTD_Architecture_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAlertingSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = itsMetOceanDataProvider.startBehavior();
        }
    if(done == true)
        {
            done = itsRiskAssessmentSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = itsSeismicTsunamiNetwork.startBehavior();
        }
    if(done == true)
        {
            done = itsSensingInterfaceSubsystem.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSeismicTsunamiNetwork, SeismicTsunamiNetwork, "itsSeismicTsunamiNetwork", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSensingInterfaceSubsystem, SensingInterfaceSubsystem, "itsSensingInterfaceSubsystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMetOceanDataProvider, MetOceanDataProvider, "itsMetOceanDataProvider", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsRiskAssessmentSubsystem, RiskAssessmentSubsystem, "itsRiskAssessmentSubsystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAlertingSubsystem, AlertingSubsystem, "itsAlertingSubsystem", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
SMSWTD_Architecture_OMInitializer::SMSWTD_Architecture_OMInitializer(void) {
    SMSWTD_Architecture_initRelations();
    (void) SMSWTD_Architecture_startBehavior();
}

SMSWTD_Architecture_OMInitializer::~SMSWTD_Architecture_OMInitializer(void) {
}
//#]

//## event evStartDataCollector()
evStartDataCollector::evStartDataCollector(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartDataCollector)
    setId(evStartDataCollector_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evStartDataCollector_SMSWTD_Architecture_id(3401);
//#]

IMPLEMENT_META_EVENT_P(evStartDataCollector, SMSWTD_Architecture, SMSWTD_Architecture, evStartDataCollector())

//## event evCheckData()
evCheckData::evCheckData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckData)
    setId(evCheckData_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evCheckData_SMSWTD_Architecture_id(3402);
//#]

IMPLEMENT_META_EVENT_P(evCheckData, SMSWTD_Architecture, SMSWTD_Architecture, evCheckData())

//## event evStartDataSend()
evStartDataSend::evStartDataSend(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartDataSend)
    setId(evStartDataSend_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evStartDataSend_SMSWTD_Architecture_id(3403);
//#]

IMPLEMENT_META_EVENT_P(evStartDataSend, SMSWTD_Architecture, SMSWTD_Architecture, evStartDataSend())

//## event evStartDataMet()
evStartDataMet::evStartDataMet(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartDataMet)
    setId(evStartDataMet_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evStartDataMet_SMSWTD_Architecture_id(3404);
//#]

IMPLEMENT_META_EVENT_P(evStartDataMet, SMSWTD_Architecture, SMSWTD_Architecture, evStartDataMet())

//## event evSeismicUpdate(FloatArray,FloatArray,FloatArray,FloatArray,int,FloatArray)
evSeismicUpdate::evSeismicUpdate(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evSeismicUpdate)
    setId(evSeismicUpdate_SMSWTD_Architecture_id);
}

evSeismicUpdate::evSeismicUpdate(const FloatArray p_CurrEQD, const FloatArray p_CurrEQM, const FloatArray p_CurrSCM, const FloatArray p_CurrWPM, const int p_STNStatus, const FloatArray p_CurrHealth) : OMEvent() ,CurrEQD(p_CurrEQD),CurrEQM(p_CurrEQM),CurrSCM(p_CurrSCM),CurrWPM(p_CurrWPM),STNStatus(p_STNStatus),CurrHealth(p_CurrHealth) {
    NOTIFY_EVENT_CONSTRUCTOR(evSeismicUpdate)
    setId(evSeismicUpdate_SMSWTD_Architecture_id);
}

FloatArray evSeismicUpdate::getCurrEQD(void) const {
    return CurrEQD;
}

void evSeismicUpdate::setCurrEQD(const FloatArray p_CurrEQD) {
    CurrEQD = p_CurrEQD;
}

FloatArray evSeismicUpdate::getCurrEQM(void) const {
    return CurrEQM;
}

void evSeismicUpdate::setCurrEQM(const FloatArray p_CurrEQM) {
    CurrEQM = p_CurrEQM;
}

FloatArray evSeismicUpdate::getCurrSCM(void) const {
    return CurrSCM;
}

void evSeismicUpdate::setCurrSCM(const FloatArray p_CurrSCM) {
    CurrSCM = p_CurrSCM;
}

FloatArray evSeismicUpdate::getCurrWPM(void) const {
    return CurrWPM;
}

void evSeismicUpdate::setCurrWPM(const FloatArray p_CurrWPM) {
    CurrWPM = p_CurrWPM;
}

int evSeismicUpdate::getSTNStatus(void) const {
    return STNStatus;
}

void evSeismicUpdate::setSTNStatus(const int p_STNStatus) {
    STNStatus = p_STNStatus;
}

FloatArray evSeismicUpdate::getCurrHealth(void) const {
    return CurrHealth;
}

void evSeismicUpdate::setCurrHealth(const FloatArray p_CurrHealth) {
    CurrHealth = p_CurrHealth;
}

//#[ ignore
const IOxfEvent::ID evSeismicUpdate_SMSWTD_Architecture_id(3405);
//#]

IMPLEMENT_META_EVENT_NO_UNSERIALIZE_P(evSeismicUpdate, SMSWTD_Architecture, SMSWTD_Architecture, evSeismicUpdate(FloatArray,FloatArray,FloatArray,FloatArray,int,FloatArray))

//## event evMetOceanUpdate(AirData,SatData)
evMetOceanUpdate::evMetOceanUpdate(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evMetOceanUpdate)
    setId(evMetOceanUpdate_SMSWTD_Architecture_id);
}

evMetOceanUpdate::evMetOceanUpdate(const AirData p_CurrPlaneData, const SatData p_CurrSatData) : OMEvent() ,CurrPlaneData(p_CurrPlaneData),CurrSatData(p_CurrSatData) {
    NOTIFY_EVENT_CONSTRUCTOR(evMetOceanUpdate)
    setId(evMetOceanUpdate_SMSWTD_Architecture_id);
}

AirData evMetOceanUpdate::getCurrPlaneData(void) const {
    return CurrPlaneData;
}

void evMetOceanUpdate::setCurrPlaneData(const AirData p_CurrPlaneData) {
    CurrPlaneData = p_CurrPlaneData;
}

SatData evMetOceanUpdate::getCurrSatData(void) const {
    return CurrSatData;
}

void evMetOceanUpdate::setCurrSatData(const SatData p_CurrSatData) {
    CurrSatData = p_CurrSatData;
}

//#[ ignore
const IOxfEvent::ID evMetOceanUpdate_SMSWTD_Architecture_id(3406);
//#]

IMPLEMENT_META_EVENT_NO_UNSERIALIZE_P(evMetOceanUpdate, SMSWTD_Architecture, SMSWTD_Architecture, evMetOceanUpdate(AirData,SatData))

//## event evStartRA()
evStartRA::evStartRA(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartRA)
    setId(evStartRA_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evStartRA_SMSWTD_Architecture_id(3407);
//#]

IMPLEMENT_META_EVENT_P(evStartRA, SMSWTD_Architecture, SMSWTD_Architecture, evStartRA())

//## event evPushSeismicRA(STNData)
evPushSeismicRA::evPushSeismicRA(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evPushSeismicRA)
    setId(evPushSeismicRA_SMSWTD_Architecture_id);
}

evPushSeismicRA::evPushSeismicRA(const STNData p_Curr_STN) : OMEvent() ,Curr_STN(p_Curr_STN) {
    NOTIFY_EVENT_CONSTRUCTOR(evPushSeismicRA)
    setId(evPushSeismicRA_SMSWTD_Architecture_id);
}

STNData evPushSeismicRA::getCurr_STN(void) const {
    return Curr_STN;
}

void evPushSeismicRA::setCurr_STN(const STNData p_Curr_STN) {
    Curr_STN = p_Curr_STN;
}

//#[ ignore
const IOxfEvent::ID evPushSeismicRA_SMSWTD_Architecture_id(3408);
//#]

IMPLEMENT_META_EVENT_NO_UNSERIALIZE_P(evPushSeismicRA, SMSWTD_Architecture, SMSWTD_Architecture, evPushSeismicRA(STNData))

//## event evPushMetOceanRA(AirData,SatData)
evPushMetOceanRA::evPushMetOceanRA(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evPushMetOceanRA)
    setId(evPushMetOceanRA_SMSWTD_Architecture_id);
}

evPushMetOceanRA::evPushMetOceanRA(const AirData p_CurrPlaneDataFinal, const SatData p_CurrSatDataFinal) : OMEvent() ,CurrPlaneDataFinal(p_CurrPlaneDataFinal),CurrSatDataFinal(p_CurrSatDataFinal) {
    NOTIFY_EVENT_CONSTRUCTOR(evPushMetOceanRA)
    setId(evPushMetOceanRA_SMSWTD_Architecture_id);
}

AirData evPushMetOceanRA::getCurrPlaneDataFinal(void) const {
    return CurrPlaneDataFinal;
}

void evPushMetOceanRA::setCurrPlaneDataFinal(const AirData p_CurrPlaneDataFinal) {
    CurrPlaneDataFinal = p_CurrPlaneDataFinal;
}

SatData evPushMetOceanRA::getCurrSatDataFinal(void) const {
    return CurrSatDataFinal;
}

void evPushMetOceanRA::setCurrSatDataFinal(const SatData p_CurrSatDataFinal) {
    CurrSatDataFinal = p_CurrSatDataFinal;
}

//#[ ignore
const IOxfEvent::ID evPushMetOceanRA_SMSWTD_Architecture_id(3409);
//#]

IMPLEMENT_META_EVENT_NO_UNSERIALIZE_P(evPushMetOceanRA, SMSWTD_Architecture, SMSWTD_Architecture, evPushMetOceanRA(AirData,SatData))

//## event startAnalysis()
startAnalysis::startAnalysis(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(startAnalysis)
    setId(startAnalysis_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID startAnalysis_SMSWTD_Architecture_id(3410);
//#]

IMPLEMENT_META_EVENT_P(startAnalysis, SMSWTD_Architecture, SMSWTD_Architecture, startAnalysis())

//## event StartAS()
StartAS::StartAS(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(StartAS)
    setId(StartAS_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID StartAS_SMSWTD_Architecture_id(3411);
//#]

IMPLEMENT_META_EVENT_P(StartAS, SMSWTD_Architecture, SMSWTD_Architecture, StartAS())

//## event StartAlertGen()
StartAlertGen::StartAlertGen(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(StartAlertGen)
    setId(StartAlertGen_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID StartAlertGen_SMSWTD_Architecture_id(3412);
//#]

IMPLEMENT_META_EVENT_P(StartAlertGen, SMSWTD_Architecture, SMSWTD_Architecture, StartAlertGen())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/
