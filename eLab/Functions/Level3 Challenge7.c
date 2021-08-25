#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
void generate_catalan_numbers();
unsigned long int catalan(int n);
int main(){
	generate_catalan_numbers();
	return 0;
}
void generate_catalan_numbers(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%ld\n", catalan(n));
    }
}
unsigned long int catalan(int n){
	if(n <= 1)
	    return 1;
	unsigned long int res = 0;
	int i;
	for(i = 0; i < n; i++)
		res += catalan(i) * catalan(n - 1 - i);
	return res % 100003;
}
