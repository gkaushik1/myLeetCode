//https://leetcode.com/problems/swap-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head) return head; 
        
        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode *newHead = head; 
        ListNode* pprev = NULL; 
                
        if(curr)
          newHead = curr; 

        while(prev && curr)
        {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev->next = tmp;
            if(pprev)
            {
                pprev->next = curr;
            }
            pprev = prev; 
            prev = prev->next; 
            if(prev)
            {
                curr = prev->next;
            }
        }
        return newHead;
    }
};
