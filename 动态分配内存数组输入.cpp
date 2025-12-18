#include<stdio.h>
#include<stdlib.h>
int * create(int n){
	if(n <= 0){
		return NULL;
	}
	int * p = (int *)malloc(sizeof(int)*n);
	for(int i = 0;i < n;i++){
		scanf("%d", &*(p+i));
	}
	return p;
}
void cal(int * array, int size){
	int sum = 0, max = *array, min = *array;
	double average;
	for(int i = 0;i < size;i++){
		sum += array[i];
	}
	printf("%d\n", sum);
	average = (double)sum / size;
	printf("%.2lf\n", average);
	for(int i = 0;i < size;i++){
		if(*(array+i) > max){
			max = array[i];
		}
		if(*(array+i) < min){
			min = array[i];
		}
	}
	printf("%d\n%d\n", max, min);
}

