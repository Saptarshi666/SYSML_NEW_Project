/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BroadcastMedia
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "BroadcastMedia.h"
//#[ ignore
#define Context_BroadcastMedia_BroadcastMedia_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class BroadcastMedia
//#[ ignore
BroadcastMedia::in_C::in_C(void) : OMDefaultReactivePort(), _p_(0) {
}

BroadcastMedia::in_C::~in_C(void) {
}

void BroadcastMedia::in_C::connectBroadcastMedia(BroadcastMedia* part) {
}
//#]

BroadcastMedia::BroadcastMedia(void) {
    NOTIFY_CONSTRUCTOR(BroadcastMedia, BroadcastMedia(), 0, Context_BroadcastMedia_BroadcastMedia_SERIALIZE);
}

BroadcastMedia::~BroadcastMedia(void) {
    NOTIFY_DESTRUCTOR(~BroadcastMedia, true);
}

BroadcastMedia::in_C* BroadcastMedia::getIn(void) const {
    return (BroadcastMedia::in_C*) &in;
}

BroadcastMedia::in_C* BroadcastMedia::get_in(void) const {
    return (BroadcastMedia::in_C*) &in;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(BroadcastMedia, Context, Context, false, OMAnimatedBroadcastMedia)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BroadcastMedia.cpp
*********************************************************************/
