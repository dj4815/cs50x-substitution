// Code currently not working properly

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure there is only one command line argument and its 26 letters long
    if ((argc == 2) && (strlen(argv[1]) == 26))
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // If not every character in argv is a letter
            if (!isalpha(argv[1][i]))
            {
                // Print error message
                printf("The key must only contain alphabetic characters!\n");
                return 1;
            }
        }
        // Check if every letter is only present once
        // Initialize array of size alphabet
        char letter_count[26];
        // Set all indices to 0
        for (int i = 0; i < 26; i++)
        {
            letter_count[i] = 0;
        }
        // Go over each letter in user input
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // Convert it to lowercase for calculation reasons(tm)
            char letter = tolower(argv[1][i]);
            // Increment the letter
            letter_count[letter - 'a'] += 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (letter_count[i] != 1)
            {
                printf("You may use each letter only once.\n");
                return 1;
            }
        }
        // Prompt user for text
        string plaintext = get_string("plaintext: ");
        // Make an array for ciphertext with the length of the plaintext +1
        char ciphertext[strlen(plaintext) + 1];
        char alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '',}
        for (int i = 0; i < strlen(plaintext); i++)
        {

        }
        // Loop over every letter in the plaintext
        for (int i = 0; i < strlen(plaintext); i++)
        {
            // If the letter is not alphabetical
            if (!isalpha(plaintext[i]))
            {
                // Add it to the ciphertext array as is
                ciphertext[i] = plaintext[i];
            }
            // If it is alphabetical
            else
            {
                //
                plaintext[i] += ciphertext[i] - plaintext[i];
            }
            }
        printf("ciphertext: %s", ciphertext);
    }
    else if ((argc == 2) && (strlen(argv[1]) != 26))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }







}
