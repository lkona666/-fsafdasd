/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    int n;
    setlocale(LC_ALL,"RU");
    printf("Размер матрицы: ");
    scanf("%d",&n);
    double matr[n][n];
    int i,j, N;
    N = pow(n, 2);
    printf("Введите %d символов для массива:\n", N);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&matr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]: = %.2lf ",i,j,matr[i][j]);
        }
        printf("\n");
    }
    double glav=0.0;
    double bock=0.0;
    for(i=0;i<n;i++){
        glav+=matr[i][i];
        bock+=matr[i][n-1-i];
    }
    printf("Главная: %.2lf\n",glav);
    printf("Побочная: %.2lf",bock);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define n 2
int main()
{
    setlocale(LC_ALL,"RU");
    int matrix[n][n];
    printf("Матрица 2 на 2 :\n");
    int i,j,k;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            
            scanf("%d",&matrix[i][j]);
            for (k=0;k<n;k++){
                matrix[i][j]+=matrix[i][k]*matrix[j][k];
                
    }   printf("matrix[%d][%d]:\n ",i,j);}     }
    
    
    return 0;
}
