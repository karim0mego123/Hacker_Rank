/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: karim
 */
#include "string.h"
#include <stdio.h>
int y ;
int main()
{
	int  i = 0 ;
	printf("enter number of strings you want to enter = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&y) ;
	char x[y][100] ;
	for (  i = 0 ; i < y ;i++ )
	{
		scanf("%s",x[i]) ;
	}
	void string_sort( char x[y][100] , int y  ) ;
	string_sort ( x , y  ) ;
	void string_space ( char x[y][100] , int y ) ;
	string_space ( x , y ) ;
	return 0;
}
void string_sort( char x[y][100] , int len  )
{
	int i = 0 , j = 0 ;
	char temp [y][100] ;
	for ( i = 0 ; i < len ; i++  )
	{
		for ( j = i+1 ; j < len ; j++ )
		{
			if ( ( strcmp ( x[i] , x[j] ) ) < 1  )
			{
				strcpy ( temp[i] , x[j] ) ;
				strcpy ( x[j] , x[i] ) ;
				strcpy ( x[i] , temp[i] ) ;
			}
		}
	}
	for ( i = 3 ; i>=0 ; i--)
	{
		printf("%s\n",x[i]) ;
	}
	for (  i = 0 ; i< 4 ;i++ )
	{
		printf("%s\n",x[i]) ;
	}

}
void string_space ( char x[y][100] , int y )
{
	char temp[y][1000] ;
	for ( int i  = 0 ; i < y-1 ; i++  )
	{
		for ( int j = i+1 ; j<y ; j++ )
		{
			if ( strlen (x[i])  >= strlen (x[j]) )
			{
				strcpy ( temp[i] , x[j] ) ;
				strcpy ( x[j] , x[i] ) ;
				strcpy ( x[i] , temp[i] ) ;
			}
		}
	}
	for ( int i = 0 ; i< y ; i++ )
	{
		printf("%s\n",x[i]) ;
	}
	for ( int i = 0 ; i< y ; i++ )
	{
		printf("%s\n",x[i]) ;
	}
}
