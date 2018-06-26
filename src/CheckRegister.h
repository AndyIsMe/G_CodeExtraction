#ifndef _CHECKREGISTER_H
#define _CHECKREGISTER_H
#include "Token.h"
#include "Tokenizer.h"
#include "Error.h"
#include "toupper.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Variable Variable;
struct Variable {
  char name;
  int integer;
  int fraction;
  int isValid;
};

struct VariableMap {
  char name;
  Variable *var;
};

// Variable *XVar = {0,0,0,0};
// Variable *YVar = {0,0,0,0};
// Variable *ZVar = {0,0,0,0};

// #define isCharacter(x)      (((x) >= 'a' && (x) <= 'z') || ((x) >= 'A' && (x) <= 'z'))
#define isDigit(x)          ((x) >= '0' && (x) <= '9')
// #define isSpace(x)          ((x) == ' ')

// void xyzf(Tokenizer *tokenizer , OperandInfo *operandInfo);
void fillInVariableTable(char **var);
void getNextVariable(char *line,Variable v);
// void getNextVariable(char **line,Variable v);
// void getNextVariable(char *line,Variable v);
#endif // _CHECKREGISTER_H
