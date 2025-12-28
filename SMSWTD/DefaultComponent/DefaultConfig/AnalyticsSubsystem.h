/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalyticsSubsystem
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalyticsSubsystem.h
*********************************************************************/

#ifndef AnalyticsSubsystem_H
#define AnalyticsSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## package SMSWTD_Architecture

//## class AnalyticsSubsystem
class AnalyticsSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAnalyticsSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AnalyticsSubsystem(void);
    
    //## auto_generated
    ~AnalyticsSubsystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAnalyticsSubsystem : virtual public AOMInstance {
    DECLARE_META(AnalyticsSubsystem, OMAnimatedAnalyticsSubsystem)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalyticsSubsystem.h
*********************************************************************/
