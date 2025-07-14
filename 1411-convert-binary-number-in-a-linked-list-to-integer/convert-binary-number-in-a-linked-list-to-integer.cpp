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
    int getDecimalValue(ListNode* head) {
        ListNode* a=NULL;
        while(head!=NULL)
        {
            ListNode* b=new ListNode(head->val);
            b->next=a;
            a=b;
            head=head->next;
        }
        int help=0;
        int ans=0;
        while(a!=NULL)
        {
            if(a->val==1)
            {
                ans+=pow(2,help);
            }
            help+=1;
            a=a->next;
        }
        return ans;
    }
};