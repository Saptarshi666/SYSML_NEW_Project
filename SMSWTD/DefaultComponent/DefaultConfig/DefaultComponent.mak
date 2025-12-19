
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SMSWTD.obj \
  MetOceanDataProvider.obj \
  SeismicTsunamiNetwork.obj \
  TelecomSMSNetwork.obj \
  SirenPASystem.obj \
  BroadcastMedia.obj \
  GovAlertNetwork.obj \
  MobilePushService.obj \
  EmergencyAuthorityOperator.obj \
  EmergencyResponders.obj \
  Public.obj \
  Researchers.obj \
  Maintainers.obj \
  SMSWTD_Context.obj \
  SensorObservation.obj \
  PolicyConfig.obj \
  AlertMessage.obj \
  HealthStatus.obj \
  QueryRequest.obj \
  QueryResponse.obj \
  MaintenanceCommand.obj \
  MaintenanceReport.obj \
  PhysicalEnvironment.obj \
  CommunicationsEnvironment.obj \
  OperationalEnvironment.obj \
  ThreatEnvironment.obj \
  Researcher.obj \
  Maintainer.obj \
  Journalists.obj \
  Citizens.obj \
  GovtAgencies.obj \
  EmergencyServices.obj \
  DataBase.obj \
  UnderwaterSensors.obj \
  AircarftSensors.obj \
  SatelliteCluster.obj \
  EAOperator.obj \
  SMSWTD_System.obj \
  SensingInterfaceSubsystem.obj \
  DataIngestionSubsystem.obj \
  AnalyticsSubsystem.obj \
  RiskAssessmentSubsystem.obj \
  AlertingSubsystem.obj \
  UserInterfaceSubsystem.obj \
  OpsSafetySecuritySubsystem.obj \
  DataManagementSubsystem.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SMSWTD.obj : SMSWTD.cpp SMSWTD.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



MetOceanDataProvider.obj : MetOceanDataProvider.cpp MetOceanDataProvider.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MetOceanDataProvider.obj" "MetOceanDataProvider.cpp" 



SeismicTsunamiNetwork.obj : SeismicTsunamiNetwork.cpp SeismicTsunamiNetwork.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SeismicTsunamiNetwork.obj" "SeismicTsunamiNetwork.cpp" 



TelecomSMSNetwork.obj : TelecomSMSNetwork.cpp TelecomSMSNetwork.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TelecomSMSNetwork.obj" "TelecomSMSNetwork.cpp" 



SirenPASystem.obj : SirenPASystem.cpp SirenPASystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SirenPASystem.obj" "SirenPASystem.cpp" 



BroadcastMedia.obj : BroadcastMedia.cpp BroadcastMedia.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"BroadcastMedia.obj" "BroadcastMedia.cpp" 



GovAlertNetwork.obj : GovAlertNetwork.cpp GovAlertNetwork.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovAlertNetwork.obj" "GovAlertNetwork.cpp" 



MobilePushService.obj : MobilePushService.cpp MobilePushService.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MobilePushService.obj" "MobilePushService.cpp" 



EmergencyAuthorityOperator.obj : EmergencyAuthorityOperator.cpp EmergencyAuthorityOperator.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EmergencyAuthorityOperator.obj" "EmergencyAuthorityOperator.cpp" 



EmergencyResponders.obj : EmergencyResponders.cpp EmergencyResponders.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EmergencyResponders.obj" "EmergencyResponders.cpp" 



Public.obj : Public.cpp Public.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Public.obj" "Public.cpp" 



Researchers.obj : Researchers.cpp Researchers.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Researchers.obj" "Researchers.cpp" 



Maintainers.obj : Maintainers.cpp Maintainers.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maintainers.obj" "Maintainers.cpp" 



SMSWTD_Context.obj : SMSWTD_Context.cpp SMSWTD_Context.h    SMSWTD.h MetOceanDataProvider.h SeismicTsunamiNetwork.h EmergencyAuthorityOperator.h Maintainers.h Researchers.h TelecomSMSNetwork.h GovAlertNetwork.h MobilePushService.h BroadcastMedia.h SirenPASystem.h PhysicalEnvironment.h CommunicationsEnvironment.h OperationalEnvironment.h ThreatEnvironment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD_Context.obj" "SMSWTD_Context.cpp" 



