/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if (A == NULL)
        return A;

    ListNode* curr = A;
    ListNode* prev = NULL;

    while (B > 1) {
        prev = curr;
        curr = curr->next;
        B--;
        C--;
    }

    ListNode* conn = prev;
    ListNode* tail = curr;

    ListNode* temp = NULL;

    while (C > 0) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        C--;
    }

    if (conn != NULL) {       //linked list k phle koi nos the check krne k liye
        conn->next = prev;
    }
    else {
        A = prev;
    }

    tail->next = curr;

    return A;

}
