#include <stdio.h>
#include <string.h>

int Compare(char *chaine1, char *chaine2) {
    while (*chaine1 && *chaine2) {
        if (*chaine1 != *chaine2) {
            return 0; // The strings are different
        }
        chaine1++;
        chaine2++;
    }
    return *chaine1 == *chaine2;
}

// Function to convert a character to uppercase
char UpperCase(char c) {
    return (c >= 'a' && c <= 'z') ? c - 32 : c;
}

// Function to convert a character to lowercase
char LowerCase(char c) {
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

void displayMenu() {
    printf("Welcome back to our dictionary:\n");
    printf("==============================\n\n");
    printf("1. Add a word to the dictionary\n");
    printf("2. Search for a word in the dictionary\n");
    printf("Enter your choice: ");
}

void addWord(FILE *file) {
    char newWord[100];
    printf("Enter the word to add to the dictionary: ");
    scanf("%s", newWord);
    fprintf(file, "%s\n", newWord);
    printf("Word added succefully to the dictionary.\n");
}

int searchWord(FILE *file, char *word) {
    char dictWord[100];
    rewind(file);
    while (fscanf(file, "%s", dictWord) != EOF) {
        if (compare(word, dictWord)) {
            return 1;
        }
    }
    return 0;
}
int main() {
    FILE *dictionaryFile = fopen("dictionary.txt", "a+");
    if (!dictionaryFile) {
        printf("Error opening dictionary file.\n");
        return 1;
    }

    int choice;
    char word[6] = "AAAAA";
    char continueChoice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addWord(dictionaryFile);
                break;
            case 2:
                printf("Enter the word to search for: ");
                scanf("%s", word);
                int isPresent = searchWord(dictionaryFile, word);
                printf("The word is %s in the dictionary.\n", isPresent ? "present" : "not present");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("Do you want to continue (Q to quit)? ");
        scanf(" %c", &continueChoice);
    } while (continueChoice != 'Q' && continueChoice != 'q');

    fclose(dictionaryFile);
    return 0;
}
