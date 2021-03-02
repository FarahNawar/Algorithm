#include<stdio.h>
void quicksort(int array[50],int first,int last);
int main()
{
    int i,size,array[50];
    printf("enter the number of elements:\t");
    scanf("%d",&size);
    printf("\nenter the elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    quicksort(array,0,size-1);
    printf("the sorted array is:\n");
    for(i=0;i<size;i++)
        printf(" %d ",array[i]);
}
void quicksort(int array[50],int first,int last)
{
    int temp,pivot,i,j;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(array[i]<=array[pivot]&&i<last)
                i++;
            while(array[j]>array[pivot])
                j--;
            if(i<j)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;
        quicksort(array,first,j-1);
        quicksort(array,j+1,last);
}
}
