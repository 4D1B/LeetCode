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
        ListNode* current = l1;
        ListNode* anotherCurr = l2;
        ListNode* dummy = new ListNode(0); 
        ListNode* curr = dummy;
        int c1= 0;
        int c2= 0;
        while(current != NULL || anotherCurr != NULL || c1 > 0){
            int x =0;
            int y= 0;
            if(current != NULL ){
                x= current -> val;

                current= current-> next;
            }
            if(anotherCurr != NULL ){
                y= anotherCurr -> val;
                anotherCurr= anotherCurr-> next;
            }
            c2 = x+y+c1;
            c1=0;
            if( c2 >= 10){
                c1 = c1 % 10;
                c1= (c2 - c1) /10;
                c2= c2 - (10*c1);
            }
            cout<< c2 << endl;
            curr-> next = new ListNode(c2);
            curr = curr->next;
            
        }

        return dummy->next;
    }
};