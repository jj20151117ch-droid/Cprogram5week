#include<stdio.h>

int main()
{
	int num;
	printf("1이상 5이하의 정수입력:");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("1은 one \n");
		break;
	case 2:
		printf("2는 two \n");
		break;
	case 3:
		printf("3은 three \n");
		break;
	case 4:
		printf("4는 four \n");
		break;
	case 5:
		printf("5는 five \n");
		break;
		
	default:
		printf("몰라요 \n");
	}
	
	return 0;
}