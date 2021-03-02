#include<bits/stdc++.h>
using namespace std;
/*
input:
aaaaan
aan
*/
bool IsSub(string sub,string Main)
{
    int m=Main.size();
    int s=sub.size();
    for(int i=0;i<m;i++)
    {
        int j=0;
        while(sub[j]==Main[i+j]&&j<s)
        {
            j++;
        }
        if(j==s)
            return true;
    }
    return false;

}
int main()
{
    cout<<"Enter main string : "<<endl;
    string Main;
    cin>>Main;
    cout<<"Enter substring : "<<endl;
    string sub;
    cin>>sub;
    if(IsSub(sub,Main)==true)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
