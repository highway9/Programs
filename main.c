//
//  main.c
//  Programs
//
//  Created by Ashutosh Pandey on 15/01/16.
//  Copyright © 2016 Ashutosh Pandey. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "insertionSort.h"
#include "selectionSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int A[] = {10,23,32,45,32,100,23,34,444,31};
    selectS();
    printA(A, 999);
    selectSort(A,sizeof(A)/sizeof(int));
    printf("All set: Now printing the array\n");
    printA(A,sizeof(A)/sizeof(int));
    return 0;
}
