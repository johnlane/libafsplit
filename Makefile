#!/usr/bin/make -f
#
# Copyright 2004, Clemens Fruhwirth <clemens@endorphin.org>
#

CFLAGS+= -fPIC

TEST=af-test
LIB=libafsplit.so
LIBOBJ=af.o sha1.o XORblock.o random.o

$(TEST): $(TEST).o $(LIB)
	$(CC) $^ -o $@ $(LIB)

$(LIB): $(LIBOBJ)
	$(CC) $^ -o $@ -shared

clean:
	rm -f $(OBJ) $(LIBOBJ) $(LIB) $(TEST)
	
