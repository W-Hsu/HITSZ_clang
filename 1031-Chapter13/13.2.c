#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} DATE;

typedef struct {
	long ID;
	char Name[10];
	char Sex;
	DATE Birthday;
	int Score[4];
} STUDENT;

int main() {
	freopen("./score.txt", "w", stdout);
	int i, j, sum[30] = {0};
	STUDENT stu[30] = {{100310121, "王刚", 'M', {1991, 5, 19}, {72, 83, 90, 82}},
					   {100310122, "李小明", 'M', {1992, 8, 20}, {88, 92, 78, 78}},
					   {100310123, "王丽红", 'F', {1991, 9, 19}, {98, 72, 89, 66}},
					   {100310124, "陈莉莉", 'F', {1992, 3, 22}, {87, 95, 78, 90}}
					  };
	for (i=0 ; i<4 ; i++) {
		sum[i] = 0;
		for (j=0 ; j<4 ; j++) sum[i] += stu[i].Score[i];
		printf ("%-10ld%8s%3c%6d/%02d/%2d%4d%4d%4d%4d%6.1f\n", 
				stu[i].ID,
				stu[i].Name,
				stu[i].Sex,
				stu[i].Birthday.year,
				stu[i].Birthday.month,
				stu[i].Birthday.day,
				stu[i].Score[0],
				stu[i].Score[1],
				stu[i].Score[2],
				stu[i].Score[3],
				sum[i]/4.0);
	}
	return 0;	
}
