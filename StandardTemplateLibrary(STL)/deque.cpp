#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<int>lucky;
void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}
void alllucky()
{



}
int main()
{
   lucky.push_back(1);
     lucky.push_back(2);
      lucky.push_back(3);
      lucky.push_front(100);
      lucky.push_back(500);
showdq(lucky);
cout<<endl<<lucky.front()<<endl;
cout<<endl<<lucky.back()<<endl;
lucky.pop_front();
showdq(lucky);
lucky.pop_back();
showdq(lucky);
}

