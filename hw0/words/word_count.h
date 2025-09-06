#ifndef WORD_COUNT_H
#define WORD_COUNT_H

#include <stdio.h>
#include <stdbool.h>

typedef struct WordCount {
    char *word;
    int count;
    struct WordCount *next;
} WordCount;


void init_words(WordCount **wclist);


void add_word(WordCount **wclist, const char *word);


void print_words(WordCount *wclist);


void fprint_words(WordCount *wclist, FILE *outfile);


void wordcount_sort(WordCount **wclist, bool (*less)(const WordCount *, const WordCount *));

#endif
