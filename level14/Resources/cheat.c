typedef unsigned int uint;
typedef char byte;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * ft_des(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  pcVar2 = strdup(param_1);
  local_1c = 0;
  local_20 = 0;
  do {
    uVar3 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= local_20) {
      return pcVar2;
    }
    if (local_1c == 6) {
      local_1c = 0;
    }
    if ((local_20 & 1) == 0) {
      if ((local_20 & 1) == 0) {
        for (local_14 = 0; local_14 < "0123456"[local_1c]; local_14 = local_14 + 1) {
          pcVar2[local_20] = pcVar2[local_20] + -1;
          if (pcVar2[local_20] == '\x1f') {
            pcVar2[local_20] = '~';
          }
        }
      }
    }
    else {
      for (local_18 = 0; local_18 < "0123456"[local_1c]; local_18 = local_18 + 1) {
        pcVar2[local_20] = pcVar2[local_20] + '\x01';
        if (pcVar2[local_20] == '\x7f') {
          pcVar2[local_20] = ' ';
        }
      }
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + 1;
  } while( 1 );
}

int main(void)
{
  char* key = malloc(20);
  key = "H8B8h_20B4J43><8>\\ED<;j@3";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "<>B16\\AD<C6,G_<1>^7ci>l4B";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "I`fA>_88eEd:=`85h0D8HE>,D";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "7`4Ci4=^d=J,?>i;6,7d416,7";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "?4d@:,C>8C60G>8:h:Gb4?l,A";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "B8b:6,3fj7:,;bh>D@>8i:6@D";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "G8H.6,=4k5J0<cd/D@>>B:>:4";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "74H9D^3ed7k05445J0E4e;Da4";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "bci`mC{)jxkn<\"uD~6%g7FK`7";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "78H:J4<4<9i_I4k0J^5>B1j`9";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "Dc6m~;}f8Cj#xFkel;#&ycfbK";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "8_Dw\"4#?+3i]q&;p6 gtw88EC";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "70hCi,E44Df[A4B/J@3f<=:`D";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "boe]!ai0FB@.:|L6l@A?>qJ}I";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
  key = "g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|";
  printf("Key %50s: flag: %s\n", key, ft_des(key));
}
