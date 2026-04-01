#include <stdio.h>
#include <string.h>
void reverse(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Find Length\n");
        printf("2. String Copy\n");
        printf("3. String Concatenation\n");
        printf("4. String Compare\n");
        printf("5. String Reverse\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length of string: %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied string: %s\n", temp);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string: %s\n", temp);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                strcpy(temp, str1);
                reverse(temp);
                printf("Reversed string: %s\n", temp);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}
