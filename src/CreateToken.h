#ifndef _CREATETOKEN_H
#define _CREATETOKEN_H
#include "Token.h"

Token *createInteger(int value);
Token *createIdentifier(char *str);
Token *createVariable(char *str);


#endif // _CREATETOKEN_H
