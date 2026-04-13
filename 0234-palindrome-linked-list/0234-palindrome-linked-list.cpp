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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode * ptr = head;
        int size=0;
        while(ptr != NULL){
            size++;
            ptr = ptr->next;
        }
        cout<<size<<endl;
        ptr = head;
        int i=0;
        while( i< size/2){
            s.push(ptr->val);
            ptr=ptr->next;
            i++;
        }
        if(size % 2 != 0) ptr = ptr->next;
       // ptr=ptr->next;
       // i= (size/2)+1;
        while(!s.empty() &&  ptr != NULL){
            if(s.top() != ptr->val) return false;
            ptr= ptr->next;
           // cout<<"poped: "<<s.top();
            s.pop();
            //i++;
        }
        return true;
    }
};