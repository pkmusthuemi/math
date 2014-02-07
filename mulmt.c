#include<stdio.h>
int main()
{
int a[4][4], b[4][4], c[4][4], i, j, k, r1, c1, r2, c2;
printf ("enter 1st matrix\n");
printf("order of the matrix is :");
scanf ("%d %d",&r1, &c1);
for (i=0; i<r1; i++)
for (j=0; j<c1; j++)
scanf ("%d", &a[i][j]);
printf ("enter 2nd matrix\n");
printf ("order of the matrix is :");
scanf ("%d %d", &r2, &c2);
for (i=0; i<r2; i++)
for (j=0; j<c2; j++)
scanf ("%d", &b[i][j]);
if (c1==r2)
{
printf ("prodect of the matrices\n");
for (i=0; i<r1; i++)
{
for (j=0; j<c2; j++)
{
   c[i][j]=0;
   for (k=0; k<r2; k++)
       
          
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
          printf("%d\t",c[i][j]);
	} 
    printf ("\n");

}
}
else
printf ("multiplication is not possible\n");
return (0);
}






