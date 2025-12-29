/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataManagementSubsystem
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataManagementSubsystem.h
*********************************************************************/

#ifndef DataManagementSubsystem_H
#define DataManagementSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## link itsDataIngestionSubsystem
class DataIngestionSubsystem;

//## link itsUserInterfaceSubsystem
class UserInterfaceSubsystem;

//## package SMSWTD_Architecture

//## class DataManagementSubsystem
class DataManagementSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataManagementSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataManagementSubsystem(void);
    
    //## auto_generated
    ~DataManagementSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataIngestionSubsystem* getItsDataIngestionSubsystem(void) const;
    
    //## auto_generated
    void setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    const UserInterfaceSubsystem* getItsUserInterfaceSubsystem(void) const;
    
    //## auto_generated
    void setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataIngestionSubsystem* itsDataIngestionSubsystem;		//## link itsDataIngestionSubsystem
    
    UserInterfaceSubsystem* itsUserInterfaceSubsystem;		//## link itsUserInterfaceSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    void _setItsDataIngestionSubsystem(DataIngestionSubsystem* const p_DataIngestionSubsystem);
    
    //## auto_generated
    void _clearItsDataIngestionSubsystem(void);
    
    //## auto_generated
    void __setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem);
    
    //## auto_generated
    void _setItsUserInterfaceSubsystem(UserInterfaceSubsystem* const p_UserInterfaceSubsystem);
    
    //## auto_generated
    void _clearItsUserInterfaceSubsystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataManagementSubsystem : virtual public AOMInstance {
    DECLARE_META(DataManagementSubsystem, OMAnimatedDataManagementSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataManagementSubsystem.h
*********************************************************************/
