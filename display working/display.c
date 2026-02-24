/*

objdump -d program | less          # see PLT stubs
readelf -r program                  # see relocation entries
ldd program                         # see which shared libraries are needed

*/

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}