#include <stdio.h>
int main()
{
int n;
int i;
int j;
int isIdentity=1;
scanf("%d",&n);
int matrix[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&matrix[i][j]);
if(i==j&&matrix[i][j]!=1)
isIdentity=0;
if(i!=j&&matrix[i][j]!=0)
isIdentity=0;
}
}
if(isIdentity)
printf("Identity Matrix");
else
printf("Not an Identity Matrix");
return 0;
}