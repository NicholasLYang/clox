#ifndef clox_vm_h
#define clox_vm_h

#include "chunk.h"

// IP = Instruction Pointer. Points to the next instruction to be
// executed
typedef struct {
  Chunk* chunk;
  uint8_t* ip;
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
void freeVM();

InterpretResult interpret(Chunk* chunk);

#endif

