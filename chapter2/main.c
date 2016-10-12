//
// Created by 董启宏 on 2016/10/12.
//
// 算法的威力！真的是厉害了！

#include <stdio.h>
#include <stdlib.h>
#include "MaxSubsequenceSum.h"
#include "util.h"
#include "fib.h"
#include "binary_search.h"

void testMaxSubsequence() {
    printTestHeader("Test MaxSubsequence");
    const int N = 1000;
    int* A = getSequence(N);


    printf("O(N^3): %d\n", MaxSubsequenceSum_ON3(A, N));
    printf("O(N^2): %d\n", MaxSubsequenceSum_ON2(A, N));
    printf("O(NLogN): %d\n", MaxSubsequenceSum_ONLogN(A, N));
    printf("O(N): %d\n", MaxSubsequenceSum_ON(A, N));

    free(A);
}

void testFib() {
    printTestHeader("Test Fib");

    const int N = 20;
    for (int i = 0; i < N; ++i) {
        printf("Fib(%d) = %ld\n", i, fib(i));
    }
}

void testBinarySearch() {
    printTestHeader("Test BinarySearch");

    const int N = 20;
    int* A = getLinearSequence(N);

    int n = rand() % N;
    printArray(A, N);
    printf("Find A[%d] = %d in A\n", n, A[n]);
    printf("BinarySearch(%d) = %d\n", A[n], BinarySearch(A, A[n], N));

    free(A);
}

int main(void) {
    testMaxSubsequence();
    testBinarySearch();
    testFib();
}