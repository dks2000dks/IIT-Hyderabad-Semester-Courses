#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double **createMat(int m,int n);
void readMat(int m,int n,double **p);
void print(int m,int n,double **p);

int main()
{

int m,n;
double **a;

printf("Enter the size of the matrix m n \n");
scanf("%d %d", &m,&n);

printf("Enter the values of the matrix\n");
a = createMat(m,n);
readMat(m,n,a);
print(m,n,a);

return 0;
}

double **createMat(int m,int n)
{
int i;
double **a;

a = (double **)malloc(m * sizeof(*a));
for (i=0; i<m; i++)
	a[i] = (double *)malloc(n * sizeof( *a[i]));
	
return a;
}

void readMat (int m,int n,double **p)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%lf",&p[i][j]);

}
}
}

void print (int m,int n,double **p)
{
int i,j;
double k;

k = (p[0][0]) * (p[1][1]) - (p[0][1]) * (p[1][0]);

for(j=n-1;j>=0;j--)
{
for(i=m-1;i>=0;i--)
printf("%f ", pow(-1,i+j)*p[i][j]/k);
printf("\n");
}
}