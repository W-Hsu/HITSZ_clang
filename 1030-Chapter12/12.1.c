#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char College[10];
    char Level[10];
    char Job[10];
} careerStatus;

typedef struct {
    char Name[30];
    char Sex;
    Date Birthday;
    careerStatus career;
} Employee;
