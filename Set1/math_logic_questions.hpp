#ifndef MATH_LOGIC_QUESTIONS_HPP
#define MATH_LOGIC_QUESTIONS_HPP


/*6_1
The Heavy Pill: You have 20 bottles of pills. 19 bottles have 1.0 gram pills, but one has pills of weight
1.1 grams. Given a scale that provides an exact measurement, how would you find the heavy bottle?
You can only use the scale once.



*/


/*6_2
Basketball: You have a basketball hoop and someone says that you can play one of two games.
Game 1: You get one shot to make the hoop.
Game 2: You get three shots and you have to make two of three shots.
If p is the probability of making a particular shot, for which values of p should you pick one game
or the other?


*/


/*6_3

Dominos: There is an 8x8 chessboard in which two diagonally opposite corners have been cut off.
You are given 31 dominos, and a single domino can cover exactly two squares. Can you use the 31
dominos to cover the entire board? Prove your answer (by providing an example or showing why
it's impossible).

64 - 2 = 62 , 31 dominos

 */


/* 75% chance for it to collide
    h h h good
    h l l
    h h l
    h l h
    l h l
    l l h
    l h h
    l l l good


    2^n - 2 / 2^n to collide
 * /

 /* 6_5 jugs of water
  * 5 into 3
  * 2 left , dump 3,
  * pour 2 into 3,
  * pour five, pour until 3 full, five has 4 left
  */

/* 6_8 egg drop problem
 * drop first egg at midpoint, if it breaks then n is bottom set, else upper
 * use second egg to slowly increment from start or middle 1 by one since it doesnt break
 * until you reach n
 */


#endif // MATH_LOGIC_QUESTIONS_HPP
