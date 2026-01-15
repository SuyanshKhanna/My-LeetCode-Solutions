/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* ptr1 = head;
    struct ListNode* ptr2 = head;
    while(ptr2 != NULL){
        ptr2 = ptr2->next;
        if(ptr2 == NULL) return false;
        if(ptr2 == ptr1){
            return true;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }
    return false;
}
