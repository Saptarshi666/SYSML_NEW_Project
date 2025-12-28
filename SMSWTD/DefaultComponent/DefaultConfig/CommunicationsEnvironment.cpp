/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationsEnvironment
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationsEnvironment.h"
//#[ ignore
#define Context_Operating_Environment_CommunicationsEnvironment_CommunicationsEnvironment_SERIALIZE OM_NO_OP
//#]

//## package Context::Operating_Environment

//## class CommunicationsEnvironment
CommunicationsEnvironment::CommunicationsEnvironment(void) {
    NOTIFY_CONSTRUCTOR(CommunicationsEnvironment, CommunicationsEnvironment(), 0, Context_Operating_Environment_CommunicationsEnvironment_CommunicationsEnvironment_SERIALIZE);
}

CommunicationsEnvironment::~CommunicationsEnvironment(void) {
    NOTIFY_DESTRUCTOR(~CommunicationsEnvironment, true);
}

const double CommunicationsEnvironment::getBandwidth(void) const {
    return bandwidth;
}

void CommunicationsEnvironment::setBandwidth(const double p_bandwidth) {
    bandwidth = p_bandwidth;
}

const double CommunicationsEnvironment::getLatency(void) const {
    return latency;
}

void CommunicationsEnvironment::setLatency(const double p_latency) {
    latency = p_latency;
}

const double CommunicationsEnvironment::getLinkAvailability(void) const {
    return linkAvailability;
}

void CommunicationsEnvironment::setLinkAvailability(const double p_linkAvailability) {
    linkAvailability = p_linkAvailability;
}

const double CommunicationsEnvironment::getOutageProbability(void) const {
    return outageProbability;
}

void CommunicationsEnvironment::setOutageProbability(const double p_outageProbability) {
    outageProbability = p_outageProbability;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationsEnvironment::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("linkAvailability", x2String(myReal->linkAvailability));
    aomsAttributes->addAttribute("latency", x2String(myReal->latency));
    aomsAttributes->addAttribute("bandwidth", x2String(myReal->bandwidth));
    aomsAttributes->addAttribute("outageProbability", x2String(myReal->outageProbability));
}
//#]

IMPLEMENT_META_P(CommunicationsEnvironment, Context_Operating_Environment, Context::Operating_Environment, false, OMAnimatedCommunicationsEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.cpp
*********************************************************************/
