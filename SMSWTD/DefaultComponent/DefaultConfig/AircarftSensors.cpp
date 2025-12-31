/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircarftSensors
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircarftSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AircarftSensors.h"
//#[ ignore
#define UseCases_AircarftSensors_AircarftSensors_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor AircarftSensors
AircarftSensors::AircarftSensors(void) {
    NOTIFY_CONSTRUCTOR(AircarftSensors, AircarftSensors(), 0, UseCases_AircarftSensors_AircarftSensors_SERIALIZE);
}

AircarftSensors::~AircarftSensors(void) {
    NOTIFY_DESTRUCTOR(~AircarftSensors, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAircarftSensors::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(AircarftSensors, UseCases, UseCases, false, OMAnimatedAircarftSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircarftSensors.cpp
*********************************************************************/
