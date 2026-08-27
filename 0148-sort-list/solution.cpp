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
    ListNode* sortList(ListNode* head) {
       if(head == NULL || head -> next == NULL ) return head;
       ListNode* temp = head;
       vector<int> arr;

       while( temp != NULL){
          arr.push_back(temp -> val);
          temp = temp -> next;
       }

       sort(arr.begin() , arr.end());
       int n = arr.size();

       ListNode* nN = new ListNode(arr[0]);
       ListNode * m = nN;

       for(int i = 1 ; i < n ; i++){
         ListNode* temp = new ListNode(arr[i]);
         nN -> next = temp;
         nN = temp;
       }
       return m;
    }
};

