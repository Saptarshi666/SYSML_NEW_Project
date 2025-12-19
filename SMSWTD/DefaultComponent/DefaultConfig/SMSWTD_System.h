/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_System
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.h
*********************************************************************/

#ifndef SMSWTD_System_H
#define SMSWTD_System_H

//## auto_generated
#include <oxf.h>
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
//## classInstance itsUserInterfaceSubsystem
#include "UserInterfaceSubsystem.h"
//## package SMSWTD_Architecture

//## class SMSWTD_System
class SMSWTD_System {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSWTD_System(void);
    
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
    const UserInterfaceSubsystem* getItsUserInterfaceSubsystem(void) const;
    
    ////    Relations and components    ////

private :

    AlertingSubsystem itsAlertingSubsystem;		//## classInstance itsAlertingSubsystem
    
    AnalyticsSubsystem itsAnalyticsSubsystem;		//## classInstance itsAnalyticsSubsystem
    
    DataIngestionSubsystem itsDataIngestionSubsystem;		//## classInstance itsDataIngestionSubsystem
    
    DataManagementSubsystem itsDataManagementSubsystem;		//## classInstance itsDataManagementSubsystem
    
    OpsSafetySecuritySubsystem itsOpsSafetySecuritySubsystem;		//## classInstance itsOpsSafetySecuritySubsystem
    
    RiskAssessmentSubsystem itsRiskAssessmentSubsystem;		//## classInstance itsRiskAssessmentSubsystem
    
    UserInterfaceSubsystem itsUserInterfaceSubsystem;		//## classInstance itsUserInterfaceSubsystem
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.h
*********************************************************************/
