#include <stdio.h>
#include <stdbool.h>

// Validate parentheses
bool validateParentheses(const char *str) {
    int balance = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            balance++;
        } else if (str[i] == ')') {
            balance--;
            if (balance < 0) {
                return false;
            }
        }
    }

    return balance == 0; 
}

int main() {
    const char *test1 = "(())";
    const char *test2 = "(()))";
    const char *test3 = "(()(()))";

    printf("Test 1: %s -> %s\n", test1, validateParentheses(test1) ? "Valid" : "Invalid");
    printf("Test 2: %s -> %s\n", test2, validateParentheses(test2) ? "Valid" : "Invalid");
    printf("Test 3: %s -> %s\n", test3, validateParentheses(test3) ? "Valid" : "Invalid");

    return 0;
}