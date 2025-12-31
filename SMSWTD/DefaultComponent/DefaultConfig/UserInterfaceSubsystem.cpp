/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserInterfaceSubsystem
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UserInterfaceSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserInterfaceSubsystem.h"
//## link itsDataManagementSubsystem
#include "DataManagementSubsystem.h"
//#[ ignore
#define SMSWTD_Architecture_UserInterfaceSubsystem_UserInterfaceSubsystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class UserInterfaceSubsystem
UserInterfaceSubsystem::UserInterfaceSubsystem(void) : itsDataManagementSubsystem(NULL) {
    NOTIFY_CONSTRUCTOR(UserInterfaceSubsystem, UserInterfaceSubsystem(), 0, SMSWTD_Architecture_UserInterfaceSubsystem_UserInterfaceSubsystem_SERIALIZE);
}

UserInterfaceSubsystem::~UserInterfaceSubsystem(void) {
    NOTIFY_DESTRUCTOR(~UserInterfaceSubsystem, true);
    cleanUpRelations();
}

const DataManagementSubsystem* UserInterfaceSubsystem::getItsDataManagementSubsystem(void) const {
    return itsDataManagementSubsystem;
}

void UserInterfaceSubsystem::setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
    if(p_DataManagementSubsystem != NULL)
        {
            p_DataManagementSubsystem->_setItsUserInterfaceSubsystem(this);
        }
    _setItsDataManagementSubsystem(p_DataManagementSubsystem);
}

void UserInterfaceSubsystem::cleanUpRelations(void) {
    if(itsDataManagementSubsystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataManagementSubsystem");
            const UserInterfaceSubsystem* p_UserInterfaceSubsystem = itsDataManagementSubsystem->getItsUserInterfaceSubsystem();
            if(p_UserInterfaceSubsystem != NULL)
                {
                    itsDataManagementSubsystem->__setItsUserInterfaceSubsystem(NULL);
                }
            itsDataManagementSubsystem = NULL;
        }
}

void UserInterfaceSubsystem::__setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
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

void UserInterfaceSubsystem::_setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem) {
    if(itsDataManagementSubsystem != NULL)
        {
            itsDataManagementSubsystem->__setItsUserInterfaceSubsystem(NULL);
        }
    __setItsDataManagementSubsystem(p_DataManagementSubsystem);
}

void UserInterfaceSubsystem::_clearItsDataManagementSubsystem(void) {
    NOTIFY_RELATION_CLEARED("itsDataManagementSubsystem");
    itsDataManagementSubsystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserInterfaceSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataManagementSubsystem", false, true);
    if(myReal->itsDataManagementSubsystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataManagementSubsystem);
        }
}
//#]

IMPLEMENT_META_P(UserInterfaceSubsystem, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedUserInterfaceSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserInterfaceSubsystem.cpp
*********************************************************************/
