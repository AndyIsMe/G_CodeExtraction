#include "CreateToken.h"
#include <malloc.h>


Token *createInteger(int value) {
  IntegerToken *intToken = malloc(sizeof(IntegerToken));
  intToken->type = TOKEN_INTEGER_TYPE;
  intToken->value = value;
  return (Token *)intToken;
}

Token *createIdentifier(char *str) {
  IdentifierToken *idToken = malloc(sizeof(IdentifierToken));
  idToken->type = TOKEN_IDENTIFIER_TYPE;
  idToken->str = str;
  return (Token *)idToken;
}

Token *createVariable(char *str){
  VariableToken  *varToken = malloc(sizeof(VariableToken));
  varToken->type = TOKEN_VARIABLE_TYPE;
  varToken->str = str;
  return (Token *)varToken;
}
