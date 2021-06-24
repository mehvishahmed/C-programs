#include<stdio.h>
int main()
{
    int secretNum = 5;
    int guess;
    int count = 0;
    int limit = 3;
    int outOfGuesses = 0;
    while(guess != secretNum && outOfGuesses == 0)
    {
        if(count < limit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            count++;
        }
        else
        {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1)
    {
        printf("Out Of guesses!\nThe Secret Number is 5.\n");
    }
    else
    {
        printf("You Win!");
    }
    return 0;
}
