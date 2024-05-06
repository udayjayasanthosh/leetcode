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
    ListNode* removeNodes(ListNode* head) {
        // ListNode* temp=new ListNode(0);
        // temp->next=head;
        // ListNode* ak=temp;
        // while(temp->next->next!=NULL)
        // {
        //     if(temp->next->val<temp->next->next->val)
        //     {
        //         temp->next=temp->next->next;
        //         temp=ak;
        //     }
        //     else{
        //     temp=temp->next;
        //     }
        // }
        // return ak->next;
        ListNode* p=NULL;
        while(head!=NULL)
        {
            ListNode* a=new ListNode(head->val);
            a->next=p;
            p=a;
            head=head->next;
        }
        head=p;
        int b=p->val;
        while(p!=NULL and p->next!=NULL)
        {
            if(p->next->val<b)
            {
                p->next=p->next->next;
            }
            else
            {
                p=p->next;
                b=p->val;
            }
        }
        ListNode* q=NULL;
        while(head!=NULL)
        {
            ListNode* a=new ListNode(head->val);
            a->next=q;
            q=a;
            head=head->next;
        }
        return q;


    }
};