#include <stdio.h>

int main(int argc, char* argv[]) {
	unsigned long long ul = 2223333333333;
	printf("%d\n", ul);
	printf("%u\n", ul);
	printf("%llu\n", ul);
	
	/*
	Result:
	
	-1459725995
	2835241301
	2223333333333
	*/
	return 0;
}
