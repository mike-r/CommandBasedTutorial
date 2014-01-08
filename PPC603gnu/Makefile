# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/CommandBasedTutorial



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedTutorial/$(MODE_DIR)/CommandBasedTutorial.out \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage.o


#Rules

# CommandBasedTutorial
ifeq ($(DEBUG_MODE),1)
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedTutorial/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedTutorial/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedTutorial/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedTutorial/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedTutorial/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedTutorial/$(MODE_DIR)/% : DEFINES = 
CommandBasedTutorial/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedTutorial/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedTutorial/$(MODE_DIR)/% : CPU = PPC603
CommandBasedTutorial/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedTutorial/$(MODE_DIR)/% : TOOL = gnu
CommandBasedTutorial/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedTutorial/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedTutorial/$(MODE_DIR)/% : LIBPATH = 
CommandBasedTutorial/$(MODE_DIR)/% : LIBS = 
CommandBasedTutorial/$(MODE_DIR)/% : OBJ_DIR := CommandBasedTutorial/$(MODE_DIR)

OBJECTS_CommandBasedTutorial = CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage.o

CommandBasedTutorial/$(MODE_DIR)/CommandBasedTutorial.out : $(OBJECTS_CommandBasedTutorial)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedTutorial) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedTutorial) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedTutorial/$(MODE_DIR)/CommandBasedTutorial_compile_file : $(FILE) ;

_clean :: CommandBasedTutorial/$(MODE_DIR)/CommandBasedTutorial_clean

CommandBasedTutorial/$(MODE_DIR)/CommandBasedTutorial_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedTutorial" ]; then cd "CommandBasedTutorial"; rm -rf $(MODE_DIR); fi


# CommandBasedTutorial_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedTutorial_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedTutorial_partialImage/$(MODE_DIR)

CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveMotorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorOneSec.o : $(PRJ_ROOT_DIR)/Commands/DriveMotorOneSec.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/ExampleCommand.o : $(PRJ_ROOT_DIR)/Commands/ExampleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/ExampleSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ExampleSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/MotorControlSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/MotorControlSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedTutorial_partialImage = CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBase.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBasedRobot.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorCommand.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorOneSec.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/ExampleCommand.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/OI.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/ExampleSubsystem.o \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/MotorControlSubsystem.o

CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage.o : $(OBJECTS_CommandBasedTutorial_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedTutorial_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage_clean

CommandBasedTutorial_partialImage/$(MODE_DIR)/CommandBasedTutorial_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedTutorial_partialImage" ]; then cd "CommandBasedTutorial_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBase.d CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/CommandBasedRobot.d CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorCommand.d \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/DriveMotorOneSec.d CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Commands/ExampleCommand.d CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/OI.d \
	 CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/ExampleSubsystem.d CommandBasedTutorial_partialImage/$(MODE_DIR)/Objects/CommandBasedTutorial/Subsystems/MotorControlSubsystem.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
