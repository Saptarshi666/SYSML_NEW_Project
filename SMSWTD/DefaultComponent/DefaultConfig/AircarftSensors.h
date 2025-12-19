/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircarftSensors
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircarftSensors.h
*********************************************************************/

#ifndef AircarftSensors_H
#define AircarftSensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor AircarftSensors
class AircarftSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAircarftSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AircarftSensors(void);
    
    //## auto_generated
    ~AircarftSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAircarftSensors : virtual public AOMInstance {
    DECLARE_META(AircarftSensors, OMAnimatedAircarftSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircarftSensors.h
*********************************************************************/
