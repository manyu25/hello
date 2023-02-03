#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the order of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %d element of array",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of elements of this array is=%d",sum);
}