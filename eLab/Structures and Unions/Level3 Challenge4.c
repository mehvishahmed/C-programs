#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct sorted{
    int a,index;
}sorted;
void merge(sorted arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    sorted L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0; 
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].a <= R[j].a)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(sorted arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int n,q,i,choice,x,y;
    scanf("%d %d",&n,&q);
    struct sorted b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i].a);
        b[i].index=i;
    }
    mergeSort(b,0,n-1);
    for(;q>0;q--)
    {
        scanf("%d %d %d",&choice,&x,&y);
        if(choice==2)
        {
            int c[y-x+1],j=y-x,f=0;
            for(i=n-1;i>=0;i--) 
                if((b[i].index>=x-1)&&(b[i].index<=y-1))
                {
                    c[j]=b[i].a;
                    if(j<=(y-x-2))
                        if(c[j+2]<(c[j+1]+c[j]))
                        {
                            long int e=c[j];
                            e+=c[j+1];
                            e+=c[j+2];
                            printf("%ld\n",e);
                            f=1;
                            break;
                        }
                    j--;
                }
            if(f==0)
                printf("0\n");
        }
        else
        {
            int pos;
            for(i=0;i<n;i++)
                if(b[i].index==x-1)
                {
                    pos=i;
                    break;
                }
            int t =b[pos].a;
            b[pos].a=y;
            sorted temp={y,x-1};
            if(y>t)
            {
                int beg=pos,end=n-1,mid;
                while(beg<=end)
                {
                    mid=(beg+end)/2;
                    if((y>=b[mid].a)&&(y<b[mid+1].a))
                        break;
                    else if(y>b[mid].a)
                        beg=mid+1;
                    else
                        end=mid-1;
                }
                memmove(&b[pos],&b[pos+1],(mid-pos)*sizeof(sorted));
                b[mid]=temp;
                continue;
            }
            if(y<t)
            {
                int beg=0,end=pos,mid;
                while(beg<=end)
                {
                    mid=(beg+end)/2;
                    if((y>=b[mid-1].a)&&(y<b[mid].a))
                        break;
                    else if(y>b[mid].a)
                        beg=mid+1;
                    else
                        end=mid-1;
                }
                memmove(&b[mid+1],&b[mid],(pos-mid)*sizeof(sorted));
                b[mid]=temp;
                continue;
            }
        }
    }
    return 0;
}
