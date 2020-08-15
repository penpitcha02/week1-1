#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float width, length;
	printf("width : ");
	scanf("%f", &width);

	printf("length : ");
	scanf("%f", &length);

	printf("area = %.2f\n\n", width * length);
	return 0;
}
