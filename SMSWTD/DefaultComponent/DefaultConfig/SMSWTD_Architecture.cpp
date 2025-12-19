/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_Architecture
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD_Architecture.h"
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
#include "RiskAssessmentSubsystem.h"
//## auto_generated
#include "SensingInterfaceSubsystem.h"
//## auto_generated
#include "SMSWTD_System.h"
//## auto_generated
#include "UserInterfaceSubsystem.h"
//#[ ignore
#define startdatacollector_SERIALIZE OM_NO_OP

#define startdatacollector_UNSERIALIZE OM_NO_OP

#define startdatacollector_CONSTRUCTOR startdatacollector()

#define evStartDataCollector_SERIALIZE OM_NO_OP

#define evStartDataCollector_UNSERIALIZE OM_NO_OP

#define evStartDataCollector_CONSTRUCTOR evStartDataCollector()

#define evCheckData_SERIALIZE OM_NO_OP

#define evCheckData_UNSERIALIZE OM_NO_OP

#define evCheckData_CONSTRUCTOR evCheckData()
//#]

//## package SMSWTD_Architecture


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SMSWTD_Architecture, SMSWTD_Architecture)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event startdatacollector()
startdatacollector::startdatacollector(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(startdatacollector)
    setId(startdatacollector_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID startdatacollector_SMSWTD_Architecture_id(3401);
//#]

IMPLEMENT_META_EVENT_P(startdatacollector, SMSWTD_Architecture, SMSWTD_Architecture, startdatacollector())

//## event evStartDataCollector()
evStartDataCollector::evStartDataCollector(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartDataCollector)
    setId(evStartDataCollector_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evStartDataCollector_SMSWTD_Architecture_id(3402);
//#]

IMPLEMENT_META_EVENT_P(evStartDataCollector, SMSWTD_Architecture, SMSWTD_Architecture, evStartDataCollector())

//## event evCheckData()
evCheckData::evCheckData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckData)
    setId(evCheckData_SMSWTD_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evCheckData_SMSWTD_Architecture_id(3403);
//#]

IMPLEMENT_META_EVENT_P(evCheckData, SMSWTD_Architecture, SMSWTD_Architecture, evCheckData())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_Architecture.cpp
*********************************************************************/
