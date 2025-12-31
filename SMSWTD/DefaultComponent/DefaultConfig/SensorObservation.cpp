/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorObservation
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorObservation.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorObservation.h"
//#[ ignore
#define Context_FlowItems_SensorObservation_SensorObservation_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class SensorObservation
SensorObservation::SensorObservation(void) {
    NOTIFY_CONSTRUCTOR(SensorObservation, SensorObservation(), 0, Context_FlowItems_SensorObservation_SensorObservation_SERIALIZE);
}

SensorObservation::~SensorObservation(void) {
    NOTIFY_DESTRUCTOR(~SensorObservation, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SensorObservation, Context_FlowItems, Context::FlowItems, false, OMAnimatedSensorObservation)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorObservation.cpp
*********************************************************************/
