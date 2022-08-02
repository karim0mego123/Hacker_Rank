#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int n ,  i , j , u = 0 , r , y , p   ;
	scanf("%d", &n);
	p = 2*n - 1 ;
	int a[p][p] ;
	r = p - 1  ;
	for ( y = n ; y>0 ; y-- )
	{
		for (  i = u ; i<=r ; i++ )
		{
			for (  j = u ; j<=r ; j++ )
			{
				a[i][j] = n ;
			}
		}
			u++ ;
			r-- ;
			n-- ;
	}
	for (  i = 0 ; i<p ; i++ )
	{
		for (  j = 0 ; j<p ; j++ )
		{
			printf("%d ",a[i][j]) ;
		}
		printf("\n") ;
	}

	return 0;
}
