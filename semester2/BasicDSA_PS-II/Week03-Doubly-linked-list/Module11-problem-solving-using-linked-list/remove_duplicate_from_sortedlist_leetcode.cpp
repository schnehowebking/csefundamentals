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

        ListNode * tmp = head;
        if(head==NULL) return head;
        while(tmp->next != NULL)
        {
            if(tmp->val ==tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }

            if(tmp->next ==NULL)
            {
                break;
            }
            else if(tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
        return head;
        
    }
};