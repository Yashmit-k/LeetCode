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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        ListNode* temp=head;
        stack<int> x;
        while(temp!=NULL){
            x.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val!=x.top()){
                return false;
            }
            else{
                x.pop();
                temp=temp->next;
            }
        }
        if(x.empty()){
            return true;
        }
        else return false;
    }
};