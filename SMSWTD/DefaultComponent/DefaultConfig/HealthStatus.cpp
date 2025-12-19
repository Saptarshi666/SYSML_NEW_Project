/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HealthStatus
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\HealthStatus.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HealthStatus.h"
//#[ ignore
#define Context_FlowItems_HealthStatus_HealthStatus_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class HealthStatus
HealthStatus::HealthStatus(void) {
    NOTIFY_CONSTRUCTOR(HealthStatus, HealthStatus(), 0, Context_FlowItems_HealthStatus_HealthStatus_SERIALIZE);
}

HealthStatus::~HealthStatus(void) {
    NOTIFY_DESTRUCTOR(~HealthStatus, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(HealthStatus, Context_FlowItems, Context::FlowItems, false, OMAnimatedHealthStatus)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HealthStatus.cpp
*********************************************************************/
