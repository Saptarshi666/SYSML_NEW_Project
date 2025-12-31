/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EAOperator
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EAOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EAOperator.h"
//#[ ignore
#define UseCases_EAOperator_EAOperator_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor EAOperator
EAOperator::EAOperator(void) {
    NOTIFY_CONSTRUCTOR(EAOperator, EAOperator(), 0, UseCases_EAOperator_EAOperator_SERIALIZE);
}

EAOperator::~EAOperator(void) {
    NOTIFY_DESTRUCTOR(~EAOperator, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEAOperator::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(EAOperator, UseCases, UseCases, false, OMAnimatedEAOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EAOperator.cpp
*********************************************************************/
