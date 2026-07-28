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
    ListNode* reverseList(ListNode* head) {
    vector<int> arr;
    ListNode* ptr = head;
    if(ptr==NULL) return head;
    while(ptr != NULL){
        arr.push_back(ptr->val);
      //  cout<<ptr->val;
        ptr = ptr->next;
    }
    ptr = head;
    int i= arr.size()-1; 
    while(ptr!=NULL && i>-1){
        cout<<arr[i]<<", ";
        ptr->val= arr[i];
        i--;
        ptr = ptr->next;
    }
    return head;
    
    }
};