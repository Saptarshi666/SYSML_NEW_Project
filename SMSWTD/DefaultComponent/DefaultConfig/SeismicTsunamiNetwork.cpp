/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicTsunamiNetwork
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SeismicTsunamiNetwork.h"
//#[ ignore
#define Context_SeismicTsunamiNetwork_SeismicTsunamiNetwork_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class SeismicTsunamiNetwork
//#[ ignore
SeismicTsunamiNetwork::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

SeismicTsunamiNetwork::out_C::~out_C(void) {
}

void SeismicTsunamiNetwork::out_C::connectSeismicTsunamiNetwork(SeismicTsunamiNetwork* part) {
}
//#]

SeismicTsunamiNetwork::SeismicTsunamiNetwork(void) {
    NOTIFY_CONSTRUCTOR(SeismicTsunamiNetwork, SeismicTsunamiNetwork(), 0, Context_SeismicTsunamiNetwork_SeismicTsunamiNetwork_SERIALIZE);
}

SeismicTsunamiNetwork::~SeismicTsunamiNetwork(void) {
    NOTIFY_DESTRUCTOR(~SeismicTsunamiNetwork, true);
}

SeismicTsunamiNetwork::out_C* SeismicTsunamiNetwork::getOut(void) const {
    return (SeismicTsunamiNetwork::out_C*) &out;
}

SeismicTsunamiNetwork::out_C* SeismicTsunamiNetwork::get_out(void) const {
    return (SeismicTsunamiNetwork::out_C*) &out;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SeismicTsunamiNetwork, Context, Context, false, OMAnimatedSeismicTsunamiNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.cpp
*********************************************************************/
