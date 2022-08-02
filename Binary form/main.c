#include <stdio.h>
#include <conio.h>

void main()
{
    int i=15,binary[16]={0};
    unsigned int num;
    printf("Enter a number plz: \n");
    scanf("%u",&num);
    while(num!=0)
    {
        binary[i--]=num%2;
        num/=2;
    }
    printf("\nThe binary form is");
    for(i=0;i<16;i++)
    printf("%d",binary[i]);
    getch();
}
