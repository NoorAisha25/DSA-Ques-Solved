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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL || head->next == NULL) return NULL;
        // int cnt = 0;
        // ListNode* temp = head;

        // while(temp != NULL){
        //     cnt++;
        //     temp = temp->next;
        // }

        // int pos = cnt - n;

        
        // while( pos == 0){
        //     ListNode* delnode = head;
        //     head = head->next;
        //     delete delnode;
        //     return head;
        // }

        // temp = head ;

        // for(int i=1 ; i<pos ; i++){
        //     temp = temp->next;
        // }

        // ListNode* delnode = temp->next;
        // temp->next = temp->next->next;
        // delete delnode;

        ListNode* fast = head;
        for(int i=0 ; i<n ; i++) fast = fast->next;

        ListNode* slow = head;

        if(fast == NULL) {
            // ListNode* temp = head;
            // head = head->next;
            // delete temp;
            // return head;
            return head->next;
        }

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* deln = slow->next;
        slow->next = slow->next->next;
        delete deln;
        return head;
    }
};
