#include<stdio.h>
#include<stdlib.h>
int main()
{
    int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, i, r;
    for(i=0; i<6000; i++)
    {
        r=1+(rand()%6);
        switch(r)
        {
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case 6:
                f6++;
                break;
        }
    }
    printf("%s\t%s\n", "FACE", "FREQUENCY");
    printf("1\t%d\n", f1);
    printf("2\t%d\n", f2);
    printf("3\t%d\n", f3);
    printf("4\t%d\n", f4);
    printf("5\t%d\n", f5);
    printf("6\t%d\n", f6);
}
