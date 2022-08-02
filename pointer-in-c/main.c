/*
 * main.c
 *
 *  Created on: Aug 2, 2022
 *      Author: karim
 */
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
	int y = *a ;
	*a = *a + *b ;
	*b = (y>*b)? (y-*b) : (*b-y) ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

