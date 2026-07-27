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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }
        //cout<<n;
        int count=n/k;
        ListNode *dummy=new ListNode;
        dummy->next=head;

        ListNode* pg,*p,*c,*gs;
        pg=dummy;
        for(int i=0;i<count;i++){
            c=pg->next;
            gs=c;
            p=nullptr;
            for(int j=0;j<k;j++){
                ListNode* next=c->next;
                c->next=p;
                p=c;
                c=next;
            }
            pg->next=p;
            gs->next=c;
            pg=gs;

        }
        return dummy->next;
    }
};