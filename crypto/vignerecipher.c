#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{
    int shift;
    int KeyValue;
 
    if (argc != 2)
    {
        printf("No key or incorrect key. Run program and enter single alphabetical keyword in command line.\n");
        return 1;
    }
 
    string key = argv[1]; 
 
    for (int n = 0, keylength = strlen(argv[1]); n < keylength; n++)
    {
        if ((key[n] >= '0') && (key[n] <= '9'))
        {
            printf("Sorry! You were supposed to enter a keyword with only letters.  Boohoo.\n");
            return 1;
        }
    }
 
    string PlainText = GetString();   
 
    for(int i = 0, j = 0, length = strlen(PlainText); i < length; i++, j++)
    {
        if (j >= strlen(key))
        {
            j = 0;
        }
 
        KeyValue = key[j]; 
 
        if (!isalpha(PlainText[i]))
        {
            j = (j - 1);
        }  
 
        if ((KeyValue >= 'A') && (KeyValue <=  'Z'))
        {
            KeyValue = (KeyValue -  'A');
        }
 
        if ((KeyValue >= 'a') && (KeyValue <= 'z'))
        {
            KeyValue = (KeyValue - 'a');
        }
 
        shift = (PlainText[i] + KeyValue);

        if (isupper(PlainText[i]) && (shift > 'Z'))
        {
            shift = (shift - 26);
        }

        if (islower(PlainText[i]) && (shift > 'z'))
        {
            shift = (shift - 26);
        }
 
        if (isalpha(PlainText[i]))
        {
            printf("%c", shift);
        }

        else
        {
            printf("%c", PlainText[i]);
        }
 
    }  
    printf("\n");
    return 0;
}
