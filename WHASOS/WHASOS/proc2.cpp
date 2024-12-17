
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
extern "C" int lcm(long long a, long long b) {
    long long gcd_result = gcd(a, b);
    int result;
    __asm {
        mov eax, DWORD PTR a
        mov ebx, DWORD PTR b
        mov ecx, DWORD PTR gcd_result
        imul eax, ebx
        div ecx
        mov result, eax
    }
    return result;
}