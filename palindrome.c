#include <stdio.h>

int main() {
    int num, digit, reverse = 0, temp;

    printf("Enter number: ");
    scanf("%d", &num);
    
    temp = num;   

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (num == reverse)
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is not a Palindrome\n", num);

    return 0;
}

 