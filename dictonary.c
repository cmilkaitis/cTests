// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

// Define the structure for linked lists
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
list_node;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Opens dictionary file and error checks
    FILE *in = fopen(dictionary, "r");

    if ( in == NULL )
    {
        printf("File does not exist.\n");
        return 1;
    }

    // Set word to LENGTH as defined in dic.h plus 1 for '\0'
    char word[LENGTH + 1];

    // loop over each word via file formart until you reach End Of File
    while ( fscanf(in, "%s\n", word) != EOF )
    {
        // Being to create linked list by allocating memory for new nodes
        list_node *node = malloc(sizeof(list_node));
        printf("%s\n", word);
    }


return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
