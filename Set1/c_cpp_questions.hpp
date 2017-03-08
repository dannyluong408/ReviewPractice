#ifndef C_CPP_QUESTIONS_HPP
#define C_CPP_QUESTIONS_HPP

#include <string.h>
#include <algorithm>
#include <utility>

void last_k_lines_12_1(std::string file, int k){
    //assume k is always valid
    //use a fast and slow pointer
    //iterate to end (stop when fast is at end, and print from slow)


}

void reverse_string(char *str){

    int len = strlen(str);
    std::cout << "Len:" << len << "\n";
    for(int i = 0; i < len / 2; i++){
        std::swap(str[i],str[len-1-i]);
    }

}

/*12_3 Hash Table VS StL Map
    hash table = array of linked lists
    stl map = red black tree , data is ordered

    o(1) time vs log n time

*/


/* 12_4 Virtual functions for polymorphism
 * allows using a base pointer to call functions of an inherited class~

 */

//12_5 shallow copy points to the original,
// deep copy makes a whole new copy of that data

//12_6 volatile prevents compilers from optimizing this variable
//used if variable could change externally (hardawre etc)

//12_7 the destructor has to be virtual since if u delete a base pointer
//pointing to a child class it wont call the child's destructor without it

#endif // C_CPP_QUESTIONS_HPP
