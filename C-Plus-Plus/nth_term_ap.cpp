#include <iostream>
using namespace std;
int main(){
    int a1, a2, n;
    cout<<"Enter first term: ";
    cin>>a1;
    cout<<"Enter second term: ";
    cin>>a2;
    cout<<"Enter n: ";
    cin>>n;
    int d = a2 - a1;
    int tn = a1 + (n - 1) * d;
    cout<<tn;
    
    return 0;
}
/*
Problem:
Given the first two terms, a1 and a2, of an A.P. (Arithmetic Progression), and an integer n, find the value of nth term in the A.P.

The Step Involved are:
1.Take the first and second number from the user
2.Take the value of n also for the nth term in the A.P then 
3.Find the difference(d i.e. d= a2-a1) which can be used in the mathematical formula.
4.Make A variable tn and Apply the mathematical formula (i.e tn = a1 + (n-1)*d )
5. After the Applying the formula print the value of the tn

/************* And CONGRATS!!! you got your nth term in the A.P**************************/

For example -

Sample Input:
Enter first term: 2
Enter second term: 3
Enter n: 4

Sample Output:
5

Explanation:
The A.P. for this example would be - 2, 3, 4, 5, 6, 7, ...

Time complexity - O(1)
Space complexity - O(1)
*/
