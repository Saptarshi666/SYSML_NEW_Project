/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MaintenanceReport
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MaintenanceReport.h
*********************************************************************/

#ifndef MaintenanceReport_H
#define MaintenanceReport_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "FlowItems.h"
//## package Context::FlowItems

//## class MaintenanceReport
class MaintenanceReport {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintenanceReport;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaintenanceReport(void);
    
    //## auto_generated
    ~MaintenanceReport(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintenanceReport : virtual public AOMInstance {
    DECLARE_META(MaintenanceReport, OMAnimatedMaintenanceReport)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MaintenanceReport.h
*********************************************************************/
