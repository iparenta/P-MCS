#include <stdio.h>


// void Func(int A[][3]) // passing 2-D array
// {

// } prva dimenzija moze ostati otvorena, ostale moraju biti precizirane A[][x][x]

int main()
{
    int C[3][2][2] = {{{2,5},{7,9}},
                      {{3,4},{6,1}},
                      {{0,8},{11,13}}};

    printf("%d %d %d %d \n", C, *C, C[0], &C[0][0]);
    printf("%d \n", *(C[0][0]+1));
}