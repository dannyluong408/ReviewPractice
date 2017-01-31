#include "array_questions.hpp"
#include "linkedlist_questions.hpp"
#include "stack_queue_questions.hpp"
#include "tree_graph_questions.hpp"

#include "string"
#include <iostream>



int main(void)
{
    //Chapter - Arrays
    std::string test_arr_1_1_true = "abcdefg",
                test_arr_1_1_false = "gsgsdfsd";

    std::cout << "Result of Array 1.1 True: " << is_uniq_str_1_1(test_arr_1_1_true) << "\n";
    std::cout << "Result of Array 1.1 False: " << is_uniq_str_1_1(test_arr_1_1_false) << "\n";

    std::string test_arr_1_2_one = "testtest",
                test_arr_1_2_two = "tttteess",
                test_arr_1_2_three = "afsdfsdfs";

    std::cout << "Result of Array 1.2 True: " << is_str_perm_1_2(test_arr_1_2_one,test_arr_1_2_two) << "\n";
    std::cout << "Result of Array 1.2 False: " << is_str_perm_1_2(test_arr_1_2_one,test_arr_1_2_three) << "\n";

    //std::string test_arr_1_3 = "Mr John Smith    ";

//    std::cout << "Result of Array 1.3 True: " <<  << "\n";
//    std::cout << "Result of Array 1.3 False: " <<  << "\n";

    std::string test_arr_1_4_true = "Tact Coa",
                test_arr_1_4_false = "Tactt Coa";

    std::cout << "Result of Array 1.4 True: " << is_perm_palindrome_1_4(test_arr_1_4_true) << "\n";
    std::cout << "Result of Array 1.4 False: " << is_perm_palindrome_1_4(test_arr_1_4_false) << "\n";

    std::string test_arr_1_5_one_a = "bale",
                test_arr_1_5_one_b = "pale",
                test_arr_1_5_two_a = "pale",
                test_arr_1_5_two_b = "bake";


    std::cout << "Result of Array 1.5 True: " << one_away_1_5(test_arr_1_5_one_a,test_arr_1_5_one_b) << "\n";
    std::cout << "Result of Array 1.5 False: " << one_away_1_5(test_arr_1_5_two_a,test_arr_1_5_two_b) << "\n";

    std::string test_arr_1_6_one = "aabcccccaaa";
    std::cout << "Result of Array 1.6: " << string_compress_1_6(test_arr_1_6_one) << "\n";

    int matrix_1_7[5][5] = {{1,2,3,4,5},
                        {5,6,7,8,9},
                        {5,4,3,2,1},
                        {9,8,7,6,5},
                        {1,2,3,4,5}};

    rotate_matrix_1_7(matrix_1_7, 5);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << matrix_1_7[i][j] << " ";
        }
        std::cout << "\n";
    }

    int matrix_1_8[4][6] = {{1,2,3,4,5,6},
                            {5,6,7,8,9,0},
                            {5,4,3,2,1,0},
                            {9,8,7,6,5,4}};

    zero_matrix_1_8(matrix_1_8,4);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            std::cout << matrix_1_8[i][j] << " ";
        }
        std::cout << "\n";
    }

    //string 1_9 ???

    //Linked Lists Chapter
    linked a,b,c,d,e;
    a.val = 5;
    a.next = &b;
    b.val = 6;
    b.next = &c;
    c.val = 5;
    c.next = &d;
    d.val = 4;
    d.next = &e;
    e.val = 6;

    remove_LL_dupes_2_1(&a);
    std::cout << "2_1: ";
    linked *cur = &a;
    while(cur){
        std::cout << cur->val << " ";
        cur = cur->next;
    }
    std::cout << "\n";

    linked a2,b2,c2,d2,e2;
    a2.val = 5;
    a2.next = &b2;
    b2.val = 6;
    b2.next = &c2;
    c2.val = 5;
    c2.next = &d2;
    d2.val = 4;
    d2.next = &e2;
    e2.val = 6;

    std::cout << return_kth_last_2_2(&a2,2) << "\n";

    linked a3,b3,c3,d3,e3;
    a3.val = 5;
    a3.next = &b3;
    b3.val = 6;
    b3.next = &c3;
    c3.val = 5;
    c3.next = &d3;
    d3.val = 4;
    d3.next = &e3;
    e3.val = 6;

    delete_middle_node_2_3(&c3);
    std::cout << "2_3: ";
    linked *cur3 = &a3;
    while(cur3){
        std::cout << cur3->val << " ";
        cur3 = cur3->next;
    }
    std::cout << "\n";

    //2_4 partition??

    linked a5,b5,c5,d5,e5,f5;
    a5.val = 7;
    a5.next = &b5;
    b5.val = 1;
    b5.next = &c5;
    c5.val = 6;

    d5.val = 5;
    d5.next = &e5;
    e5.val = 9;
    e5.next = &f5;
    f5.val = 2;

    linked* res_2_5 = sum_list_2_5(&a5, &d5);

    std::cout << "2_5: ";
    while(res_2_5){
        std::cout << res_2_5->val << " ";
        res_2_5 = res_2_5->next;
    }
    std::cout << "\n";

    linked a6,b6,c6,d6,e6,f6;
    a6.val = 7;
    a6.next = &b6;
    b6.val = 1;
    b6.next = &c6;
    c6.val = 6;
    c6.next = &d6;
    d6.val = 6;
    d6.next = &e6;
    e6.val = 1;
    e6.next = &f6;
    f6.val = 7;

    std::cout << "2_6: " << is_palindrome_2_6(&a) << "\n";


    linked a8,b8,c8,d8,e8,f8;
    a8.val = 7;
    a8.next = &b8;
    b8.val = 1;
    b8.next = &c8;
    c8.val = 3;
    c8.next = &d8;
    d8.val = 8;
    d8.next = &e8;
    e8.val = 1;
    e8.next = &f8;
    f8.val = 7;
    f8.next = &c8;

    std::cout << "2_8: " << loop_detect_2_8(&a8)->val << "\n";

    return 0;
}
