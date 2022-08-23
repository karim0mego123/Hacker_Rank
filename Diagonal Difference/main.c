#include "stdio.h"
int main ()
{
	int x , sum1 = 0 , sum2 = 0 ; 
	scanf("%d",&x) ;
	int a[x][x] ; 
	for ( int i = 0 ; i < x ; i++ )
	{
		for ( int j = 0 ; j < x ; j++ ) 
		{
			scanf("%d",&a[i][j] ) ;
			if ( i == j ) 
				sum1 += a[i][j] ; 
			if ( ( (i+j) == (x-1) )  )
				sum2 += a[i][j] ;
			
		} 		
	}
	if ( sum1 > sum2 ) 
		printf("%d",sum1-sum2) ; 
	else
		printf("%d",sum2-sum1) ; 
	return 0 ; 
}