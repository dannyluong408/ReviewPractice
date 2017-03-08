#ifndef LINKEDLIST_QUESTIONS_HPP
#define LINKEDLIST_QUESTIONS_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <set>

struct linked{
    int val;
    linked *next = NULL;
};


void remove_LL_dupes_2_1(linked *head){
    /*with no temp buffer use two pointers
     *iterate thru from head , and if equals head delete
     *then do it again from head + 1 to end, repeat till end
    */
    if (!head){
        return;
    }
    std::unordered_set<int> hs;

    linked *cur = head;
    //first element since not empty is always gonna be unique
    hs.insert(cur->val);

    while (cur){
        linked *del = nullptr;
        if(hs.count(cur->next->val) > 0){
            del = cur->next;
            cur->next = cur->next->next;
            cur = cur->next;
            delete del;
        }
        else{
            hs.insert(cur->next->val);
            cur = cur->next;
        }
    }

}

int return_kth_last_2_2(const linked *head, int k){
    //assume k is valid (in the LL)

    if (!head) {
        return -1; //?? check if empty
    }
    const linked *slow = head;
    const linked *fast = head;

    for(int i = 0; i < k; i++){
        fast = fast->next;
    }

    while(fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow->val;
}

void delete_middle_node_2_3(linked *node){
    //shift everything left, delete last node
    linked *prev;
    while(node->next){
        node->val = node->next->val;
        if (!node->next->next){
            prev = node;
        }
        node = node->next;
    }

    prev->next = nullptr;
    delete node;
}

linked* partition_2_4(linked *head, int x){

}

linked* sum_list_2_5(linked *head1, linked *head2){
    //to do it with forward order digits
    //pop values into stack
    //proceed like this after popping each one
    int carry = 0, temp;
    linked *newhead = nullptr,*cur = nullptr;

    while(head1 || head2){
        if(!head1){
            temp = head2->val + carry;
            if (temp > 9){
                temp = temp % 10;
                carry = 1;
            }
            head2 = head2->next;
        }
        else if(!head2){
            temp = head1->val + carry;
            if (temp > 9){
                temp = temp % 10;
                carry = 1;
            }
            head1 = head1->next;
        }
        else{
            temp = head1->val + head2->val + carry;
            if (temp > 9){
                temp = temp % 10;
                carry = 1;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        linked *node = new linked;
        node->val = temp;

        if(!newhead){
            newhead = node;
            cur = node;
        }
        else{
            cur->next = node;
            cur = node;
        }
    }

    return newhead;
}

bool is_palindrome_2_6(const linked *head){
    //iterate thru with fast+slow
    //get start of 2nd half and reverse it
    //compare head + start of 2nd half until different = false

    return true;
}

bool is_intersect_2_7(const linked *one, const linked* two){
    const linked  *cur1 = one, *cur2 = two;




}

const linked* loop_detect_2_8(const linked* head){
    if (!head){
        return nullptr;
    }
    const linked *fast = head,*slow = head->next;

    while(fast){
        if (fast == slow){
            return fast;
        }
        fast = fast->next;
        slow = slow->next->next;
    }

    return NULL; // should never get here

}

#endif // LINKEDLIST_QUESTIONS_HPP


