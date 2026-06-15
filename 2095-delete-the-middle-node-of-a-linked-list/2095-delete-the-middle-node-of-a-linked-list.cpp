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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr = head;
        if(ptr->next == NULL)
            return NULL;
        int len=0;
        while(ptr!= NULL){
            ptr = ptr->next;
            len++;
        }
        ptr=head;
        if(len==2){
            ptr->next=NULL;
            return head;
        }
        int mid = len/2;
        for(int i=1; i<mid; i++){
            ptr=ptr->next;
        }
        ListNode* remove = ptr->next;
        if(ptr->next->next != NULL)
            ptr->next=ptr->next->next;
        remove->next=NULL;
        return head;
    }
};