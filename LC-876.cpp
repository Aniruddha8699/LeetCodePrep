// 876. Middle of the Linked List

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
        ListNode *temp1= head, *temp2= head;
        while(temp2 != NULL) {
            if (temp2->next != NULL)   temp2= temp2->next->next;
            else break;
            temp1=temp1->next;
        }
        return temp1;
    }
};
