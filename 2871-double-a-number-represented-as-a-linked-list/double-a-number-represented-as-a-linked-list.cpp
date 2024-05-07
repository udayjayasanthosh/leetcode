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
        ListNode* a=head;
        ListNode* pre=NULL;
        ListNode* t=NULL;
        while(a!=NULL)
        {
            ListNode* b=a->next;
            a->next=pre;
            pre=a;
            a=b;
        }
        int carry=0;
        while(pre!=NULL)
        {
            int sum=pre->val;
            int su=carry+(sum*2);
            if(su>9)
            {
                carry=su/10;
                su=su%10;
            }
            else
            {
                carry=0;
            }
            ListNode* hol=new ListNode(su);
            hol->next=t;
            t=hol;
            pre=pre->next;
        }
        if(carry!=0)
        {
            ListNode* att=new ListNode(carry);
            att->next=t;
            t=att;
        }
        
        return t;
    }
};