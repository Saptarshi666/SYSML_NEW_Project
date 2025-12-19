/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researcher
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/

#ifndef Researcher_H
#define Researcher_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor Researcher
class Researcher {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearcher;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Researcher(void);
    
    //## auto_generated
    ~Researcher(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResearcher : virtual public AOMInstance {
    DECLARE_META(Researcher, OMAnimatedResearcher)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researcher.h
*********************************************************************/
