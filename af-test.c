/*
 * AF tester
 * Copyright 2004, Clemens Fruhwirth <clemens@endorphin.org>
 */

int main(int argc, char **argv)
{
	#define SIZE 10000
	#define TIMES 3000
	char data[SIZE];
	char recover[SIZE];
	char *buf;
	int i;
	
	buf=(char *)malloc(SIZE*TIMES);
	for(i = 0; i<SIZE; i++) data[i] = (unsigned char)(random()%256);
	
	AF_split(data,buf,SIZE,TIMES);
	AF_merge(buf,recover,SIZE,TIMES);
	printf("Data %sequal, should be equal\n",(memcmp(data,recover,SIZE)?"not ":""));
	
	AF_split(data,buf,SIZE,TIMES);
	/* single bit error */
	buf[random() % (SIZE*TIMES)] ^= 1 << (random()%8);
	AF_merge(buf,recover,SIZE,TIMES);
	printf("Data %sequal, should be not equal\n",(memcmp(data,recover,SIZE)?"not ":""));
	
	return 0;
}
