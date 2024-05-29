#include <stdio.h>
#include <stdlib.h>

void leak() {
    puts("You're going to need this:");
    printf("%p\n",&leak);
}

void win() {
    system("/bin/sh");
}

void vuln() {
    char buf[48];
    gets(buf);
}

int main() {
    puts("Do you know how to conquer address randomization?");
    leak();
    vuln();
}
