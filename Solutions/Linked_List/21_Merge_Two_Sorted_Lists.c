#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Insert at end of list, return (possibly new) head
struct ListNode* Insert(struct ListNode* head, int data) {
    // create new node
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = data;
    newNode->next = NULL;

    // empty list → new node is head
    if (head == NULL) {
        return newNode;
    }

    // non-empty → go to end
    struct ListNode *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = newNode;
    return head;   // head doesn’t change
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *result = NULL;   // IMPORTANT: local and initialized

    struct ListNode *ptr1 = list1;
    struct ListNode *ptr2 = list2;

    // main merge loop
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val <= ptr2->val) {
            result = Insert(result, ptr1->val);
            ptr1 = ptr1->next;     // move ONLY list1
        } else {
            result = Insert(result, ptr2->val);
            ptr2 = ptr2->next;     // move ONLY list2
        }
    }

    // if anything remains in list1, append it
    while (ptr1 != NULL) {
        result = Insert(result, ptr1->val);
        ptr1 = ptr1->next;
    }

    // if anything remains in list2, append it
    while (ptr2 != NULL) {
        result = Insert(result, ptr2->val);
        ptr2 = ptr2->next;
    }

    return result;
}
