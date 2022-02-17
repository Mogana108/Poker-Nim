#include <stdio.h>

int main() {
    int T;
   scanf ("%d",&T);
    while(T > 0) {
        int n, k;
        int nimSum, tmp;
        scanf ("%d %d %d",&n,&k,&nimSum);
        for(int i = 1; i < n; i++) {
           scanf ("%d",&tmp);
            nimSum ^= tmp;
        }
        if(nimSum != 0) {
            printf("First\n");
        } else {
           printf("Second\n");
        }
        T--;
    }
    return 0;
}
