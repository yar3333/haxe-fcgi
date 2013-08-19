# tested on MinGW
# do "make HXCPP_M64=1" for 64-bit

SRC = ../../library/src
INCLUDE_HXCPP = $(shell sh -c 'haxelib path hxcpp | head -1')include/
INCLUDE_FCGI = include

LIBRARY_FCGI = lib
ifdef HXCPP_M64
LIBRARY_FCGI = lib64
endif

CC = g++

CFLAGS = -O2 -s -Wall -shared -I$(INCLUDE_HXCPP) -I$(INCLUDE_FCGI) -D hxcpp
ifdef HXCPP_M64
CFLAGS += -D HXCPP_M64 -fPIC
endif

LDFLAGS = -L$(LIBRARY_FCGI) -lfcgi

OUT = ../../library/ndll/Windows/hxfcgi.ndll
ifdef HXCPP_M64
OUT = ../../library/ndll/Windows64/hxfcgi.ndll
endif

OBJ = $(SRC)/hxfcgi.o $(SRC)/request.o $(SRC)/basic.o $(SRC)/data.o

hxfcgi: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(OUT) $(LDFLAGS)
	cp $(LIBRARY_FCGI)/libfcgi.dll $(dir $(OUT))
	
$(SRC)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	rm -f $(OUT)
	rm -f $(OBJ)

all: clean hxfcgi
