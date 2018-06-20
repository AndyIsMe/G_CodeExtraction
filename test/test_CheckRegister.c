#include "unity.h"
#include "CheckRegister.h"
#include "mock_Tokenizer.h"
#include <stdio.h>
#include "Token.h"
#include "Exception.h"
#include "toupper.h"

void setUp(void){}
void tearDown(void){}

void test_string(void)
{
  char *str = "X10-Y10";
  fillInVariableTable(&str);
}
