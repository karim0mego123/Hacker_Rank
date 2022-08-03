/*
 * main.c
 *
 *  Created on: Aug 3, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x[3][3] = { {1,2,3} , { 4,5,6} , {6,7,8} } ;
	for ( int* i = &x ; i < *x+9 ; i++ )
		printf("address = %x --------- value = %d\n",(unsigned int* ) i,*i) ;
	return 0 ;
}

