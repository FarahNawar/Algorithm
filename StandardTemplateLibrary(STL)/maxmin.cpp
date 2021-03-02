#include<bits/stdc++.h>
using namespace std;
bool compare(int i, int j)
 { return i<j; }
int main () {
  int myints[] = {3,7,2,5,6,4,9};
  cout << "The smallest element is " << *min_element(myints+4,myints+7) <<endl;
  cout << "The largest element is "  << *max_element(myints,myints+7) <<endl;
}
