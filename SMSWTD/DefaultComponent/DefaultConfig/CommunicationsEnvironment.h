/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationsEnvironment
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.h
*********************************************************************/

#ifndef CommunicationsEnvironment_H
#define CommunicationsEnvironment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Operating_Environment.h"
//## package Context::Operating_Environment

//## class CommunicationsEnvironment
class CommunicationsEnvironment {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationsEnvironment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationsEnvironment(void);
    
    //## auto_generated
    ~CommunicationsEnvironment(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const double getBandwidth(void) const;
    
    //## auto_generated
    void setBandwidth(const double p_bandwidth);
    
    //## auto_generated
    const double getLatency(void) const;
    
    //## auto_generated
    void setLatency(const double p_latency);
    
    //## auto_generated
    const double getLinkAvailability(void) const;
    
    //## auto_generated
    void setLinkAvailability(const double p_linkAvailability);
    
    //## auto_generated
    const double getOutageProbability(void) const;
    
    //## auto_generated
    void setOutageProbability(const double p_outageProbability);
    
    ////    Attributes    ////

private :

    double bandwidth;		//## attribute bandwidth
    
    double latency;		//## attribute latency
    
    double linkAvailability;		//## attribute linkAvailability
    
    double outageProbability;		//## attribute outageProbability
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationsEnvironment : virtual public AOMInstance {
    DECLARE_META(CommunicationsEnvironment, OMAnimatedCommunicationsEnvironment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationsEnvironment.h
*********************************************************************/
