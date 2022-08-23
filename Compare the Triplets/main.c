#include "stdio.h"
int main() 
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	
	int person1[3] , person2[3] , p1 = 0 , p2 = 0  ; 
		for ( int i = 0 ; i<3 ; i++ )
	{
		scanf("%d",&person1[i] )  ; 	
	}
		for ( int i = 0 ; i<3 ; i++ )
	{
		scanf("%d",&person2[i] )  ; 	
	}
	for ( int i = 0 ; i<3 ; i++ )
	{
		if ( person1[i] > person2[i] )
			p1++ ; 
		else if ( person1[i] < person2[i] )
			p2++ ; 
		else
			continue ;
	}			
	printf("%d %d",p1,p2) ; 
	return 0 ; 
}