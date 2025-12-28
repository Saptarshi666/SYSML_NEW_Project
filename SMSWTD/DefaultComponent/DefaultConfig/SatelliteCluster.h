/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteCluster
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteCluster.h
*********************************************************************/

#ifndef SatelliteCluster_H
#define SatelliteCluster_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor SatelliteCluster
class SatelliteCluster {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteCluster;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteCluster(void);
    
    //## auto_generated
    ~SatelliteCluster(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteCluster : virtual public AOMInstance {
    DECLARE_META(SatelliteCluster, OMAnimatedSatelliteCluster)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteCluster.h
*********************************************************************/
