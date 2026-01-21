/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicDataIF
//!	Generated Date	: Fri, 26, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicDataIF.h
*********************************************************************/

#ifndef SeismicDataIF_H
#define SeismicDataIF_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## package SMSWTD_Architecture

//## class SeismicDataIF
class SeismicDataIF {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSeismicDataIF;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SeismicDataIF(void);
    
    //## auto_generated
    virtual ~SeismicDataIF(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual const int getTest(void) const = 0;
    
    //## auto_generated
    virtual void setTest(const int p_test) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSeismicDataIF : virtual public AOMInstance {
    DECLARE_META(SeismicDataIF, OMAnimatedSeismicDataIF)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicDataIF.h
*********************************************************************/
