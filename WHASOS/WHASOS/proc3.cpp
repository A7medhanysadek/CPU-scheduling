
extern "C" int fast_power(int a, int b) {
    int result = 1;
    __asm {
        mov eax, 1
        mov ecx, b
        mov ebx, a
        power_loop :
        test ecx, 1
            jz skip_multiply
            imul eax, ebx
            skip_multiply :
        imul ebx, ebx
            shr ecx, 1
            jnz power_loop
            mov result, eax
    }
    return result;
}