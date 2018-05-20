#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,p1,i,p2,count1,count2,prev;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{ p1=0;p2=0;count1=0;count2=0;prev=0;
	 scanf("%s",s);
       int k;k=strlen(s);
     for(i=0;i<k;i++)
     {
       if(s[i]=='A')
       {
         if(prev==1||prev==0)
         {
          count1++;prev=1;p1=count1;
         }
         else
         {
          count1++;count2=p2;prev=1;p1=count1;
         }
       }
       if(s[i]=='B')
       {
        if(prev==2||prev==0)
        {
          count2++;prev=2;p2=count2;
        }
        else
        {
          count2++;count1=p1;prev=2;p2=count2;
        }
       }
       if(s[i]=='.')
       {
         if(prev==0){}
         else{
          if(prev==1)
          {
           count1++;
          }
          else
          {
           if(prev==2)
           {
            count2++;
           }
          }
         }
       }
     }

     printf("%d %d\n",p1,p2);

	}
	return(0);
}
