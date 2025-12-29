/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovtAgencies
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\GovtAgencies.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovtAgencies.h"
//#[ ignore
#define UseCases_GovtAgencies_GovtAgencies_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor GovtAgencies
GovtAgencies::GovtAgencies(void) {
    NOTIFY_CONSTRUCTOR(GovtAgencies, GovtAgencies(), 0, UseCases_GovtAgencies_GovtAgencies_SERIALIZE);
}

GovtAgencies::~GovtAgencies(void) {
    NOTIFY_DESTRUCTOR(~GovtAgencies, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovtAgencies::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(GovtAgencies, UseCases, UseCases, false, OMAnimatedGovtAgencies)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovtAgencies.cpp
*********************************************************************/
