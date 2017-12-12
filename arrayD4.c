/* c program to read and print multi dimensional array */
#include<stdio.h>
void main()
{
 int a[3][3][3],i,j,k;
 for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
{
 for(k=0;k<3;k++)
 {
  scanf("%d",&a[i][j][k]);
}
}
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
{
 for(k=0;k<3;k++)
 {  
 printf("%d\t",a[i][j][k]);
}
printf("\n");
}
printf("\n");
}
}
