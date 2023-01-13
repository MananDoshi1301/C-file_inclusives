/* add(float x,float y),
subtract(float x,float y),
multiply(float x,float y),
divide(float x,float y),
fact(int n),
combination(float n,float r),
permutation(float n,float r),
is_prime(int n),
total_prime(int n),
prime_array(int *a,int n),
int_cmp(int a,int b) */

float add(float x,float y)
{
  return x+y;
}

float subtract(float x,float y)
{
  return x-y;
}

float multiply(float x,float y)
{
  return x*y*1.0;
}

float divide(int x,int y)
{
 float c=(float)x/y;
 return c;
}

int fact(int n)
{
  int fact=1,i;
  for(i=1;i<=n;i++)
  fact=fact*i;

  return fact;
}

float combination(int n,int r)
{
  float c=(float)fact(n)/(fact(r)*fact(n-r));
  return c;
}

float permutation(int n,int r)
{
  float c=(float)fact(n)/fact(r);
  return c;
}

int is_prime(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    c++;
  }

  if(c==2)
  return 1;

  else
  return 0;
}

int total_prime(int n)//Return total prime till n
{
  int i,j,c,t=0;

  for(j=2;j<n;j++)
  { c=0;
    
    for(i=1;i<=j;i++)
    {
      if(j%i==0)
      c++;
    }

    if(c==2)
    t++;
  }
 return t;
}

void prime_array(int *a, int n) //Return prime till n
{
  int i,j,c,k=0;

  for(j=2;j<n;j++)
  { c=0;
    {
      for(i=1;i<=j;i++)
      {
        if(j%i==0)
        c++;
      }

      if(c==2)
      {
        a[k]=j;
        k++;
      }
    }
  }
}

int int_cmp(int a,int b)
{
  if(a>b)
  {
    return 1;
  }

  else if(b>a)
  {
    return -1;
  }

  else
  return 0;
}

void run_calc()
{ 
  char c[1],;
  do
  {
    printf("Enter symbol:");
  }

}
