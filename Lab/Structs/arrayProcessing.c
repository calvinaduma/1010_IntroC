/*	Calvin Aduma
	CPSC 1111-Section 003
	Lab 10
	This lab prints data stored in an array of structures.
*/

#include "defs.h"

void printArray(food foods[], int size){
	// prints array headline
	printf("FOOD ITEM	      	    QUANTITY  CALS    PRO  CARBS  FAT\n");
	
	// prints array elements
	for(int i=0;i<size;i++){
	/*	printf("%s %s %d %0.2f %0.2f %0.2f\n",foods[i].item,
			foods[i].quantity, foods[i].calories,
			foods[i].protein, foods[i].carbs,
			foods[i].fats);
	*/
		printf("%d. %-25s %7s %5.2d %7.2f %5.2f %5.2f\n",i+1,
		foods[i].item,foods[i].quantity,foods[i].calories,
		foods[i].protein,foods[i].carbs,foods[i].fats);
	}
}
