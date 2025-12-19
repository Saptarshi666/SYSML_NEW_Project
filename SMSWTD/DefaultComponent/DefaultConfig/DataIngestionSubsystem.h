/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataIngestionSubsystem
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataIngestionSubsystem.h
*********************************************************************/

#ifndef DataIngestionSubsystem_H
#define DataIngestionSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## link itsDataManagementSubsystem
class DataManagementSubsystem;

//## link itsSensingInterfaceSubsystem
class SensingInterfaceSubsystem;

//## package SMSWTD_Architecture

//## class DataIngestionSubsystem
class DataIngestionSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataIngestionSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataIngestionSubsystem(void);
    
    //## auto_generated
    ~DataIngestionSubsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataManagementSubsystem* getItsDataManagementSubsystem(void) const;
    
    //## auto_generated
    void setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);
    
    //## auto_generated
    const SensingInterfaceSubsystem* getItsSensingInterfaceSubsystem(void) const;
    
    //## auto_generated
    void setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    DataManagementSubsystem* itsDataManagementSubsystem;		//## link itsDataManagementSubsystem
    
    SensingInterfaceSubsystem* itsSensingInterfaceSubsystem;		//## link itsSensingInterfaceSubsystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);
    
    //## auto_generated
    void _setItsDataManagementSubsystem(DataManagementSubsystem* const p_DataManagementSubsystem);
    
    //## auto_generated
    void _clearItsDataManagementSubsystem(void);
    
    //## auto_generated
    void __setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);
    
    //## auto_generated
    void _setItsSensingInterfaceSubsystem(SensingInterfaceSubsystem* const p_SensingInterfaceSubsystem);
    
    //## auto_generated
    void _clearItsSensingInterfaceSubsystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataIngestionSubsystem : virtual public AOMInstance {
    DECLARE_META(DataIngestionSubsystem, OMAnimatedDataIngestionSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataIngestionSubsystem.h
*********************************************************************/
