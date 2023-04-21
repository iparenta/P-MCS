#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// callback function should compare two integers, should return 1 if first alement has
//higher rank, 0 if elemets are equal and -1 if second element has higher rank

int compare (int a, int b)
{
    if(a > b) return 1;
    else return -1;
}

int absolute_compare(int a, int b)
{
    if(abs(a)> abs(b)) return 1;
    return -1;
}

int compare_for_qsort(const void* a, const void* b)
{
    int A = *((int*)a);
    int B = *((int*)b);
    return A-B;
}

void BubbleSort(int *A, int n, int (*compare)(int,int))
{
    int i, j, temp;
    for (i =0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if (compare(A[j] ,A[j+1]) > 0){ // compare A[j] with A[j+1] and SWAP if needed
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}


int main(){
    int i, A[] = {3,2,1,5,6,4};
    BubbleSort(A,6,compare);
    for (i=0; i<6; i++){ 
        printf("%d ", A[i]);
    }
    printf("\n\n\n");

    int B[] = {-31,22, -1, 50, -6, 4};
    BubbleSort(B,6,absolute_compare);
    for (i=0; i<6; i++){ 
        printf("%d ", B[i]);
    }
    printf("\n\n\n");

    int C[] = {-31,22,-1,50,-6,4};
    qsort(C,6,sizeof(int),compare_for_qsort);
    for (i=0; i<6; i++){ 
        printf("%d ", C[i]);
    }
    printf("\n\n\n");

}