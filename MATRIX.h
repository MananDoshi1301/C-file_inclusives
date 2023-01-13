/*acpt_mat(int *a,int m,int n),
disp_mat(int *a , int m,int n),
transpose(int *a,int m,int n),
add_mat(int *a,int *b,int *c,int m,int n),
subtract_mat(int *a,int *b,int *c,int m,int n),
multiply_mat(int *a,int *b,int *c,int m,int n),*/

void acpt_mat(int *a,int m,int n)
{
  int i,j;

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Element at (%d,%d):",i,j);
      scanf("%d",(a+i*n+j));
    }
  }
}

void disp_mat(int *a , int m,int n)
{
  int i,j;

    for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t ",*(a+i*n+j));
    }
    printf("\n");
  }
}

void transpose(int *a,int m,int n)
{ 
  int t,i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(i<j)
      {t=*(a+i*n+j);
      *(a+i*n+j)=*(a+j*n+i);
      *(a+j*n+i)=t;}
    }
  }
  
}
void add_mat(int *a,int *b,int *c,int m,int n)
{ 
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      *(c+i*n+j)=*(a+i*n+j)+*(b+i*n+j);
    }
  }
}

void subtract_mat(int *a,int *b,int *c,int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      *(c+i*n+j)=*(a+i*n+j) - *(b+i*n+j);
    }
  }
}

void multiply_mat(int *a,int *b,int *c,int m,int n)
{
  int i,j,k;
  for(i=0;i<m;i++)
  { 
    for(j=0;j<n;j++)
    { 
      for(k=0;k<m;k++)
      *(c+i*n+j) = *(c+i*n+j) + (*(a+i*n+k))*(*(b+k*n+j));
    }
  }
}

