#include "Set1/array_questions.hpp"
#include "Set1/bit_manip_questions.hpp"
#include "Set1/c_cpp_questions.hpp"
#include "Set1/linkedlist_questions.hpp"
#include "Set1/math_logic_questions.hpp"
#include "Set1/recur_dynaprog_questions.hpp"
#include "Set1/stack_queue_questions.hpp"
#include "Set1/tree_graph_questions.hpp"
#include "Set2/set_one.hpp"
#include "Set2/yt_review.hpp"

#include <algorithm>
#include <iostream>
#include "string"

int main(void) {
  // Chapter - Arrays
  std::string test_arr_1_1_true = "abcdefg", test_arr_1_1_false = "gsgsdfsd";

  std::cout << "Result of Array 1.1 True: "
            << is_uniq_str_1_1(test_arr_1_1_true) << "\n";
  std::cout << "Result of Array 1.1 False: "
            << is_uniq_str_1_1(test_arr_1_1_false) << "\n";

  std::string test_arr_1_2_one = "testtest", test_arr_1_2_two = "tttteess",
              test_arr_1_2_three = "afsdfsdfs";

  std::cout << "Result of Array 1.2 True: "
            << is_str_perm_1_2(test_arr_1_2_one, test_arr_1_2_two) << "\n";
  std::cout << "Result of Array 1.2 False: "
            << is_str_perm_1_2(test_arr_1_2_one, test_arr_1_2_three) << "\n";

  // std::string test_arr_1_3 = "Mr John Smith    ";

  //    std::cout << "Result of Array 1.3 True: " <<  << "\n";
  //    std::cout << "Result of Array 1.3 False: " <<  << "\n";

  std::string test_arr_1_4_true = "Tact Coa", test_arr_1_4_false = "Tactt Coa";

  std::cout << "Result of Array 1.4 True: "
            << is_perm_palindrome_1_4(test_arr_1_4_true) << "\n";
  std::cout << "Result of Array 1.4 False: "
            << is_perm_palindrome_1_4(test_arr_1_4_false) << "\n";

  std::string test_arr_1_5_one_a = "bale", test_arr_1_5_one_b = "pale",
              test_arr_1_5_two_a = "pale", test_arr_1_5_two_b = "bake";

  std::cout << "Result of Array 1.5 True: "
            << one_away_1_5(test_arr_1_5_one_a, test_arr_1_5_one_b) << "\n";
  std::cout << "Result of Array 1.5 False: "
            << one_away_1_5(test_arr_1_5_two_a, test_arr_1_5_two_b) << "\n";

  std::string test_arr_1_6_one = "aabcccccaaa";
  std::cout << "Result of Array 1.6: " << string_compress_1_6(test_arr_1_6_one)
            << "\n";

  int matrix_1_7[5][5] = {{1, 2, 3, 4, 5},
                          {5, 6, 7, 8, 9},
                          {5, 4, 3, 2, 1},
                          {9, 8, 7, 6, 5},
                          {1, 2, 3, 4, 5}};

  rotate_matrix_1_7(matrix_1_7, 5);
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << matrix_1_7[i][j] << " ";
    }
    std::cout << "\n";
  }

  int matrix_1_8[4][6] = {{1, 2, 3, 4, 5, 6},
                          {5, 6, 7, 8, 9, 0},
                          {5, 4, 3, 2, 1, 0},
                          {9, 8, 7, 6, 5, 4}};

  zero_matrix_1_8(matrix_1_8, 4);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      std::cout << matrix_1_8[i][j] << " ";
    }
    std::cout << "\n";
  }

  // string 1_9 ???

  // Linked Lists Chapter
  linked a, b, c, d, e;
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
  while (cur) {
    std::cout << cur->val << " ";
    cur = cur->next;
  }
  std::cout << "\n";

  linked a2, b2, c2, d2, e2;
  a2.val = 5;
  a2.next = &b2;
  b2.val = 6;
  b2.next = &c2;
  c2.val = 5;
  c2.next = &d2;
  d2.val = 4;
  d2.next = &e2;
  e2.val = 6;

  std::cout << return_kth_last_2_2(&a2, 2) << "\n";

  linked a3, b3, c3, d3, e3;
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
  while (cur3) {
    std::cout << cur3->val << " ";
    cur3 = cur3->next;
  }
  std::cout << "\n";

  // 2_4 partition??

  linked a5, b5, c5, d5, e5, f5;
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

  linked *res_2_5 = sum_list_2_5(&a5, &d5);

  std::cout << "2_5: ";
  while (res_2_5) {
    std::cout << res_2_5->val << " ";
    res_2_5 = res_2_5->next;
  }
  std::cout << "\n";

  linked a6, b6, c6, d6, e6, f6;
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

  linked a8, b8, c8, d8, e8, f8;
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

  int a_5_1 = 0b10000000000, b_5_1 = 0b10011;

  std::cout << "5_1: " << insertion_5_1(a_5_1, b_5_1, 2, 6) << "\n";

  int a_5_3 = 1775;

  std::cout << "5_3: " << flip_bit_to_win_5_3(a_5_3) << "\n";

  int a_5_6 = 29, b_5_6 = 15;

  std::cout << "5_6: " << conversion_5_6(a_5_6, b_5_6) << "\n";

  char screen[64];
  std::fill_n(screen, 64, 1);

  drawline_5_8(screen, 16, 0, 4, 1);

  std::string filename = "H:/QtBuilds/CTCI_Questions/test.txt";

  char string_5_9[10] = "hello guy";

  reverse_string(string_5_9);

  std::cout << "5_9: " << string_5_9 << "\n";

  string in2out = "3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3";

  cout << "Infix: " << in2out << " to Postfix: " << infix_to_postfix(in2out)
       << "\n";

  cout << "Postfix 2 Result: " << eval_postfix(infix_to_postfix(in2out))
       << "\n\n";

  LinkedList *aa = new LinkedList(5);
  aa->next = new LinkedList(4);
  aa->next->next = new LinkedList(6);
  aa->next->next->next = new LinkedList(2);
  aa->next->next->next->next = new LinkedList(1);

  aa = reverseList(aa);
  print_linked(aa);

  cout << "\n\n";

  double sq = 13, sq2 = 24;
  cout << sqrt(sq) << "," << sqrt(sq2) << "\n\n";

  int test[16] = {1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 6, 6, 8, 8, 10, 10};

  cout << "Occurance of 2:" << get_n_occurance(2, test, 0, 15) << "\n"
       << "Occurance of 3:" << get_n_occurance(6, test, 0, 15) << "\n\n";

  print_parens(5, 5, "");

  cout << "\n\n";

  double rat = .25;

  cout << "Rational:" << get_rational(rat) << endl;

  str_perms("231", 0);

  cout << "\n\n";

  int blah[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
  cout << "First Occur:" << get_first_index(blah, 8, 0, 9) << "\n\n";

  Tree *myTree = new Tree(4);
  myTree->left = new Tree(2);
  myTree->right = new Tree(6);
  myTree->left->left = new Tree(1);
  myTree->left->right = new Tree(3);

  cout << boolalpha << is_bst(myTree, INT_MIN, INT_MAX) << "\n";
  myTree->right->left = new Tree(7);
  cout << boolalpha << is_bst(myTree, INT_MIN, INT_MAX) << "\n\n";
  // myTree->right->right = new Tree(7);

  Tree *myTree2 = new Tree(1);
  myTree2->left = new Tree(2);
  myTree2->right = new Tree(3);
  myTree2->left->left = new Tree(4);
  myTree2->left->right = new Tree(5);
  myTree2->right->left = new Tree(6);
  myTree2->right->right = new Tree(7);

  print_bst_level(myTree2, 2);
  cout << "\n\n";
  cout << is_rotated_pal("aab") << endl;
  cout << is_rotated_pal("abcde") << endl;
  cout << is_rotated_pal("aaaad") << endl;

  int maxsub[10] = {1, 2, -4, 5, 6, -7, 8, 2, -1};

  cout << max_subset_sum(maxsub, 10) << endl;

  return 0;
}
