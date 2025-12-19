/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researchers
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Researchers.h
*********************************************************************/

#ifndef Researchers_H
#define Researchers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class Researchers
class Researchers {
public :

//#[ ignore
    //## package Context
    class query_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        query_C(void);
        
        //## auto_generated
        virtual ~query_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectResearchers(Researchers* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Researchers(void);
    
    //## auto_generated
    ~Researchers(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    query_C* getQuery(void) const;
    
    //## auto_generated
    query_C* get_query(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    query_C query;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researchers.h
*********************************************************************/
