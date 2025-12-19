/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Researcher.h"
//#[ ignore
#define UseCases_Researcher_Researcher_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Researcher
Researcher::Researcher(void) {
    NOTIFY_CONSTRUCTOR(Researcher, Researcher(), 0, UseCases_Researcher_Researcher_SERIALIZE);
}

Researcher::~Researcher(void) {
    NOTIFY_DESTRUCTOR(~Researcher, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearcher::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Researcher, UseCases, UseCases, false, OMAnimatedResearcher)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.cpp
*********************************************************************/
