#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
int main(){
	int N, M, element, xor,  curr, prev, i, j, k;
	long int** counts=(long int**)malloc(2*sizeof(long int*)); 
	counts[0] = (long int*)calloc(512, sizeof(long int));
	counts[1] = (long int*)calloc(512, sizeof(long int)); 
	scanf("%d %d", &N, &M);         			
	counts[0][0] = 1;
	for(k=0; k<N; k++) {
		scanf("%d", &element);
		curr = 1;
		prev = 0;
		for(i=0; i<=element; i++) {
			for(j=0; j<512; j++) {
				xor = i ^ j;
				if(counts[prev][j] > 0)
					counts[curr][xor] += counts[prev][j];
				if(counts[curr][xor] >= MOD)
					counts[curr][xor] -= MOD;
			}
		}
		for(i=0; i<512; i++) {
			counts[prev][i] = counts[curr][i];
			counts[curr][i] = 0;
		}
	}
	for(i=0; i<=M; i++)
		printf("%ld ", counts[0][i]);
	return 0;
}
