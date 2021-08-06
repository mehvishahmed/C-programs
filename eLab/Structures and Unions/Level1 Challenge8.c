#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    char department[5];
    int yearOfStudy;
    float cgpa;
}S1[100],t;

int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %d %f",S1[i].name,S1[i].department,&S1[i].yearOfStudy,&S1[i].cgpa);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(S1[i].name,S1[j].name)>0){
                t=S1[i];
                S1[i]=S1[j];
                S1[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Name:%s\n",S1[i].name);
        printf("Department:%s\n",S1[i].department);
        printf("Year of study:%d\n",S1[i].yearOfStudy);
        printf("CGPA:%.1f\n",S1[i].cgpa);
    }
	return 0;
}
