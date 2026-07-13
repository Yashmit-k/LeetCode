class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (l == r) return head;

        ListNode *first, *prev, *cur, *start, *n;

        if (l == 1) {
            first = NULL;
            cur = head;
        }
        else {
            first = head;

            for (int i = 2; i < l; i++) {
                first = first->next;
            }

            cur = first->next;
        }

        start = cur;
        prev = NULL;

        int pos = l;

        while (pos <= r) {
            n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
            pos++;
        }

        start->next = cur;

        if (first == NULL) {
            head = prev;
        }
        else {
            first->next = prev;
        }

        return head;
    }
};