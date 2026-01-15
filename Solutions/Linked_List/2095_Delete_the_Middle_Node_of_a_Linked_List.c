/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    // struct ListNode* ptr = head;
    // int count = 0;
    // if(head->next == NULL) return NULL;
    // while(ptr != NULL){
    //     ptr = ptr->next;
    //     count++;
    // }
    // count = (count/2) -1;
    // ptr = head;
    // while(count>0){
    //     ptr = ptr->next;
    //     count--;
    // }
    // ptr->next = ptr->next->next;
    // return head;
    // brute force method ^^

    struct ListNode* slow = head;
    struct ListNode* fast = head;
    if(head->next == NULL) return NULL;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    if(slow->next == NULL) head->next = NULL;
    else{
        slow->val = slow->next->val;
        slow->next = slow->next->next;
    }
    return head;
}
