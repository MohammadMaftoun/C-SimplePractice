#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    float a,b,c,delta;
    printf("plz enter a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
          printf("The Answer is:%0.2f",(-c)/(b));
    return;
    }
      delta=b*b-4*a*c;
      if(delta>0)
          printf("x1=%0.2f\tx2=%0.2f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));

      else
        if(delta==0)
                printf("x=%0.2f",(-b)/(2*a));
                getch();
}
