#include <stdio.h>
#include <stdlib.h>

void vuln() {
   char buf[0x69];
   printf("%p\n",&buf);
   gets(buf);
}

int main() {
   printf("Do you even shellcode bro?\n");
   vuln();
   return 0;
}
