#include<stdio.h>
#include<stdlib.h>
#define size 10

struct Student
{
	int num;
	char name[20];
	char sex[4];
	int score[5];
	float aver;
}stu[size];

void save()
{
	FILE *fp;
	int i,j;
	fp=fopen("stu.c","w");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&stu[i].num);
		fprintf(fp,"%d\n",stu.num);
		gets(stu[i].name);
		fprintf(fp,"%s\n",stu[i].name);
		gets(stu[i].sex);
		fprintf(fp,"%s\n",stu[i].sex);
		for(j=0;j<5;j++)
			scanf("%d",&stu[i].score[j]);
		fprintf(fp,"%d %d %d %d %d\n",stu[i].score[0],stu[i].score[1],stu[i].scorep[2],stu[i].score[3],stu[i].score[4]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3]+stu[i].score[4])/5.0;
		fprintf(fp,"%f\n",stu[i].aver);
	}
	fclose(fp);
}

void sort()
{
	FILE *fp_in,*fp_sort;
	int i,k,j;
	float stu_aver[size];
	struct Student temp;
	fp_in=fopen("stu.c","r");
	for(i=0;i<size;i++)
	{
		fscanf(fp_in,"%f\n",&stu[i].aver);
		printf("%f\n",stu[i].aver);
		stu_aver[i]=stu[i].aver;
	}
	for(i=0;i<size;i++)
		printf("%f\n",stu_aver[i]);
	for(i=0;i<size-1;i++)
		for(j=i+1;j<size;j++)
		{
			k=i;
			if(stu_aver[k]>stu_aver[j])
				k=j;
			if(k!=i)
			{
				temp=stu[k];
				stu[k]=stu[i];
				stu[i]=temp;
			}
		}
		fp_sort=fopen("stu-sort","w");
		for(i=0;i<size;i++)
		{
			fprintf(fp_sort,"%d\n",stu[i].num);
			fprintf(fp_sort,"%s\n",stu[i].name);
			fprintf(fp_sort,"%s\n",stu[i].sex);
			fprintf(fp_sort,"%d %d %d %d %d\n",stu[i].score[0],stu[i].score[1],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].score[4]);
			fprintf(fp_sort,"%lf\n",stu[i].aver);
		}
		fclose(fp_sort);
		fclose(fp_in);
}

int main()
{
	FILE *fp;
	int i,j;
	save();
	sort();
	return 0;
}