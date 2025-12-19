/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BroadcastMedia
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.h
*********************************************************************/

#ifndef BroadcastMedia_H
#define BroadcastMedia_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class BroadcastMedia
class BroadcastMedia {
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
        void connectBroadcastMedia(BroadcastMedia* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BroadcastMedia(void);
    
    //## auto_generated
    ~BroadcastMedia(void);
    
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
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.h
*********************************************************************/
