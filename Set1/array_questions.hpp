#ifndef ARRAY_QUESTIONS_H
#define ARRAY_QUESTIONS_H

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <set>

bool is_uniq_str_1_1(std::string input){
    //hash set, on the fly
    std::unordered_set<char> hs;

    for(char ch: input){
        if(hs.count(ch) > 0){
            return false;
        }
        else{
            hs.insert(ch);
        }
    }
    return true;
    //no extra ds way
//    if (input.empty()){
//        return true;
//    }
//    sort(input.begin(),input.end());

//    for(int i = 0; i < input.length()-1; ++i){
//        if(input[i] == input[i+1]){
//            return false;
//        }
//    }

//    return true;
}


bool is_str_perm_1_2(std::string one, std::string two){
    //sort both strings and just compare
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());

    return one == two;
}

std::string urlify_1_3(std::string input, unsigned int size){

}

bool is_perm_palindrome_1_4(std::string input){
    std::unordered_map<char,int> hm;

    int odd = 0;

    for(char ch: input){
        if (isalpha(ch)){
            hm[tolower(ch)]++;
        }
    }

    for(auto it = hm.begin(); it != hm.end(); ++it){
        if(it->second % 2 != 0){
            odd++;
        }
    }

    if(odd != 0 && odd % 2 == 0){
        return false;
    }
    return true;
}

bool one_away_1_5(std::string one, std::string two){
    std::unordered_map<char,int> hm;
    int diff = 0;

    if (one.length() < two.length()){
        for(char ch: one){
            hm[ch]++;
        }

        for(char ch: two){
            auto it = hm.find(ch);
            if (it == hm.end()){
                diff++;
            }
            else if(it->second > 0){
                it->second--;
            }
            else{
                diff++;
            }
        }
        diff += two.length() - one.length();
    }
    else{
        for(char ch: two){
            hm[ch]++;
        }

        for(char ch: one){
            auto it = hm.find(ch);
            if (it == hm.end()){
                diff++;
            }
            else if(it->second > 0){
                it->second--;
            }
            else{
                diff++;
            }
        }
    }

    return diff <= 1;
}

std::string string_compress_1_6(std::string input){
    std::string res = "";

    if (input.empty()){
        return input;
    }

    int count = 0;
    char ch = input[0];

    for(int i = 0; i < input.length(); i++){
        if(ch == input[i]){
            count++;
        }
        else{
            res += ch + std::to_string(count);
            count = 1;
            ch = input[i];
        }
    }

    res += ch + std::to_string(count);

    if(res.length() > input.length()){
        return input;
    }
    else{
        return res;
    }
}

void rotate_matrix_1_7(int matrix[][5],int n){
    int half = n / 2;

    for (int layer = 0; layer < half; layer++) {
        int first = layer;
        int last = n - 1 - layer;

        for (int i = first; i < last; i++) {
            int offset = i - first;
            int j = last - offset;
            int top = matrix[first][i]; // save top

            // left -> top
            matrix[first][i] = matrix[j][first];

            // bottom -> left
            matrix[j][first] = matrix[last][j];

            // right -> bottom
            matrix[last][j] = matrix[i][last];

            // top -> right
            matrix[i][last] = top; // right <- saved top
        }
    }
}

void zero_matrix_1_8(int matrix[][6], int rows){
    std::unordered_set<int> row,col;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 6; j++){
            if (matrix[i][j] == 0){
                row.insert(i);
                col.insert(j);
            }
        }
    }

    //zero out those rows/cols here

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 6; j++){
            if(row.count(i) > 0 || col.count(j) > 0 ){
                matrix[i][j] = 0;
            }
        }
    }
}

void is_rotation_1_9(std::string one, std::string two){
//????
}

#endif // ARRAY_QUESTIONS_H

