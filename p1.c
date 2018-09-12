/* -----------------------------------------------------------------------------------------------------------------------
 
Program file: p1.c
Author:       Sumofitsparts
Date:         September 11, 2018
Objective:    This program takes my birthday and birthmonth and adds 100 and 10 to them respectively.  It then calculates the sum, difference, product, quotient, and remainder of those two numbers and prints the results.

 -----------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    /* Variable Declarations */
    
    int sum;
    int difference;
    int product;
    int quotient;
    int remainder;
    int birthMonth;
    int birthDay;
    int birthMonthAdd;
    int birthDayAdd;
    int birthMonthResult;
    int birthDayResult;
    
    /* My birthmonth and day */
    
    birthMonth = 1;
    birthDay = 1;
    
    /* Numbers to be added to my birthmonth and day */
    
    birthMonthAdd = 10;
    birthDayAdd = 100;
    
    /* The result of previous numbers being added to my birthmonth and day */
    
    birthMonthResult = birthMonth + birthMonthAdd;
    birthDayResult = birthDay + birthDayAdd;
    
    /* Calculations for the various operators */
    
    sum = birthDayResult + birthMonthResult;
    difference = birthDayResult - birthMonthResult;
    product = birthDayResult * birthMonthResult;
    quotient = birthDayResult / birthMonthResult;
    remainder = birthDayResult % birthMonthResult;
    
    /* Displaying the results of the calculations */
    
    printf("Daniel's birthday is on April %i\n\n", birthDay);
    printf("The two numbers Daniel used in this program are %i and %i\n\n", birthDayResult, birthMonthResult);
    printf("The Product of %i and %i equals %i\n", birthDayResult, birthMonthResult, product);
    printf("The Quotient of %i and %i equals %i with remainder %i\n", birthDayResult, birthMonthResult, quotient, remainder);
    printf("The Sum of %i and %i equals %i\n", birthDayResult, birthMonthResult, sum);
    printf("The Difference of %i and %i equals %i\n\n", birthDayResult, birthMonthResult, difference);
    printf("Thanks for running Daniel's first program\n\n");
    
    return 0;
    
} /* end main */
