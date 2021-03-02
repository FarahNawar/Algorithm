#include <iostream>
#include <queue>

using namespace std;

int main(void) {
   priority_queue<int> q;

   q.emplace(3);
   q.emplace(1);
   q.emplace(5);
   q.emplace(2);
   q.emplace(4);

   cout << "Queue contents are" << endl;
   while (!q.empty()) {
      cout << q.top() << endl;
   q.pop();
   }

   return 0;
}
