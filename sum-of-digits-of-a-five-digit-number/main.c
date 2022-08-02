/*
 * main.c
 *
 *  Created on: Aug 2, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n , r ,sum ;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while ( n )
    {
    	r = n % 10 ;
    	sum += r ;
    	n /=10 ;
    }
    printf("%d",sum) ;
    return 0;
}

