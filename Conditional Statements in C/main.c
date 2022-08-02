/*
 * main.c
 *
 *  Created on: Aug 2, 2022
 *      Author: karim
 */
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[9][6] = {"one","two","three","four","five","six","seven","eight","nine"} ;

int main()
{
    int x ;
    // int n = strtol(n_str, &n_endptr, 10);
    scanf("%d",&x) ;
    switch(x){
    case 1 :
        printf("%s",name[0]) ;
        break ;
    case 2 :
        printf("%s",name[1]) ;
        break ;
    case 3 :
        printf("%s",name[2]) ;
        break ;
    case 4 :
        printf("%s",name[3]) ;
        break ;
    case 5 :
        printf("%s",name[4]) ;
        break ;
    case 6 :
        printf("%s",name[5]) ;
        break ;
    case 7 :
        printf("%s",name[6]) ;
        break ;
    case 8 :
        printf("%s",name[7]) ;
        break ;
    case 9 :
        printf("%s",name[8]) ;
        break ;
    default :
        printf("Greater than 9") ;
        break ;
    }


    // Write Your Code Here

    return 0;
}
