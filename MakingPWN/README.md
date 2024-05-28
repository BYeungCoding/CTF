These are the different methods of PWN that I have learned

bof32/bof64: Simple buffer overflow in 32 bit and 64 bit
   -Compiled with:
	"gcc -o bof32 -m32 -fno-stack-protector -no-pie bof.c"
	"gcc -o bof64 -fno-stack protector -no-pie bof.c"

shellcode: Simple shellcode problem in 64 bit
   -Compiled with:
	"gcc -o shellcode -fno-stack-protector -no-pie -z execstack shellcode.c"

ROPchain: Simple ROPchain that uses an argument passed into a win function
   -Compiled with:
	"gcc -o ROPchain -fno-stack-protector -no-pie ROPchain.c"
