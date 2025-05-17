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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* b=head;
        ListNode* x=new ListNode(0);
        ListNode* y=x;
        while(true)
        {
            ListNode* c=b;
            int j=k;
            ListNode* a=NULL;
            while(b!=NULL and j>0)
            {
                ListNode* z=new ListNode(b->val);
                z->next=a;
                a=z;
                b=b->next;
                j-=1;
            }
            if(j==0)
            {
                while(x->next!=NULL)
                {
                    x=x->next;
                }
                x->next=a;
            }
            else
            {
                while(x->next!=NULL)
                {
                    x=x->next;
                }
                x->next=c;
            }
            if(b==NULL) break;
        }
        return y->next;
    }
};