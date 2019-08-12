#include <cstdio>

int main() {

    printf("%d\n", 2 > 1 );
    printf("%d\n", !(2 > 1));
    printf("%d\n", (2 > 1)  && (3 > 1));
    printf("%d\n", ((2 > 1) || (3 > 1)) && (1 == 1));
    
    printf("TES 1: %d\n", (1 == 1)  ^ !(1 == 1));
    printf("TES 2: %d\n", (1 != 1)  ^ !(1 == 1));
    printf("TES 3: %d\n", (1 == 1)  ^ !(1 != 1));
    printf("TES 4: %d\n", (1 != 1)  ^ !(1 != 1));
}