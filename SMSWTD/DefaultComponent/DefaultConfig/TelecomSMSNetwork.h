/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TelecomSMSNetwork
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.h
*********************************************************************/

#ifndef TelecomSMSNetwork_H
#define TelecomSMSNetwork_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class TelecomSMSNetwork
class TelecomSMSNetwork {
public :

//#[ ignore
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
        void connectTelecomSMSNetwork(TelecomSMSNetwork* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTelecomSMSNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TelecomSMSNetwork(void);
    
    //## auto_generated
    ~TelecomSMSNetwork(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    in_C* getIn(void) const;
    
    //## auto_generated
    in_C* get_in(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    in_C in;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTelecomSMSNetwork : virtual public AOMInstance {
    DECLARE_META(TelecomSMSNetwork, OMAnimatedTelecomSMSNetwork)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.h
*********************************************************************/
