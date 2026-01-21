/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmergencyServices
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EmergencyServices.h
*********************************************************************/

#ifndef EmergencyServices_H
#define EmergencyServices_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor EmergencyServices
class EmergencyServices {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergencyServices;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmergencyServices(void);
    
    //## auto_generated
    ~EmergencyServices(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergencyServices : virtual public AOMInstance {
    DECLARE_META(EmergencyServices, OMAnimatedEmergencyServices)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmergencyServices.h
*********************************************************************/
