#include <stdio.h>

int main()
{
   int i,x,key;
   //create string with max length 100
   char str[100];

   printf("\nPlease type a string: \t");
   gets(str);

   printf("\n Please choose one of the following options: \n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);
   if(x==1){
       printf("Please type a key for encryption: ");
       scanf("%d", &key);
       printf("You typed: %d", key);
   }
   else if (x==2){
       printf("Please type a key for decryption: ");
       scanf("%d", &key);
       printf("You typed: %d", key);

   }


   // to solve the problem we will use switch case
   switch(x){
       case 1:
           for(i=0;i<100&&str[i]!= '\0';i++){
               str[i] = str[i] + key;
           }
           printf("\nEncrypted string: %s\n", str);
           break;

       case 2:
           for(i=0;i<100&&str[i]!= '\0';i++){
               str[i] = str[i] - key;
           }
           printf("\nDecrypted string: %s\n", str);
           break;

       default:
           printf("\nError\n");
   }

   

   return 0;

}