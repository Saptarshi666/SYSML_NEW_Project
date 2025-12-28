/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RefMetOceanDataProvider
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RefMetOceanDataProvider.h
*********************************************************************/

#ifndef RefMetOceanDataProvider_H
#define RefMetOceanDataProvider_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## package Context

//## class RefMetOceanDataProvider
class RefMetOceanDataProvider {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRefMetOceanDataProvider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RefMetOceanDataProvider(void);
    
    //## auto_generated
    ~RefMetOceanDataProvider(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRefMetOceanDataProvider : virtual public AOMInstance {
    DECLARE_META(RefMetOceanDataProvider, OMAnimatedRefMetOceanDataProvider)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RefMetOceanDataProvider.h
*********************************************************************/
