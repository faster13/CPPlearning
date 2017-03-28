#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int nod = 0;
    int count = 0;

    scanf("%d %d", &a, &b);
    //printf("%d %d", a, b);
    while(a ) {
        if(a > b) {
            a -= b;
            nod = a;
        }
        else if( b > a) {
            b -= a;
            nod = b;
        }
        else if((a + b) == 0) {
            break;
        }
        else if(a == 0) {
            nod = b;
            break;
        }
        else if(b == 0) {
            nod = a;
            break;
        }
        count++;
        printf("%d %d\n", a, b);
    }

    printf("%d %d", count, nod);

    return 0;
}