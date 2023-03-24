#include <goblint.h>
#include <pthread.h>

int g = 1;

void* t_fun(void *arg) {
    g = 0;
    return NULL;
}

int main() {
    pthread_t id;
    pthread_create(&id, NULL, t_fun, NULL); // just go multithreaded

    int x;
    x = g;
    while (1) {
        g = x;
        __goblint_check(x == 1); // UNKNOWN before, success after
        x = g;
    }

    return 0;
}