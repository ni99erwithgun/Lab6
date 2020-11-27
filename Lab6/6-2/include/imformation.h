#include<stdio.h>
#include<stdlib.h>

typedef struct _dates
{
	int year, month, day;
}dates;

typedef struct _order
{
	char code[11];
	dates date;
	int amount;
}order;
