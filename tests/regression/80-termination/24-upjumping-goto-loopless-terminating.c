// TODO LOCAL_TERM PARAM: --set "ana.activated[+]" termination --enable warn.debug --set ana.activated[+] apron --enable ana.int.interval --set ana.apron.domain polyhedra
#include <stdio.h>

int main() {
    goto mark2;

mark1:
    printf("This is mark1\n");
    goto mark3;

mark2:
    printf("This is mark2\n");
    goto mark1;

mark3:
    printf("This is mark3\n");

    return 0;
}
