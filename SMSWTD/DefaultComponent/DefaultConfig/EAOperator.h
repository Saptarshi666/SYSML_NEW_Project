/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EAOperator
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\EAOperator.h
*********************************************************************/

#ifndef EAOperator_H
#define EAOperator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor EAOperator
class EAOperator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEAOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EAOperator(void);
    
    //## auto_generated
    ~EAOperator(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEAOperator : virtual public AOMInstance {
    DECLARE_META(EAOperator, OMAnimatedEAOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EAOperator.h
*********************************************************************/
