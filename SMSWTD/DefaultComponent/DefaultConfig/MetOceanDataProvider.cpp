/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20190977
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MetOceanDataProvider.h"
//#[ ignore
#define SMSWTD_Architecture_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD_Architecture

//## class MetOceanDataProvider
//#[ ignore
MetOceanDataProvider::out_C::out_C(void) : OMDefaultReactivePort(), _p_(0) {
}

MetOceanDataProvider::out_C::~out_C(void) {
}

void MetOceanDataProvider::out_C::connectMetOceanDataProvider(MetOceanDataProvider* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

MetOceanDataProvider::MetOceanDataProvider(IOxfActive* const theActiveContext) : OMReactive(), RecAirLoc1({37.7749, -122.4194, 10000.0}) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MetOceanDataProvider, MetOceanDataProvider(), 0, SMSWTD_Architecture_MetOceanDataProvider_MetOceanDataProvider_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

MetOceanDataProvider::~MetOceanDataProvider(void) {
    NOTIFY_DESTRUCTOR(~MetOceanDataProvider, true);
    cancelTimeouts();
}

MetOceanDataProvider::out_C* MetOceanDataProvider::getOut(void) const {
    return (MetOceanDataProvider::out_C*) &out;
}

MetOceanDataProvider::out_C* MetOceanDataProvider::get_out(void) const {
    return (MetOceanDataProvider::out_C*) &out;
}

const Location MetOceanDataProvider::getRecAirLoc1(void) const {
    return RecAirLoc1;
}

void MetOceanDataProvider::setRecAirLoc1(const Location p_RecAirLoc1) {
    RecAirLoc1 = p_RecAirLoc1;
}

bool MetOceanDataProvider::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool MetOceanDataProvider::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void MetOceanDataProvider::initRelations(void) {
    if (get_out() != NULL) {
        get_out()->connectMetOceanDataProvider(this);
    }
}

void MetOceanDataProvider::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void MetOceanDataProvider::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void MetOceanDataProvider::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state Idle.(Entry) 
        //Location RecAirLoc1,RecAirLoc2,RecAirLoc3;
        //RecAirLoc1 = {37.7749, -122.4194, 10000.0};
        std::cout << RecAirLoc1.y << " y val \n";
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus MetOceanDataProvider::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        // Description: State Local Variables
        // =====================
        // 
        // Airplane Data
        // |
        // |--- [SimData]    Windspeed              (RecWS1, RecWS2)
        // |
        // |--- [SimData]    Humidity               (RecHum1, RecHum2)
        // |
        // |--- [SimData]    Temperature            (RecTemp1, RecTemp2)
        // |
        // |--- [SimData]    Air Pressure           (RecAP1, RecAP2)
        // |
        // |--- [Location]     Aircraft Location      (RecAirLoc1, RecAirLoc2, RecAirLoc3) < Changes Alert/Prediction Emergency
        // |
        // |--- [SimData]    Measurement Uncertainty (RecAMU1, RecAMU2, RecAMU3)
        // 
        // 
        // Satellite Data
        // |
        // |--- [Location]     Storm Location         (RecSatLoc1, RecSatLoc2, RecSatLoc3)  < Changes Alert/Prediction Emergency
        // |
        // |--- [SimData]    Temperature Gradient   (RecSatTempGrad1, RecSatTempGrad2, RecSatTempGrad3)
        // |
        // |--- [SimData]    Storm Size             (RecStormSize1, RecStormSize2)
        // 
        //   ------------------------------  NOTE  ------------------------------------
        //      IN CASE OF NO STORM DETECTED, SAT DATA IS --
        //  
        //      -  Storm Location              --->    Location of the Max Temp. Change
        //      -  Temperature Gradient   --->    Max Temp Change in the Selected Zone on Earth Surface
        // 
        // 
        // 
        // //
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evStartDataMet_SMSWTD_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state Idle.(Exit) 
                    //Declaring History Variables for Aircrafts
                    SimData RecWS1,RecWS2,RecHum1,RecHum2,RecHum3,RecTemp1,RecTemp2,RecTemp3;
                    SimData RecAP1,RecAP2,RecAMU1,RecAMU2,RecAMU3;
                    
                    //Declaring History Variable for Satellite
                    Location RecSatLoc1,RecSatLoc2,RecSatLoc3;
                    SimData RecSatTempGrad1, RecSatTempGrad2;
                    SimData RecStormSize1,RecStormSize2;
                    
                    //AirCarft Location and Sensor Diagnostics data
                    RecAMU1 = fillHistSineWave(4,2,95); // good certainty of measurement
                    RecAMU2 = fillHistSineWave(4,2,65); // questionable certainty of measurement
                    RecAMU3 = fillHistSineWave(4,2,35); // uncertain measurement
                    // ************* Add Location variables here ************** //
                    
                    //AirCarft Weather Data - Normal Case 
                    RecWS1 = fillHistRamp(8.0); // wind speed
                    RecHum1 = fillHistSineWave(4,1,47); // humidity
                    RecTemp1 = fillHistSineWave(5,1,25.0); // temperature from Airplane
                    RecAP1 = fillHistSineWave(90,2,960); // normal Air Pressure in Hbars
                    
                    //AirCarft Weather Data - Alert Case (Storm) 
                    //(Change location based on emergency)
                    RecWS1 = fillHistSineWave(4,2,30); //  high wind speed
                    RecHum1 = fillHistSineWave(4,1,88); // high humidity
                    RecTemp1 = fillHistSineWave(5,1,12.0); // low temperature from Airplane
                    RecAP1 = fillHistSineWave(90,2,1200); // high Air Pressure in Hbars (<1100)
                    
                    //AirCarft Weather Data - Alert Case (Heat Wave)
                    //(Change location based on emergency)
                    RecHum3 =  fillHistSineWave(2,2,7);
                    RecTemp3 = fillHistSineWave(5,1,40.0);
                    
                    //Satellite Data - Normal Case 
                    //RecSatLoc1 = ; // quite far away
                    RecSatTempGrad1 = fillHistSineWave(1,2,0); // no sudden temp changes
                    RecStormSize1 = fillHistSineWave(0,2,0); // no storm = zeros
                    
                    //Satellite Data - Alert Case 
                    //RecSatLoc2 = ; // closeby
                    RecSatTempGrad2 = fillHistSineWave(1,2,10); // sudden temp changes
                    RecStormSize2 = fillHistSineWave(0.16,2,5); // storm = Class 5 (Medium)
                    RecStormSize2 = fillHistSineWave(0.16,2,9); // storm = Class 9 (Dangerous)
                    
                    //Satellite Data - Predict Case 
                    // RecSatLoc3 = ; A bit far (Medium Emergency)
                    //(Change location based on emergency)
                    // Re-Use RecSatTempGrad2 and RecStormSize1
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.SendData");
                    rootState_subState = SendData;
                    rootState_active = SendData;
                    rootState_timeout = scheduleTimeout(3000, "ROOT.SendData");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SendData
        case SendData:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SendData");
                            NOTIFY_STATE_ENTERED("ROOT.SendData");
                            rootState_subState = SendData;
                            rootState_active = SendData;
                            rootState_timeout = scheduleTimeout(3000, "ROOT.SendData");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMetOceanDataProvider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("RecAirLoc1", UNKNOWN2STRING(myReal->RecAirLoc1));
}

void OMAnimatedMetOceanDataProvider::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case MetOceanDataProvider::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case MetOceanDataProvider::SendData:
        {
            SendData_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMetOceanDataProvider::SendData_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SendData");
}

void OMAnimatedMetOceanDataProvider::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(MetOceanDataProvider, SMSWTD_Architecture, SMSWTD_Architecture, false, OMAnimatedMetOceanDataProvider)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MetOceanDataProvider.cpp
*********************************************************************/
