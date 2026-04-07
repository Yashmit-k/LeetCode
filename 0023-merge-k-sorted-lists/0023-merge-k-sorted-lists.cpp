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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:lists){
            while(i!=NULL){
                pq.push(i->val);
                i=i->next;
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        // Step 3: build new list
        while (!pq.empty()) {
            temp->next = new ListNode(pq.top());
            pq.pop();
            temp = temp->next;
        }
        return dummy->next;
    }
};