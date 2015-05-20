#include<stdio.h>
#include<string.h>
main()
{
      char str1[25],str2[25],str3[25];
      int len=0,i;
      printf("Enter string1 : \n");
      gets(str1);
      printf("Enter string2 : \n");
      gets(str2);
          if(strlen(str1)>strlen(str2))
          {
           len=strlen(str2)-1;                 
          }
          else
           len=strlen(str1)-1;
           for(i=0;i<len;i++)
           {
            str3[i]=(char)(str1[i]^str2[i]);
           }
      printf("XOR string is : \n");
      puts(str3);
      getch();
}
