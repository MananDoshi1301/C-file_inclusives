/* acpt_arr(int *a,int n),
disp_arr(int *a,int n),
sort_ascend(int *a,int n),
sort_descend(int *a,int n),
rotate_anclk(int *a,int n,int k),
rotate_clk(int *a,int n,int k),
largest(int *a,int n),
smallest(int *a,int n),
rev_arr(int *a,int n),
revcpy_arr(int *b,int *a,int n),
cpy_arr(int *b,int *a,int n) */

void acpt_arr(int *a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter value %d:",i+1);
    scanf("%d",&a[i]);
  }
}

void disp_arr(int *a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Value %d:%d\n",i+1,a[i]);
  }
}

void sort_ascend(int *a,int n)
{
  int i,j,t;
  for(i=n-1;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
}

void sort_descend(int *a, int n)
{
  int i,j,t;
  for(i=n-1;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
      if(a[j]<a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
}

void rotate_anclk(int *a, int n, int k)
{
  int t, p, i, j;
  for(j=0;j<k;j++)
  {
    t=a[0];
    a[0]=a[n-1];
    p=t;
    for(i=1;i<n;i++)
    {
      t=a[i];
      a[i]=p;
      p=t;
    }
  }
}

void rotate_clk(int *a, int n,int k)
{
  int i,j,p;

  for(j=0;j<k;j++)
  {
    p=a[0];
    for(i=0;i<n;i++)
    {
      if(i==n-1)
      {
        a[n-1]=p;
      }

      else
      {
        a[i]=a[i+1];
      }
    }
  }

}

int largest(int *a, int n)
{
  int i,l = *(a+0);
  for(i=1;i<n;i++)
  {
    if(l < *(a+i))
    l = *(a+i);
  }

  return l;
}

int smallest(int *a, int n)
{
  int i,s=a[0];

  for(i=1;i<n;i++)
  {
    if(s > a[i])
    s=a[i];
  }

  return s;
}

void rev_arr( int *a, int n)//Reverse the given array
{
  int t;int i;

  for(i=0;i<n/2;i++)
  { 
    t=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=t;
  }
}

void revcpy_arr(int *b,int *a, int n)//Copy reverse of array of a into b
{
  int i;
  for(i=0;i<n;i++)
  {
    b[n-i-1]=a[i];
  }
}

void cpy_arr(int *b, int *a,int n)//copy arr a to b
{
  int i;
  for(i=0;i<n;i++)
  {
    b[i]=a[i];
  }
}