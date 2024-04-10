//
// Created by 1 on 10/04/2024.
//

#include <stdio.h>
#include "../models/Card.h"


void print_cards(Card* lists[], int size) {
    int done = 0;
    Card* current[size];
    for (int i = 0; i < size; i++) {
        current[i] = lists[i];
    }

    while (!done) {
        done = 1;
        for (int i = 0; i < size; i++) {
            if (current[i]) {
                printf("%s%s\t", current[i]->rank, current[i]->suit);
                current[i] = current[i]->next;
                done = 0;
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
}

