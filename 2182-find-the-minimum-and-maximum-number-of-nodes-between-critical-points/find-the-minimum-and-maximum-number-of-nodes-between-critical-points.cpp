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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head==NULL) return{-1,-1};
        int a=head->val;
        head=head->next;
        int i=1;
        vector<int>v;
        while(head->next!=NULL)
        {
            if(a>head->val)
            {
                if(head->val<head->next->val)
                {
                    v.push_back(i);
                }
            }
            if(a<head->val)
            {
                if(head->val>head->next->val)
                {
                    v.push_back(i);
                }
            }
            i++;
            a=head->val;
            head=head->next;
        }
        if(v.size()<2)return {-1,-1};
        int x=v[v.size()-1]-v[0];
        int min=INT_MAX;
        for(int j=0;j<v.size()-1;j++)
        {
            int z=v[j+1]-v[j];
            if(z<min)
            min=z;
        }
        return {min,x};

    }
};