// 2024-10-31

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int a[120] = {0}, b[120] = {0}, c[120] = {0};
        int i1 = 0, i2 = 0, idx = 1;
        while (l1!=nullptr) { a[i1++] = l1->val; l1 = l1->next; }
        while (l2!=nullptr) { b[i2++] = l2->val; l2 = l2->next; }
        int _end = i1 > i2 ? i1 : i2;
        for (int i = 0; i < _end; ++i)
        {
            c[i] += a[i] + b[i];
            if (c[i] > 9)
            {
                c[i+1] += c[i] / 10;
                c[i] %= 10;
            }
        }
        int la = c[_end] ? _end : _end - 1;
        ListNode* newHead = new ListNode(c[0]);
        ListNode* cur = newHead;
        for (; idx <= la; ++idx)
        {
            ListNode* newElement = new ListNode(c[idx]);
            cur->next = newElement;
            cur = newElement;
        }
        return newHead;
    }
};
