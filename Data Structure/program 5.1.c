#include<stdio.h>
int list[40];
int link[40];
int start;
int main()
{
    int ptr;
    list[0]=22;list[2]=5;list[3]=19;list[5]=87;list[7]=29;list[8]=79;
    list[9]=33;list[11]=2;list[13]=50;list[14]=8;list[16]=55;list[18]=99;
    link[0]=3;link[2]=13;link[3]=2;link[5]=8;link[7]=14;link[8]=9;
    link[9]=18;link[11]=16;link[13]=5;link[14]=-1;link[16]=0;link[18]=7;
    start=11;
    ptr=start;
    printf("initial list:        %d \n",list[ptr]);
   /* while(ptr!=-1)
    {
        printf("%d\t",list[ptr]);
        ptr=link[ptr];
    }*/
}
