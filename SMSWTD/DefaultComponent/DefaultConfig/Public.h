/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Public
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Public.h
*********************************************************************/

#ifndef Public_H
#define Public_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## package Context

//## class Public
class Public {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPublic;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Public(void);
    
    //## auto_generated
    ~Public(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPublic : virtual public AOMInstance {
    DECLARE_META(Public, OMAnimatedPublic)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Public.h
*********************************************************************/
