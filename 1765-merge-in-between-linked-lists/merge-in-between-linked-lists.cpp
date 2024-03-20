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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode* aa=list1;
       ListNode* bb=new ListNode(0) ;
       ListNode* bcom=bb;
       int i=0;
       while(aa!=NULL && i!=a)
       {
           ListNode* cc=new ListNode(aa->val);
           bb->next=cc;
           bb=bb->next;
           aa=aa->next;
           i++;
       }
       bb->next=list2;
       while(bb->next!=NULL)
       {
           bb=bb->next;
       }    
       while(aa!=NULL && i!=b)
       {
           aa=aa->next;
           i++;
       }
       aa=aa->next;
       while(aa!=NULL)
       {
           ListNode* cat=new ListNode(aa->val);
           bb->next=cat;
           bb=bb->next;
           aa=aa->next;
       }
       return bcom->next;
       }
};