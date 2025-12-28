/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterSensors
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UnderwaterSensors.h"
//#[ ignore
#define UseCases_UnderwaterSensors_UnderwaterSensors_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor UnderwaterSensors
UnderwaterSensors::UnderwaterSensors(void) {
    NOTIFY_CONSTRUCTOR(UnderwaterSensors, UnderwaterSensors(), 0, UseCases_UnderwaterSensors_UnderwaterSensors_SERIALIZE);
}

UnderwaterSensors::~UnderwaterSensors(void) {
    NOTIFY_DESTRUCTOR(~UnderwaterSensors, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderwaterSensors::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(UnderwaterSensors, UseCases, UseCases, false, OMAnimatedUnderwaterSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.cpp
*********************************************************************/
