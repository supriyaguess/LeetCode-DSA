#include <iostream>
#include <vector>
#include <list>
using namespace std;

class LinkedList {
     list<int> ll;

     public:

     void push(int val) { //O(1)
           ll.push_front(val);
     }

     void pop() { //O(1)
       ll.pop_front();

     }
     int top() { // O(1)
        return ll.front();
     }

     bool empty() {
        return ll.size() == 0;
     }
};

int main() {
      LinkedList s;
    
      s.push(10);
      s.push(20);
      s.push(30);

      while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
      }
      cout << endl; // 30 20 10
    return 0;
}