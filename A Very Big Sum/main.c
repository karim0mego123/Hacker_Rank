#include "stdio.h"
int main ()
{
	char x ; 
    long long sum  = 0 ; 
	long long int a[100] ; 
	scanf("%d",&x) ;
	for ( int i = 0 ; i < x ; i++ )
	{
		scanf("%lld",&a[i]) ;
			sum += a[i] ; 
	}
	printf("%lld",sum) ; 
	return 0 ; 
}