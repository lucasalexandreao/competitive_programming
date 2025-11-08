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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = l1->val + l2->val;
        int carry = sum / 10;
        
        ListNode* head = new ListNode(sum % 10);
        ListNode* current = head;
        
        l1 = l1->next;
        l2 = l2->next;
        
        while (l1 != nullptr || l2 != nullptr) {
            sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        return head;
    }
};

int main() {
  ListNode node11(9);
  ListNode node10(9, &node11);
  ListNode node9(9, &node10);
  ListNode node8(9, &node9);
  ListNode node7(9, &node8);
  ListNode node6(9, &node7);
  ListNode node5(9, &node6);

  ListNode node4(9);
  ListNode node3(9, &node4);
  ListNode node2(9, &node3);
  ListNode node1(9, &node2);

  Solution obj;
  ListNode* current = obj.addTwoNumbers(&node1, &node5);
  
  while (current != nullptr) {
    cout << current->val << endl;
    current = current->next;
  }

  return 0;
}