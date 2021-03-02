#include<iostream>
using namespace std;
void TowerOfHanoi(int n,string beg,string aux,string End);
int main()
{
    int n;
    cout<<"Enter the number of pegs "<<endl;
    cin>>n;
    TowerOfHanoi(n,"beg","aux","end");

}
void TowerOfHanoi(int n,string beg,string aux,string End)
{
    if(n==1)
    {
        cout<<"move disk "<<n<<" from "<<beg<<" to "<<End<<endl;
        return;
    }
    TowerOfHanoi(n-1,beg,End,aux);
    cout<<"move disk "<<n<<" from "<<beg<<" to "<<End<<endl;
    TowerOfHanoi(n-1,aux,beg,End);
}
