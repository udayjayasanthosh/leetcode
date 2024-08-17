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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* one=NULL;
        while(l1!=NULL)
        {
            ListNode* a=new ListNode(l1->val);
            a->next=one;
            one=a;
            l1=l1->next;
        }
        ListNode* two=NULL;
        while(l2!=NULL)
        {
            ListNode* a=new ListNode(l2->val);
            a->next=two;
            two=a;
            l2=l2->next;
        }
        int carry=0;
        ListNode* ans=NULL;
        // ListNode* fin_ans=ans;
        while(one!=NULL and two!=NULL)
        {
            int a=one->val+two->val+carry;
            int rem=a%10;
            carry=a/10;
            ListNode* b=new ListNode(rem);
            b->next=ans;
            ans=b;
            one=one->next;
            two=two->next;
        }
        while(one!=NULL)
        {
            int a=one->val+carry;
            int rem=a%10;
            carry=a/10;
            ListNode* b=new ListNode(rem);
            b->next=ans;
            ans=b;
            one=one->next;
        }
        while(two!=NULL)
        {
            int a=two->val+carry;
            int rem=a%10;
            carry=a/10;
            ListNode* b=new ListNode(rem);
            b->next=ans;
            ans=b;
            two=two->next;
        }
        if(carry>0)
        {
            int a=carry;
            ListNode* b=new ListNode(a);
            b->next=ans;
            ans=b;
        }
        return ans;
    }
};