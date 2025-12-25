/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.h
*********************************************************************/

#ifndef MetOceanDataProvider_H
#define MetOceanDataProvider_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSWTD_Architecture.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package SMSWTD_Architecture

//## class MetOceanDataProvider
class MetOceanDataProvider {
public :

//#[ ignore
    //## package SMSWTD_Architecture
    class out_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        out_C(void);
        
        //## auto_generated
        virtual ~out_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMetOceanDataProvider(MetOceanDataProvider* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMetOceanDataProvider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MetOceanDataProvider(void);
    
    //## auto_generated
    ~MetOceanDataProvider(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    //## auto_generated
    const int getMagnitude(void) const;
    
    //## auto_generated
    void setMagnitude(const int p_magnitude);
    
    //## auto_generated
    const FloatArray getTesting(void) const;
    
    //## auto_generated
    void setTesting(const FloatArray p_testing);
    
    ////    Attributes    ////

private :

    int magnitude;		//## attribute magnitude
    
    FloatArray testing;		//## attribute testing
    
    ////    Relations and components    ////
    
//#[ ignore
    out_C out;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMetOceanDataProvider : virtual public AOMInstance {
    DECLARE_META(MetOceanDataProvider, OMAnimatedMetOceanDataProvider)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.h
*********************************************************************/
