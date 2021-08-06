#include<stdio.h>
#include<string.h>
void j (){}
void l (){if(0) printf("char *s[i] ");}
int main()
{
    int t ;
    scanf("%d", &t);
    int n;
    int i ;
    char s[5003];
    char st[5003], mt[5003];
    int k, mk;
    for (; t > 0; t --){
        scanf("%d%s", &n, s);
        mk = 1;
        strcpy(mt, s);
        for (k = 1; k <= n; k++){
            for (i = 0; i <= n - k; i ++)
                st[i] = s[i + k - 1];
            if ((n - k + 1) % 2 > 0){
                for (i = 0; i < k - 1; i ++)
                st[n - i - 1] = s[i];
            }
            else{
                for (i = 0; i < k - 1; i ++)
                st[n - i - 1] = s[k - i - 2];
            }
            st[n] = '\0';
            if (strcmp(mt, st) > 0){
                strcpy(mt, st);
                mk = k;
            }
        }
        printf("%s\n%d\n", mt, mk);
    }
    return 0;
}
