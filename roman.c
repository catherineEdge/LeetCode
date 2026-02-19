#include <stdio.h>
#include <string.h>

int value(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        int s1 = value(s[i]);
        if(i + 1 < len) {
            int s2 = value(s[i+1]);
            if(s1 < s2) {
                total += (s2 - s1);
                i++;
            } else {
                total += s1;
            }
        } else {
            total += s1;
        }
    }
    return total;
}

int main() {
    char roman[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);
    printf("Integer value: %d\n", result);

    // <- add this line to pause before exiting
    printf("Press Enter to exit...");
    getchar(); // consumes leftover newline from scanf
    getchar(); // waits for user to press Enter

    return 0;
}
