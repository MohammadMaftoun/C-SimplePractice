#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int n,count;
    float *f,min,max;
    double sum=0;
    printf("How many numbers?");
    scanf("%d",&n);
    if(!(float*)malloc(n*sizeof(float)))
    {
        printf("not enough memory");
        exit(1);
    }
    for(count=0;count<n;count++)
    {
        printf("enter number[%d]:",count+1);
        scanf("%f",f+count);
        if(count==0)
            min=max=*f;
        sum+=*(f+count);
        if(*(f+count)>max)
            max=*(f+count);
        if(*(f+count)<min)
            min=*(f+count);
    }
    free(f);
    printf("\nMin value is %g \nMax value is %g \nAverage is %g",min,max,sum/n);
    getch();
}
