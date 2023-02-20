/*
 * Program1.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Carter
 */
#include <stdio.h>

int minmax(int arr[]){
	int i;
	int n;
	int min = arr[4];
	int max = arr[4];
	for (i=0; i<n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
		if (arr[i] > max){
			max = arr[i];
		}
	}
	printf("Minimum sales: $%d", min);
	printf("Maximum sales $%d", max);
	return 0;
}
int avg(int arr[]){
	int i;
	int t;
	int n = 12;
	for (i=0; i<n; i++){
		t += arr[i];
	}
	printf("Average Sales: $%d", t/n);
	return 0;
}

int main(){
	int arr[] = {23458, 40112, 56011, 37820, 37904, 60200, 72400, 56210, 67230, 68233, 80950, 95225};
	printf("Sales Reports");
	printf("January: $%d\n", arr[0]);
	printf("Febuary: $%d\n", arr[1]);
	printf("March: $%d\n", arr[2]);
	printf("April: $%d\n", arr[3]);
	printf("May: $%d\n", arr[4]);
	printf("June: $%d\n", arr[5]);
	printf("July: $%d\n", arr[6]);
	printf("August: $%d\n", arr[7]);
	printf("September: $%d\n", arr[8]);
	printf("October: $%d\n", arr[9]);
	printf("November: $%d\n", arr[10]);
	printf("December: $%d\n", arr[11]);
	printf("Sales Summary:");
	mimmax(arr);
	avg(arr);
	return 0;
}
