/*
 * main.c
 *
 *  Created on: Aug 22, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int pos = 0 , nag = 0 , zeros = 0 ;
	int size  ;
	scanf("%d",&size) ;
	int x[size] ;
	for ( int i = 0 ; i < size ; i++ )
	{
		scanf("%d",&x[i]) ;
		if ( x[i] > 0 )
			pos++ ;
		else if ( x[i] < 0 )
			nag++ ;
		else
			zeros++ ;
	}
	printf("%.6f\n%.6f\n%.6f",(pos/(float)size),(nag/(float)size),(zeros/(float)size)) ;
	return 0 ;
}

