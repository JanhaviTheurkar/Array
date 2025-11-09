#include <stdio.h>
int main() {
    int a[6] = {5, 10, 15, 20, 25, 30};
    int low = 0, high = 5, key = 20, mid;
    int found = 0;
    
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Found at position %d", mid + 1);
            found = 1;
            break;
        } else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(!found) printf("Not found");
}
