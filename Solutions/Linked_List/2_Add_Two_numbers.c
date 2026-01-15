/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */struct ListNode* Insert(struct ListNode* head, int data) {
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
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  struct ListNode* result = NULL;
bool carry = false;

while (l1 != NULL || l2 != NULL || carry) {

    int x = (l1 ? l1->val : 0);
    int y = (l2 ? l2->val : 0);

    int sum = x + y + (carry ? 1 : 0);

    int digit = sum % 10;
    carry = sum >= 10;

    result = Insert(result, digit);

    if (l1) l1 = l1->next;
    if (l2) l2 = l2->next;
}

return result;

}
