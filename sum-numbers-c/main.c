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
	int inum_1 , inum_2 ;
	float fnum_1 , fnum_2  ;
	scanf("%d %d",&inum_1,&inum_2) ;
	scanf("%f %f",&fnum_1,&fnum_2) ;
	printf("%d %d\n",inum_1+inum_2 ,inum_1-inum_2 ) ;
	printf("%.1f %.1f\n",fnum_1+fnum_2 ,fnum_1-fnum_2 ) ;

    return 0;
}

