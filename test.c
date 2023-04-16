#include <stdio.h>
#include <stdlib.h>

//void test(int *square, int *retagle)
//{
//    int dai = 20;
//    int rong = 10;
//    *square = dai * dai;
//    *retagle =  dai* rong;
//}

int  sum(int *arr , int length)
{
    int i = 0;
    int sum1 = 0;
    for(i=0;i<length;i++)
    {
        sum1 += arr[i];
    }
    return sum1;
}

void copy(int *arr, int *arr1, int n)
{
    int i = 0;
    int j= 0;
    for(i=0;i<n;i++)
    {
        arr1[j] = arr[i];
        j++;
    }
}

void test(int *arr, int length, int max)
{
    int i =0;
    for(i=0;i<length;i++)
    {
        if(max < arr[i])
        {
            arr[i] = 0;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortIncrease(int *arr, int n)
{
    int i= 0;
    int j = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr+i,arr+j);
            }
        }
    }
}

void input(int *arr, int length)
{
    int i =0;
    for(i=0;i<length;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",arr+i);
    }
}

void output(int *a, int length)
{
    int i = 0;
    for(i=0;i<length;i++)
    {
        printf("%d\n",(a+i));
    }
}

void sumarr(int *arr, int *sum1 ,int n)
{
    int i =0 ;
    for(i=0;i<n;i++)
    {
        *sum1 += *(arr+i);
    }
}

int main() {
//    int i = 0;
//    int length = 10;
//    int arr[] = {1,2,10,3,8,12,4,5};
//    int *ptr =  NULL;
//    
//    ptr = arr;
////    test(arr,length,3);
////    sortIncrease(arr,sizeof(arr)/4);
////    for(i=0;i<sizeof(arr)/4;i++)
////    {
////        printf("%d\n",arr[i]);
////    }
//    printf("%d",*(ptr+1));
    int n = 0;
    int sum = 0;
    int arr[32]={0};
    printf("nhap n : \n");
    scanf("%d",&n);
    input(arr,n);
    printf("arr is:");
    output(arr,n);
    sumarr(arr,&sum,n);
    printf("%d", sum);
	return 0;
}
