#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float height,weight;
	printf("請輸入您的身高(m):"); 
	scanf("%f",&height);
	printf("請輸入您的體重(kg)");
	scanf("%f",&weight);
	printf("你的BMI值=%f\n",weight/(height*height));
	system("pause");
	return 0;
}
