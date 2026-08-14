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
        if (head->next == NULL) {
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* a = NULL;
        ListNode* b = slow;
        while (b != NULL) {
            ListNode* c = b->next;
            b->next = a;
            a = b;
            b = c;
        }

        ListNode* mid = a;
        ListNode* start = head;
        while (mid != NULL) {
            if (mid->val != start->val) {
                return false;
            }
            mid = mid->next;
            start = start->next;
        }
        return true;
    }
};