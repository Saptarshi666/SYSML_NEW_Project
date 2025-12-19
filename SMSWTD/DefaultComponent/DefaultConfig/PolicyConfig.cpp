/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PolicyConfig
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\PolicyConfig.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PolicyConfig.h"
//#[ ignore
#define Context_FlowItems_PolicyConfig_PolicyConfig_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class PolicyConfig
PolicyConfig::PolicyConfig(void) {
    NOTIFY_CONSTRUCTOR(PolicyConfig, PolicyConfig(), 0, Context_FlowItems_PolicyConfig_PolicyConfig_SERIALIZE);
}

PolicyConfig::~PolicyConfig(void) {
    NOTIFY_DESTRUCTOR(~PolicyConfig, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(PolicyConfig, Context_FlowItems, Context::FlowItems, false, OMAnimatedPolicyConfig)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PolicyConfig.cpp
*********************************************************************/
