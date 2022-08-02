/*
 * main.c
 *
 *  Created on: Aug 2, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char character , word[100] , sentence[1000] ;
	printf("enter any char : " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&character) ;
	printf("enter any word : " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%s",word) ;
	printf("enter any word : " ) ;
	fflush(stdin) ; fflush(stdout) ;
	gets(sentence) ;
	printf("%c\n%s\n%s\n",character,word,sentence) ;
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}

