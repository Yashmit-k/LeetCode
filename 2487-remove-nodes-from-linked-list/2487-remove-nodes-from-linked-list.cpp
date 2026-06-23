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
    ListNode* removeNodes(ListNode* head) {
        stack<pair<ListNode*, int>> s;
        ListNode* x=head;
        while(x!=NULL){
            if(s.empty()){
                head=x;
                s.push({x,x->val});
            }
            else if(s.top().second<x->val){
                while(!s.empty() && s.top().second<x->val){
                    s.pop();
                }
                if(s.empty()){
                    head=x;
                    s.push({x,x->val});
                }
                else{
                    s.top().first->next=x;
                    s.push({x,x->val});
                }
            }
            else{
                s.top().first->next=x;
                s.push({x,x->val});
            }
            x=x->next;
        }
        return head;
    }
};