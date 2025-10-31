#include <stdio.h>

int main() {
    int arr[6] = {2, 7, 9, 4, 6, 3};
    int even = 0, odd = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d, Odd = %d", even, odd);
    return 0;
}
