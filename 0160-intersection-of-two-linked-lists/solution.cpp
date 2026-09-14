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
    ListNode* solve(ListNode* longer , ListNode* shorter , int d){

        while(d--){
            longer = longer -> next;
        }

        while(longer != shorter){
            longer = longer -> next;
            shorter = shorter -> next;
        }

        return shorter;
    }
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
       if(A == NULL && B == NULL) return NULL;

       ListNode* ta = A;
       ListNode* tb = B;

       int a = 0;
       int b = 0;

       while(ta){
          a++;
          ta = ta->next;
       }

       while(tb){
        b++;
        tb = tb->next;
       }

       if(a > b) return solve(A , B , a-b);
       else return solve(B , A , b-a);
    }
};
