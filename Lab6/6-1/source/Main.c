#include <imformation.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Person p;
	printf("input your name:");
	scanf_s("%s", &p.name,8);

	printf("input your gender<0 for woman 1 for man>:");
	scanf_s("%d", &p.gender);

	printf("input your age:");
	scanf_s("%d", &p.age);

	printf("\nHi! %s\n", p.name);

	if (p.gender == 0)
		printf("You are %d-years old woman",p.age);
	else
		printf("You are %d-years old man",p.age);

	system("pause");
	return 0;
}