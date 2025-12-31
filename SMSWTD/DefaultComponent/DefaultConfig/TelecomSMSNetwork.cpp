/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TelecomSMSNetwork
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TelecomSMSNetwork.h"
//#[ ignore
#define Context_TelecomSMSNetwork_TelecomSMSNetwork_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class TelecomSMSNetwork
//#[ ignore
TelecomSMSNetwork::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

TelecomSMSNetwork::in_C::~in_C(void) {
}

void TelecomSMSNetwork::in_C::connectTelecomSMSNetwork(TelecomSMSNetwork* part) {
}
//#]

TelecomSMSNetwork::TelecomSMSNetwork(void) {
    NOTIFY_CONSTRUCTOR(TelecomSMSNetwork, TelecomSMSNetwork(), 0, Context_TelecomSMSNetwork_TelecomSMSNetwork_SERIALIZE);
}

TelecomSMSNetwork::~TelecomSMSNetwork(void) {
    NOTIFY_DESTRUCTOR(~TelecomSMSNetwork, true);
}

TelecomSMSNetwork::in_C* TelecomSMSNetwork::getIn(void) const {
    return (TelecomSMSNetwork::in_C*) &in;
}

TelecomSMSNetwork::in_C* TelecomSMSNetwork::get_in(void) const {
    return (TelecomSMSNetwork::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TelecomSMSNetwork, Context, Context, false, OMAnimatedTelecomSMSNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.cpp
*********************************************************************/
