#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int result = 0;

    // Inline assembly for GCC/Clang
    asm (
        "movl %1, %%eax \n\t"  // Move the value of 'a' into the EAX register
        "addl %2, %%eax \n\t"  // Add the value of 'b' to the EAX register
        "movl %%eax, %0"       // Move the result from EAX to the 'result' variable
        : "=r" (result)        // Output: result is stored in a register
        : "r" (a), "r" (b)     // Input: a and b are stored in registers
        : "%eax"               // Clobbered register: EAX
    );

    // Output the result
    std::cout << "The result of " << a << " + " << b << " is " << result << std::endl;

    return 0;
}