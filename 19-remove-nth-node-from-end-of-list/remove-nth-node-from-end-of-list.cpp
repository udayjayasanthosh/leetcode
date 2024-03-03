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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* a=head;
       int c=0;
       ListNode* b=new ListNode(0);
       b->next=head;
       ListNode* x=b;
       while(a!=NULL)
       {
           c++;
           a=a->next;
       }
       c=c-n;
       int i=0;
       while(b!=NULL && b->next!=NULL)
       {
           if(c==i)
           {
               b->next=b->next->next;
               break;
           }
           i++;
           b=b->next;
       }
       return x->next;

    }
};