# ThisOS
ThisOS is a hobby OS, dont expect it to move anywhere fast or move anywhere at all, I work on it when I get time to.

## Tools Needed
- A i686-elf gcc compiler  
[Information on how to do this can be found here](https://wiki.osdev.org/GCC_Cross-Compiler)  
Don't take this the wrong way but if you can't make the cross compiler then how can I expect you to make a useful contribution  

## How to setup the environment
- first add the cross-compiler to your path  
[If you dont know how to do that click here and scroll down to the "Preparation" section](https://wiki.osdev.org/GCC_Cross-Compiler)
- Then build the system by going to the project root and doing ./clean.sh then ./headers.sh finally do ./iso.sh
- Take the ThisOS.iso and run it using your favorite emulator (currently only tested in QEMU on Linux and Windows)