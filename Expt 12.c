#include <stdio.h>
#include <string.h>
#define MAX 100005

int isBalanced(char* s) {
    char stack[MAX];
    int top = -1;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char current = s[i];
        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        }
        else {
            if (top == -1) return 0;
            char last = stack[top--];
            if ((current == ')' && last != '(') ||
                (current == '}' && last != '{') ||
                (current == ']' && last != '[')) {
                return 0;
            }
        }
    }
    return (top == -1);
}

int main() {
    char* tests[] = {"{[()]}", "()[]{}", "([]", "{([)]}"};
    for(int i = 0; i < 4; i++) {
        if (isBalanced(tests[i])) {
            printf("Input: %s -> Output: true\n", tests[i]);
        } else {
            printf("Input: %s -> Output: false\n", tests[i]);
        }
    }
    return 0;
}
