/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertMessage
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertMessage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AlertMessage.h"
//#[ ignore
#define Context_FlowItems_AlertMessage_AlertMessage_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class AlertMessage
AlertMessage::AlertMessage(void) {
    NOTIFY_CONSTRUCTOR(AlertMessage, AlertMessage(), 0, Context_FlowItems_AlertMessage_AlertMessage_SERIALIZE);
}

AlertMessage::~AlertMessage(void) {
    NOTIFY_DESTRUCTOR(~AlertMessage, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AlertMessage, Context_FlowItems, Context::FlowItems, false, OMAnimatedAlertMessage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertMessage.cpp
*********************************************************************/
