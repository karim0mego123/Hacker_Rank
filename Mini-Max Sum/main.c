/*
 * main.c
 *
 *  Created on: Aug 22, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	unsigned long  x[5] ;
	unsigned long long sum = 0  ;
	for ( int i = 0 ; i < 5 ; i++ )
	{
		scanf("%lu",&x[i]) ;
	}
	int min = x[0] ;
	int max = x[0] ;
	for ( int i = 0 ; i < 5 ; i++ )
	{
		if ( min > x[i] )
			min = x[i] ;
		else if ( max < x[i] )
			max = x[i] ;
		sum += x[i] ;
	}
	printf("%lld %lld",sum-max,sum-min) ;
	return 0 ;
}

