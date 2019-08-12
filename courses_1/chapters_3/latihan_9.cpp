#include <cstdio>

int main() {
    printf("%d\n", 'a' > 'A');
    printf("%d\n", 'a' < 'A');
    printf("%d\n", 'a' >= 'A');
    printf("%d\n", 'a' == 'A');
    
    printf("%d\n", "a" < "aa");
    printf("%d\n", "abcb" > "abca");
    printf("%d\n", "abc" == "abc");
    printf("%d\n", "abc" <= "abc");

    printf("\n");
    printf("Test 1: %d\n", "ab" <= "aac"); //FALSE
    printf("Test 2: %d\n", "ab" <= "aab"); //FALSE
    printf("Test 3: %d\n", "aA" <= "aac"); //TRUE
    printf("Test 4: %d\n", "aAc" <= "aa"); //TRUE
    printf("Test 5: %d\n", "aA" <= "a"); //FALSE
}