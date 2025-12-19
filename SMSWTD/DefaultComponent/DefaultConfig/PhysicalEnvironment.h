/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PhysicalEnvironment
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.h
*********************************************************************/

#ifndef PhysicalEnvironment_H
#define PhysicalEnvironment_H

//## auto_generated
#include <oxf.h>
//## package Context::Operating_Environment

//## class PhysicalEnvironment
class PhysicalEnvironment {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PhysicalEnvironment(void);
    
    //## auto_generated
    ~PhysicalEnvironment(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const double getHumidity(void) const;
    
    //## auto_generated
    void setHumidity(const double p_humidity);
    
    //## auto_generated
    const bool getSaltExposure(void) const;
    
    //## auto_generated
    void setSaltExposure(const bool p_saltExposure);
    
    //## auto_generated
    const double getSeismicActivity(void) const;
    
    //## auto_generated
    void setSeismicActivity(const double p_seismicActivity);
    
    //## auto_generated
    const bool getStormCondition(void) const;
    
    //## auto_generated
    void setStormCondition(const bool p_stormCondition);
    
    //## auto_generated
    const double getTemperatureMax(void) const;
    
    //## auto_generated
    void setTemperatureMax(const double p_temperatureMax);
    
    //## auto_generated
    const double getTemperatureMin(void) const;
    
    //## auto_generated
    void setTemperatureMin(const double p_temperatureMin);
    
    ////    Attributes    ////

private :

    double humidity;		//## attribute humidity
    
    bool saltExposure;		//## attribute saltExposure
    
    double seismicActivity;		//## attribute seismicActivity
    
    bool stormCondition;		//## attribute stormCondition
    
    double temperatureMax;		//## attribute temperatureMax
    
    double temperatureMin;		//## attribute temperatureMin
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PhysicalEnvironment.h
*********************************************************************/
