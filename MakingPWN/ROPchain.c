#include <stdio.h>
#include <stdlib.h>

void win(int x){
    if(x != 0xf00d11f3){
	printf("Close, but not quite a hacker\n");
    	return;
    }
    system("/bin/sh");
}

void vuln(){
    char buf[69];
    gets(buf);
}

int main(){
    printf("Are you a hackerman?\n");
    vuln();
    return 0;
}
