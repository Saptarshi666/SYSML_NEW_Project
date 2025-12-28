/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researchers
//!	Generated Date	: Sun, 28, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Researchers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Researchers.h"
//#[ ignore
#define Context_Researchers_Researchers_SERIALIZE OM_NO_OP
//#]

//## package Context

//## class Researchers
//#[ ignore
Researchers::query_C::query_C(void) : OMDefaultReactivePort(), _p_(0) {
}

Researchers::query_C::~query_C(void) {
}

void Researchers::query_C::connectResearchers(Researchers* part) {
}
//#]

Researchers::Researchers(void) {
    NOTIFY_CONSTRUCTOR(Researchers, Researchers(), 0, Context_Researchers_Researchers_SERIALIZE);
}

Researchers::~Researchers(void) {
    NOTIFY_DESTRUCTOR(~Researchers, true);
}

Researchers::query_C* Researchers::getQuery(void) const {
    return (Researchers::query_C*) &query;
}

Researchers::query_C* Researchers::get_query(void) const {
    return (Researchers::query_C*) &query;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Researchers, Context, Context, false, OMAnimatedResearchers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researchers.cpp
*********************************************************************/
