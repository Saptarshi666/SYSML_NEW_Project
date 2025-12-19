/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Journalists
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Journalists.h
*********************************************************************/

#ifndef Journalists_H
#define Journalists_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor Journalists
class Journalists {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedJournalists;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Journalists(void);
    
    //## auto_generated
    ~Journalists(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedJournalists : virtual public AOMInstance {
    DECLARE_META(Journalists, OMAnimatedJournalists)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Journalists.h
*********************************************************************/
