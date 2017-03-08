#ifndef YT_REVIEW_H
#define YT_REVIEW_H

#include <iostream>
#include <queue>

using namespace std;

struct LinkedList {
  int data;
  LinkedList *next;
  LinkedList() : data(0), next(nullptr) {}
  LinkedList(int val) : data(val), next(nullptr) {}
};

class Tree {
 public:
  int value;
  Tree *left;
  Tree *right;
  Tree(int a) : value(a), left(nullptr), right(nullptr) {}
};

LinkedList *reverseList(LinkedList *head) {
  if (NULL == head || NULL == head->next) return head;

  LinkedList *newhead = reverseList(head->next);
  head->next->next = head;
  head->next = NULL;

  return newhead;
}

void print_linked(LinkedList *head) {
  while (head) {
    std::cout << head->data << "->";
    head = head->next;
  }
}

double sqrt(double num) {
  if (num < 0) return -1;
  if (num == 0 || num == 1) return num;

  double left = 0, right = num;
  double precision = 0.00001;

  while (right - left > precision) {
    double res = (right + left) / 2;
    double resSq = res * res;
    if (resSq == num) {
      std::cout << "Perfect!\n";
      return res;
    }

    else if (resSq < num) {
      left = res;

    } else {
      right = res;
    }
  }
  return (right + left) / 2;
}

int get_n_occurance(int k, int nums[], int start, int end) {
  if (end < start) {
    return 0;
  }

  if (k < nums[start]) {
    return 0;
  }
  if (k > nums[end]) {
    return 0;
  }

  if (k == nums[end] && k == nums[start]) {
    return end - start + 1;
  }

  int mid = (start + end) / 2;

  if (nums[mid] == k)
    return 1 + get_n_occurance(k, nums, start, mid - 1) +
           get_n_occurance(k, nums, mid + 1, end);
  else if (nums[mid] > k)
    return get_n_occurance(k, nums, start, mid - 1);
  else
    return get_n_occurance(k, nums, mid + 1, end);
}

// 4
void print_parens(int left, int right, string str) {
  if (right == 0) {
    cout << str << endl;
    return;
  }
  if (left > 0) {
    print_parens(left - 1, right, str + "(");
    if (left < right) {
      print_parens(left, right - 1, str + ")");
    }
  } else {
    print_parens(left, right - 1, str + ")");
  }
}

int gcd(int a, int b) {
  int remain = a % b;
  ;
  if (remain == 0) {
    return b;
  } else {
    return gcd(b, remain);
  }
}

string get_rational(double n) {
  bool ifneg = n < 0;

  int ten = 1;
  while ((ten * n) - (int)(n * ten) != 0) {
    ten *= 10;
  }

  int up = (int)(n * ten);
  int down = ten;
  int com;

  if (up > down) {
    com = gcd(up, down);
  } else {
    com = gcd(down, up);
  }

  up /= com;
  down /= com;

  string res = "";
  if (ifneg) res += "-";

  res += to_string(up) + "/" + to_string(down);
  return res;
}

void str_perms(string input, int focus) {
  if (focus == input.length() - 1) {
    cout << input << endl;
    return;
  }

  str_perms(input, focus + 1);
  for (int i = focus + 1; i < input.length(); i++) {
    char temp = input[focus];
    input[focus] = input[i];
    input[i] = temp;

    str_perms(input, focus + 1);
  }
}

int get_first_index(int nums[], int a, int start, int end) {
  if (end < start) {
    return -1;
  }
  if (nums[start] > a) return -1;
  if (nums[end] < a) return -1;

  if (nums[start] == a) return start;

  int mid = (start + end) / 2;
  if (nums[mid] == a) {
    int leftIndex = get_first_index(nums, a, start, mid - 1);
    return leftIndex == -1 ? mid : leftIndex;
  } else if (nums[mid] > a) {
    return get_first_index(nums, a, start, mid - 1);
  } else {
    return get_first_index(nums, a, start + 1, end);
  }
}

bool is_bst(Tree *a, int small, int large) {
  if (!a) return true;

  if (a->value > small && a->value < large) {
    bool left = is_bst(a->left, small, a->value);
    if (!left) return false;
    bool right = is_bst(a->right, a->value, large);
    return right;
  } else {
    return false;
  }
}

void print_bst_level(Tree *t, int level) {
  if (level < 0) return;

  queue<Tree *> q;
  queue<int> levels;

  q.push(t);
  levels.push(0);

  while (!q.empty()) {
    Tree *temp = q.front();
    q.pop();
    int curlevel = levels.front();
    levels.pop();

    if (!temp)
      return;
    else if (curlevel == level) {
      cout << temp->value << " ";
    } else {
      q.push(temp->left);
      levels.push(curlevel + 1);
      q.push(temp->right);
      levels.push(curlevel + 1);
    }
  }
}
bool is_pal(string input) {
  for (int i = 0; i < input.length() / 2; i++) {
    if (input[i] != input[input.length() - 1 - i]) {
      return false;
    }
  }
  return true;
}

bool is_rotated_pal(string input) {
  string check = input + input;

  for (int i = 0; i < check.length() - input.length(); i++) {
    if (is_pal(check.substr(i, input.length()))) {
      return true;
    }
  }
  return false;
}

int max_subset_sum(int arr[], int len) {
  int max = 0, tempsum = 0;

  for (int i = 0; i < len; ++i) {
    int temp = tempsum + arr[i];

    if (temp > 0) {
      tempsum = temp;
      if (tempsum > max) {
        max = tempsum;
      }
    } else {
      tempsum = 0;
    }
  }
  return max;
}

#endif  // YT_REVIEW_H
