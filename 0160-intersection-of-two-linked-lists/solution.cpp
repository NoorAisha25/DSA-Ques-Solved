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
     
    ListNode* collisionpoint( ListNode* longer, ListNode* shorter, int d){

        while(d--){
            longer = longer->next;
        }

        while(longer != shorter){
            longer = longer->next;
            shorter = shorter->next;
        }
        return longer;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
       if(headA == NULL || headB == NULL) return NULL;
       ListNode* tempA = headA;
       ListNode* tempB = headB;
       int cnta = 0 ; int cntb = 0;

       while(tempA != NULL){
        cnta++;
        tempA = tempA->next;
       }
       while(tempB != NULL){
        cntb++;
        tempB = tempB->next;
       }

       if(cnta > cntb) return collisionpoint( headA, headB , cnta - cntb);
       else return collisionpoint(headB , headA, cntb - cnta);
    }
};
