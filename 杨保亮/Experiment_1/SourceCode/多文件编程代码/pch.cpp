// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "pch.h"
#include "stdio.h"
 struct student stu[6]={ {20171100,"zhang",84,96},{20171101,"wang",78,86},{20171102,"zhao",80,86},{20171103,"liu",69,75},{20171104,"TomHanks",85,90},{20171105,"Jeny",90,96} };
void sort()
{
	int i, j, k;
	printf("期末成绩排名为：\n");
	 struct student t;
	for (i = 0; i < 6; i++)
	{
		k = i;
		for (j = i + 1; j < 6; j++)
			if (stu[j].finalscore > stu[k].finalscore)
				k = j;
		t = stu[k]; stu[k] = stu[i]; stu[i] = t;
	}
	for (i = 0; i < 6; i++)
		printf("%d,%s,%d\n", stu[i].number,stu[i].name,stu[i].finalscore);
	printf("\n");
	
}
void find()
{
	int i;
	printf("请输入学号查询成绩：");
	scanf_s("%d", &i);
	printf("%d\n", stu[i-20171100].finalscore);
	

	
}

// 一般情况下，忽略此文件，但如果你使用的是预编译标头，请保留它。
