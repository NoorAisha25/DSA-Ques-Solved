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
class Solution {
public:
   
    bool isPalindrome(ListNode* head) {
       if(head == NULL || head -> next == NULL) return true;

       ListNode* slow = head;
       ListNode* fast = head;
       ListNode* prev = NULL;
       while(fast && fast -> next){
           prev = slow;
           slow = slow -> next;
           fast = fast -> next -> next;
       }
       
       prev->next = NULL;
       ListNode* back = NULL;
       while(slow){
          ListNode* n = slow -> next;
          slow->next = back;
          back = slow ;
          slow = n;
       }

       prev = head;
       while(prev && back){
          if(prev->val != back -> val) return false;
          prev = prev -> next;
          back = back -> next;
       }
       return true;
    }
};
