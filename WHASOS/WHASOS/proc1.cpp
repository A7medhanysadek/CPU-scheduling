
extern "C" int AddNumbers(int a, int b) {
    int result;
    __asm {
        mov eax, a    // Load a into eax
        add eax, b    // Add b to eax
        mov result, eax // Store result
    }
    return result;
}
