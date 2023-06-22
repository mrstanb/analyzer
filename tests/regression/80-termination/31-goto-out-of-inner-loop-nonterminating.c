// NON_LOCAL_TERM PARAM: --set "ana.activated[+]" termination --enable warn.debug --set ana.activated[+] apron --enable ana.int.interval --set ana.apron.domain polyhedra
#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;

    // Outer loop for rows
    for (int i = 1; 1; i++) {
        // Inner loop for columns
        for (int j = 1; j <= columns; j++) {
            if (j == 3) {
                printf("Goto as continue for outer loop\n");
                goto outer_loop;  // Jump to the label "outer_loop"
            }
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
        outer_loop:;  // Label for the outer loop
    }

    return 0;
}
