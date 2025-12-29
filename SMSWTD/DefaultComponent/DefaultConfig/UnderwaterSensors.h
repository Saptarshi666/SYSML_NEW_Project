/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterSensors
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.h
*********************************************************************/

#ifndef UnderwaterSensors_H
#define UnderwaterSensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor UnderwaterSensors
class UnderwaterSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUnderwaterSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UnderwaterSensors(void);
    
    //## auto_generated
    ~UnderwaterSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUnderwaterSensors : virtual public AOMInstance {
    DECLARE_META(UnderwaterSensors, OMAnimatedUnderwaterSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSensors.h
*********************************************************************/
