#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n;
	printf("Input Row &Coloumn of matrix");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of matrix.\n");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	b[i][j]=a[i][j];
	printf("Transpose of the matrix is :\n");
	for(i=0;i<n;i++)
		{
	for(j=0;j<m;j++)
	printf("%3d",b[i][j]);
	printf("\n");
}
    return 0;
}