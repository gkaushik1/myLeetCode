//https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newStart = NULL;
        if(!l1) return l2;
        if(!l2) return l1; 
        if(l1 -> val > l2 -> val)
        {
            newStart = l2;
            l2 = l2->next;
        }
        else
        {
            newStart = l1;
            l1 = l1->next;
        }
        ListNode* prev = newStart; 
        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                prev->next = l2;
                l2 = l2->next;
            }
            else 
            {
                prev->next = l1;
                l1 = l1 ->next;
            }
            prev = prev->next;
        }
        
        if(l1) prev->next = l1;
        else if(l2) prev->next = l2; 
        
        return newStart;
    }
};
