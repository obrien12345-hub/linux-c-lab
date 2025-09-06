#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "word_count.h"

#define MAX_WORD_LEN 128

int main(void) {
    WordCount *word_counts;
    init_words(&word_counts);

    char buffer[MAX_WORD_LEN];

    // Read words from stdin
    while (scanf("%127s", buffer) == 1) {
        add_word(&word_counts, buffer);
    }

    // Print results
    print_words(word_counts);

    return 0;
}
