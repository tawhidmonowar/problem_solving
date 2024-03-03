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
        int cont = 0;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            cont++;
            temp = temp->next;
        }

        if(cont==n)
        {
            ListNode *newHead = head->next;
            return newHead;
        }

        int pos = cont-n;
        temp = head;

        while(temp!=NULL)
        {
            pos--;
            if(pos==0)
            {
                break;
            }
            temp = temp->next;
        }

        ListNode *deleteNode = temp->next;
        temp->next = temp->next->next;
        return head;

    }
};