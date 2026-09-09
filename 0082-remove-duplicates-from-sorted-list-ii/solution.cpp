class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        // Step 1: Copy values into a vector
        vector<int> arr;
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Count frequencies
        unordered_map<int,int> freq;
        for (int val : arr) {
            freq[val]++;
        }

        // Step 3: Collect only unique values
        vector<int> uniqueVals;
        for (int val : arr) {
            if (freq[val] == 1) {
                uniqueVals.push_back(val);
            }
        }

        // Step 4: Rebuild linked list
        ListNode* dummy = new ListNode(0);
        temp = dummy;
        for (int val : uniqueVals) {
            temp->next = new ListNode(val);
            temp = temp->next;
        }

        return dummy->next;
    }
};

