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
private:
    int gcd(int a, int b) {
        if(b == 0) return a;
        return gcd(b, a % b);
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto cur = head, cn = head->next;
        while (cur != nullptr && cn != nullptr) {
            auto new_node = new ListNode(gcd(cur->val, cn->val), cn);
            cur->next = new_node;
            cur = cn;
            cn = cn->next;
        }
        return head;
    }
};
