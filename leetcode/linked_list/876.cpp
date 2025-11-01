#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      int c = 1;
      ListNode* current = head;

      while (current->next != nullptr) {
        current = current->next;
        c++;
      }

      current = head;
      for (int i = 0; i < c/2; i++) {
        current = current->next;
      }

      return current;
    }
};

/* 
### Other valid solution

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      while(fast!=nullptr && fast->next!=nullptr){
          slow=slow->next;
          fast=fast->next->next;
      }
      return slow;
    }
};
*/

int main() {
  ListNode node6(6);
  ListNode node5(5, &node6);
  ListNode node4(4, &node5);
  ListNode node3(3, &node4);
  ListNode node2(2, &node3);
  ListNode node1(1, &node2);

  Solution obj;
  ListNode* current = obj.middleNode(&node1);
  
  while (current != nullptr) {
    cout << current->val << endl;
    current = current->next;
  }

  return 0;
}