#include <stdio.h>
#include <stdlib.h>
void print();
int main()
{
    print();

	return 0;
}
void print()
{
    int n =3,i;
    int *boxes;
    int box;
     scanf("%i",&box);
     boxes = malloc(n * sizeof(box)) ;
     while(box--)
     {
        for(i=0; i < n; i++)
         scanf("%i", (boxes+i));
         if(*(boxes+2)<42)
         {
             int total = (*boxes)*(*(boxes+1))*(*(boxes+2)) ;
            printf("%i\n",total);
         }
         
     }

}
