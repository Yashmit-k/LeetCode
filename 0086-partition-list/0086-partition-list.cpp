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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return head;
        ListNode* head1=NULL,*head2=NULL,*temp,*temp1=NULL,*temp2;
        temp=head;
        while(temp){
            if(temp->val<x){
                if(!head1){
                    head1=temp;
                    temp1=head1;
                    temp=temp->next;
                    head1->next=NULL;
                }
                else{
                    temp1->next=temp;
                    temp=temp->next;
                    temp1=temp1->next;
                    temp1->next=NULL;
                }
                
            }
            else{
                if(!head2){
                    head2=temp;
                    temp2=head2;
                    temp=temp->next;
                    head2->next=NULL;
                }
                else{
                    temp2->next=temp;
                    temp=temp->next;
                    temp2=temp2->next;
                    temp2->next=NULL;
                }
            }
        }
        if(temp1)temp1->next=head2;
        return (head1!=NULL)?head1:head2;
    }
};