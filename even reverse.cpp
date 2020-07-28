/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
ListNode* temp=A;
int size = 0;
while(temp){
     ++size;
    temp=temp->next;
}

if(A == NULL)
    return A;
int x=1;
vector<int> v;
ListNode* hey=A;
while(A!=NULL){
    if(x%2==0){
        v.push_back(A->val);
        A=A->next;
    }
    else
        A=A->next;
++x;
}
reverse(v.begin(),v.end());
int n=v.size();
A=hey;
int i=0;

while(A){
        A->next->val=v[i];
        if(A->next->next==NULL)           //termination condition for even sized LL
            break;
        A=A->next->next;
        if(A->next==NULL)                 //for odd sized
            break;
    ++i;
    }

return hey;
    
}
