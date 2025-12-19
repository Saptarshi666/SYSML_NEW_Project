/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "SensingInterfaceSubsystem.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                SensingInterfaceSubsystem p_SensingInterfaceSubsystem;
                p_SensingInterfaceSubsystem.setShouldDelete(false);
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
