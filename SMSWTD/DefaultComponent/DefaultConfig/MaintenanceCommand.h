/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintenanceCommand
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintenanceCommand.h
*********************************************************************/

#ifndef MaintenanceCommand_H
#define MaintenanceCommand_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "FlowItems.h"
//## package Context::FlowItems

//## class MaintenanceCommand
class MaintenanceCommand {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintenanceCommand;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaintenanceCommand(void);
    
    //## auto_generated
    ~MaintenanceCommand(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintenanceCommand : virtual public AOMInstance {
    DECLARE_META(MaintenanceCommand, OMAnimatedMaintenanceCommand)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintenanceCommand.h
*********************************************************************/
