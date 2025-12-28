/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//#[ ignore
#define Context_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class SMSWTD
//#[ ignore
SMSWTD::dataIn_C::dataIn_C(void) : OMDefaultMulticastReactivePort(), _p_(0) {
}

SMSWTD::dataIn_C::~dataIn_C(void) {
}

void SMSWTD::dataIn_C::connectSMSWTD(SMSWTD* part) {
}

SMSWTD::alertOut_C::alertOut_C(void) : OMDefaultMulticastReactivePort(), _p_(0) {
}

SMSWTD::alertOut_C::~alertOut_C(void) {
}

void SMSWTD::alertOut_C::connectSMSWTD(SMSWTD* part) {
}

SMSWTD::policyIn_C::policyIn_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SMSWTD::policyIn_C::~policyIn_C(void) {
}

void SMSWTD::policyIn_C::connectSMSWTD(SMSWTD* part) {
}

SMSWTD::healthOut_C::healthOut_C(void) : OMDefaultMulticastReactivePort(), _p_(0) {
}

SMSWTD::healthOut_C::~healthOut_C(void) {
}

void SMSWTD::healthOut_C::connectSMSWTD(SMSWTD* part) {
}

SMSWTD::query_C::query_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SMSWTD::query_C::~query_C(void) {
}

void SMSWTD::query_C::connectSMSWTD(SMSWTD* part) {
}

SMSWTD::maintenance_C::maintenance_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SMSWTD::maintenance_C::~maintenance_C(void) {
}

void SMSWTD::maintenance_C::connectSMSWTD(SMSWTD* part) {
}
//#]

SMSWTD::SMSWTD(void) {
    NOTIFY_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, Context_SMSWTD_SMSWTD_SERIALIZE);
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
}

SMSWTD::dataIn_C* SMSWTD::getDataIn(void) const {
    return (SMSWTD::dataIn_C*) &dataIn;
}

SMSWTD::dataIn_C* SMSWTD::get_dataIn(void) const {
    return (SMSWTD::dataIn_C*) &dataIn;
}

SMSWTD::alertOut_C* SMSWTD::getAlertOut(void) const {
    return (SMSWTD::alertOut_C*) &alertOut;
}

SMSWTD::alertOut_C* SMSWTD::get_alertOut(void) const {
    return (SMSWTD::alertOut_C*) &alertOut;
}

SMSWTD::policyIn_C* SMSWTD::getPolicyIn(void) const {
    return (SMSWTD::policyIn_C*) &policyIn;
}

SMSWTD::policyIn_C* SMSWTD::get_policyIn(void) const {
    return (SMSWTD::policyIn_C*) &policyIn;
}

SMSWTD::healthOut_C* SMSWTD::getHealthOut(void) const {
    return (SMSWTD::healthOut_C*) &healthOut;
}

SMSWTD::healthOut_C* SMSWTD::get_healthOut(void) const {
    return (SMSWTD::healthOut_C*) &healthOut;
}

SMSWTD::query_C* SMSWTD::getQuery(void) const {
    return (SMSWTD::query_C*) &query;
}

SMSWTD::query_C* SMSWTD::get_query(void) const {
    return (SMSWTD::query_C*) &query;
}

SMSWTD::maintenance_C* SMSWTD::getMaintenance(void) const {
    return (SMSWTD::maintenance_C*) &maintenance;
}

SMSWTD::maintenance_C* SMSWTD::get_maintenance(void) const {
    return (SMSWTD::maintenance_C*) &maintenance;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SMSWTD, Context, Context, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
