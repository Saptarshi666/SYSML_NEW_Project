/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RefSeismicTsunamiNetwork
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RefSeismicTsunamiNetwork.h
*********************************************************************/

#ifndef RefSeismicTsunamiNetwork_H
#define RefSeismicTsunamiNetwork_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## package Context

//## class RefSeismicTsunamiNetwork
class RefSeismicTsunamiNetwork {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRefSeismicTsunamiNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RefSeismicTsunamiNetwork(void);
    
    //## auto_generated
    ~RefSeismicTsunamiNetwork(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRefSeismicTsunamiNetwork : virtual public AOMInstance {
    DECLARE_META(RefSeismicTsunamiNetwork, OMAnimatedRefSeismicTsunamiNetwork)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RefSeismicTsunamiNetwork.h
*********************************************************************/
