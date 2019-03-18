#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void sort(int n, int array[n]) {
    for (int i = 1; i < n; i ++) {
      int k = array[i];
      int j = i-1;
      while (j >= 0 && array[j] > k) {
        array[j+1] = array[j];
        j = j-1;
      }
      array[j+1] = k;
    }

    // for(int a = 0; a < n; a++) {
    //   printf("%d ", array[a]);
    // }
}

void testSort() {
    int a[5] = {12, 4, 8, 2, 7};
    int expected[5] = {2,4,7,8,12};
    sort(5, a);
    assert(a[0] == expected[0]);
    assert(a[1] == expected[1]);
    assert(a[2] == expected[2]);
    assert(a[3] == expected[3]);
    assert(a[4] == expected[4]);

    int b[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int expected2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    sort(20, b);
    for (int i = 0; i < 20; i++) {
        assert(b[i] == expected2[i]);
    }

    printf("All tests passed.\n");

}

int main(int n, char *args[n]) {

    testSort();
    return 0;
}
