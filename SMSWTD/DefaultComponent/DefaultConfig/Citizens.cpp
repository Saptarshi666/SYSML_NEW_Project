/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Citizens
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Citizens.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Citizens.h"
//#[ ignore
#define UseCases_Citizens_Citizens_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Citizens
Citizens::Citizens(void) {
    NOTIFY_CONSTRUCTOR(Citizens, Citizens(), 0, UseCases_Citizens_Citizens_SERIALIZE);
}

Citizens::~Citizens(void) {
    NOTIFY_DESTRUCTOR(~Citizens, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCitizens::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Citizens, UseCases, UseCases, false, OMAnimatedCitizens)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Citizens.cpp
*********************************************************************/
