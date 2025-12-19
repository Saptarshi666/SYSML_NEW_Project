/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SeismicTsunamiNetwork
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.h
*********************************************************************/

#ifndef SeismicTsunamiNetwork_H
#define SeismicTsunamiNetwork_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class SeismicTsunamiNetwork
class SeismicTsunamiNetwork {
public :

//#[ ignore
    //## package Context
    class out_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        out_C(void);
        
        //## auto_generated
        virtual ~out_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSeismicTsunamiNetwork(SeismicTsunamiNetwork* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SeismicTsunamiNetwork(void);
    
    //## auto_generated
    ~SeismicTsunamiNetwork(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    out_C* getOut(void) const;
    
    //## auto_generated
    out_C* get_out(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    out_C out;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SeismicTsunamiNetwork.h
*********************************************************************/
