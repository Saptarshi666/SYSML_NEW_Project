/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataBase
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataBase.h
*********************************************************************/

#ifndef DataBase_H
#define DataBase_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## package UseCases

//## actor DataBase
class DataBase {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataBase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataBase(void);
    
    //## auto_generated
    ~DataBase(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataBase : virtual public AOMInstance {
    DECLARE_META(DataBase, OMAnimatedDataBase)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataBase.h
*********************************************************************/
