/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n , i = 0 , j = 0 , s = 0 ;
	scanf("%d", &n);
	int p = 2 * n - 1 ;
	int y[p][p] , r = 0  ;
	r = p ;
	for ( int e = 0 ; e < p ; e++)
	{
		for ( i = s ; i < r ; i++ )
		{
			for ( j = s ; j < r ; j++ )
			{
				if ( i == s || j == s || i == (r-1) || j == (r-1) )
					y[i][j] = n ;
			}
		}
		r-- ;
		s++ ;
		n-- ;
	}
	for ( i = 0 ; i < p ; i++ )
	{
		for ( j = 0 ; j < p ; j++ )
		{
			printf("%d ",y[i][j]) ;
		}
		printf("\n") ;
	}
	return 0;
}

