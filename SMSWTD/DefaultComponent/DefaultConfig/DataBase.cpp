/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataBase
//!	Generated Date	: Wed, 31, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataBase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataBase.h"
//#[ ignore
#define UseCases_DataBase_DataBase_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor DataBase
DataBase::DataBase(void) {
    NOTIFY_CONSTRUCTOR(DataBase, DataBase(), 0, UseCases_DataBase_DataBase_SERIALIZE);
}

DataBase::~DataBase(void) {
    NOTIFY_DESTRUCTOR(~DataBase, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataBase::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(DataBase, UseCases, UseCases, false, OMAnimatedDataBase)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataBase.cpp
*********************************************************************/
