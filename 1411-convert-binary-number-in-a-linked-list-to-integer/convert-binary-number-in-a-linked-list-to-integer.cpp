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
       vector<int>a;
       ListNode* b=head;
       while(b!=NULL)
       {
           a.push_back(b->val);
           b=b->next;
       } 
       int i=a.size()-1;
       int j=0,d=0;
        while(i>=0)
       {
           if(a[i]==1){
           int c=pow(2,j);
           d+=c;
           }
           j+=1;
           i-=1;
       }
       return d;
    }
};