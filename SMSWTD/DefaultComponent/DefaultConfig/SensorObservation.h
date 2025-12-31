/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorObservation
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorObservation.h
*********************************************************************/

#ifndef SensorObservation_H
#define SensorObservation_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "FlowItems.h"
//## package Context::FlowItems

//## class SensorObservation
class SensorObservation {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorObservation;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorObservation(void);
    
    //## auto_generated
    ~SensorObservation(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorObservation : virtual public AOMInstance {
    DECLARE_META(SensorObservation, OMAnimatedSensorObservation)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorObservation.h
*********************************************************************/
