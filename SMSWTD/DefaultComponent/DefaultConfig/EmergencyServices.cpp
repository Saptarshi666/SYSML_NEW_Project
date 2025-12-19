/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmergencyServices
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EmergencyServices.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmergencyServices.h"
//#[ ignore
#define UseCases_EmergencyServices_EmergencyServices_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor EmergencyServices
EmergencyServices::EmergencyServices(void) {
    NOTIFY_CONSTRUCTOR(EmergencyServices, EmergencyServices(), 0, UseCases_EmergencyServices_EmergencyServices_SERIALIZE);
}

EmergencyServices::~EmergencyServices(void) {
    NOTIFY_DESTRUCTOR(~EmergencyServices, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEmergencyServices::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(EmergencyServices, UseCases, UseCases, false, OMAnimatedEmergencyServices)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmergencyServices.cpp
*********************************************************************/
