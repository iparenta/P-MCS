#include <stdio.h>
#include <stdlib.h>

// int Add(int a, int b) // called function by value
// {
//     printf("Adress of a in Add =%d \n",&a);
//     int c = a+b;
//     return c;
// }

// int Add(int* a, int* b) // called function by reference
// {
//     // a and b pointer to integers local to Add
//     printf("Adress of a in Add =%d \n",&a);
//     printf("Value in a of Add(address of a of main) =%d\n",a);
//     printf("Value at adress stored in a of Add =%d\n",*a);

//     int c = (*a)+(*b);
//     return c;
// }

int* Add(int* a, int* b){// called by reference but return adress
    int* c =(int*)malloc(sizeof(int));
    *c =  (*a) + (*b);
    return c;
}

int main(){ ///calling function
    int a = 2, b = 4;
    //printf("Adress of a in Add =%d \n",&a);
    // // call by value
    // int c = Add(a,b);// value in a of main is copied to a of Add
    // call by reference
    // int c = Add(&a, &b);// a and b are integers local to Main
    // printf("Sum = %d\n", c);//value in b of main is copied to b of Add
    int* ptr = Add(&a, &b);
    printf("Sum = %d\n", *ptr);
}