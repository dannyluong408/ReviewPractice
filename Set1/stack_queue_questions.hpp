#ifndef STACK_QUESTIONS_HPP
#define STACK_QUESTIONS_HPP


#include <stack>
#include <queue>

// 3_1 Three in One: Describe how you could use a single array to implement three stacks.

//fixed size like 15, just have 3 stack pointers and bound them each to size 5

// 3_2 Stack Min: How would you design a stack which, in addition to push and pop, has a function min
// which returns the minimum element? Push, pop and min should all operate in 0(1) time.

//use a second stack to keep track of mins


//3_3 SetofStacks

class set_of_stacks{
    int count = 0;
    int cap;
    std::stack<int> **stack_set;

public:
    set_of_stacks(int capacity){
        this->cap = capacity;
        stack_set[0]  = new std::stack<int>;
    }



};

//3_4 stack using two queues

class qstack{ //public all to save time
public:
    std::stack<int> main,second;


    void push(int data){
        main.push(data);
    }

    void pop(){
        if(second.empty()){
            while(!main.empty()){
                second.push(main.top());
                main.pop();
            }
        }
        if(!second.empty()){
            second.pop();
        }
        else{
            //queue is empty!!
        }
    }

    int front(){
        return second.top();
    }

};

//3_5 Sort Stack

void sort_stack_3_5(std::stack<int> *stx){
    //use two stacks
    //store top of original in temp/ pop until its less than the last popped from second;
    //repeat until original empty
    //return sorted second

}

//basic ghetto struct

enum{
    dog = 0,
    cat = 1
};

struct animal{
    std::string name;
    int type;
};

class animal_shelter{

    //use linked list to as queue;
    //keep removing front or iterate thru

};

#endif // STACK_QUESTIONS_HPP
