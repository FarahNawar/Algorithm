#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int fact=1;
    for(int i=1; i<=4; i++)
{
    fact=((fact%7)*(i%7))%7;
}
printf("%d\n",fact);
}
