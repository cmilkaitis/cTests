{
    // Opens dictionary file and error checks
    FILE *infile = fopen("words", "r");


    if ( infile == NULL )
    {
        printf("File could not open.\n");
        return 1;
    }

    char word[10];
    string hashtable[4];
    int hash_position = 0;
    node *head = NULL;
    // node *new_node = NULL;
    // loop over each word via file formart until you reach End Of File
    while ( fscanf(infile, "%s\n", word) != EOF )
    {
        
        
        new_node = malloc(sizeof(node));
        new_node -> node_word = word;
        new_node -> next = NULL;
        hashtable[hash_position] = new_node -> node_word;

        printf("%s\n", hashtable[hash_position]);
        hash_position++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", hashtable[i]);
    }

    return 0;
}