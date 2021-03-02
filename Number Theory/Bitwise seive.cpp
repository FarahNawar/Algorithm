#include<iostream>
#include<math.h>
using namespace std;
int n=2;
int status[1000000000/32];
void seive();
int check(int num,int pos){return (num&(1<<pos));}
int Set(int num,int pos){return num=num|(1<<pos);}
int main()
{
    cout<<"Prime numbers below "<<n<<" is : "<<endl;
    seive();
}
void seive()
{
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(check(status[i/32],i%32)==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
                status[j/32]=Set(status[j/32],j%32);
        }
    }
//    cout<<2<<" ";
//    for(int i=3;i<=n;i+=2)
//    {
//        if(check(status[i/32],i%32)==0)
//            cout<<i<<" ";
//    }
     if(check(status[n/32],n%32)==0&&(n%2!=0))
     cout<<"Prime"<<" ";
}
