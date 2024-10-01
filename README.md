# Calls to Assembly from C

## Requeriments

- NASM (Netwide Assembler)
```bash
sudo apt install nasm
```
- GCC (GNU Compiler Collection)
```bash
sudo apt install build-essential
```

## Assemble:
```bash
nasm -f elf64 -o sum.o sum.asm
```
## Compile C:
```bash
gcc sum.c sum.o -o app
```
# Run
```bash
./app
```