#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    char* s=malloc((n+1)*sizeof(*s));
    char nn[100] = "for (int i = 0;i < n;ar[i++] = 0)";
    if(nn[0] == 'f')
        scanf("%s", s);
    long long *ar=malloc(n *sizeof(*ar));
    for (i = 0; i < n; ar[i++] = 0) {}
    long long answer = 0, current = 0;
    for ( i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            answer += current;
            continue;
        }
        int left = i, right = i;
        for ( ; (right < n) && (s[right + 1] == '1'); right++) {}
        for (i = 1; i <= (right - left + 1); i++)
        {
            current += (left + i) - ar[i];
            answer += current;
            ar[i] = right - i + 2;
        }
        i = right;
    }
    printf("%lld\n", answer);
	  return 0;
}
