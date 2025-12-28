/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatEnvironment
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ThreatEnvironment.h"
//#[ ignore
#define Context_Operating_Environment_ThreatEnvironment_ThreatEnvironment_SERIALIZE OM_NO_OP
//#]

//## package Context::Operating_Environment

//## class ThreatEnvironment
ThreatEnvironment::ThreatEnvironment(void) {
    NOTIFY_CONSTRUCTOR(ThreatEnvironment, ThreatEnvironment(), 0, Context_Operating_Environment_ThreatEnvironment_ThreatEnvironment_SERIALIZE);
}

ThreatEnvironment::~ThreatEnvironment(void) {
    NOTIFY_DESTRUCTOR(~ThreatEnvironment, true);
}

const double ThreatEnvironment::getCredentialRisk(void) const {
    return credentialRisk;
}

void ThreatEnvironment::setCredentialRisk(const double p_credentialRisk) {
    credentialRisk = p_credentialRisk;
}

const double ThreatEnvironment::getDdosRisk(void) const {
    return ddosRisk;
}

void ThreatEnvironment::setDdosRisk(const double p_ddosRisk) {
    ddosRisk = p_ddosRisk;
}

const double ThreatEnvironment::getSpoofingRisk(void) const {
    return spoofingRisk;
}

void ThreatEnvironment::setSpoofingRisk(const double p_spoofingRisk) {
    spoofingRisk = p_spoofingRisk;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedThreatEnvironment::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ddosRisk", x2String(myReal->ddosRisk));
    aomsAttributes->addAttribute("spoofingRisk", x2String(myReal->spoofingRisk));
    aomsAttributes->addAttribute("credentialRisk", x2String(myReal->credentialRisk));
}
//#]

IMPLEMENT_META_P(ThreatEnvironment, Context_Operating_Environment, Context::Operating_Environment, false, OMAnimatedThreatEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.cpp
*********************************************************************/
