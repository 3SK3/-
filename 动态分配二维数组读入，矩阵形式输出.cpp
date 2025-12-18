#include<stdio.h>
#include<stdlib.h>
int main(){
	int **a,n ,m;
	scanf("%d %d",&n,&m);
	a=(int **)malloc(sizeof(int *)*n);
	for(int i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*m);
	}
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            a[i][j] = -10 * a[i][j]; 
        }
    }
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            if (j < m - 1) {
                printf(" ");  
            }
        }
        printf("\n");  
    }
	
	
	for(int i=0;i<n;i++){
		free(a[i]);
	}
	free(a);
}

