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
     ListNode* fast = head;
    ListNode* slow = head;
    ListNode* prev = nullptr;  
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;

        // Reverse the first half of the list
        ListNode* nextTemp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = nextTemp;
    }

    //  skip the middle node if odd number of nodes,
    if (fast != nullptr) {
        slow = slow->next;
    }
    while (prev != nullptr && slow != nullptr) {
        if (prev->val != slow->val) {
            return false;
        }
        prev = prev->next;
        slow = slow->next;
    }

    return true;   
    }
};