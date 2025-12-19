/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SirenPASystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SirenPASystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SirenPASystem.h"
//#[ ignore
#define Context_SirenPASystem_SirenPASystem_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class SirenPASystem
//#[ ignore
SirenPASystem::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SirenPASystem::in_C::~in_C(void) {
}

void SirenPASystem::in_C::connectSirenPASystem(SirenPASystem* part) {
}
//#]

SirenPASystem::SirenPASystem(void) {
    NOTIFY_CONSTRUCTOR(SirenPASystem, SirenPASystem(), 0, Context_SirenPASystem_SirenPASystem_SERIALIZE);
}

SirenPASystem::~SirenPASystem(void) {
    NOTIFY_DESTRUCTOR(~SirenPASystem, true);
}

SirenPASystem::in_C* SirenPASystem::getIn(void) const {
    return (SirenPASystem::in_C*) &in;
}

SirenPASystem::in_C* SirenPASystem::get_in(void) const {
    return (SirenPASystem::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SirenPASystem, Context, Context, false, OMAnimatedSirenPASystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SirenPASystem.cpp
*********************************************************************/
