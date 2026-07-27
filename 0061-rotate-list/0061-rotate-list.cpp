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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0)return head;
        int n=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }
        k=k%n;
        if(k%n==0)return head;
        int x=n-k;
        temp=head;
        for(int i=1;i<x;i++)temp=temp->next;
        cout<<temp->val;
        ListNode *temp1=temp->next;
        temp->next=NULL;
        temp=temp1;
        while(temp1->next)temp1=temp1->next;
        temp1->next=head;
        head=temp;
        return head;
    }
};