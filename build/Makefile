include Makefile-platform
include Makefile-ndll

PROJECT=fcgi

ifeq ($(PLATFORM),Windows)
	FCGIPATH=ext
	CCFLAGS+= -I$(FCGIPATH)\include
	LDFLAGS+= -L$(FCGIPATH)\lib
else
	ifeq ($(PLATFORM),Windows64)
		FCGIPATH=ext
		CCFLAGS+= -I$(FCGIPATH)\include
		LDFLAGS+= -L$(FCGIPATH)\lib64
	endif
endif

LDFLAGS+= -lfcgi
