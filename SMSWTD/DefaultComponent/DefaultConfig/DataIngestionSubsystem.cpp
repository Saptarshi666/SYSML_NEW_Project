/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataIngestionSubsystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataIngestionSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataIngestionSubsystem.h"
//## link itsDataManagementSubsystem
#include "DataManagementSubsystem.h"
//## link itsSensingInterfaceSubsystem
#include "SensingInterfaceSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_DataIngestionSubsystem_DataIngestionSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class DataIngestionSubsystem
DataIngestionSubsystem::DataIngestionSubsystem(void) : itsDataManagementSubsystem(NULL), itsSensingInterfaceSubsystem(NULL) {
    NOTIFY_CONSTRUCTOR(DataIngestionSubsystem, DataIngestionSubsystem(), 0, SMSWTD_Architecture_DataIngestionSubsystem_DataIngestionSubsystem_SERIALIZE);
}

DataIngestionSubsystem::~DataIngestionSubsystem(void) {
    NOTIFY_DESTRUCTOR(~DataIngestionSubsystem, true);
    cleanUpRelations();
}

const DataManagementSubsystem* DataIngestionSubsystem::getItsDataManagementSubsystem(void) const {
    return itsDataManagementSubsystem;
}

void DataIngestionSubsystem::setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
    if(p_DataManagementSubsystem != NULL)
        {
            p_DataManagementSubsystem->_setItsDataIngestionSubsystem(this);
        }
    _setItsDataManagementSubsystem(p_DataManagementSubsystem);
}

const SensingInterfaceSubsystem* DataIngestionSubsystem::getItsSensingInterfaceSubsystem(void) const {
    return itsSensingInterfaceSubsystem;
}

void DataIngestionSubsystem::setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    if(p_SensingInterfaceSubsystem != NULL)
        {
            p_SensingInterfaceSubsystem->_setItsDataIngestionSubsystem(this);
        }
    _setItsSensingInterfaceSubsystem(p_SensingInterfaceSubsystem);
}

void DataIngestionSubsystem::cleanUpRelations(void) {
    if(itsDataManagementSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataManagementSubsystem");
            const DataIngestionSubsystem* p_DataIngestionSubsystem = itsDataManagementSubsystem->getItsDataIngestionSubsystem();
            if(p_DataIngestionSubsystem != NULL)
                {
                    itsDataManagementSubsystem->__setItsDataIngestionSubsystem(NULL);
                }
            itsDataManagementSubsystem = NULL;
        }
    if(itsSensingInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
            const DataIngestionSubsystem* p_DataIngestionSubsystem = itsSensingInterfaceSubsystem->getItsDataIngestionSubsystem();
            if(p_DataIngestionSubsystem != NULL)
                {
                    itsSensingInterfaceSubsystem->__setItsDataIngestionSubsystem(NULL);
                }
            itsSensingInterfaceSubsystem = NULL;
        }
}

void DataIngestionSubsystem::__setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
    itsDataManagementSubsystem = p_DataManagementSubsystem;
    if(p_DataManagementSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataManagementSubsystem", p_DataManagementSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataManagementSubsystem");
        }
}

void DataIngestionSubsystem::_setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
    if(itsDataManagementSubsystem != NULL)
        {
            itsDataManagementSubsystem->__setItsDataIngestionSubsystem(NULL);
        }
    __setItsDataManagementSubsystem(p_DataManagementSubsystem);
}

void DataIngestionSubsystem::_clearItsDataManagementSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsDataManagementSubsystem");
    itsDataManagementSubsystem = NULL;
}

void DataIngestionSubsystem::__setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    itsSensingInterfaceSubsystem = p_SensingInterfaceSubsystem;
    if(p_SensingInterfaceSubsystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensingInterfaceSubsystem", p_SensingInterfaceSubsystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
        }
}

void DataIngestionSubsystem::_setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem) {
    if(itsSensingInterfaceSubsystem != NULL)
        {
            itsSensingInterfaceSubsystem->__setItsDataIngestionSubsystem(NULL);
        }
    __setItsSensingInterfaceSubsystem(p_SensingInterfaceSubsystem);
}

void DataIngestionSubsystem::_clearItsSensingInterfaceSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsSensingInterfaceSubsystem");
    itsSensingInterfaceSubsystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataIngestionSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensingInterfaceSubsystem", false, true);
    if(myReal->itsSensingInterfaceSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensingInterfaceSubsystem);
        }
    aomsRelations->addRelation("itsDataManagementSubsystem", false, true);
    if(myReal->itsDataManagementSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataManagementSubsystem);
        }
}
//#]

IMPLEMENT_META_P(DataIngestionSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedDataIngestionSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataIngestionSubsystem.cpp
*********************************************************************/
