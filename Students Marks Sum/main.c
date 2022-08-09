/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
	int sum = 0 ;
	if ( gender == 'b' )
	{
		for (int i = 0 ; i < number_of_students ; i = i+2 )
		{
			sum += marks[i] ;
		}
		printf("%d",sum) ;
	}
	else
	{
		for (int i = 1 ; i < number_of_students ; i = i+2 )
		{
			sum += marks[i] ;
		}
		printf("%d",sum) ;
	}
	return 0 ;
}

int main()
{
	int x  ;
	char y ;
	printf("enter number of studdents \n" ) ;
	fflush (stdin)  ; fflush (stdout)  ;
	scanf("%d",&x) ;
	int a[x] ;
	for ( int i = 0 ; i < x ; i++ )
	{
		scanf("%d",&a[i]) ;
	}
	scanf(" %c",&y) ;
	marks_summation( a , x , y ) ;
}

