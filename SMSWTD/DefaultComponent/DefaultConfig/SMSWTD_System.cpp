/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD_System
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD_System.h"
//#[ ignore
#define SMSWTD_Architecture_SMSWTD_System_SMSWTD_System_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class SMSWTD_System
SMSWTD_System::SMSWTD_System(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD_System, SMSWTD_System(), 0, SMSWTD_Architecture_SMSWTD_System_SMSWTD_System_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsRiskAssessmentSubsystem.setShouldDelete(false);
        }
        {
            itsSensingInterfaceSubsystem.setShouldDelete(false);
        }
    }
}

SMSWTD_System::~SMSWTD_System(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD_System, true);
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

const SensingInterfaceSubsystem* SMSWTD_System::getItsSensingInterfaceSubsystem(void) const {
    return &itsSensingInterfaceSubsystem;
}

const UserInterfaceSubsystem* SMSWTD_System::getItsUserInterfaceSubsystem(void) const {
    return &itsUserInterfaceSubsystem;
}

bool SMSWTD_System::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsRiskAssessmentSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = itsSensingInterfaceSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD_System::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsRiskAssessmentSubsystem.setActiveContext(theActiveContext, false);
        itsSensingInterfaceSubsystem.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD_System::destroy(void) {
    itsRiskAssessmentSubsystem.destroy();
    itsSensingInterfaceSubsystem.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlertingSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsAlertingSubsystem);
    aomsRelations->addRelation("itsDataIngestionSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataIngestionSubsystem);
    aomsRelations->addRelation("itsDataManagementSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataManagementSubsystem);
    aomsRelations->addRelation("itsOpsSafetySecuritySubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOpsSafetySecuritySubsystem);
    aomsRelations->addRelation("itsUserInterfaceSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUserInterfaceSubsystem);
    aomsRelations->addRelation("itsRiskAssessmentSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRiskAssessmentSubsystem);
    aomsRelations->addRelation("itsAnalyticsSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsAnalyticsSubsystem);
    aomsRelations->addRelation("itsSensingInterfaceSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSensingInterfaceSubsystem);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(SMSWTD_System, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedSMSWTD_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD_System.cpp
*********************************************************************/
