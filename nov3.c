#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,p,i,j,k,e;
	char s[100001],c[100005];
	scanf("%d",&t);
	while(t--)
	{  k=0;e=0;
	  scanf("%d%d",&n,&p);if(p%2==0){e=2;}else{e=1;}
	if(p==1||p==2)
	  {
	   printf("impossible\n");
	  }
       else
	   {
      for(i=0;i<n;i++)
      {       
       if(i<p)
       { 
          if(i==0||i==p-1)
          s[i]='a';
          else
          s[i]='b';      
       }
       else
       {
        s[i]=s[i-p];
       }
      }  
       /* for(i=0;i<n;i++)
        {
          c[i]=s[n-1-i];
        }    
        k=strcmp(s,c);
        if(k==0)
        {*/
          for(i=0;i<n;i++)
          {
           printf("%c",s[i]);
          }
          printf("\n");
      /*  }
      else
       { 
        printf("impossible\n");
       }*/
     }
	}return(0);
}
