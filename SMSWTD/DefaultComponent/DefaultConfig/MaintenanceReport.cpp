/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintenanceReport
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintenanceReport.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MaintenanceReport.h"
//#[ ignore
#define Context_FlowItems_MaintenanceReport_MaintenanceReport_SERIALIZE OM_NO_OP
//#]

//## package Context::FlowItems

//## class MaintenanceReport
MaintenanceReport::MaintenanceReport(void) {
    NOTIFY_CONSTRUCTOR(MaintenanceReport, MaintenanceReport(), 0, Context_FlowItems_MaintenanceReport_MaintenanceReport_SERIALIZE);
}

MaintenanceReport::~MaintenanceReport(void) {
    NOTIFY_DESTRUCTOR(~MaintenanceReport, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(MaintenanceReport, Context_FlowItems, Context::FlowItems, false, OMAnimatedMaintenanceReport)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintenanceReport.cpp
*********************************************************************/
