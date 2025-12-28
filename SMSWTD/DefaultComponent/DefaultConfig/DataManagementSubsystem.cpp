/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataManagementSubsystem
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataManagementSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataManagementSubsystem.h"
//## link itsDataIngestionSubsystem
#include "DataIngestionSubsystem.h"
//## link itsUserInterfaceSubsystem
#include "UserInterfaceSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_DataManagementSubsystem_DataManagementSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class DataManagementSubsystem
DataManagementSubsystem::DataManagementSubsystem(void) : itsDataIngestionSubsystem(NULL), itsUserInterfaceSubsystem(NULL) {
    NOTIFY_CONSTRUCTOR(DataManagementSubsystem, DataManagementSubsystem(), 0, SMSWTD_Architecture_DataManagementSubsystem_DataManagementSubsystem_SERIALIZE);
}

DataManagementSubsystem::~DataManagementSubsystem(void) {
    NOTIFY_DESTRUCTOR(~DataManagementSubsystem, true);
    cleanUpRelations();
}

const DataIngestionSubsystem* DataManagementSubsystem::getItsDataIngestionSubsystem(void) const {
    return itsDataIngestionSubsystem;
}

void DataManagementSubsystem::setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    if(p_DataIngestionSubsystem != NULL)
        {
            p_DataIngestionSubsystem->_setItsDataManagementSubsystem(this);
        }
    _setItsDataIngestionSubsystem(p_DataIngestionSubsystem);
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
    if(itsDataIngestionSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
            const DataManagementSubsystem* p_DataManagementSubsystem = itsDataIngestionSubsystem->getItsDataManagementSubsystem();
            if(p_DataManagementSubsystem != NULL)
                {
                    itsDataIngestionSubsystem->__setItsDataManagementSubsystem(NULL);
                }
            itsDataIngestionSubsystem = NULL;
        }
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

void DataManagementSubsystem::__setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    itsDataIngestionSubsystem = p_DataIngestionSubsystem;
    if(p_DataIngestionSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataIngestionSubsystem", p_DataIngestionSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
        }
}

void DataManagementSubsystem::_setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem) {
    if(itsDataIngestionSubsystem != NULL)
        {
            itsDataIngestionSubsystem->__setItsDataManagementSubsystem(NULL);
        }
    __setItsDataIngestionSubsystem(p_DataIngestionSubsystem);
}

void DataManagementSubsystem::_clearItsDataIngestionSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsDataIngestionSubsystem");
    itsDataIngestionSubsystem = NULL;
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
    aomsRelations->addRelation("itsDataIngestionSubsystem", false, true);
    if(myReal->itsDataIngestionSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataIngestionSubsystem);
        }
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
