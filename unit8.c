#include <stdio.h>
#include <float.h>

int main(int argc, char* argv[]) {
	float f = FLT_MAX;
	f += 1123.0f;
	printf("result: %f\n", f); // = FLT_MAX. 더할 때 더하는 값이 일정 크기가 안된다면 오버플로우가 발생 안하고 이전 값 그대로 유지되는 듯 하다
	f *= 1000;
	printf("result2: %f\n", f); // inf. 오버플로우
	
	float f2 = 1234.1234;
	f2 /= 10000000000000; // 0.0000. 언더플로우
	printf("result3: %f\n", f2);
	
	return 0;
}
