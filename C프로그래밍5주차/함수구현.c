#include <stdio.h>

int returnMaxValue(int num1, int num2, int num3);//함수 정의
int returnMinValue(int num1, int num2, int num3);//function declaration

int main()
{
	//3개의 정수를 입력받자
	int value1 = 0;
	int value2 = 0;
	int value3 = 0;
	int result_Maxvalue = 0;
	int result_Minvalue = 0;

	printf("3개의 정수를 입력하세요 : \n");

	scanf_s("%d", &value1);
	scanf_s("%d", &value2);
	scanf_s("%d", &value3);

	result_Maxvalue = returnMaxValue(value1, value2, value3);
	result_Minvalue = returnMinValue(value1, value2, value3);

	printf("%d %d %d 중에 최댓값은 %d입니다.\n", value1, value2, value3, result_Maxvalue);
	printf("%d %d %d 중에 최솟값은 %d입니다.\n", value1, value2, value3, result_Minvalue);
	return 0;

}

int returnMaxValue(int num1, int num2, int num3) //함수구현(function dfine)
{
	int Maxvalue = num1;
	if (num1<num2)
		Maxvalue = num2;
	if (Maxvalue < num3)
	{
		Maxvalue = num3;
	}
	return Maxvalue;
}
int returnMinValue(int num1, int num2, int num3)			
{
	int Minvalue = num1;
	if (num1>num2)
		Minvalue = num2;
	if (Minvalue > num3)
	{
		Minvalue = num3;
	}
	return Minvalue;
}

