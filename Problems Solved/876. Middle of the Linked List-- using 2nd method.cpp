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
    ListNode* middleNode(ListNode* head) {
        ListNode* counter=head;
        ListNode* Middle=head;
        int count=1;
        while(counter->next!=NULL){
            count++;
            counter=counter->next;
        }
        int i=0;
        while(i!=count/2){
            Middle=Middle->next;
            i++;
        }
        return Middle;
    }
};