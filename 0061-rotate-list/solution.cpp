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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL  || head->next == NULL) return head;

        ListNode* temp = head;
        vector<int>arr;
        
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        
        int n = arr.size();
        if(k == 0) return head;
        k = k % n;
        vector<int>t;

        for(int i = n - k ; i < n ; i++){
            t.push_back(arr[i]);
        }
        for(int i = n -1 ; i >= k ; i--){
            arr[i] = arr[i - k];
        }
        for(int i = 0 ; i < k ; i++){
            arr[i] = t[i];
        }

        ListNode* m = new ListNode(arr[0]);
        ListNode* nN = m;
        for(int i = 1 ; i < arr.size() ; i++){
           ListNode* te = new ListNode(arr[i]);
           m->next = te;
           m = te;
        }
        return nN;
    }
};
