/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
ListNode* head=A;
int ans=0;
while(head!=NULL){
    ans++;
    head=head->next;
}
int mid=(ans/2)+1;
int f=mid-B;
if(f>0){
while (--f){
    A=A->next;
    }
return A->val;
}
else
    return -1;
}
