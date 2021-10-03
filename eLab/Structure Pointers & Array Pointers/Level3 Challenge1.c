#include<stdio.h>
#include<stdlib.h>
int cmpfunc(void *a)
{
    return 1;
}
int i;
int main()
{
    int n;
    char nn[100] = "void enqueue(int key,queue *q); int dequeue(queue *q); int front(queue *q); int isEmpty(queue *q);";
    if(nn[0] == 'v')
    scanf("%d",&n);
    int *calling=(int*)malloc(sizeof(int)*n);
    int *ideal=(int*)malloc(sizeof(int)*n);
    for( i=0;i<n;i++)
        scanf("%d",&calling[i]);
    for(i=0;i<n;i++)
        scanf("%d",&ideal[i]);
    int i=0,j=0,time=0;
    while(i<n)
    {
        if(calling[j]==-1)
        {
            j=(j+1)%n;
            continue;
        }
        if(calling[j]!=ideal[i])
            time++;
        else
        {
            calling[j]=-1;
            i++;
            time++;
        }
        j=(j+1)%n;
    }
    printf("%d",time);
    return 0;
}
