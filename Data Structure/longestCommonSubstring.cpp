#include<iostream>
#include<string>
#include<vector>

using namespace std;

int longestCommonSubstring(string str1, string str2)
{
    int len1=str1.length();
    int len2=str2.length();

    //matrix to store results of subproblems
    int dp[len1+1][len2+1];

    int i,j;

    //initialization
    //length of common substring is zero if either one of the substring is empty
    for(i=0;i<=len1;i++)
        dp[i][0]=0;

    for(j=1;j<=len2;j++)
        dp[0][j]=0;

    int mx=0;

    for(i=1;i<=len1;i++)
    {
        for(j=0;j<=len2;j++)
        {
           //if characters match
           if(str1[i-1]==str2[j-1])
           {
               dp[i][j]=dp[i-1][j-1]+1;
               mx=max(dp[i][j],mx);
           }

           else
               dp[i][j]=0;
        }
    }

    return mx;
}

int main()
{
    string str1, str2;

    cout<<"Enter string 1 - ";
    getline(cin,str1);

    cout<<"Enter string 2 - ";
    getline(cin,str2);

    cout<<"Length of the longest common substring is ";
    cout<<longestCommonSubstring(str1, str2);

    cout<<endl;
    return 0;
}
