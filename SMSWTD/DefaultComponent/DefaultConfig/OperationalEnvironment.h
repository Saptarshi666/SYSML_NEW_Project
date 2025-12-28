/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OperationalEnvironment
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.h
*********************************************************************/

#ifndef OperationalEnvironment_H
#define OperationalEnvironment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Operating_Environment.h"
//## package Context::Operating_Environment

//## class OperationalEnvironment
class OperationalEnvironment {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOperationalEnvironment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OperationalEnvironment(void);
    
    //## auto_generated
    ~OperationalEnvironment(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getIs24x7(void) const;
    
    //## auto_generated
    void setIs24x7(const bool p_is24x7);
    
    //## auto_generated
    const bool getMultiAgency(void) const;
    
    //## auto_generated
    void setMultiAgency(const bool p_multiAgency);
    
    ////    Attributes    ////

private :

    bool is24x7;		//## attribute is24x7
    
    bool multiAgency;		//## attribute multiAgency
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOperationalEnvironment : virtual public AOMInstance {
    DECLARE_META(OperationalEnvironment, OMAnimatedOperationalEnvironment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.h
*********************************************************************/
