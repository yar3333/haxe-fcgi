ifeq ($(shell getconf LONG_BIT),64)
	X64=1
endif

SRC_DIR=src
OBJ_DIR=obj
OBJS=$(OBJ_DIR)/hxfcgi.o $(OBJ_DIR)/request.o $(OBJ_DIR)/basic.o $(OBJ_DIR)/data.o

ifdef X64
OUT=../library/ndll/Linux64/hxfcgi.ndll
else
OUT=../library/ndll/Linux/hxfcgi.ndll
endif

CC = g++

CFLAGS=-O2 -s -Wall -shared
ifdef X64
CFLAGS+=-D HXCPP_M64 -fPIC -D PIC
endif

LDFLAGS = -lneko -lfcgi

build: $(OBJS)
	$(CC) -shared $(OBJS) -o $(OUT) $(LDFLAGS)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	rm -f $(OUT)
	rm -f $(OBJS)

all: clean build
