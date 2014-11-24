/*
 * AFsplitter - Anti forensic information splitter
 * Copyright 2004, Clemens Fruhwirth <clemens@endorphin.org>
 */

/*
 * AF_split operates on src and produces information splitted data in 
 * dst. src is assumed to be of the length blocksize. The data stripe
 * dst points to must be captable of storing blocksize*blocknumbers. 
 * blocknumbers is the data multiplication factor.
 *
 * AF_merge does just the opposite: reproduces the information stored in 
 * src of the length blocksize*blocknumbers into dst of the length 
 * blocksize.
 *
 * On error, both functions return -1, 0 otherwise.
 */ 

int AF_split(char *src, char *dst, int blocksize, int blocknumbers);
int AF_merge(char *src, char *dst, int blocksize, int blocknumbers);
