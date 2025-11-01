#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    void deleteNode(ListNode* node) {
      node->val = node->next->val;
      node->next = node->next->next;
    }
};

int main() {
  ListNode node9(9);

  ListNode node1(1);
  node1.next = &node9;

  ListNode node5(5);
  node5.next = &node1;

  ListNode node4(4);
  node4.next = &node5;

  Solution obj;
  obj.deleteNode(&node5);
  
  ListNode* current = &node4;

  while (current != nullptr) {
    cout << current->val << endl;
    current = current->next;
  }

  return 0;
}