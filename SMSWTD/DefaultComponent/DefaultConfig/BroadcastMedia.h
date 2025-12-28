/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BroadcastMedia
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.h
*********************************************************************/

#ifndef BroadcastMedia_H
#define BroadcastMedia_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
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

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedBroadcastMedia;
#endif // _OMINSTRUMENT

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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBroadcastMedia : virtual public AOMInstance {
    DECLARE_META(BroadcastMedia, OMAnimatedBroadcastMedia)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.h
*********************************************************************/
