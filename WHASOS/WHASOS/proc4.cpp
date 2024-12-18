extern "C" int lcm(int a, int b) {
    int resultg;
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
        mov resultg, eax
    }


    long long gcd_result = resultg;
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
