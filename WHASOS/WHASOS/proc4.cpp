

extern "C" int lcm(int a, int b) {
long long gcd_result = __gcd(a, b);
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
