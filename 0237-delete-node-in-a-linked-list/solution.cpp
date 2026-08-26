/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // applicable when head access is given
        // if(head == NULL) return head;
        // if(head -> data == 1){
        //     Node* temp = head;
        //     head = head-> next;
        //     delete temp;
        // }
        // Node* temp = head;
        // Node* prev = NULL;
        // while(temp != NULL){
        //     if( temp->data == node){
        //         prev-> next = prev -> next -> next;
        //         delete temp;
        //         break;
        //     }
        //     prev = temp;
        //     temp = temp -> next;

        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};
