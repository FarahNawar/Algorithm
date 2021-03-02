#include<bits/stdc++.h>
using namespace std;
void Substring(string s)
{

    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            for(int k=i;k<=j;k++)
            cout<<s[k];
            cout<<endl;
        }


    }
}
int main()
{
    string s;
    cin>>s;
    cout<<"All the substring of "<<s<<" are :"<<endl;
    Substring(s);
}
