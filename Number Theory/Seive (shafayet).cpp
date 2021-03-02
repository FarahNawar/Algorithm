#include<iostream>
#include<cmath>
using namespace std;
int status[1100002];
void siv(int n);
int main()
{
    int number;
    cin>>number;
    siv(number);
    if(status[number]==0)//0 status means Prime.1 status means not prime
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime "<<endl;
}
void siv(int N)
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}
