#include <stdio.h>
#include <string.h>

int Xstrlen(char str[]) {
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void Xstrcat(char str[], char str1[]) {
    int i,j;
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; str1[j] != '\0'; j++) {
        str[i] = str1[j];
        i++;
    }
    str[i] = '\0';  // Corrected to str[i] instead of str[i+1]
}

int Xstrcmp(char str[], char str1[]) {
    int i, j,k, flag = 0;
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; str1[j] != '\0'; j++);
    if (i == j) {
        for (k = 0; str[k] != '\0'; k++) {
            if (str[k] != str1[k]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            return 1;  // Strings are not equal
        } else {
            return 0;  // Strings are equal
        }
    } else {
        return 1;  // Strings are not equal
    }
}

void Xstrcpy(char str1[], char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        str1[i] = str[i];
    }
    str1[i] = '\0';  // Corrected to str1[i] instead of str1[i+1]
}

int main() {
    int choice;
    char str[100], str1[100];
    printf("1.strlen\n2.strcat\n3.strcpy\n4.strcmp\n5.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    getchar();  // To consume the newline character left by scanf

    switch (choice) {
        case 1:
            printf("Enter Your text: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';  // Removing the newline character
            printf("The length of the string is: %d\n", Xstrlen(str));
            break;
        case 2:
            printf("Enter first text: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';  // Removing the newline character
            printf("Enter second text: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';  // Removing the newline character
            Xstrcat(str, str1);
            printf("The concatenated string is: %s\n", str);
            break;
        case 3:
            printf("Enter Your text: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';  // Removing the newline character
            Xstrcpy(str1, str);
            printf("The copied string is: %s\n", str1);
            break;
        case 4:
            printf("Enter first text: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';  // Removing the newline character
            printf("Enter second text: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';  // Removing the newline character
            if (Xstrcmp(str, str1)) {
                printf("Strings are not equal\n");
            } else {
                printf("Strings are equal\n");
            }
            break;
        case 5:
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
