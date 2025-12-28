/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmergencyAuthorityOperator
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EmergencyAuthorityOperator.h
*********************************************************************/

#ifndef EmergencyAuthorityOperator_H
#define EmergencyAuthorityOperator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class EmergencyAuthorityOperator
class EmergencyAuthorityOperator {
public :

//#[ ignore
    //## package Context
    class out_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        out_C(void);
        
        //## auto_generated
        virtual ~out_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEmergencyAuthorityOperator(EmergencyAuthorityOperator* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class in_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        in_C(void);
        
        //## auto_generated
        virtual ~in_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEmergencyAuthorityOperator(EmergencyAuthorityOperator* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergencyAuthorityOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmergencyAuthorityOperator(void);
    
    //## auto_generated
    ~EmergencyAuthorityOperator(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    //## auto_generated
    in_C* getIn(void) const;
    
    //## auto_generated
    in_C* get_in(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    out_C out;
    
    in_C in;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergencyAuthorityOperator : virtual public AOMInstance {
    DECLARE_META(EmergencyAuthorityOperator, OMAnimatedEmergencyAuthorityOperator)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmergencyAuthorityOperator.h
*********************************************************************/
