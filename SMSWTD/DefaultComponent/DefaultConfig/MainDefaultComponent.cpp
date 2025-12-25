/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Context.h"
//## auto_generated
#include "FlowItems.h"
//## auto_generated
#include "Operating_Environment.h"
//## auto_generated
#include "SMSWTD_Architecture.h"
//## auto_generated
#include "UseCases.h"
//## auto_generated
#include "SensingInterfaceSubsystem.h"
DefaultComponent::DefaultComponent(void) {
    SMSWTD_Architecture_initRelations();
    (void) SMSWTD_Architecture_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                SensingInterfaceSubsystem p_SensingInterfaceSubsystem;
                p_SensingInterfaceSubsystem.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_SensingInterfaceSubsystem.startBehavior();
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
