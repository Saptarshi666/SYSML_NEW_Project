/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: QueryRequest
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\QueryRequest.h
*********************************************************************/

#ifndef QueryRequest_H
#define QueryRequest_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "FlowItems.h"
//## package Context::FlowItems

//## class QueryRequest
class QueryRequest {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedQueryRequest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    QueryRequest(void);
    
    //## auto_generated
    ~QueryRequest(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedQueryRequest : virtual public AOMInstance {
    DECLARE_META(QueryRequest, OMAnimatedQueryRequest)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\QueryRequest.h
*********************************************************************/
