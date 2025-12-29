/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_System
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.h
*********************************************************************/

#ifndef SMSWTD_System_H
#define SMSWTD_System_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsAlertingSubsystem
#include "AlertingSubsystem.h"
//## classInstance itsAnalyticsSubsystem
#include "AnalyticsSubsystem.h"
//## classInstance itsDataIngestionSubsystem
#include "DataIngestionSubsystem.h"
//## classInstance itsDataManagementSubsystem
#include "DataManagementSubsystem.h"
//## classInstance itsOpsSafetySecuritySubsystem
#include "OpsSafetySecuritySubsystem.h"
//## classInstance itsRiskAssessmentSubsystem
#include "RiskAssessmentSubsystem.h"
//## classInstance itsSensingInterfaceSubsystem
#include "SensingInterfaceSubsystem.h"
//## classInstance itsUserInterfaceSubsystem
#include "UserInterfaceSubsystem.h"
//## package SMSWTD_Architecture

//## class SMSWTD_System
class SMSWTD_System : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD_System(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD_System(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AlertingSubsystem* getItsAlertingSubsystem(void) const;
    
    //## auto_generated
    const AnalyticsSubsystem* getItsAnalyticsSubsystem(void) const;
    
    //## auto_generated
    const DataIngestionSubsystem* getItsDataIngestionSubsystem(void) const;
    
    //## auto_generated
    const DataManagementSubsystem* getItsDataManagementSubsystem(void) const;
    
    //## auto_generated
    const OpsSafetySecuritySubsystem* getItsOpsSafetySecuritySubsystem(void) const;
    
    //## auto_generated
    const RiskAssessmentSubsystem* getItsRiskAssessmentSubsystem(void) const;
    
    //## auto_generated
    const SensingInterfaceSubsystem* getItsSensingInterfaceSubsystem(void) const;
    
    //## auto_generated
    const UserInterfaceSubsystem* getItsUserInterfaceSubsystem(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    AlertingSubsystem itsAlertingSubsystem;		//## classInstance itsAlertingSubsystem
    
    AnalyticsSubsystem itsAnalyticsSubsystem;		//## classInstance itsAnalyticsSubsystem
    
    DataIngestionSubsystem itsDataIngestionSubsystem;		//## classInstance itsDataIngestionSubsystem
    
    DataManagementSubsystem itsDataManagementSubsystem;		//## classInstance itsDataManagementSubsystem
    
    OpsSafetySecuritySubsystem itsOpsSafetySecuritySubsystem;		//## classInstance itsOpsSafetySecuritySubsystem
    
    RiskAssessmentSubsystem itsRiskAssessmentSubsystem;		//## classInstance itsRiskAssessmentSubsystem
    
    SensingInterfaceSubsystem itsSensingInterfaceSubsystem;		//## classInstance itsSensingInterfaceSubsystem
    
    UserInterfaceSubsystem itsUserInterfaceSubsystem;		//## classInstance itsUserInterfaceSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD_System : virtual public AOMInstance {
    DECLARE_META(SMSWTD_System, OMAnimatedSMSWTD_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.h
*********************************************************************/
