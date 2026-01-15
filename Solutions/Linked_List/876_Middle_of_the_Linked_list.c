/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    // struct ListNode* ptr = head;
    // int count = 0;
    // while(ptr != NULL){
    //     ptr = ptr->next;
    //     count++;
    // }
    // count = (count/2);
    // ptr = head;
    // while(count>0){
    //     ptr = ptr->next;
    //     count--;
    // }
    // return ptr;
    // brute force Method ^^ 

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}
