/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MobilePushService
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MobilePushService.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MobilePushService.h"
//#[ ignore
#define Context_MobilePushService_MobilePushService_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class MobilePushService
//#[ ignore
MobilePushService::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

MobilePushService::in_C::~in_C(void) {
}

void MobilePushService::in_C::connectMobilePushService(MobilePushService* part) {
}
//#]

MobilePushService::MobilePushService(void) {
    NOTIFY_CONSTRUCTOR(MobilePushService, MobilePushService(), 0, Context_MobilePushService_MobilePushService_SERIALIZE);
}

MobilePushService::~MobilePushService(void) {
    NOTIFY_DESTRUCTOR(~MobilePushService, true);
}

MobilePushService::in_C* MobilePushService::getIn(void) const {
    return (MobilePushService::in_C*) &in;
}

MobilePushService::in_C* MobilePushService::get_in(void) const {
    return (MobilePushService::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(MobilePushService, Context, Context, false, OMAnimatedMobilePushService)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MobilePushService.cpp
*********************************************************************/
