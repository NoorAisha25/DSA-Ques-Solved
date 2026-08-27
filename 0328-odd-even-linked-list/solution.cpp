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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        // vector<int>arr;
        // ListNode* odd =head;
        
        // while(odd != NULL && odd->next != NULL){
        //     arr.push_back(odd->val);
        //     odd = odd->next->next;
        // }
        // if(odd != NULL) arr.push_back(odd->val);

        // ListNode* even = head->next;
        // while(even != NULL && even->next != NULL){
        //     arr.push_back(even->val);
        //     even = even->next->next;
        // }
        // if(even != NULL) arr.push_back(even->val);
        
        // ListNode* temp = head;
        // int i = 0;
        // while(i<arr.size()){
        //     temp->val = arr[i];
        //     i++;
        //     temp = temp->next;
        // }

        ListNode* odd = head;
        ListNode* even = head -> next ;
        ListNode* evenhead = even;

        while( even != NULL && even -> next != NULL){
            odd->next = odd ->next ->next;
            odd = odd->next;
            even ->next = even ->next ->next;
            even = even -> next;
        }

        odd ->next = evenhead;
        return head;
    }
};
