#include<iostream>
#include<cmath>
using namespace std;
int status[10000001];
void seive(int n);
int main()
{
    int number;
    cin>>number;
    seive(number);
    int Count=0;
   cout<<"\nAll prime numbers below "<<number<<" is:"<<endl;
   for(int i=1;i<number ;i++)
   {
       if(status[i]==0)
       {
           Count++;
            cout<<i<<" ";
       }
   }
    cout<<"\n\nnumber of prime below "<<number<<" is  : "<<Count<<endl;
}
void seive(int n)
{
    status[1]=1;//1 is not a Prime number
    for(int i=4;i<=n;i+=2) status[i]=1;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
                status[j]=1;
        }
    }

}
