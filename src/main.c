#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NICKNAME_LENGTH 10
#define ASCII_LETTERS "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"

int main(int argc, char **argv)
{
    const size_t ASCII_LETTERS_LENGTH = sizeof(ASCII_LETTERS) / sizeof(ASCII_LETTERS[0]);

    srand((unsigned int)(time(NULL)));

    int randomizer = rand() % 4;

    for (int i = 0; i < NICKNAME_LENGTH; i++)
    {
        const char rand_ascii_letter = ASCII_LETTERS[rand() % ASCII_LETTERS_LENGTH];
        randomizer = rand() % 4;
        printf("%c", rand_ascii_letter);
    }

    return 0;
}
