/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintenanceCommand
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintenanceCommand.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MaintenanceCommand.h"
//#[ ignore
#define Context_FlowItems_MaintenanceCommand_MaintenanceCommand_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class MaintenanceCommand
MaintenanceCommand::MaintenanceCommand(void) {
    NOTIFY_CONSTRUCTOR(MaintenanceCommand, MaintenanceCommand(), 0, Context_FlowItems_MaintenanceCommand_MaintenanceCommand_SERIALIZE);
}

MaintenanceCommand::~MaintenanceCommand(void) {
    NOTIFY_DESTRUCTOR(~MaintenanceCommand, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(MaintenanceCommand, Context_FlowItems, Context::FlowItems, false, OMAnimatedMaintenanceCommand)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintenanceCommand.cpp
*********************************************************************/
