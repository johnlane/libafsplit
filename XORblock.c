void XORblock(char *src1, char *src2, char *dst, int n)
{
	int j;
	for(j=0; j<n; j++)
		dst[j] = src1[j] ^ src2[j];
}
