/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertingSubsystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.h
*********************************************************************/

#ifndef AlertingSubsystem_H
#define AlertingSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## package SMSWTD_Architecture

//## class AlertingSubsystem
class AlertingSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlertingSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AlertingSubsystem(void);
    
    //## auto_generated
    ~AlertingSubsystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlertingSubsystem : virtual public AOMInstance {
    DECLARE_META(AlertingSubsystem, OMAnimatedAlertingSubsystem)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertingSubsystem.h
*********************************************************************/
