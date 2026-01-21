/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OperationalEnvironment
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "OperationalEnvironment.h"
//#[ ignore
#define Context_Operating_Environment_OperationalEnvironment_OperationalEnvironment_SERIALIZE OM_NO_OP
//#]

//## package Context::Operating_Environment

//## class OperationalEnvironment
OperationalEnvironment::OperationalEnvironment(void) {
    NOTIFY_CONSTRUCTOR(OperationalEnvironment, OperationalEnvironment(), 0, Context_Operating_Environment_OperationalEnvironment_OperationalEnvironment_SERIALIZE);
}

OperationalEnvironment::~OperationalEnvironment(void) {
    NOTIFY_DESTRUCTOR(~OperationalEnvironment, true);
}

const bool OperationalEnvironment::getIs24x7(void) const {
    return is24x7;
}

void OperationalEnvironment::setIs24x7(const bool p_is24x7) {
    is24x7 = p_is24x7;
}

const bool OperationalEnvironment::getMultiAgency(void) const {
    return multiAgency;
}

void OperationalEnvironment::setMultiAgency(const bool p_multiAgency) {
    multiAgency = p_multiAgency;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperationalEnvironment::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("is24x7", x2String(myReal->is24x7));
    aomsAttributes->addAttribute("multiAgency", x2String(myReal->multiAgency));
}
//#]

IMPLEMENT_META_P(OperationalEnvironment, Context_Operating_Environment, Context::Operating_Environment, false, OMAnimatedOperationalEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.cpp
*********************************************************************/
