/*
 * main.c
 *
 *  Created on: Aug 4, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i ,temp , r;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    r = num ;
    for ( int i  = 0 ; i < (r/2) ; i++ )
    {
    	num-- ;
    	temp = arr[i] ;
    	arr[i] = arr[num] ;
    	arr[num] = temp ;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < r; i++)
        printf("%d ", *(arr + i));
    return 0;
}

