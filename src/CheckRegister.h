#ifndef _CHECKREGISTER_H
#define _CHECKREGISTER_H
#include "Token.h"
#include "Tokenizer.h"
#include "error.h"
#include "toupper.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct OperandInfo OperandInfo;
struct OperandInfo {
  int X_value;
  int Y_value;
  int Z_value;
  int F_value;
};

void xyzf(Tokenizer *tokenizer , OperandInfo *operandInfo);

#endif // _CHECKREGISTER_H
