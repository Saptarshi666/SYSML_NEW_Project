/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_System
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.cpp
*********************************************************************/

//## auto_generated
#include "SMSWTD_System.h"
//## package SMSWTD_Architecture

//## class SMSWTD_System
SMSWTD_System::SMSWTD_System(void) {
}

SMSWTD_System::~SMSWTD_System(void) {
}

const AlertingSubsystem* SMSWTD_System::getItsAlertingSubsystem(void) const {
    return &itsAlertingSubsystem;
}

const AnalyticsSubsystem* SMSWTD_System::getItsAnalyticsSubsystem(void) const {
    return &itsAnalyticsSubsystem;
}

const DataIngestionSubsystem* SMSWTD_System::getItsDataIngestionSubsystem(void) const {
    return &itsDataIngestionSubsystem;
}

const DataManagementSubsystem* SMSWTD_System::getItsDataManagementSubsystem(void) const {
    return &itsDataManagementSubsystem;
}

const OpsSafetySecuritySubsystem* SMSWTD_System::getItsOpsSafetySecuritySubsystem(void) const {
    return &itsOpsSafetySecuritySubsystem;
}

const RiskAssessmentSubsystem* SMSWTD_System::getItsRiskAssessmentSubsystem(void) const {
    return &itsRiskAssessmentSubsystem;
}

const UserInterfaceSubsystem* SMSWTD_System::getItsUserInterfaceSubsystem(void) const {
    return &itsUserInterfaceSubsystem;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.cpp
*********************************************************************/
