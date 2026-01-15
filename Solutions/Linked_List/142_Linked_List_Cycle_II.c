/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* ptr1 = head;
    struct ListNode* ptr2 = head;
    while(ptr2 != NULL&& ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        //if(ptr2 == NULL) return NULL;
        if(ptr2 == ptr1){
            ptr2 = head;
            while(ptr1 != ptr2){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            return ptr1;
        }

    }
    return NULL;
}
