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
    ListNode* doubleIt(ListNode* head) {
       ListNode* p=NULL;
       while(head!=NULL)
       {
        ListNode* a=new ListNode(head->val);
        a->next=p;
        p=a;
        head=head->next;
       }
       int carry=0;
       head=NULL;
       while(p!=NULL)
       {
        int b=2*p->val+carry;
        carry=b/10;
        ListNode* a=new ListNode(b%10);
        a->next=head;
        head=a;
        p=p->next;
       }
       if(carry!=0)
       {
       ListNode* a=new ListNode(carry);
        a->next=head;
        head=a;
       }
       return head;
    }
};