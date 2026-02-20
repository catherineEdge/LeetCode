#include <stdio.h>
#include <stdbool.h> 

bool isPalindrome(int x) { 
    if (x < 0) 
        return false;

    int t = x;
    long long r = 0;

    while (x != 0) {
        int d = x % 10;
        r = r * 10 + d;
        x = x / 10;
    }

    return r == t;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
