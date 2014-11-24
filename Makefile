#!/usr/bin/make -f
#
# Copyright 2004, Clemens Fruhwirth <clemens@endorphin.org>
#

OBJ=af.o af-test.o sha1.o XORblock.o random.o

af-test: $(OBJ)
	$(CC) $^ -o $@ 

clean:
	rm $(OBJ) af-test
	
