/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MetOceanDataProvider.h"
//#[ ignore
#define SMSWTD_Architecture_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class MetOceanDataProvider
//#[ ignore
MetOceanDataProvider::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

MetOceanDataProvider::out_C::~out_C(void) {
}

void MetOceanDataProvider::out_C::connectMetOceanDataProvider(MetOceanDataProvider* part) {
}
//#]

MetOceanDataProvider::MetOceanDataProvider(void) : magnitude(70), testing({6.0, 6.0, 6.0, 6.0, 6.0, 6.0}) {
    NOTIFY_CONSTRUCTOR(MetOceanDataProvider, MetOceanDataProvider(), 0, SMSWTD_Architecture_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE);
}

MetOceanDataProvider::~MetOceanDataProvider(void) {
    NOTIFY_DESTRUCTOR(~MetOceanDataProvider, true);
}

MetOceanDataProvider::out_C* MetOceanDataProvider::getOut(void) const {
    return (MetOceanDataProvider::out_C*) &out;
}

MetOceanDataProvider::out_C* MetOceanDataProvider::get_out(void) const {
    return (MetOceanDataProvider::out_C*) &out;
}

const int MetOceanDataProvider::getMagnitude(void) const {
    return magnitude;
}

void MetOceanDataProvider::setMagnitude(const int p_magnitude) {
    magnitude = p_magnitude;
}

const FloatArray MetOceanDataProvider::getTesting(void) const {
    return testing;
}

void MetOceanDataProvider::setTesting(const FloatArray p_testing) {
    testing = p_testing;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMetOceanDataProvider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("magnitude", x2String(myReal->magnitude));
    aomsAttributes->addAttribute("testing", UNKNOWN2STRING(myReal->testing));
}
//#]

IMPLEMENT_META_P(MetOceanDataProvider, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedMetOceanDataProvider)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/
