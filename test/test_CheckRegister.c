#include "unity.h"
#include "CheckRegister.h"
#include "mock_Tokenizer.h"
#include <stdio.h>
#include "Token.h"
#include "Error.h"
#include "Exception.h"
#include "toupper.h"

void setUp(void){}
void tearDown(void){}


void test_xyzf_a_expect_INVALID_VARIABLE(void)
{
    CEXCEPTION_T ex;
    OperandInfo operandInfo;
    Tokenizer *tokenizer = (Tokenizer *)0x0badface;
    char *str = "   x ";
    VariableToken varToken = {TOKEN_VARIABLE_TYPE,3,1,str,"a"};

    getToken_ExpectAndReturn(tokenizer,(Token *)&varToken);

    Try{
      xyzf(tokenizer,&operandInfo);
    }Catch(ex){
      dumpErrorMessage(ex, 1);
      TEST_ASSERT_EQUAL(NOT_VALID_VARIABLE,ex->errorCode);
    }
    freeException(ex);
}

void test_xyzf_x10_with_false_TOKEN_expect_INVALID_TOKEN_TYPE(void)
{
    CEXCEPTION_T ex;
    OperandInfo operandInfo;
    Tokenizer *tokenizer = (Tokenizer *)0x0badface;
    char *str = "   x10 ";
    VariableToken varToken = {TOKEN_VARIABLE_TYPE,3,1,str,"x"};
    IntegerToken intToken = {TOKEN_VARIABLE_TYPE,4,2,str,"10",10};

    getToken_ExpectAndReturn(tokenizer,(Token *)&varToken);
    getToken_ExpectAndReturn(tokenizer,(Token *)&intToken);

    Try{
      xyzf(tokenizer,&operandInfo);
    }Catch(ex){
      dumpErrorMessage(ex, 1);
      TEST_ASSERT_EQUAL(NOT_VALID_INTEGER_TYPE,ex->errorCode);
    }
    freeException(ex);
}

void test_xyzf_x5400_expect_overflow_to_occur(void)
{
    CEXCEPTION_T ex;
    OperandInfo operandInfo;
    Tokenizer *tokenizer = (Tokenizer *)0x0badface;
    char *str = "   x5400 ";
    VariableToken varToken = {TOKEN_VARIABLE_TYPE,3,1,str,"x"};
    IntegerToken intToken = {TOKEN_INTEGER_TYPE,4,4,str,"5400",5400};

    getToken_ExpectAndReturn(tokenizer,(Token *)&varToken);
    getToken_ExpectAndReturn(tokenizer,(Token *)&intToken);

    Try{
      xyzf(tokenizer,&operandInfo);
    }Catch(ex){
      dumpErrorMessage(ex, 1);
      TEST_ASSERT_EQUAL(OVERFLOW,ex->errorCode);
    }
    freeException(ex);
}
