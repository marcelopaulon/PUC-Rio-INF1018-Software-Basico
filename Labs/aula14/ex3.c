#include <stdio.h>

typedef int (*funcp) (int x);

int main(void) {
	int i;
	unsigned char codigo[] = {0x55,0x89,0xe5,0x8b,0x45,0x08,0x83,0xc0,0x01,0x89,0xec,0x5d,0xc3};
	funcp f = (funcp)codigo;
	i = (*f)(10);
	printf("%d\n", i);
	return 0;
}