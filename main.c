#include <stdio.h>

int main() 
{

    int n,a=0,b,c=-1,d,i,j,k,l,t1,t2,t3;
    scanf("%d", &n);
  	// The code to print the pattern.
      b=(2*n)-1;
      for (i=0;i<n;i++)
     {
      for (j=0;j<a;j++) 
      {
       t1=n-j;
       printf("%d ",t1);
      }
      for (k=a;k<b;k++) 
      {
       t2=n-a;
       printf("%d ",t2);
      }
      for (l=c;l>-1;l--) 
      {
       t3=n-l;
       printf("%d ",t3);
      }
      printf("\n");
      a++;
      b--;
      c++;
     }
     a--;
     b++;
     c--;
     for (i=1;i<n;i++)
     {
      for (j=0;j<a;j++)
      {
       t1=n-j;
       printf("%d ",t1);
      }
      for (k=a;k<b;k++)
      {
       t2=(n-a)+1;
       printf("%d ",t2);
      }
      for (l=c;l>-1;l--)
      {
       t3=n-l;
       printf("%d ",t3);
        }
      printf("\n");
      a--;
      b++;
      c--;
     }
     
    return 0;
}
      
