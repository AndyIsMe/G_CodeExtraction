#include "CheckRegister.h"
#include "CException.h"

// struct VariableMap varTable[] = {
//   {'x',&XVar},
//   {'y',&YVar},
//   {'z',&ZVar},
// };


void fillInVariableTable(char **var)
{
  Variable v;

  getNextVariable(var,v);
}

void getNextVariable(char *line,Variable v)
{
  char str[100];
  char substr[10][10];
  int i,j=0,ctr=0,a=0;

  printf("%c\n",line[0]);
  for(i=0;i<=strlen(line);i++)
  {
    //Extract when noticed a " " in between
    if(line[i] == ' '||line[i] == '\0')
    {
      substr[ctr][j] = '\0';
      ctr++;
      j=0;
    }
    else
    {
      // Variable.name = substr[ctr][0];
      substr[ctr][j] = line[i];
      line[i] = 0;
      j++;

    }
  }


  // while(ctr = 0)
  // {
  //   v.name = substr[ctr][j];
  //   if(substr[ctr][j] == '\0')
  //   {
  //     return v.isValid=1;
  //   }
  //   else
  //   {
  //     // v.intger = substr[ctr][j];
  //   }
  // }
  for(i=0;i<ctr;i++)
  {
  printf("\nSubstrings are : %s\n",substr[i]);
  }

  //return 0;
}
// void getNextVariable(char *line,Variable v)
// {
//
//     if
//     // int i=0;
//     // char str1[2]={0,0,0};
//     // char *str2 = *line;
//     // while(!isSpace(*str2))
//     // {
//     //   str1[0] = str2[i];
//     //   printf("S1: %s S2: %s\n",str1,str2);
//     //   i++;
//     //   str2++;
//     // }
//       // if(isCharacter(v.name = *str2))
//       // {
//       //   v.name = *++str2;
//       // }
//   //printf("name %s",v.name);
//   // printf("integer : %d\n",v.integer);
//   // printf("token %s",varToken->str);
//
// }

// Token *TokenCreate(TokenType type,char *str,uint32_t length)
// {
//   Token *token = malloc(sizeof(Token));
//   token->type = type;
//   token->str = str;
//   token->length = length;
// }
