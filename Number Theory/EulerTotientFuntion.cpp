#include<bits/stdc++.h>
using namespace std;


int phi[1000006],mark[1000006];
void sp(int n)
{
    int i,j;
    for(i =1;i<=n;i++) phi[i]=i;
    phi[1] = 1;mark[1]=1;
    for(i=2;i<=n;i+=2)
    {
        if(i!=2) mark[i] = 1;
        phi[i] = phi[i]/2;
    }
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            phi[i] = phi[i]-1;
            for(j=2*i;j<=n;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    sp(n);
    printf("%d", phi[n]);
}
