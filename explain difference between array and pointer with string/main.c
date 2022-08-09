#include "string.h"
#include "stdio.h"

int main ()
{
	char a[] = "karim" ; // stored in stack
	printf("%s\n",&a[0]) ;
	char *b =  "karim" ; // stored in rom so we can not access there addresses
	printf("%s\n		%p\n",b,b) ;
	a[0] = 'a' ;
	printf("%s\n",&a[0]) ; // we can access easy char in strong stored in stack
	//         ---------------------------------------
	//b[1] = 'b' ; 	// will give me an error segmantation error becouse i
					//can not access addresses
	//printf("%s\n",b) ;
	//            ------------------------------------

	//a[6] = "ahmed" ;  // sagimentation error constant pointer
	                    // we acn not pointer to another place
	//printf("%s\n",&a[0]) ;
	//              ----------------------------------

	strcpy ( a , "ahmed" ) ; // here we copy a new string not point to another string
	printf("%s\n",&a[0]) ;
	b = "ahmed" ; // here we can change "string literal" point to another place
	printf("%s		%p\n",b,b) ;

	return 0 ;
}
