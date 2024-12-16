
extern "C" int gcd(long long a, long long b) {
    int result;
    __asm {
        mov eax, DWORD PTR a
        mov ebx, DWORD PTR b
        gcd_loop :
        cmp eax, ebx
            je end_gcd
            jg greater_a
            xchg eax, ebx
            greater_a :
        sub eax, ebx
            jmp gcd_loop

            end_gcd :
        mov result, eax
    }
    return result;
}