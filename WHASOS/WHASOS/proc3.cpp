
//extern "C" System::String^ converttobase(int num, int base) {
//    char result[33];
//    int index = 0;
//
//    __asm {
//        mov eax, num
//        mov ebx, base
//        lea edi, result
//        xor ecx, ecx
//
//        start_conversion :
//        xor edx, edx
//            div ebx
//            add dl, '0'
//            cmp dl, '9'
//            jle store_digit
//            add dl, 7
//
//            store_digit:
//        mov[edi + ecx], dl
//            inc ecx
//            test eax, eax
//            jnz start_conversion
//
//            mov index, ecx
//    }
//    System::String^ output;
//    for (int i = index - 1; i >= 0; --i) {
//        output += result[i];
//    }
//}