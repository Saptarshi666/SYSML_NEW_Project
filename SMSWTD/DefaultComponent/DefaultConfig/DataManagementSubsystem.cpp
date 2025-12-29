/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataManagementSubsystem
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataManagementSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataManagementSubsystem.h"
//## link itsUserInterfaceSubsystem
#include "UserInterfaceSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_DataManagementSubsystem_DataManagementSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class DataManagementSubsystem
DataManagementSubsystem::DataManagementSubsystem(void) : itsUserInterfaceSubsystem(NULL) {
    NOTIFY_CONSTRUCTOR(DataManagementSubsystem, DataManagementSubsystem(), 0, SMSWTD_Architecture_DataManagementSubsystem_DataManagementSubsystem_SERIALIZE);
}

DataManagementSubsystem::~DataManagementSubsystem(void) {
    NOTIFY_DESTRUCTOR(~DataManagementSubsystem, true);
    cleanUpRelations();
}

const UserInterfaceSubsystem* DataManagementSubsystem::getItsUserInterfaceSubsystem(void) const {
    return itsUserInterfaceSubsystem;
}

void DataManagementSubsystem::setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem) {
    if(p_UserInterfaceSubsystem != NULL)
        {
            p_UserInterfaceSubsystem->_setItsDataManagementSubsystem(this);
        }
    _setItsUserInterfaceSubsystem(p_UserInterfaceSubsystem);
}

void DataManagementSubsystem::cleanUpRelations(void) {
    if(itsUserInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUserInterfaceSubsystem");
            const DataManagementSubsystem* p_DataManagementSubsystem = itsUserInterfaceSubsystem->getItsDataManagementSubsystem();
            if(p_DataManagementSubsystem != NULL)
                {
                    itsUserInterfaceSubsystem->__setItsDataManagementSubsystem(NULL);
                }
            itsUserInterfaceSubsystem = NULL;
        }
}

void DataManagementSubsystem::__setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem) {
    itsUserInterfaceSubsystem = p_UserInterfaceSubsystem;
    if(p_UserInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserInterfaceSubsystem", p_UserInterfaceSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserInterfaceSubsystem");
        }
}

void DataManagementSubsystem::_setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem) {
    if(itsUserInterfaceSubsystem != NULL)
        {
            itsUserInterfaceSubsystem->__setItsDataManagementSubsystem(NULL);
        }
    __setItsUserInterfaceSubsystem(p_UserInterfaceSubsystem);
}

void DataManagementSubsystem::_clearItsUserInterfaceSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsUserInterfaceSubsystem");
    itsUserInterfaceSubsystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataManagementSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUserInterfaceSubsystem", false, true);
    if(myReal->itsUserInterfaceSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsUserInterfaceSubsystem);
        }
}
//#]

IMPLEMENT_META_P(DataManagementSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedDataManagementSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataManagementSubsystem.cpp
*********************************************************************/
