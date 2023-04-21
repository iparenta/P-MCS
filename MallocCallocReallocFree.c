#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int));// dinamicalyy allocated array
    // int *A = (int*)calloc(n, sizeof(int)) //CALLOC ispise sve 0, tj vrsi incijalizaciju
    for(int i=0; i <n; i++)
    {
        A[i] = i+1;
    }
    //free(A); //Obrise podatke iz tih adresa i ostanu garbage values
    //A = NULL; //After free, adjust pointer to NULL

    int *B= (int*)realloc(A, 2*n*sizeof(int));// produzuje postojeci blok memorije ako moze, ako ne onda pravi novi veliki
    printf("Prev block address = %d, new address = %d", A, B);
    // for(int i=0; i<n; i++)
    // {
    //     printf("%d", A[i]);
    // }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", B[i]);
    }
    printf("\n");

}