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
        ListNode *temp_length = head;   // temp node to count the length of ListNode
        ListNode *temp = head;          // temp to traverse through ListNode from the given head node
        int length = 0;
        while(temp_length != NULL){
            length++;                        // length keeps incrementing by 1 until temp_length reaches the end of ListNode
            temp_length = temp_length->next; // traverses through ListNode until it reaches the end
        }
        int counter = 0;                    // flag counter to make sure temp node stops traversing once it reaches the middle (length/2)
        while(counter < length/2){
            counter ++;
            temp = temp-> next;
        }                                   // loops till temp node reaches the middle, then we return that node (i.e the middle node), which will print the subsequent linked list elements
        return temp;
    }
};