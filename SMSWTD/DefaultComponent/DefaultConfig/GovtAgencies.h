/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovtAgencies
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\GovtAgencies.h
*********************************************************************/

#ifndef GovtAgencies_H
#define GovtAgencies_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor GovtAgencies
class GovtAgencies {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovtAgencies;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GovtAgencies(void);
    
    //## auto_generated
    ~GovtAgencies(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovtAgencies : virtual public AOMInstance {
    DECLARE_META(GovtAgencies, OMAnimatedGovtAgencies)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovtAgencies.h
*********************************************************************/
