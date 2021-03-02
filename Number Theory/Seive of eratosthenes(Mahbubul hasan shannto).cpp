#include<iostream>
#include<cmath>
using namespace std;
int mark[1000000];
int prime[1000000];
int nPrime=0;
void seive(int n);
int main()
{
   int number;
   cin>>number;
   seive(number);
   cout<<"Number of prime below "<<number<<" :"<<endl;
 for(int i=0;i<nPrime;i++)
    cout<<prime[i]<<" ";
}
void seive(int n)
{
    mark[1]=1;
    for(int i=4;i<=n;i+=2)
        mark[i]=1;
    prime[nPrime++]=2;
    for(int i=3;i<=n;i+=2)
    {
         if(mark[i]==0)
         {
             cout<<i<<endl;
             prime[nPrime++]=i;
             if(i<=(sqrt(n)+2))
             {
                  for(int j=i*i;j<=n;j+=2*i)
                      mark[j]=1;
             }
         }
    }

}
