/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      auto dummy = new ListNode(0);
      auto pre = dummy;

      ListNode* curr = nullptr;
      dummy -> next = head;
      for(int i = 0; i < left - 1; i++)
      {
        pre = pre -> next;
      }
      curr = pre -> next;
      auto tail = curr;
      ListNode* pre_tmp = nullptr;
      for(int i = 0; i <= right - left; i++)
      {
        auto tmp = curr -> next;
        curr -> next = pre_tmp;
        pre_tmp = curr;
        curr = tmp;
      }

      pre -> next -> next = curr;
      pre -> next = pre_tmp;
      auto res = dummy -> next;
      delete dummy;
      return res;

      
    }
};