SensorObservation.obj : SensorObservation.cpp SensorObservation.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorObservation.obj" "SensorObservation.cpp" 



PolicyConfig.obj : PolicyConfig.cpp PolicyConfig.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PolicyConfig.obj" "PolicyConfig.cpp" 



AlertMessage.obj : AlertMessage.cpp AlertMessage.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertMessage.obj" "AlertMessage.cpp" 



HealthStatus.obj : HealthStatus.cpp HealthStatus.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HealthStatus.obj" "HealthStatus.cpp" 



QueryRequest.obj : QueryRequest.cpp QueryRequest.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"QueryRequest.obj" "QueryRequest.cpp" 



QueryResponse.obj : QueryResponse.cpp QueryResponse.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"QueryResponse.obj" "QueryResponse.cpp" 



MaintenanceCommand.obj : MaintenanceCommand.cpp MaintenanceCommand.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaintenanceCommand.obj" "MaintenanceCommand.cpp" 



MaintenanceReport.obj : MaintenanceReport.cpp MaintenanceReport.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaintenanceReport.obj" "MaintenanceReport.cpp" 



PhysicalEnvironment.obj : PhysicalEnvironment.cpp PhysicalEnvironment.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PhysicalEnvironment.obj" "PhysicalEnvironment.cpp" 



CommunicationsEnvironment.obj : CommunicationsEnvironment.cpp CommunicationsEnvironment.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationsEnvironment.obj" "CommunicationsEnvironment.cpp" 



OperationalEnvironment.obj : OperationalEnvironment.cpp OperationalEnvironment.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OperationalEnvironment.obj" "OperationalEnvironment.cpp" 



ThreatEnvironment.obj : ThreatEnvironment.cpp ThreatEnvironment.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ThreatEnvironment.obj" "ThreatEnvironment.cpp" 



Researcher.obj : Researcher.cpp Researcher.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Researcher.obj" "Researcher.cpp" 



Maintainer.obj : Maintainer.cpp Maintainer.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maintainer.obj" "Maintainer.cpp" 



Journalists.obj : Journalists.cpp Journalists.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Journalists.obj" "Journalists.cpp" 



Citizens.obj : Citizens.cpp Citizens.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Citizens.obj" "Citizens.cpp" 



GovtAgencies.obj : GovtAgencies.cpp GovtAgencies.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovtAgencies.obj" "GovtAgencies.cpp" 



EmergencyServices.obj : EmergencyServices.cpp EmergencyServices.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EmergencyServices.obj" "EmergencyServices.cpp" 



DataBase.obj : DataBase.cpp DataBase.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataBase.obj" "DataBase.cpp" 



UnderwaterSensors.obj : UnderwaterSensors.cpp UnderwaterSensors.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnderwaterSensors.obj" "UnderwaterSensors.cpp" 



AircarftSensors.obj : AircarftSensors.cpp AircarftSensors.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AircarftSensors.obj" "AircarftSensors.cpp" 



SatelliteCluster.obj : SatelliteCluster.cpp SatelliteCluster.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteCluster.obj" "SatelliteCluster.cpp" 



EAOperator.obj : EAOperator.cpp EAOperator.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EAOperator.obj" "EAOperator.cpp" 



SMSWTD_System.obj : SMSWTD_System.cpp SMSWTD_System.h    AlertingSubsystem.h DataIngestionSubsystem.h DataManagementSubsystem.h OpsSafetySecuritySubsystem.h UserInterfaceSubsystem.h RiskAssessmentSubsystem.h AnalyticsSubsystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD_System.obj" "SMSWTD_System.cpp" 



SensingInterfaceSubsystem.obj : SensingInterfaceSubsystem.cpp SensingInterfaceSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensingInterfaceSubsystem.obj" "SensingInterfaceSubsystem.cpp" 



DataIngestionSubsystem.obj : DataIngestionSubsystem.cpp DataIngestionSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataIngestionSubsystem.obj" "DataIngestionSubsystem.cpp" 



AnalyticsSubsystem.obj : AnalyticsSubsystem.cpp AnalyticsSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AnalyticsSubsystem.obj" "AnalyticsSubsystem.cpp" 



