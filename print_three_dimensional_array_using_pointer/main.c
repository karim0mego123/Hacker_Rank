/*
 * main.c
 *
 *  Created on: Aug 3, 2022
 *      Author: karim
 */
#include "stdio.h"
int  main ()
{
	int a[2][2][2] = { { {1,2} , {3,4} }  , { {5,6} , {7,8} } } ;
	for ( int *i = **a ; i < **a+8; i++ )
	{
		printf("%d ",*i) ;
	}
	return 0 ;
}

