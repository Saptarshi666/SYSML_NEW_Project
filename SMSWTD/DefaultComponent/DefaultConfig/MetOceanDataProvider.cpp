/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MetOceanDataProvider.h"
//#[ ignore
#define Context_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class MetOceanDataProvider
//#[ ignore
MetOceanDataProvider::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

MetOceanDataProvider::out_C::~out_C(void) {
}

void MetOceanDataProvider::out_C::connectMetOceanDataProvider(MetOceanDataProvider* part) {
}
//#]

MetOceanDataProvider::MetOceanDataProvider(void) {
    NOTIFY_CONSTRUCTOR(MetOceanDataProvider, MetOceanDataProvider(), 0, Context_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE);
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

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(MetOceanDataProvider, Context, Context, false, OMAnimatedMetOceanDataProvider)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/
