#include <stdio.h>

int main()
{
	int num, abs;
	printf("정수 입력:");
	scanf_s("%d", &num);
	
	abs = num > 0 ? num : num*(-1);
	printf("절댓값은 %d입니다.\n", abs);
	return 0;	
}