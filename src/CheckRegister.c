#include "CheckRegister.h"
#include "CException.h"

// struct VariableMap varTable[] = {
//   {'x',&XVar},
//   {'y',&YVar},
//   {'z',&ZVar},
// };


void fillInVariableTable(char **line)
{
  Variable v;
  printf("string %s\n",*line);
  // getNextVariable(*(&line),v);
  getNextVariable(*line,v);
}

void getNextVariable(char *line,Variable v)
{
  char* var1,var2,var3;
  int val1,val2,val3;
  sscanf(line,"%s-%s",var1,var2);
  printf("%s\n",var1);
  printf("%d\n",val1);
  printf("%s\n",var2);
  printf("%d\n",val2);
    // int i=0;
    // char str1[2]={0,0,0};
    // char *str2 = *line;
    // while(!isSpace(*str2))
    // {
    //   str1[0] = str2[i];
    //   printf("S1: %s S2: %s\n",str1,str2);
    //   i++;
    //   str2++;
    // }
      // if(isCharacter(v.name = *str2))
      // {
      //   v.name = *++str2;
      // }
  //printf("name %s",v.name);
  // printf("integer : %d\n",v.integer);
  // printf("token %s",varToken->str);

}

// Token *TokenCreate(TokenType type,char *str,uint32_t length)
// {
//   Token *token = malloc(sizeof(Token));
//   token->type = type;
//   token->str = str;
//   token->length = length;
// }
