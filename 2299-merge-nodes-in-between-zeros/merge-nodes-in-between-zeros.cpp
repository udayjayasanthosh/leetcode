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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* a=new ListNode(0);
        ListNode* b=a;
        head=head->next;
        int s=0;
        while(head!=NULL)
        {
            if(head->val!=0)
            s+=head->val;
            else
            {
                ListNode* p=new ListNode(s);
                a->next=p;
                a=a->next;
                s=0;
            }
            head=head->next;
        }
        head=b;
        return head->next;
    }
};