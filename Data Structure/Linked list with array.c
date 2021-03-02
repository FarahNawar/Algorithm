#include<stdio.h>
int main()
{
    int list[6],link[6];
    int start,ptr;
    list[1]=10;list[2]=11;list[3]=12;list[4]=13;list[5]=14;
    link[5]=4;link[4]=3;link[3]=2;link[2]=1;link[1]=0;
    start=5;
    ptr=start;
    while(ptr!=0)-
    {
        printf("%d\t",list[ptr]);
        ptr=link[ptr];
    }
}
