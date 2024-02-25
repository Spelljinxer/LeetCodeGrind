


/*
* Definition for singly-linked list
*/
struct ListNode {
  ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* offset = head;
      ListNode* curr = head;
      ListNode* prev = new ListNode(-1);

      prev -> next = curr;
      for(int i = 1; i < n; ++i)
      {
        offset = offset -> next;
      }

      while(offset -> next != nullptr)
      {
        offset = offset -> next;
        prev = curr;
        curr = curr -> next;
      }

      prev -> next = curr -> next;
      if(curr == head)
      {
        return head -> next;
      }

      delete curr;
      return head;
    }
};