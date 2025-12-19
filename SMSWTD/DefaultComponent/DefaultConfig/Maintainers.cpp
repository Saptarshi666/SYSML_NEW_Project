/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/

//## auto_generated
#include "Maintainers.h"
//## package Context

//## class Maintainers
//#[ ignore
Maintainers::healthIn_C::healthIn_C(void) : OMDefaultReactivePort(), _p_(0) {
}

Maintainers::healthIn_C::~healthIn_C(void) {
}

void Maintainers::healthIn_C::connectMaintainers(Maintainers* part) {
}

Maintainers::maintenance_C::maintenance_C(void) : OMDefaultReactivePort(), _p_(0) {
}

Maintainers::maintenance_C::~maintenance_C(void) {
}

void Maintainers::maintenance_C::connectMaintainers(Maintainers* part) {
}
//#]

Maintainers::Maintainers(void) {
}

Maintainers::~Maintainers(void) {
}

Maintainers::healthIn_C* Maintainers::getHealthIn(void) const {
    return (Maintainers::healthIn_C*) &healthIn;
}

Maintainers::healthIn_C* Maintainers::get_healthIn(void) const {
    return (Maintainers::healthIn_C*) &healthIn;
}

Maintainers::maintenance_C* Maintainers::getMaintenance(void) const {
    return (Maintainers::maintenance_C*) &maintenance;
}

Maintainers::maintenance_C* Maintainers::get_maintenance(void) const {
    return (Maintainers::maintenance_C*) &maintenance;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/
