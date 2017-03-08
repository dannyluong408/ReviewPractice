#ifndef BIT_MANIP_QUESTIONS_HPP
#define BIT_MANIP_QUESTIONS_HPP

#include <string.h>

int insertion_5_1(int a, int b, int i, int j){

    //reset bits i thru j
    //then or each bit with b

    for (int start = i; start <= j; start++){
        a &= ~(a << start);

    } // gets the area ur gonna insert cleared in a

    //now or each bit of that area with corresponding b
    return a |= (b << i);
}


void binary_to_string_5_2(double input){
    /*
    Binary to String: Given a real number between O and 1 (e.g., 0.72) that is passed in as a double, print
the binary representation. If the number cannot be represented accurately in binary with at most 32
characters, print "ERROR:
    */
}

int flip_bit_to_win_5_3(int input){

    int temp;
    int max = 0, count;
    for(int i = 0 ; i < 32; i++){
        temp = input;
        count = 0;
        if( (temp & (1 << i)) == 0){
            //flip this and count set bits using pop count
            temp |= (1 << i);
        }

        bool cont = false;
        for(int j = 0; j < 32; j++){
            if( (temp & (1 << j))){
                if (cont == false){
                    count = 1;
                }
                else{
                    count++;
                }
                if (count > max){
                    max = count;
                }
                cont = true;
            }
            else{
                cont = false;
                count = 0;
            }

        }
    }

    return max;
}

void next_number_5_4(int input){
    //input is positive

    //??shift left and right?
}

//5_5
/* what does ((n & (n-1) == 0) do?
   111111111
   111111110
*/

int conversion_5_6(int a, int b){
    int c = a ^ b;

    int count = 0;

    while(c){
        c = c & (c - 1);
        count++;
    }

    return count;
}

int pairwise_swap_5_7(int input){
    int temp; //do this later
    return input;
}



void drawline_5_8(char screen[], int width, int xl, int x2, int y){
    int height = strlen(screen) / width;

    //draws are only horizontal so y finds the row;

    //then draw from x1 to x2 which coudl be in the middle of a byte to another middle of byte
}


#endif // BIT_MANIP_QUESTIONS_HPP
