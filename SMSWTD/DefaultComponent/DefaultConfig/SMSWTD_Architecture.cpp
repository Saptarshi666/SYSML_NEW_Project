/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD_Architecture.h"
//## classInstance itsMetOceanDataProvider
#include "MetOceanDataProvider.h"
//## classInstance itsSeismicTsunamiNetwork
#include "SeismicTsunamiNetwork.h"
//## classInstance itsSensingInterfaceSubsystem
#include "SensingInterfaceSubsystem.h"
//## auto_generated
#include "AlertingSubsystem.h"
//## auto_generated
#include "AnalyticsSubsystem.h"
//## auto_generated
#include "DataIngestionSubsystem.h"
//## auto_generated
#include "DataManagementSubsystem.h"
//## auto_generated
#include "OpsSafetySecuritySubsystem.h"
//## auto_generated
#include "Public.h"
//## auto_generated
#include "RiskAssessmentSubsystem.h"
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
#define SMSWTD_Architecture_fillHistRamp_SERIALIZE aomsmethod->addAttribute("maxAmplitude", x2String(maxAmplitude));

#define SMSWTD_Architecture_printArray_SERIALIZE aomsmethod->addAttribute("curr_data", UNKNOWN2STRING(curr_data));

#define SMSWTD_Architecture_printHistory_SERIALIZE aomsmethod->addAttribute("HistData", UNKNOWN2STRING(HistData));

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
//#]

//## package SMSWTD_Architecture


//## classInstance itsMetOceanDataProvider
MetOceanDataProvider itsMetOceanDataProvider;

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
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SMSWTD_Architecture_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsMetOceanDataProvider.startBehavior();
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/
