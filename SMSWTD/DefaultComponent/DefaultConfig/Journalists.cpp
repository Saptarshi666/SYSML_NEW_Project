/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Journalists
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Journalists.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Journalists.h"
//#[ ignore
#define UseCases_Journalists_Journalists_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Journalists
Journalists::Journalists(void) {
    NOTIFY_CONSTRUCTOR(Journalists, Journalists(), 0, UseCases_Journalists_Journalists_SERIALIZE);
}

Journalists::~Journalists(void) {
    NOTIFY_DESTRUCTOR(~Journalists, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedJournalists::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Journalists, UseCases, UseCases, false, OMAnimatedJournalists)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Journalists.cpp
*********************************************************************/
