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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL,*temp;
        int c=0;
        while(l1!=NULL && l2!=NULL){
            int sum=l1->val+l2->val+c;
            if(sum>=10){
                c=1;
                sum=sum-10;
            }
            else c=0;
            if (!head) {
                head = new ListNode(sum);
                temp = head;
            }
            else{
                ListNode* t=new ListNode(sum);
                temp->next=t;
                temp=temp->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL)l1=l2;
        while(l1){
            int sum=l1->val+c;
            if(sum>=10){
                c=1;
                sum=sum-10;
            }
            else c=0;
            ListNode* t=new ListNode(sum);
            temp->next=t;
            temp=temp->next;
            l1=l1->next;
        }
        if(c>0){
            ListNode* t=new ListNode(c);
            temp->next=t;
            temp=temp->next;
        }
        return head;
    }
};