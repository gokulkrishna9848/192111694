#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],size,i,sum=0;
	printf("Enter array size\n");
	scanf("%d",&size);
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++){
	sum = sum +arr[i];
    return sum;
}
}
int arr[]={12,45,76,67};
 int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;
}