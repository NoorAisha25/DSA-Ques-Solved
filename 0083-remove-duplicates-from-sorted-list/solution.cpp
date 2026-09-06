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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        vector<int>arr;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        vector<int>res;
        for(int i = 0 ; i <n ;  i++){
            if(i == n -1 || arr[i] != arr[i+1]) res.push_back(arr[i]);
        }

        temp = head;
        for(int i = 0 ; i < res.size() ; i++){
            temp->val = res[i];
            if(i == res.size() - 1) temp->next = nullptr;
            else temp = temp->next;
        }
        return head;
    }
};
