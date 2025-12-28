/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicDataIF
//!	Generated Date	: Fri, 26, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicDataIF.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SeismicDataIF.h"
//#[ ignore
#define SMSWTD_Architecture_SeismicDataIF_SeismicDataIF_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class SeismicDataIF
SeismicDataIF::SeismicDataIF(void) {
    NOTIFY_CONSTRUCTOR(SeismicDataIF, SeismicDataIF(), 0, SMSWTD_Architecture_SeismicDataIF_SeismicDataIF_SERIALIZE);
}

SeismicDataIF::~SeismicDataIF(void) {
    NOTIFY_DESTRUCTOR(~SeismicDataIF, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSeismicDataIF::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("test", x2String(myReal->test));
}
//#]

IMPLEMENT_META_P(SeismicDataIF, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedSeismicDataIF)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicDataIF.cpp
*********************************************************************/
