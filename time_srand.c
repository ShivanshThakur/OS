#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    srand(time(NULL));
    for(i=1; i<=20; i++)
    {
        printf("%d ", 1+(rand()%6));
        if(i%5==0)
            printf("\n");
    }
}
