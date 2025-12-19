/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.cpp
*********************************************************************/

//## auto_generated
#include "ThreatEnvironment.h"
//## package Context::Operating_Environment

//## class ThreatEnvironment
ThreatEnvironment::ThreatEnvironment(void) {
}

ThreatEnvironment::~ThreatEnvironment(void) {
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.cpp
*********************************************************************/
