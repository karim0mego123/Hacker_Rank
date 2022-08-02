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
    scanf("%c",&character) ;
    scanf("%s\n",word) ;
    scanf("%[^\n]%*c", sentence);
     printf("%c\n%s\n%s\n",character,word,sentence) ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

