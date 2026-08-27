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
    ListNode* collision(ListNode* Longer , ListNode* Shorter , int d){
        while(d--){
            Longer = Longer->next;
        }

        while(Longer != Shorter){
            Longer = Longer->next;
            Shorter = Shorter -> next;
        }

        return Longer;
    }
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
       if(A == NULL && B == NULL) return NULL;

       ListNode* ta = A;
       ListNode* tb = B;
       int a = 0;
       int b = 0;

       while(ta != NULL){
            a++;
            ta = ta -> next;
       }

       while(tb != NULL){
            b++;
            tb = tb -> next;
       }

       if(a > b) return collision(A , B , a-b);
       else return collision(B , A , b-a);
    }
};
