#include "word_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_words(WordCount **wclist) {
    *wclist = NULL;
}

void add_word(WordCount **wclist, const char *word) {
    WordCount *curr = *wclist;

    while (curr) {
        if (strcmp(curr->word, word) == 0) {
            curr->count++;
            return;
        }
        curr = curr->next;
    }

    WordCount *new_node = malloc(sizeof(WordCount));
    new_node->word = strdup(word);
    new_node->count = 1;
    new_node->next = *wclist;
    *wclist = new_node;
}


void print_words(WordCount *wclist) {
    for (WordCount *curr = wclist; curr != NULL; curr = curr->next) {
        printf("%s: %d\n", curr->word, curr->count);
    }
}

void fprint_words(WordCount *wclist, FILE *outfile) {
    for (WordCount *curr = wclist; curr != NULL; curr = curr->next) {
        fprintf(outfile, "%s: %d\n", curr->word, curr->count);
    }
}

// Dummy sort implementation so compilation succeeds
void wordcount_sort(WordCount **wclist, bool (*less)(const WordCount *, const WordCount *)) {
    (void)wclist;
    (void)less;
    // TODO: implement sorting later
}
