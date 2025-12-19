/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationsEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.cpp
*********************************************************************/

//## auto_generated
#include "CommunicationsEnvironment.h"
//## package Context::Operating_Environment

//## class CommunicationsEnvironment
CommunicationsEnvironment::CommunicationsEnvironment(void) {
}

CommunicationsEnvironment::~CommunicationsEnvironment(void) {
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.cpp
*********************************************************************/
