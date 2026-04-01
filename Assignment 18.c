#include <stdio.h>
#include <string.h>
int strLength(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
void strReverse(char str[], char rev[]) {
    int len = strLength(str);
    int i;
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';
}
int strEqual(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}
int isPalindrome(char str[]) {
    char rev[100];
    strReverse(str, rev);
    return strEqual(str, rev);
}
int isSubstring(char str[], char sub[]) {
    int i, j;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
            return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100], sub[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Length of string: %d\n", strLength(str1));
    strReverse(str1, rev);
    printf("Reversed string: %s\n", rev);
    printf("Enter another string to compare: ");
    scanf("%s", str2);

    if(strEqual(str1, str2))
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    if(isPalindrome(str1))
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");
    printf("Enter substring to check: ");
    scanf("%s", sub);

    if(isSubstring(str1, sub))
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}
