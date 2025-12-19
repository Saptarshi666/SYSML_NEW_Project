/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserInterfaceSubsystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UserInterfaceSubsystem.h
*********************************************************************/

#ifndef UserInterfaceSubsystem_H
#define UserInterfaceSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## link itsDataManagementSubsystem
class DataManagementSubsystem;

//## package SMSWTD_Architecture

//## class UserInterfaceSubsystem
class UserInterfaceSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserInterfaceSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserInterfaceSubsystem(void);
    
    //## auto_generated
    ~UserInterfaceSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataManagementSubsystem* getItsDataManagementSubsystem(void) const;
    
    //## auto_generated
    void setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataManagementSubsystem* itsDataManagementSubsystem;		//## link itsDataManagementSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);
    
    //## auto_generated
    void _setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);
    
    //## auto_generated
    void _clearItsDataManagementSubsystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserInterfaceSubsystem : virtual public AOMInstance {
    DECLARE_META(UserInterfaceSubsystem, OMAnimatedUserInterfaceSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserInterfaceSubsystem.h
*********************************************************************/
