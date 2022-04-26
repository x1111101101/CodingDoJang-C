#include <stdio.h>

int main(int argc, char* argv[]) {
	long long longlong = 123123123123;
	printf("Hello, %ull\n", longlong);
	printf("Hello, %lld\n", longlong);
	
	/*
	Result:
		Hello, 2864038835ll
		Hello, 123123123123
	*/
	return 0;
}
