#include<stdio.h>

int Add(int num1, int num2)		//인자 전달 (o) 반환값(o)
{
	return num1 + num2;
}
void showAddResult(int num)	//인자 전달(o) 반환값(x)
{
	printf("덧셈결과:%d \n", num);
}
int ReadNum()	//인자 전달(x) 반환값(o)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	return num;
}

void HowToUseFunction()	//인자 전달(x) 반환값(x)
{
	printf("두개의 정수를 입력하신면 덧셈 결과가 출력 됩니다. \n");
	printf("자 그러면 두개의 정수를 입력하십시오:\n");
}

int main()
{
	int num1, num2;
	int result;
	HowToUseFunction();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	showAddResult(result);
	return 0;
}