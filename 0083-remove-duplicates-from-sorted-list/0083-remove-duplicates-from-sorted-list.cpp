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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;
        ListNode dummy(0, head);
        ListNode* curr = head;
        ListNode* prev = &dummy;

        while(curr != NULL) {
            mp[curr->val]++;

            if(mp[curr->val] > 1) {
                prev->next = curr->next;
                curr = curr->next;
                
                continue;
            } 
            prev = curr;
            curr = curr->next;
            
            
        }
        return dummy.next;
    }
};