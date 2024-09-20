#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int vowel_count = 0, consonant_count = 0, char_count = 0, word_count = 0;
    printf("Enter Your Text: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != NULL; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == ('A' + 32) || str[i] == ('E' + 32) || str[i] == ('I' + 32) || str[i] == ('O' + 32) || str[i] == ('U' + 32))
        {
            vowel_count++;
        }
        else if (((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) && (str[i] != 'A' || str[i] != 'E' || str[i] != 'I' || str[i] != 'O' || str[i] != 'U' || str[i] != ('A' + 32) || str[i] != ('E' + 32) || str[i] != ('I' + 32) || str[i] != ('O' + 32) || str[i] != ('U' + 32)))
        {
            consonant_count++;
        }
        if (str[i] == 32 || i == strlen(str) - 1)
        {
            word_count++;
        }
        else
        {
            char_count++;
        }
    }
    printf("\nTotal Vowels: %d", vowel_count);
    printf("\nTotal Consonants: %d", consonant_count);
    printf("\nTotal Characters: %d", char_count);
    printf("\nTotal Words: %d", word_count);
    return 0;
}
