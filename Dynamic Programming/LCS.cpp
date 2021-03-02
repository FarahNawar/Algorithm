#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int lcs(char *String1,char *String2,int length1,int length2);
int main()
{
    char String1[]="AAUB";
    char String2[]="AHB";
    int length1=strlen(String1);
    int length2=strlen(String2);
    cout<<" the length of longest common subsequence "<<lcs(String1,String2,length1,length2)<<endl;
}
int lcs(char *String1,char *String2,int length1,int length2)
{
    if(length1==0||length2==0)
        return 0;
    if(String1[length1-1]==String2[length2-1])
        return 1+lcs(String1,String2,length1-1,length2-1);
    else
        return max(lcs(String1,String2,length1,length2-1),lcs(String1,String2,length1-1,length2));
}
