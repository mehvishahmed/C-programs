#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char novalhero[10];
        int sum = 0,i,arr[10],n;
        scanf("%d %s",&n,novalhero);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        if(novalhero[0] == 'R' && sum%2 == 0)
            puts("Ram");
        else
            printf("Krishna\n");
    }
	return 0;
}
