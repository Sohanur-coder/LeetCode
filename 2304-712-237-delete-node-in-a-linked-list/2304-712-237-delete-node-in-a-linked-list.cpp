/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Inserting next Node's value into current Node
        node->val = node->next->val;
        // Inserting next Node's next (pointer) into current Node
        node->next = node->next->next;
    }
};