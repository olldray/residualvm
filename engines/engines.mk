ifdef ENABLE_GRIM
DEFINES += -DENABLE_GRIM=$(ENABLE_GRIM)
MODULES += engines/grim

ifdef ENABLE_MONKEY4
DEFINES += -DENABLE_MONKEY4
endif

endif

ifdef ENABLE_MYST3
DEFINES += -DENABLE_MYST3=$(ENABLE_MYST3)
MODULES += engines/myst3
endif
