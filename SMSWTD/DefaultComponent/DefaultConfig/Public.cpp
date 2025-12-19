/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Public
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Public.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Public.h"
//#[ ignore
#define Context_Public_Public_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class Public
Public::Public(void) {
    NOTIFY_CONSTRUCTOR(Public, Public(), 0, Context_Public_Public_SERIALIZE);
}

Public::~Public(void) {
    NOTIFY_DESTRUCTOR(~Public, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Public, Context, Context, false, OMAnimatedPublic)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Public.cpp
*********************************************************************/
