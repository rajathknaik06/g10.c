
/*Build a program for a small town where individuals are eligible to vote only if they are 18 years or older. Take the age of a person as input and indicate their eligibility. If the age is 18 or above, print "Eligible for Voting"; otherwise, print "Not eligible for Voting" using the ternary operator.

Input format :
The input is an integer n, representing the age of the person.

Output format :
The output displays either "Eligible for Voting" or "Not eligible for Voting" based on age.*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    printf("%s" ,(n >= 18) ? "Eligible for Voting" : "Not eligible for Voting");    //15
    return 0;  //18
    
}
