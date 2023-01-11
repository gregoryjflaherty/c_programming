/*
Name: John Smith Date: Jan 1st, 1900 - This is called top level comments
Include top level comments in every assignment 
final grade is the average of a midterm and a final exam
*/ 

#include <stdio.h>

int main(){

/*
C Programs must declare variables at the top of a function which uses them. 
After the first executable statement, you cannot declare any more variables. 
You must plan ahead and request the variables that you need up front.

It is always a good idea to initialize your variables with a value to avoid 
the bug caused by using a variable that has not be initialized which happens 
a lot to new programmers.

C, unlike Visual Basic, will throw garbage values into your uninitialized variables, 
so lacking initializations will always result in computations that are not correct
*/

int score = 0; 
double total = 0; 
double average = 0; 

/*
It is always a good idea to output a prompt for the data you are trying to read.
*/  

printf("I'm going to calculate averages\n"); 
printf("based on a midterm and final score\n"); 
printf("Gimme your midterm score\n"); 

// scanf function is how you read from the Console. The first string is the formatting 
// string which C uses to figure out how to read the value. %d is used to read int values. 
// Scanf stores the input into a variable that is always preceded by the & symbol. 
// This means we are reading a value directly into the score variable.

scanf("%d", &score);
total = score; 
printf("Gimme your final score: "); 
scanf("%d", &score); 
total = total + score; 
average = total / 2; 

/*
printf function accepts the same formatting codes used by scanf. %f is a placeholder for the 
value in the variable listed at the end of the call which is the average variable.
When working with printf, no & symbol can be used before the variable name.
Until we learn more, please try to remember this difference between scanf and printf. */

printf("Your avergae is %f\n", average); 
return (0); 
}
