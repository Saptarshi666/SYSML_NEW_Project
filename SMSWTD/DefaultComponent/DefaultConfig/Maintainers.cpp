/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainers.h"
//#[ ignore
#define Context_Maintainers_Maintainers_SERIALIZE OM_NO_OP
//#]

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
    NOTIFY_CONSTRUCTOR(Maintainers, Maintainers(), 0, Context_Maintainers_Maintainers_SERIALIZE);
}

Maintainers::~Maintainers(void) {
    NOTIFY_DESTRUCTOR(~Maintainers, true);
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

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Maintainers, Context, Context, false, OMAnimatedMaintainers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.cpp
*********************************************************************/
