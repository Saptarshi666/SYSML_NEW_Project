/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmergencyAuthorityOperator
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EmergencyAuthorityOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmergencyAuthorityOperator.h"
//#[ ignore
#define Context_EmergencyAuthorityOperator_EmergencyAuthorityOperator_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class EmergencyAuthorityOperator
//#[ ignore
EmergencyAuthorityOperator::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

EmergencyAuthorityOperator::out_C::~out_C(void) {
}

void EmergencyAuthorityOperator::out_C::connectEmergencyAuthorityOperator(EmergencyAuthorityOperator* part) {
}

EmergencyAuthorityOperator::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

EmergencyAuthorityOperator::in_C::~in_C(void) {
}

void EmergencyAuthorityOperator::in_C::connectEmergencyAuthorityOperator(EmergencyAuthorityOperator* part) {
}
//#]

EmergencyAuthorityOperator::EmergencyAuthorityOperator(void) {
    NOTIFY_CONSTRUCTOR(EmergencyAuthorityOperator, EmergencyAuthorityOperator(), 0, Context_EmergencyAuthorityOperator_EmergencyAuthorityOperator_SERIALIZE);
}

EmergencyAuthorityOperator::~EmergencyAuthorityOperator(void) {
    NOTIFY_DESTRUCTOR(~EmergencyAuthorityOperator, true);
}

EmergencyAuthorityOperator::out_C* EmergencyAuthorityOperator::getOut(void) const {
    return (EmergencyAuthorityOperator::out_C*) &out;
}

EmergencyAuthorityOperator::out_C* EmergencyAuthorityOperator::get_out(void) const {
    return (EmergencyAuthorityOperator::out_C*) &out;
}

EmergencyAuthorityOperator::in_C* EmergencyAuthorityOperator::getIn(void) const {
    return (EmergencyAuthorityOperator::in_C*) &in;
}

EmergencyAuthorityOperator::in_C* EmergencyAuthorityOperator::get_in(void) const {
    return (EmergencyAuthorityOperator::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(EmergencyAuthorityOperator, Context, Context, false, OMAnimatedEmergencyAuthorityOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmergencyAuthorityOperator.cpp
*********************************************************************/
