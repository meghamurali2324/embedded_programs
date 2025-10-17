#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    reg |= (1 << 2);  
    reg &= ~(1 << 5); 
    reg ^= (1 << 0);  
    return reg;      
}

int main()
{
    unsigned char reg = 0x55; 
    unsigned char result = modifyRegister(reg);
    printf("Modified value: 0x%02x\n", result);
    return 0;
}