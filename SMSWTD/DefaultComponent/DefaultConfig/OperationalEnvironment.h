/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OperationalEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.h
*********************************************************************/

#ifndef OperationalEnvironment_H
#define OperationalEnvironment_H

//## auto_generated
#include <oxf.h>
//## package Context::Operating_Environment

//## class OperationalEnvironment
class OperationalEnvironment {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OperationalEnvironment.h
*********************************************************************/
