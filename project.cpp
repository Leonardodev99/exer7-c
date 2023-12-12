#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void encontraElementosUnicos(int mat[], int n){
	int i, j;
	printf("Elementos únicos no array fornecido são: ");
    for ( i = 0; i < 11; i++) {
        for (j = 0; j < i; j++) {
            if (mat[i] == mat[j]) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", mat[i]);
        }
    }
    printf("\n");	

}

int main(int argc, char *argv[]) {
	int n =11;
	int mat[n];
	int i,j;
	
	
	
	for(i=0; i<n; i++){
		scanf("%d",&mat[i]);
		
	}
	printf("\n");
	 
	printf("O array fornecido é:");
		for(i=0; i<11; i++){
		printf("%d ",mat[i]);
		
	}
	printf("\n");
	encontraElementosUnicos(mat, n);

    
	system("pause");
	
	return 0;
}


