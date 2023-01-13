#include<stdio.h>
#include<stdlib.h>
#include"MATH.h"
#include"ARRAY.h"
#include"MATRIX.h"
#define NL printf("\n");

int main()
{
 // printf("Enter number of values:");
 // int n;scanf("%d",&n);
int m=3,n=3;
int *a,*b,*c;a=calloc(m*n,sizeof(int));
b=calloc(m*n,sizeof(int));c=calloc(m*n,sizeof(int));
acpt_mat( a,m,n);NL;acpt_mat(b, m, n);
//disp_mat(a, m, n);
NL;
multiply_mat(a,b,c,m,n);
disp_mat(c, m, n);
  
  return 0;
}