#include<stdio.h>
#include<string.h>
main()
{
      char str1[50]="1c0111001f010100061a024b53535009181c",str2[50]="686974207468652062756c6c277320657965",str3[50];
      int len=0,i;
     /* printf("Enter string1 : \n");
      gets(str1);
      printf("Enter string2 : \n");
      gets(str2);*/
          if(strlen(str1)==strlen(str2))
          {
            len=strlen(str1);
           for(i=0;i<len;i++)
           {
            str3[i]=(char)(str1[i]^str2[i]);
           }
          }
      printf("XOR string is : \n");
      puts(str3);
      getch();
}
