/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovAlertNetwork
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\GovAlertNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovAlertNetwork.h"
//#[ ignore
#define Context_GovAlertNetwork_GovAlertNetwork_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class GovAlertNetwork
//#[ ignore
GovAlertNetwork::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

GovAlertNetwork::in_C::~in_C(void) {
}

void GovAlertNetwork::in_C::connectGovAlertNetwork(GovAlertNetwork* part) {
}
//#]

GovAlertNetwork::GovAlertNetwork(void) {
    NOTIFY_CONSTRUCTOR(GovAlertNetwork, GovAlertNetwork(), 0, Context_GovAlertNetwork_GovAlertNetwork_SERIALIZE);
}

GovAlertNetwork::~GovAlertNetwork(void) {
    NOTIFY_DESTRUCTOR(~GovAlertNetwork, true);
}

GovAlertNetwork::in_C* GovAlertNetwork::getIn(void) const {
    return (GovAlertNetwork::in_C*) &in;
}

GovAlertNetwork::in_C* GovAlertNetwork::get_in(void) const {
    return (GovAlertNetwork::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(GovAlertNetwork, Context, Context, false, OMAnimatedGovAlertNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovAlertNetwork.cpp
*********************************************************************/
