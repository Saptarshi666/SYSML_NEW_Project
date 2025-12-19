/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Citizens
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Citizens.h
*********************************************************************/

#ifndef Citizens_H
#define Citizens_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor Citizens
class Citizens {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCitizens;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Citizens(void);
    
    //## auto_generated
    ~Citizens(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCitizens : virtual public AOMInstance {
    DECLARE_META(Citizens, OMAnimatedCitizens)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Citizens.h
*********************************************************************/
