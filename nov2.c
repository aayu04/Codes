#include<stdio.h>
long long int a[1000005];
int main()
{
	int t,n,r,i;int c1,c2,k;
	scanf("%d",&t);
	while(t--)
	{  c1=0;c2=0;k=0;
	  scanf("%d%d",&n,&r);
	  for(i=0;i<n;i++)
	  {
	    scanf("%lli",&a[i]);
	  }
	  for(i=0;i<n;i++)
	  {
        if(i==0)
        {
          if(a[i]>r)
          {
            c2=a[i];
          }
          else
          {
           c1=a[i];
          }
	    }
	    else
	    {
	      if(a[i]>r)
	      if(a[i]<c2||c2==0)
	      {
	        k=0;c2=a[i];
	      }
	      else
	      {
	       k=1;break;
	      }
	      if(a[i]<r)
	      if(a[i]>c1)
	      {
	        k=0;c1=a[i];
	      }
	      else
	      {
	       k=1;break;
	      }
	    }
	   }
	  if(k==0){printf("YES\n");}
	  else{printf("NO\n");}
    }
    return(0);
  }

