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
    int size(ListNode * head)
    {
        ListNode * tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {

        ListNode * tmp = head;

        int s = size(head);
        for (int i = 1; i<=s/2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
        
    }
};