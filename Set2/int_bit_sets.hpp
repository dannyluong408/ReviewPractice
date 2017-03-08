#ifndef INT_BIT_SETS_HPP
#define INT_BIT_SETS_HPP



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation
*/

int numSetBits(unsigned int A) {
    int count = 0;

    while(A){
        A = A & ( A - 1);
        count++;
    }
    return count;
}

/*
Given a sorted linked list, delete all duplicates such that each element appear only once.
For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/

ListNode* deleteDuplicates(ListNode* A) {
    if (!A ){
        return NULL;
    }
    ListNode *cur = A, *nex = A->next;

    while(nex){
        ListNode *del = nullptr;
        if(cur->val == nex->val){
            del = nex;
            nex = nex->next;
            cur->next = nex;
            delete del;
        }
        else{
            cur = cur->next;
            nex = nex->next;
        }
    }
    return A; // head will always be unique dont need to readjust
}

/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
Try solving it using constant additional space.
*/

ListNode* detectCycle(ListNode* A) {
    if (!A){
        return NULL;
    }

    ListNode *fast = A, *slow = A;

    while(slow && fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast){
            slow = A;
            while (slow != fast){
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    return NULL;
}

#endif // INT_BIT_SETS_HPP

