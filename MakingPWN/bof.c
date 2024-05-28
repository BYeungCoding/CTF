#include <stdio.h>
#include <stdlib.h>


void win() {
   system("/bin/sh");
}

void vuln() {
   char buf[32];
   gets(buf);
}

int main() {
   puts("What is buffer overflow?");
   vuln();
   return 0;
}	
