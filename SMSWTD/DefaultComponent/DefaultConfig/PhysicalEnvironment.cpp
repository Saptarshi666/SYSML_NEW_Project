/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PhysicalEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.cpp
*********************************************************************/

//## auto_generated
#include "PhysicalEnvironment.h"
//## package Context::Operating_Environment

//## class PhysicalEnvironment
PhysicalEnvironment::PhysicalEnvironment(void) : temperatureMin(0.0) {
}

PhysicalEnvironment::~PhysicalEnvironment(void) {
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.cpp
*********************************************************************/
