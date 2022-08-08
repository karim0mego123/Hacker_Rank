/*
 * main.c
 *
 *  Created on: Aug 4, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int  a[10] = {0} , i = 0 , r ;
	char x[1000] ;
	scanf("%s",x) ;
	r = strlen(x) ;
	while( r+1 )
	{
	    --r ;
	    	if ( x[r] < '0' || x[r] >'9' )
			continue ;
		i= x[r] ;
		++a[i-48] ;
	}
	for (  i = 0 ; i<10 ; i++ )
	{
		printf("%d ",a[i] ) ;
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}