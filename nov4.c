#include<stdio.h>//97 122
int main()
{
	int t,n,a,i,k,l,h;char s1[8]={"aaababbb"};char s2[12]={"ababbaababba"};
	scanf("%d",&t);
	while(t--)
	{  k=0;h=0;l=0;
	 scanf("%d%d",&n,&a);
	 for(i=0;i<n;i++)
	 { 
	  if(a==1)
	  { if(i==0){printf("%d ",n);}
        printf("a");
	  }
	  else
	  {
	    if(a==2)
	    { 
	      if(n==1)
	      {
	        printf("1 a");break;
	      }
	      else
	      {
	        if(n==2)
	        {
	          printf("1 ab");break;
	        }
	        else
	        {
	          if(n==3)
	          {
	            printf("2 aab");break;
	          }
	          else
	          {
	            if(n==4)
	            {
	              printf("2 aabb");break;
	            }
	            else
	            {
	              if(n>4&&n<9)
	              {
                    if(i==0){printf("3 ");}
                    printf("%c",s1[i]);
	              }
	              else
	              {  if(i==0){printf("4 ");}
                     if(i<3)
                     {
                       printf("a");
                     }
                     else
                     {
                       printf("%c",s2[l]);l++;
                           if(l==13)
                           {
                           l=0;
                           }
                     }
	              }
	            }
	          }
	        }
	      }
          

	    }
	    else
	    {   if(i==0){printf("1 ");}
	           if(i%a==0){h=0;}
	           printf("%c",'a'+h);h++;    
	    }
	  }
	 }
	 printf("\n");
	}
	return(0);
}
