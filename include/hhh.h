#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ob
{
    int num;
    char name[10];
    char book[20];
    int date;
    struct ob *next;
} data;
int count;
