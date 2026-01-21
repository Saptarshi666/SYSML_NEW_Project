/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatEnvironment
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.h
*********************************************************************/

#ifndef ThreatEnvironment_H
#define ThreatEnvironment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Operating_Environment.h"
//## package Context::Operating_Environment

//## class ThreatEnvironment
class ThreatEnvironment {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedThreatEnvironment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ThreatEnvironment(void);
    
    //## auto_generated
    ~ThreatEnvironment(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const double getCredentialRisk(void) const;
    
    //## auto_generated
    void setCredentialRisk(const double p_credentialRisk);
    
    //## auto_generated
    const double getDdosRisk(void) const;
    
    //## auto_generated
    void setDdosRisk(const double p_ddosRisk);
    
    //## auto_generated
    const double getSpoofingRisk(void) const;
    
    //## auto_generated
    void setSpoofingRisk(const double p_spoofingRisk);
    
    ////    Attributes    ////

private :

    double credentialRisk;		//## attribute credentialRisk
    
    double ddosRisk;		//## attribute ddosRisk
    
    double spoofingRisk;		//## attribute spoofingRisk
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThreatEnvironment : virtual public AOMInstance {
    DECLARE_META(ThreatEnvironment, OMAnimatedThreatEnvironment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.h
*********************************************************************/
