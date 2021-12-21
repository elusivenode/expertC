#include <stdio.h>
#include <time.h>
#include <limits.h>

int main() {
    time_t seconds;
    unsigned int i;
    printf("Size of int in bytes: %ld\n", sizeof(i));
    printf("Size of time_t in bytes: %ld\n", sizeof(seconds));
    seconds = UINT_MAX;
    printf("Seconds: %ld ... converted to time via ctime() %s\n", seconds, ctime(&seconds));
    return 0;
}
