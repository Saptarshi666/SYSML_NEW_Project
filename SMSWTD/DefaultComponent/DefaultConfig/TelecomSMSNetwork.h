/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TelecomSMSNetwork
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.h
*********************************************************************/

#ifndef TelecomSMSNetwork_H
#define TelecomSMSNetwork_H

//## auto_generated
#include <oxf.h>
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TelecomSMSNetwork.h
*********************************************************************/
