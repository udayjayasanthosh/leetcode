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
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=slow;
        ListNode* pre=NULL;
        while(a!=NULL)
        {
            ListNode* b=a->next;
            a->next=pre;
            pre=a;
            a=b;
        }
        int i=0;
        int c=0;
        while(pre!=NULL)
        {
            if(head->val==pre->val)
            {
                c++;
            }
            pre=pre->next;
            head=head->next;
            i++;
        }
        if(c==i)
        {
            return true;
        }
        return false;
    }
};