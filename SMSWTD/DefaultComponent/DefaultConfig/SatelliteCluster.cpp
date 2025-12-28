/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteCluster
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteCluster.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteCluster.h"
//#[ ignore
#define UseCases_SatelliteCluster_SatelliteCluster_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor SatelliteCluster
SatelliteCluster::SatelliteCluster(void) {
    NOTIFY_CONSTRUCTOR(SatelliteCluster, SatelliteCluster(), 0, UseCases_SatelliteCluster_SatelliteCluster_SERIALIZE);
}

SatelliteCluster::~SatelliteCluster(void) {
    NOTIFY_DESTRUCTOR(~SatelliteCluster, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteCluster::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(SatelliteCluster, UseCases, UseCases, false, OMAnimatedSatelliteCluster)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteCluster.cpp
*********************************************************************/
