/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ThreatEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.h
*********************************************************************/

#ifndef ThreatEnvironment_H
#define ThreatEnvironment_H

//## auto_generated
#include <oxf.h>
//## package Context::Operating_Environment

//## class ThreatEnvironment
class ThreatEnvironment {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ThreatEnvironment.h
*********************************************************************/
