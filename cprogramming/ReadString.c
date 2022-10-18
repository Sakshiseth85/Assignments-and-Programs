#include<stdio.h>
// int main(int arg){
//  char name[30];
//     printf("Enter name: ");
//     // fgets(name, sizeof(name), stdin);  // read string
//     scanf("%s",&name);
//     printf("Name: %s",name);

// }
void main(int argc, char *argv[] )  
{  
printf("File name: %s\n", argv[0]);  
 
if(argc < 2)
{  
      printf("No argument passed.\n");  
   }  
else
{  
      printf("Argument 1: %s\n", argv[1]);  
   }  
}