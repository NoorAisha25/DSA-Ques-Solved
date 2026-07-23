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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* current = head;

        while(current != NULL){
               ListNode* nN = current->next;
               current->next = prev;
               prev = current;
               current = nN;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
/*---------------Naive approach by tc - O(n)-------*/
        // vector<int> temp;
        // ListNode* current = head;

        // while (current != NULL) {
        //     temp.push_back(current->val);
        //     current = current->next;
        // }
        // int i = 0;
        // int j = temp.size() - 1;
        // while (i <= j) {
        //     if (temp[i] != temp[j])
        //         return false;
        //     i++;
        //     j--;
        // }
        // return true;
/*----------------2nd approach ------------------*/
       if(head == NULL || head->next == NULL) return head;

       ListNode* slow = head;    
       ListNode* fast = head;
       ListNode* prev = NULL;

       while(fast != NULL && fast->next != NULL)   {
             prev = slow;
             slow = slow->next;
             fast = fast->next->next;
       } 

       ListNode * tail = reverse(slow);

       while(tail != NULL && head != NULL ){

        if(tail->val != head->val) return false;
        tail = tail->next;
        head = head->next;
        }
          return true;
    }
};
