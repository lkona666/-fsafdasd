#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"RU");
    double a,b,c; 
    double x1;
    double x2;
    double d;
    while(1){
        printf("\nВведите переменную a: ");
        scanf("%lf",&a);
        printf("\nВведите переменную b: ");
        scanf("%lf",&b);
        printf("\nВведите переменную c: ");
        scanf("%lf",&c);
        d=pow(b,2)-4*a*c;
        if (d<0){
         printf("Корней нету\n");
        } 
        if(d==0){
            x1=(-b)/(2*a);
            printf("Только один корень: x=%lf",x1);
        }
        if(d>0){
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("Первый корень = %lf",x1);
            printf("\nВторой корень =%lf",x2);
        }   
    }
    return 0;
   
    
}
