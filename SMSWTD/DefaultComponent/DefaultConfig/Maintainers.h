/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainers
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainers.h
*********************************************************************/

#ifndef Maintainers_H
#define Maintainers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class Maintainers
class Maintainers {
public :

//#[ ignore
    //## package Context
    class healthIn_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        healthIn_C(void);
        
        //## auto_generated
        virtual ~healthIn_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMaintainers(Maintainers* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class maintenance_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        maintenance_C(void);
        
        //## auto_generated
        virtual ~maintenance_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMaintainers(Maintainers* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintainers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Maintainers(void);
    
    //## auto_generated
    ~Maintainers(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    healthIn_C* getHealthIn(void) const;
    
    //## auto_generated
    healthIn_C* get_healthIn(void) const;
    
    //## auto_generated
    maintenance_C* getMaintenance(void) const;
    
    //## auto_generated
    maintenance_C* get_maintenance(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    healthIn_C healthIn;
    
    maintenance_C maintenance;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintainers : virtual public AOMInstance {
    DECLARE_META(Maintainers, OMAnimatedMaintainers)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainers.h
*********************************************************************/
