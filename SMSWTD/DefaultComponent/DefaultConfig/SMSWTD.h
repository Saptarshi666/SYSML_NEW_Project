/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Fri, 19, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Context.h"
//## auto_generated
#include <OMDefaultMulticastReactivePort.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Context

//## class SMSWTD
class SMSWTD {
public :

//#[ ignore
    //## package Context
    class dataIn_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        dataIn_C(void);
        
        //## auto_generated
        virtual ~dataIn_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class alertOut_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        alertOut_C(void);
        
        //## auto_generated
        virtual ~alertOut_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class policyIn_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        policyIn_C(void);
        
        //## auto_generated
        virtual ~policyIn_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class healthOut_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        healthOut_C(void);
        
        //## auto_generated
        virtual ~healthOut_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
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
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Context
    class maintenance_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        maintenance_C(void);
        
        //## auto_generated
        virtual ~maintenance_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    dataIn_C* getDataIn(void) const;
    
    //## auto_generated
    dataIn_C* get_dataIn(void) const;
    
    //## auto_generated
    alertOut_C* getAlertOut(void) const;
    
    //## auto_generated
    alertOut_C* get_alertOut(void) const;
    
    //## auto_generated
    policyIn_C* getPolicyIn(void) const;
    
    //## auto_generated
    policyIn_C* get_policyIn(void) const;
    
    //## auto_generated
    healthOut_C* getHealthOut(void) const;
    
    //## auto_generated
    healthOut_C* get_healthOut(void) const;
    
    //## auto_generated
    query_C* getQuery(void) const;
    
    //## auto_generated
    query_C* get_query(void) const;
    
    //## auto_generated
    maintenance_C* getMaintenance(void) const;
    
    //## auto_generated
    maintenance_C* get_maintenance(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    dataIn_C dataIn;
    
    alertOut_C alertOut;
    
    policyIn_C policyIn;
    
    healthOut_C healthOut;
    
    query_C query;
    
    maintenance_C maintenance;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
