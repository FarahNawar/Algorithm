#include<stdio.h>
void qsort(int arr[50],int first,int last);
int main()
{
    int  arr[50];
    int i,size;
    printf("enter the total number of elements:\n");
    scanf("%d",&size);
    printf("enter %d elements:\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    qsort(arr,0,size-1);
    printf("the quicksorted elements are:\n");
    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
    return 0;
}
void qsort(int arr[50],int first,int last)
{
    int i,j,pivot,tmp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<last)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j)
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        tmp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=tmp;
        qsort(arr,first,j-1);
        qsort(arr,j+1,last);
    }
}
