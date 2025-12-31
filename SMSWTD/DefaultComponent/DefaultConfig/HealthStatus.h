/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HealthStatus
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\HealthStatus.h
*********************************************************************/

#ifndef HealthStatus_H
#define HealthStatus_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "FlowItems.h"
//## package Context::FlowItems

//## class HealthStatus
class HealthStatus {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHealthStatus;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HealthStatus(void);
    
    //## auto_generated
    ~HealthStatus(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHealthStatus : virtual public AOMInstance {
    DECLARE_META(HealthStatus, OMAnimatedHealthStatus)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HealthStatus.h
*********************************************************************/