RiskAssessmentSubsystem.obj : RiskAssessmentSubsystem.cpp RiskAssessmentSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RiskAssessmentSubsystem.obj" "RiskAssessmentSubsystem.cpp" 



AlertingSubsystem.obj : AlertingSubsystem.cpp AlertingSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertingSubsystem.obj" "AlertingSubsystem.cpp" 



UserInterfaceSubsystem.obj : UserInterfaceSubsystem.cpp UserInterfaceSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserInterfaceSubsystem.obj" "UserInterfaceSubsystem.cpp" 



OpsSafetySecuritySubsystem.obj : OpsSafetySecuritySubsystem.cpp OpsSafetySecuritySubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OpsSafetySecuritySubsystem.obj" "OpsSafetySecuritySubsystem.cpp" 



DataManagementSubsystem.obj : DataManagementSubsystem.cpp DataManagementSubsystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataManagementSubsystem.obj" "DataManagementSubsystem.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist MetOceanDataProvider.obj erase MetOceanDataProvider.obj
	if exist SeismicTsunamiNetwork.obj erase SeismicTsunamiNetwork.obj
	if exist TelecomSMSNetwork.obj erase TelecomSMSNetwork.obj
	if exist SirenPASystem.obj erase SirenPASystem.obj
	if exist BroadcastMedia.obj erase BroadcastMedia.obj
	if exist GovAlertNetwork.obj erase GovAlertNetwork.obj
	if exist MobilePushService.obj erase MobilePushService.obj
	if exist EmergencyAuthorityOperator.obj erase EmergencyAuthorityOperator.obj
	if exist EmergencyResponders.obj erase EmergencyResponders.obj
	if exist Public.obj erase Public.obj
	if exist Researchers.obj erase Researchers.obj
	if exist Maintainers.obj erase Maintainers.obj
	if exist SMSWTD_Context.obj erase SMSWTD_Context.obj
	if exist SensorObservation.obj erase SensorObservation.obj
	if exist PolicyConfig.obj erase PolicyConfig.obj
	if exist AlertMessage.obj erase AlertMessage.obj
	if exist HealthStatus.obj erase HealthStatus.obj
	if exist QueryRequest.obj erase QueryRequest.obj
	if exist QueryResponse.obj erase QueryResponse.obj
	if exist MaintenanceCommand.obj erase MaintenanceCommand.obj
	if exist MaintenanceReport.obj erase MaintenanceReport.obj
	if exist PhysicalEnvironment.obj erase PhysicalEnvironment.obj
	if exist CommunicationsEnvironment.obj erase CommunicationsEnvironment.obj
	if exist OperationalEnvironment.obj erase OperationalEnvironment.obj
	if exist ThreatEnvironment.obj erase ThreatEnvironment.obj
	if exist Researcher.obj erase Researcher.obj
	if exist Maintainer.obj erase Maintainer.obj
	if exist Journalists.obj erase Journalists.obj
	if exist Citizens.obj erase Citizens.obj
	if exist GovtAgencies.obj erase GovtAgencies.obj
	if exist EmergencyServices.obj erase EmergencyServices.obj
	if exist DataBase.obj erase DataBase.obj
	if exist UnderwaterSensors.obj erase UnderwaterSensors.obj
	if exist AircarftSensors.obj erase AircarftSensors.obj
	if exist SatelliteCluster.obj erase SatelliteCluster.obj
	if exist EAOperator.obj erase EAOperator.obj
	if exist SMSWTD_System.obj erase SMSWTD_System.obj
	if exist SensingInterfaceSubsystem.obj erase SensingInterfaceSubsystem.obj
	if exist DataIngestionSubsystem.obj erase DataIngestionSubsystem.obj
	if exist AnalyticsSubsystem.obj erase AnalyticsSubsystem.obj
	if exist RiskAssessmentSubsystem.obj erase RiskAssessmentSubsystem.obj
	if exist AlertingSubsystem.obj erase AlertingSubsystem.obj
	if exist UserInterfaceSubsystem.obj erase UserInterfaceSubsystem.obj
	if exist OpsSafetySecuritySubsystem.obj erase OpsSafetySecuritySubsystem.obj
	if exist DataManagementSubsystem.obj erase DataManagementSubsystem.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
