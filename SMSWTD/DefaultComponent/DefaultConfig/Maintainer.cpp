/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainer.h"
//#[ ignore
#define UseCases_Maintainer_Maintainer_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Maintainer
Maintainer::Maintainer(void) {
    NOTIFY_CONSTRUCTOR(Maintainer, Maintainer(), 0, UseCases_Maintainer_Maintainer_SERIALIZE);
}

Maintainer::~Maintainer(void) {
    NOTIFY_DESTRUCTOR(~Maintainer, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainer::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Maintainer, UseCases, UseCases, false, OMAnimatedMaintainer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/
