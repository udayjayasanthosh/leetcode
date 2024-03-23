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
    void reorderList(ListNode* heads) {
        ListNode* head=heads;
        int i=0;
        while(head->next!=NULL){
            ListNode* hea=head->next;
            ListNode* prev_node=NULL;
            ListNode* cur_node=hea;
            ListNode* next_node=NULL;
            while(cur_node!=NULL){
                next_node=cur_node->next;
                cur_node->next=prev_node;
                prev_node=cur_node;
                cur_node=next_node;
            }
            hea=prev_node;
            head->next=hea;
            head=head->next;
        }
        heads=head;
    }
};