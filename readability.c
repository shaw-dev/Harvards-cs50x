#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);




int main(void)
{
    string text = get_string("Text: ");


    int i = strlen(text);

    float _letters = count_letters(text);
    float _words = count_words(text);
    float _sentences = count_sentences(text);



    float L = 100 * (_letters / _words);
    float S = 100 * (_sentences / _words);

    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }



}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }

    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 32)
        {
            words++;
        }
    }

    return words;
}


int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i]) == 46)
        {
            sentences++;
        }

    }

    return sentences;
}