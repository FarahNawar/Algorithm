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
    if(status[number]==0)//0 status means Prime.1 status means not prime
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime "<<endl;
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
