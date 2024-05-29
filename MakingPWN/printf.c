#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char string[5];

void build() {
    string[0] = 49;
    string[1] = 51;
    string[2] = 51;
    string[3] = 55;
    string[4] = '\0';
}
int main() {
    build();
    printf("%s",string);
    srand(time(NULL));
    int key = rand();
    int guess = 0;

    char vuln[0x100];
    fgets(vuln,0xfff,stdin);
    printf(vuln);
    
    scanf("%d",&guess);

    if(guess == key){
	system("/bin/sh");
    } else {
	puts("WRONG!");
	return 0;
    }
}
