#include "CheckRegister.h"
#include "CException.h"


void xyzf(Tokenizer *tokenizer , OperandInfo *operandInfo){
  Token *token = getToken(tokenizer);
  VariableToken *varToken;
    if(token->type == TOKEN_VARIABLE_TYPE)
    {
      varToken = (VariableToken *)token;
        if((strcmp(varToken->str,"x")==0)||(strcmp(varToken->str,"X")==0))
        {
          token = getToken(tokenizer);
            if(token->type == TOKEN_INTEGER_TYPE)
            {
              IntegerToken *intToken = (IntegerToken *)token;
              if(intToken->value < 5399)
              {
                operandInfo->X_value = intToken->value;
                // token = getToken(tokenizer);
                // VariableToken *varToken;
                // if(token->type = TOKEN_VARIABLE_TYPE)
                // {
                //   token = getToken(tokenizer);
                //   varToken = (VariableToken *)token;
                //   if((strcmp(varToken->str,"x")==0)||((strcmp(varToken->str,"X")==0)||((strcmp(varToken->str,"y")==0) \
                //   ||((strcmp(varToken->str,"Y")==0)||((strcmp(varToken->str,"z")==0)||((strcmp(varToken->str,"Z")==0) \
                //   ||((strcmp(varToken->str,"f")==0)||((strcmp(varToken->str,"F")==0)
                //   {
                //     *token = getToken(tokenizer);
                //     IntegerToken *intToken;
                //     if(token->type = TOKEN_INTEGER_TYPE)
                //     {
                //       intToken = (IntegerToken *)token;
                //       if(intToken->value < 5399)
                //       {
                //         return ;
                //       }
                //     }
                //     else{
                //       throwException(NOT_VALID_INTEGER_TYPE,(void *)intToken,
                //     "Invalid token type,expecting integers but received '%d'\n",token->type);
                //     }
                  }
                  else{
                    throwException(OVERFLOW,(void *)varToken,
                    "Overflow occured,expecting <5399  but received '%d'\n ",intToken->value);
                  }
                }
            else{
              throwException(NOT_VALID_INTEGER_TYPE,(void *)token,
            "Invalid token type,expecting integers but received '%d'\n",token->type);
            }
         }
         else if((strcmp(varToken->str,"y")==0)||(strcmp(varToken->str,"Y")==0))
         {
           token = getToken(tokenizer);
           IntegerToken *intToken = (IntegerToken *)token;
           if(intToken->value < 5399)
           {
             operandInfo->Y_value = intToken->value;
           }
           else{
             throwException(OVERFLOW,(void *)varToken,
             "Overflow occured,expecting <5399  but received '%d'\n ",intToken->value);
           }
         }
         else if((strcmp(varToken->str,"z")==0)||(strcmp(varToken->str,"Z")==0))
         {
           token = getToken(tokenizer);
           IntegerToken *intToken = (IntegerToken *)token;
           if(intToken->value < 5399)
           {
             operandInfo->Z_value = intToken->value;
           }
           else{
             throwException(OVERFLOW,(void *)varToken,
             "Overflow occured,expecting <5399  but received '%d'\n ",intToken->value);
           }
         }
         else if((strcmp(varToken->str,"f")==0)||(strcmp(varToken->str,"F")==0))
         {
           token = getToken(tokenizer);
           IntegerToken *intToken = (IntegerToken *)token;
           if(intToken->value < 5399)
           {
             operandInfo->F_value = intToken->value;
           }
           else{
             throwException(OVERFLOW,(void *)varToken,
             "Overflow occured,expecting <5399  but received '%d'\n ",intToken->value);
           }
         }
        else{
          throwException(NOT_VALID_VARIABLE,(void *)varToken,
          "Invalid variable,expecting 'x or X/y or Y/z or Z/f or F' but received '%s'\n ",varToken->str);
        }
  }
    else{
      throwException(NOT_VALID_VARIABLE_TYPE,(void *)varToken,
      "Invalid token type,expecting albhabetic but received '%d'\n ",token->type);
    }
}
