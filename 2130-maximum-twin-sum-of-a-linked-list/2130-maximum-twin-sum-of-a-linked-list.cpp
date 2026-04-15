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
    int pairSum(ListNode* head) {
        vector<int> copy;
        ListNode* ptr=head;
        while(ptr!=NULL){
            copy.push_back(ptr->val);
            ptr=ptr->next;
        }
        int n = copy.size();
        int twinSum=0;
        for(int i=0; i<n; i++){
            twinSum = max(twinSum, copy[i]+copy[n-1-i]);
        }
        return twinSum;
    }
};