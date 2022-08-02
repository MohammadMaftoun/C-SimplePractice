#include <stdio.h>
int isposible(int a,int b,int c);

void main()
{
    int x,y,z;
    printf("enter x,y & z:",x,y,z);
    scanf("%d%d%d",&x,&y,&z);
    if(isposible(x,y,z))
        printf("can be a triangle");
    else
    printf("can not be a triangle");
}
int isposible(int a,int b,int c){
    if(a+b>c&&a+c>b&&b+c>a)

    return (1);
    else
        return 0;
}
