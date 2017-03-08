#ifndef SET_ONE_HPP
#define SET_ONE_HPP


#include <string>
#include <stack>
#include <math.h>

std::string infix_to_postfix(std::string input){
    std::stack<char> stx;
    std::string res = "";

    for(char ch: input){
        if(ch >= 48 && ch <= 57){
            res += ch;
        }
        else if (ch != ' '){
            if(stx.empty() || ch == '(' || ch == '^'){
                stx.push(ch);
            }
            else if(ch == ')'){
                while(!stx.empty() && stx.top() != '(' ){
                    res += stx.top();
                    stx.pop();
                }
                stx.pop();
            }
            else if(ch == '*' || ch == '/'){
                if(stx.top() == '+' || stx.top() == '-'){
                    stx.push(ch);
                }
                else if(stx.top() == '*' || stx.top() == '/'){
                    while(!stx.empty() && stx.top() != '(' && (stx.top() == '*' || stx.top() == '/')){
                        res += stx.top();
                        stx.pop();
                    }
                    stx.push(ch);
                }
            }
            else if(ch == '+' || ch == '-'){
                while(!stx.empty() && stx.top() != '('){
                    res += stx.top();
                    stx.pop();
                }
                stx.push(ch);
            }
        }

    }

    while(!stx.empty()){
        res += stx.top();
        stx.pop();
    }

    return res;
}


double eval_postfix(std::string input){
    std::stack<double> stx;
    double a,b;
    for(char ch: input){
        if (isalnum(ch)){
            stx.push(ch - 48);
        }
        else if(ch == '+'){
            b = stx.top();
            stx.pop();
            a = stx.top();
            stx.pop();
            stx.push(a + b);
        }
        else if(ch == '*'){
            b = stx.top();
            stx.pop();
            a = stx.top();
            stx.pop();
            stx.push(a * b);
        }
        else if(ch == '/'){
            b = stx.top();
            stx.pop();
            a = stx.top();
            stx.pop();
            stx.push(a / b);
        }
        else if(ch == '-'){
            b = stx.top();
            stx.pop();
            a = stx.top();
            stx.pop();
            stx.push(a - b);
        }
        else if(ch == '^'){
            b = stx.top();
            stx.pop();
            a = stx.top();
            stx.pop();
            stx.push(pow(a,b));
        }
    }
    return stx.top();
}


#endif // SET_ONE_HPP
