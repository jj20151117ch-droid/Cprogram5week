#include<stdio.h>

int main()
{
	int num = 1;
	if (num == 1)
	{
		int num = 7; //이행을 주석처리하고 확인결과를 확인 하자!
		num += 10;
		printf("if문 내 지역변수 num:%d \n", num);
	}
	printf("main 함수 내 지역변수 num:%d \n", num);
	return 0;

}