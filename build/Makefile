ifeq ($(shell getconf LONG_BIT),64)
	PLATFORM=Linux64
else
	PLATFORM=Linux
endif

SRC_DIR=src
OBJ_DIR=obj

OBJS=$(OBJ_DIR)/hxfcgi.o $(OBJ_DIR)/request.o $(OBJ_DIR)/basic.o $(OBJ_DIR)/data.o $(OBJ_DIR)/common.o

OUT=../library/ndll/$(PLATFORM)/hxfcgi.ndll

CC = g++

CFLAGS=-shared -O2 -s -Wall -fPIC
LDFLAGS=-shared -lneko -lfcgi

build: $(OBJS)
	$(CC) -shared $(OBJS) -o $(OUT) $(LDFLAGS)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	rm -f $(OBJS)
	rm -f $(OUT)

all: clean build
