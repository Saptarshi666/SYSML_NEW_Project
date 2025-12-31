/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PhysicalEnvironment
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PhysicalEnvironment.h"
//#[ ignore
#define Context_Operating_Environment_PhysicalEnvironment_PhysicalEnvironment_SERIALIZE OM_NO_OP
//#]

//## package Context::Operating_Environment

//## class PhysicalEnvironment
PhysicalEnvironment::PhysicalEnvironment(void) : temperatureMin(0.0) {
    NOTIFY_CONSTRUCTOR(PhysicalEnvironment, PhysicalEnvironment(), 0, Context_Operating_Environment_PhysicalEnvironment_PhysicalEnvironment_SERIALIZE);
}

PhysicalEnvironment::~PhysicalEnvironment(void) {
    NOTIFY_DESTRUCTOR(~PhysicalEnvironment, true);
}

const double PhysicalEnvironment::getHumidity(void) const {
    return humidity;
}

void PhysicalEnvironment::setHumidity(const double p_humidity) {
    humidity = p_humidity;
}

const bool PhysicalEnvironment::getSaltExposure(void) const {
    return saltExposure;
}

void PhysicalEnvironment::setSaltExposure(const bool p_saltExposure) {
    saltExposure = p_saltExposure;
}

const double PhysicalEnvironment::getSeismicActivity(void) const {
    return seismicActivity;
}

void PhysicalEnvironment::setSeismicActivity(const double p_seismicActivity) {
    seismicActivity = p_seismicActivity;
}

const bool PhysicalEnvironment::getStormCondition(void) const {
    return stormCondition;
}

void PhysicalEnvironment::setStormCondition(const bool p_stormCondition) {
    stormCondition = p_stormCondition;
}

const double PhysicalEnvironment::getTemperatureMax(void) const {
    return temperatureMax;
}

void PhysicalEnvironment::setTemperatureMax(const double p_temperatureMax) {
    temperatureMax = p_temperatureMax;
}

const double PhysicalEnvironment::getTemperatureMin(void) const {
    return temperatureMin;
}

void PhysicalEnvironment::setTemperatureMin(const double p_temperatureMin) {
    temperatureMin = p_temperatureMin;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPhysicalEnvironment::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temperatureMin", x2String(myReal->temperatureMin));
    aomsAttributes->addAttribute("humidity", x2String(myReal->humidity));
    aomsAttributes->addAttribute("saltExposure", x2String(myReal->saltExposure));
    aomsAttributes->addAttribute("stormCondition", x2String(myReal->stormCondition));
    aomsAttributes->addAttribute("seismicActivity", x2String(myReal->seismicActivity));
    aomsAttributes->addAttribute("temperatureMax", x2String(myReal->temperatureMax));
}
//#]

IMPLEMENT_META_P(PhysicalEnvironment, Context_Operating_Environment, Context::Operating_Environment, false, OMAnimatedPhysicalEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.cpp
*********************************************************************/
