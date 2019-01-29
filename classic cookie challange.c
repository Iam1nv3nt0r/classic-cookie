#include<stdio.h>
int main()
{
int a[100][100],x,y,e[100],g,r;
g=0;
r=0;
printf("enter the limit of row");
scanf("%d",&x);
printf("enter the limit of  column");
scanf("%d",&y);
for(int i=0;i<x;i++)
{
   for(int j=0;j<y;j++)
   {
     printf("enter the value for %d row %d column",i+1,j+1);
     scanf("%d",&a[i][j]);
   }

}
printf(" your entered matrix is \n");
for(int i=0;i<x;i++)
{
   for(int j=0;j<y;j++)
   {
     printf("%d  ",a[i][j]);
   }
   printf("\n");
}

for(int i=0;i<x;i++)
{
   for(int j=0;j<y;j++)
   {
     if(a[i][j]==1)
     {
       g=g+1;
     }
     else
     {
      e[r]=g;
      r=r+1;
      g=0;
     }
   }
}
if(a[x][y]==1)
     {
       g=g+1;
     }
     else
     {
      e[r]=g;
      r=r+1;
      g=0;
      }
for(int t=0;t<100 ;t++)
{
               if(e[t]==0)
               {
                              continue;
               }
               else
               {
               printf("%d,",e[t]);
               }
}

return 0;
}
