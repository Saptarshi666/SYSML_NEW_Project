/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20255590
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MetOceanDataProvider
//!	Generated Date	: Mon, 29, Dec 2025  
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

MetOceanDataProvider::MetOceanDataProvider(IOxfActive* const theActiveContext) : OMReactive(), CasePlaneData(1), CasePlaneLoc(1), CasePlaneMC(1), CaseSatStormData(1), CaseSatStormLoc(1), CurrPlaneData({35,15,1033,20,85,40,65}), CurrSatData({30,2,60,80}), RecAirLoc1({0,0}), RecAirLoc2({0,0}), RecAirLoc3({0,0}), RecSatLoc1({0,0}), RecSatLoc2({0,0}), RecSatLoc3({0,0}) {
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

const int MetOceanDataProvider::getCasePlaneData(void) const {
    return CasePlaneData;
}

void MetOceanDataProvider::setCasePlaneData(const int p_CasePlaneData) {
    CasePlaneData = p_CasePlaneData;
}

const int MetOceanDataProvider::getCasePlaneLoc(void) const {
    return CasePlaneLoc;
}

void MetOceanDataProvider::setCasePlaneLoc(const int p_CasePlaneLoc) {
    CasePlaneLoc = p_CasePlaneLoc;
}

const int MetOceanDataProvider::getCasePlaneMC(void) const {
    return CasePlaneMC;
}

void MetOceanDataProvider::setCasePlaneMC(const int p_CasePlaneMC) {
    CasePlaneMC = p_CasePlaneMC;
}

const int MetOceanDataProvider::getCaseSatStormData(void) const {
    return CaseSatStormData;
}

void MetOceanDataProvider::setCaseSatStormData(const int p_CaseSatStormData) {
    CaseSatStormData = p_CaseSatStormData;
}

const int MetOceanDataProvider::getCaseSatStormLoc(void) const {
    return CaseSatStormLoc;
}

void MetOceanDataProvider::setCaseSatStormLoc(const int p_CaseSatStormLoc) {
    CaseSatStormLoc = p_CaseSatStormLoc;
}

const AirData MetOceanDataProvider::getCurrPlaneData(void) const {
    return CurrPlaneData;
}

void MetOceanDataProvider::setCurrPlaneData(const AirData p_CurrPlaneData) {
    CurrPlaneData = p_CurrPlaneData;
}

const SatData MetOceanDataProvider::getCurrSatData(void) const {
    return CurrSatData;
}

void MetOceanDataProvider::setCurrSatData(const SatData p_CurrSatData) {
    CurrSatData = p_CurrSatData;
}

const int MetOceanDataProvider::getPrevMetO(void) const {
    return PrevMetO;
}

void MetOceanDataProvider::setPrevMetO(const int p_PrevMetO) {
    PrevMetO = p_PrevMetO;
}

const SimData MetOceanDataProvider::getRecAMC1(void) const {
    return RecAMC1;
}

void MetOceanDataProvider::setRecAMC1(const SimData p_RecAMC1) {
    RecAMC1 = p_RecAMC1;
}

const SimData MetOceanDataProvider::getRecAMC2(void) const {
    return RecAMC2;
}

void MetOceanDataProvider::setRecAMC2(const SimData p_RecAMC2) {
    RecAMC2 = p_RecAMC2;
}

const SimData MetOceanDataProvider::getRecAMC3(void) const {
    return RecAMC3;
}

void MetOceanDataProvider::setRecAMC3(const SimData p_RecAMC3) {
    RecAMC3 = p_RecAMC3;
}

const SimData MetOceanDataProvider::getRecAP1(void) const {
    return RecAP1;
}

void MetOceanDataProvider::setRecAP1(const SimData p_RecAP1) {
    RecAP1 = p_RecAP1;
}

const SimData MetOceanDataProvider::getRecAP2(void) const {
    return RecAP2;
}

void MetOceanDataProvider::setRecAP2(const SimData p_RecAP2) {
    RecAP2 = p_RecAP2;
}

const Location MetOceanDataProvider::getRecAirLoc1(void) const {
    return RecAirLoc1;
}

void MetOceanDataProvider::setRecAirLoc1(const Location p_RecAirLoc1) {
    RecAirLoc1 = p_RecAirLoc1;
}

const Location MetOceanDataProvider::getRecAirLoc2(void) const {
    return RecAirLoc2;
}

void MetOceanDataProvider::setRecAirLoc2(const Location p_RecAirLoc2) {
    RecAirLoc2 = p_RecAirLoc2;
}

const Location MetOceanDataProvider::getRecAirLoc3(void) const {
    return RecAirLoc3;
}

void MetOceanDataProvider::setRecAirLoc3(const Location p_RecAirLoc3) {
    RecAirLoc3 = p_RecAirLoc3;
}

const SimData MetOceanDataProvider::getRecHumd1(void) const {
    return RecHumd1;
}

void MetOceanDataProvider::setRecHumd1(const SimData p_RecHumd1) {
    RecHumd1 = p_RecHumd1;
}

const SimData MetOceanDataProvider::getRecHumd2(void) const {
    return RecHumd2;
}

void MetOceanDataProvider::setRecHumd2(const SimData p_RecHumd2) {
    RecHumd2 = p_RecHumd2;
}

const SimData MetOceanDataProvider::getRecHumd3(void) const {
    return RecHumd3;
}

void MetOceanDataProvider::setRecHumd3(const SimData p_RecHumd3) {
    RecHumd3 = p_RecHumd3;
}

const Location MetOceanDataProvider::getRecSatLoc1(void) const {
    return RecSatLoc1;
}

void MetOceanDataProvider::setRecSatLoc1(const Location p_RecSatLoc1) {
    RecSatLoc1 = p_RecSatLoc1;
}

const Location MetOceanDataProvider::getRecSatLoc2(void) const {
    return RecSatLoc2;
}

void MetOceanDataProvider::setRecSatLoc2(const Location p_RecSatLoc2) {
    RecSatLoc2 = p_RecSatLoc2;
}

const Location MetOceanDataProvider::getRecSatLoc3(void) const {
    return RecSatLoc3;
}

void MetOceanDataProvider::setRecSatLoc3(const Location p_RecSatLoc3) {
    RecSatLoc3 = p_RecSatLoc3;
}

const SimData MetOceanDataProvider::getRecSatTempGrad1(void) const {
    return RecSatTempGrad1;
}

void MetOceanDataProvider::setRecSatTempGrad1(const SimData p_RecSatTempGrad1) {
    RecSatTempGrad1 = p_RecSatTempGrad1;
}

const SimData MetOceanDataProvider::getRecSatTempGrad2(void) const {
    return RecSatTempGrad2;
}

void MetOceanDataProvider::setRecSatTempGrad2(const SimData p_RecSatTempGrad2) {
    RecSatTempGrad2 = p_RecSatTempGrad2;
}

const SimData MetOceanDataProvider::getRecStormSize1(void) const {
    return RecStormSize1;
}

void MetOceanDataProvider::setRecStormSize1(const SimData p_RecStormSize1) {
    RecStormSize1 = p_RecStormSize1;
}

const SimData MetOceanDataProvider::getRecStormSize2(void) const {
    return RecStormSize2;
}

void MetOceanDataProvider::setRecStormSize2(const SimData p_RecStormSize2) {
    RecStormSize2 = p_RecStormSize2;
}

const SimData MetOceanDataProvider::getRecStormSize3(void) const {
    return RecStormSize3;
}

void MetOceanDataProvider::setRecStormSize3(const SimData p_RecStormSize3) {
    RecStormSize3 = p_RecStormSize3;
}

const SimData MetOceanDataProvider::getRecTemp1(void) const {
    return RecTemp1;
}

void MetOceanDataProvider::setRecTemp1(const SimData p_RecTemp1) {
    RecTemp1 = p_RecTemp1;
}

const SimData MetOceanDataProvider::getRecTemp2(void) const {
    return RecTemp2;
}

void MetOceanDataProvider::setRecTemp2(const SimData p_RecTemp2) {
    RecTemp2 = p_RecTemp2;
}

const SimData MetOceanDataProvider::getRecTemp3(void) const {
    return RecTemp3;
}

void MetOceanDataProvider::setRecTemp3(const SimData p_RecTemp3) {
    RecTemp3 = p_RecTemp3;
}

const SimData MetOceanDataProvider::getRecWS1(void) const {
    return RecWS1;
}

void MetOceanDataProvider::setRecWS1(const SimData p_RecWS1) {
    RecWS1 = p_RecWS1;
}

const SimData MetOceanDataProvider::getRecWS2(void) const {
    return RecWS2;
}

void MetOceanDataProvider::setRecWS2(const SimData p_RecWS2) {
    RecWS2 = p_RecWS2;
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
        /* For variable referencing ONLY
        //Declaring History Variables for Aircrafts
        SimData RecWS1,RecWS2,RecHum1,RecHum2,RecHum3,RecTemp1,RecTemp2,RecTemp3;
        SimData RecAP1,RecAP2,RecAMU1,RecAMU2,RecAMU3;
        Location RecAirLoc1,RecAirLoc2,RecAirLoc3;
        
        //Declaring History Variable for Satellite
        Location RecSatLoc1,RecSatLoc2,RecSatLoc3;
        SimData RecSatTempGrad1, RecSatTempGrad2;
        SimData RecStormSize1,RecStormSize2;
        */
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
                    //AirCarft Location and Sensor Diagnostics data
                    RecAMC1 = fillHistSineWave(4,2,95); // good certainty of measurement
                    RecAMC2 = fillHistSineWave(4,2,65); // questionable certainty of measurement
                    RecAMC3 = fillHistSineWave(4,2,35); // uncertain measurement
                    RecAirLoc1 = {36.1, 36.1}; // 51 Km away
                    RecAirLoc2 = {-63, 109.1}; // 126 Km away
                    RecAirLoc3 = {-233.2, -135}; // 270 Km away
                    // ************* Update Location Values here ************** //
                    
                    //AirCarft Weather Data - Normal Case 
                    RecWS1 = fillHistRamp(8.0); // wind speed
                    RecHumd1 = fillHistSineWave(4,1,47); // humidity
                    RecTemp1 = fillHistSineWave(5,1,25.0); // temperature from Airplane
                    RecAP1 = fillHistSineWave(90,2,960); // normal Air Pressure in Hbars
                    
                    //AirCarft Weather Data - Alert Case (Storm) 
                    //(Change location based on emergency)
                    RecWS2 = fillHistSineWave(4,2,30); //  high wind speed
                    RecHumd2 = fillHistSineWave(4,1,88); // high humidity
                    RecTemp2 = fillHistSineWave(5,1,12.0); // low temperature from Airplane
                    RecAP2 = fillHistSineWave(90,2,1200); // high Air Pressure in Hbars (<1100)
                    
                    //AirCarft Weather Data - Alert Case (Heat Wave)
                    //(Change location based on emergency)
                    RecHumd3 =  fillHistSineWave(2,2,7);
                    RecTemp3 = fillHistSineWave(5,1,40.0);
                    
                    //(Possible) Storm Locations Sent by Satellite
                    RecSatLoc1 = {-233.2, -135}; // 270 Km away
                    RecSatLoc2 = {113.9 , 372.8}; // 390 Km away
                    RecSatLoc3 = {-515.8 , 219.0}; // 560 Km away
                    // ************* Update Location Values here ************** //
                    
                    //Satellite Data - Normal Case 
                    //RecSatLoc1 = ; // quite far away
                    RecSatTempGrad1 = fillHistSineWave(1,2,0); // no sudden temp changes
                    RecStormSize1 = fillHistSineWave(0,2,0); // no storm = zeros
                    
                    //Satellite Data - Alert Case 
                    //RecSatLoc2 = ; // closeby
                    RecSatTempGrad2 = fillHistSineWave(1,2,10); // sudden temp changes
                    RecStormSize2 = fillHistSineWave(0.16,2,5); // storm = Class 5 (Medium)
                    RecStormSize3 = fillHistSineWave(0.16,2,9); // storm = Class 9 (Dangerous)
                    
                    //Satellite Data - Predict Case 
                    // RecSatLoc3 = ; A bit far (Medium Emergency)
                    //(Change location based on emergency)
                    // Re-Use RecSatTempGrad2 and RecStormSize1
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.SendData");
                    rootState_subState = SendData;
                    rootState_active = SendData;
                    //#[ state SendData.(Entry) 
                    if(PrevMetO >= 18) {
                    	printf("Resetting timeline to continue...\t\t");
                    	PrevMetO = 0;
                    	}
                     
                    // Assign correct plane location (Cases - 1,2,3)
                    switch(CasePlaneLoc) {
                        case 1:
                            // update location 1
                            CurrPlaneData.LocX = RecAirLoc1.x;
                            CurrPlaneData.LocY = RecAirLoc1.y;
                            break;
                        case 2:
                            // update location 2
                            CurrPlaneData.LocX = RecAirLoc2.x;
                            CurrPlaneData.LocY = RecAirLoc2.y;
                            break;
                        case 3:
                            // update location 3
                            CurrPlaneData.LocX = RecAirLoc3.x;
                            CurrPlaneData.LocY = RecAirLoc3.y;
                            break;
                        default:
                            // default action - location 1
                            CurrPlaneData.LocX = RecAirLoc1.x;
                            CurrPlaneData.LocY = RecAirLoc1.y;
                            break;
                    }
                    // Assign correct plane MesC (Cases - 1,2,3)
                    switch(CasePlaneMC) {
                        case 1:
                            // assign Measurement Certainty type 1
                            CurrPlaneData.MesC = RecAMC1.data[PrevMetO];
                            break;
                        case 2:
                            // assign Measurement Certainty type 2
                            CurrPlaneData.MesC = RecAMC2.data[PrevMetO];
                            break;
                        case 3:
                            // assign Measurement Certainty type 3
                            CurrPlaneData.MesC = RecAMC3.data[PrevMetO];
                            break;
                        default:
                            // default action - Measurement Certainty type 1
                            CurrPlaneData.MesC = RecAMC1.data[PrevMetO];
                            break;
                    }
                    // Assign correct plane weather data (Cases - 1,2,3)
                    switch(CasePlaneData) {
                        case 1: // AirCarft Weather Data - Normal Case
                            // assign Data set 1
                            CurrPlaneData.Temp = RecTemp1.data[PrevMetO]; // Temperature
                            CurrPlaneData.Humd = RecHumd1.data[PrevMetO]; // Humidity
                            CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                            CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                            break;
                        case 2: // AirCarft Weather Data - Alert Case (Storm) 
                            // assign Data set 2
                            CurrPlaneData.Temp = RecTemp2.data[PrevMetO]; // Temperature
                            CurrPlaneData.Humd = RecHumd2.data[PrevMetO]; // Humidity
                            CurrPlaneData.AirP = RecAP2.data[PrevMetO]; // air pressure
                            CurrPlaneData.WinS = RecWS2.data[PrevMetO]; // Wind Speed
                            break;
                        case 3: //AirCarft Weather Data - Alert Case (Heat Wave)
                            // assign Data set - MIXED
                            CurrPlaneData.Temp = RecTemp3.data[PrevMetO]; // Temperature
                            CurrPlaneData.Humd = RecHumd3.data[PrevMetO]; // Humidity
                            CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                            CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                            break;
                        default:
                            // default action - assign Data set 1
                            CurrPlaneData.Temp = RecTemp1.data[PrevMetO]; // Temperature
                            CurrPlaneData.Humd = RecHumd1.data[PrevMetO]; // Humidity
                            CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                            CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                            break;
                    }
                    // Assign correct Storm location from Satellite (Cases - 1,2,3)
                    switch(CaseSatStormLoc) {
                        case 1:
                            // update location 1 - closeby storm/phenomenon
                            CurrSatData.StLocX = RecAirLoc1.x;
                            CurrSatData.StLocY = RecAirLoc1.y;
                            break;
                        case 2:
                            // update location 2 - distant storm/phenomenon
                            CurrSatData.StLocX = RecAirLoc2.x;
                            CurrSatData.StLocY = RecAirLoc2.y;
                            break;
                        case 3:
                            // update location 3 - far away storm/phenomenon
                            CurrSatData.StLocX = RecAirLoc3.x;
                            CurrSatData.StLocY = RecAirLoc3.y;
                            break;
                        default:
                            // default action - location 1
                            CurrSatData.StLocX = RecAirLoc1.x;
                            CurrSatData.StLocY = RecAirLoc1.y;
                            break;
                    }
                    // Assign correct storm data from Satellite (Cases - 1,2,3)
                    switch(CaseSatStormData) {
                        case 1: // Satellite Storm Data - Normal Case
                            // assign Data set 1
                            CurrSatData.TempG = RecSatTempGrad1.data[PrevMetO]; // Temperature Gradrient
                            CurrSatData.StSize = RecStormSize1.data[PrevMetO]; // Storm Size - Zero
                            break;
                        case 2: // AirCarft Weather Data - Alert Case (Storm Class 3) 
                            // assign Data set 2
                            CurrSatData.TempG = RecSatTempGrad2.data[PrevMetO]; // Temperature Gradrient
                            CurrSatData.StSize = RecStormSize2.data[PrevMetO]; // Storm Size - Zero
                            break;
                        case 3: //AirCarft Weather Data - Alert Case (Storm Class 3)
                            // assign Data set 3
                            CurrSatData.TempG = RecSatTempGrad2.data[PrevMetO]; // Temperature Gradrient
                            CurrSatData.StSize = RecStormSize3.data[PrevMetO]; // Storm Size - Zero
                            break;
                        default:
                            // default action - assign Data set 1
                            CurrSatData.TempG = RecSatTempGrad1.data[PrevMetO]; // Temperature Gradrient
                            CurrSatData.StSize = RecStormSize1.data[PrevMetO]; // Storm Size - Zero
                            break;
                    }
                    PrevMetO++;
                    OUT_PORT(out)->GEN(evMetOceanUpdate(CurrPlaneData, CurrSatData));
                    //#]
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
                            //#[ state SendData.(Entry) 
                            if(PrevMetO >= 18) {
                            	printf("Resetting timeline to continue...\t\t");
                            	PrevMetO = 0;
                            	}
                             
                            // Assign correct plane location (Cases - 1,2,3)
                            switch(CasePlaneLoc) {
                                case 1:
                                    // update location 1
                                    CurrPlaneData.LocX = RecAirLoc1.x;
                                    CurrPlaneData.LocY = RecAirLoc1.y;
                                    break;
                                case 2:
                                    // update location 2
                                    CurrPlaneData.LocX = RecAirLoc2.x;
                                    CurrPlaneData.LocY = RecAirLoc2.y;
                                    break;
                                case 3:
                                    // update location 3
                                    CurrPlaneData.LocX = RecAirLoc3.x;
                                    CurrPlaneData.LocY = RecAirLoc3.y;
                                    break;
                                default:
                                    // default action - location 1
                                    CurrPlaneData.LocX = RecAirLoc1.x;
                                    CurrPlaneData.LocY = RecAirLoc1.y;
                                    break;
                            }
                            // Assign correct plane MesC (Cases - 1,2,3)
                            switch(CasePlaneMC) {
                                case 1:
                                    // assign Measurement Certainty type 1
                                    CurrPlaneData.MesC = RecAMC1.data[PrevMetO];
                                    break;
                                case 2:
                                    // assign Measurement Certainty type 2
                                    CurrPlaneData.MesC = RecAMC2.data[PrevMetO];
                                    break;
                                case 3:
                                    // assign Measurement Certainty type 3
                                    CurrPlaneData.MesC = RecAMC3.data[PrevMetO];
                                    break;
                                default:
                                    // default action - Measurement Certainty type 1
                                    CurrPlaneData.MesC = RecAMC1.data[PrevMetO];
                                    break;
                            }
                            // Assign correct plane weather data (Cases - 1,2,3)
                            switch(CasePlaneData) {
                                case 1: // AirCarft Weather Data - Normal Case
                                    // assign Data set 1
                                    CurrPlaneData.Temp = RecTemp1.data[PrevMetO]; // Temperature
                                    CurrPlaneData.Humd = RecHumd1.data[PrevMetO]; // Humidity
                                    CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                                    CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                                    break;
                                case 2: // AirCarft Weather Data - Alert Case (Storm) 
                                    // assign Data set 2
                                    CurrPlaneData.Temp = RecTemp2.data[PrevMetO]; // Temperature
                                    CurrPlaneData.Humd = RecHumd2.data[PrevMetO]; // Humidity
                                    CurrPlaneData.AirP = RecAP2.data[PrevMetO]; // air pressure
                                    CurrPlaneData.WinS = RecWS2.data[PrevMetO]; // Wind Speed
                                    break;
                                case 3: //AirCarft Weather Data - Alert Case (Heat Wave)
                                    // assign Data set - MIXED
                                    CurrPlaneData.Temp = RecTemp3.data[PrevMetO]; // Temperature
                                    CurrPlaneData.Humd = RecHumd3.data[PrevMetO]; // Humidity
                                    CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                                    CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                                    break;
                                default:
                                    // default action - assign Data set 1
                                    CurrPlaneData.Temp = RecTemp1.data[PrevMetO]; // Temperature
                                    CurrPlaneData.Humd = RecHumd1.data[PrevMetO]; // Humidity
                                    CurrPlaneData.AirP = RecAP1.data[PrevMetO]; // air pressure
                                    CurrPlaneData.WinS = RecWS1.data[PrevMetO]; // Wind Speed
                                    break;
                            }
                            // Assign correct Storm location from Satellite (Cases - 1,2,3)
                            switch(CaseSatStormLoc) {
                                case 1:
                                    // update location 1 - closeby storm/phenomenon
                                    CurrSatData.StLocX = RecAirLoc1.x;
                                    CurrSatData.StLocY = RecAirLoc1.y;
                                    break;
                                case 2:
                                    // update location 2 - distant storm/phenomenon
                                    CurrSatData.StLocX = RecAirLoc2.x;
                                    CurrSatData.StLocY = RecAirLoc2.y;
                                    break;
                                case 3:
                                    // update location 3 - far away storm/phenomenon
                                    CurrSatData.StLocX = RecAirLoc3.x;
                                    CurrSatData.StLocY = RecAirLoc3.y;
                                    break;
                                default:
                                    // default action - location 1
                                    CurrSatData.StLocX = RecAirLoc1.x;
                                    CurrSatData.StLocY = RecAirLoc1.y;
                                    break;
                            }
                            // Assign correct storm data from Satellite (Cases - 1,2,3)
                            switch(CaseSatStormData) {
                                case 1: // Satellite Storm Data - Normal Case
                                    // assign Data set 1
                                    CurrSatData.TempG = RecSatTempGrad1.data[PrevMetO]; // Temperature Gradrient
                                    CurrSatData.StSize = RecStormSize1.data[PrevMetO]; // Storm Size - Zero
                                    break;
                                case 2: // AirCarft Weather Data - Alert Case (Storm Class 3) 
                                    // assign Data set 2
                                    CurrSatData.TempG = RecSatTempGrad2.data[PrevMetO]; // Temperature Gradrient
                                    CurrSatData.StSize = RecStormSize2.data[PrevMetO]; // Storm Size - Zero
                                    break;
                                case 3: //AirCarft Weather Data - Alert Case (Storm Class 3)
                                    // assign Data set 3
                                    CurrSatData.TempG = RecSatTempGrad2.data[PrevMetO]; // Temperature Gradrient
                                    CurrSatData.StSize = RecStormSize3.data[PrevMetO]; // Storm Size - Zero
                                    break;
                                default:
                                    // default action - assign Data set 1
                                    CurrSatData.TempG = RecSatTempGrad1.data[PrevMetO]; // Temperature Gradrient
                                    CurrSatData.StSize = RecStormSize1.data[PrevMetO]; // Storm Size - Zero
                                    break;
                            }
                            PrevMetO++;
                            OUT_PORT(out)->GEN(evMetOceanUpdate(CurrPlaneData, CurrSatData));
                            //#]
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
    aomsAttributes->addAttribute("RecAirLoc2", UNKNOWN2STRING(myReal->RecAirLoc2));
    aomsAttributes->addAttribute("RecAirLoc3", UNKNOWN2STRING(myReal->RecAirLoc3));
    aomsAttributes->addAttribute("RecSatLoc1", UNKNOWN2STRING(myReal->RecSatLoc1));
    aomsAttributes->addAttribute("RecSatLoc2", UNKNOWN2STRING(myReal->RecSatLoc2));
    aomsAttributes->addAttribute("RecSatLoc3", UNKNOWN2STRING(myReal->RecSatLoc3));
    aomsAttributes->addAttribute("RecSatTempGrad1", UNKNOWN2STRING(myReal->RecSatTempGrad1));
    aomsAttributes->addAttribute("RecSatTempGrad2", UNKNOWN2STRING(myReal->RecSatTempGrad2));
    aomsAttributes->addAttribute("RecStormSize1", UNKNOWN2STRING(myReal->RecStormSize1));
    aomsAttributes->addAttribute("RecStormSize2", UNKNOWN2STRING(myReal->RecStormSize2));
    aomsAttributes->addAttribute("RecAMC1", UNKNOWN2STRING(myReal->RecAMC1));
    aomsAttributes->addAttribute("RecAMC2", UNKNOWN2STRING(myReal->RecAMC2));
    aomsAttributes->addAttribute("RecAMC3", UNKNOWN2STRING(myReal->RecAMC3));
    aomsAttributes->addAttribute("RecAP1", UNKNOWN2STRING(myReal->RecAP1));
    aomsAttributes->addAttribute("RecAP2", UNKNOWN2STRING(myReal->RecAP2));
    aomsAttributes->addAttribute("RecWS1", UNKNOWN2STRING(myReal->RecWS1));
    aomsAttributes->addAttribute("RecWS2", UNKNOWN2STRING(myReal->RecWS2));
    aomsAttributes->addAttribute("RecHumd1", UNKNOWN2STRING(myReal->RecHumd1));
    aomsAttributes->addAttribute("RecHumd2", UNKNOWN2STRING(myReal->RecHumd2));
    aomsAttributes->addAttribute("RecHumd3", UNKNOWN2STRING(myReal->RecHumd3));
    aomsAttributes->addAttribute("RecTemp1", UNKNOWN2STRING(myReal->RecTemp1));
    aomsAttributes->addAttribute("RecTemp2", UNKNOWN2STRING(myReal->RecTemp2));
    aomsAttributes->addAttribute("RecTemp3", UNKNOWN2STRING(myReal->RecTemp3));
    aomsAttributes->addAttribute("CasePlaneData", x2String(myReal->CasePlaneData));
    aomsAttributes->addAttribute("CaseSatStormData", x2String(myReal->CaseSatStormData));
    aomsAttributes->addAttribute("CasePlaneLoc", x2String(myReal->CasePlaneLoc));
    aomsAttributes->addAttribute("CaseSatStormLoc", x2String(myReal->CaseSatStormLoc));
    aomsAttributes->addAttribute("CasePlaneMC", x2String(myReal->CasePlaneMC));
    aomsAttributes->addAttribute("CurrPlaneData", UNKNOWN2STRING(myReal->CurrPlaneData));
    aomsAttributes->addAttribute("CurrSatData", UNKNOWN2STRING(myReal->CurrSatData));
    aomsAttributes->addAttribute("RecStormSize3", UNKNOWN2STRING(myReal->RecStormSize3));
    aomsAttributes->addAttribute("PrevMetO", x2String(myReal->PrevMetO));
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
