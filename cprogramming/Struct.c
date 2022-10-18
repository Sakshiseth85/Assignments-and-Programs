#include<stdio.h>
struct Mydata //struct tag is used to identify particular kind of structure
{
    int num;
    char *name;
    char *address;
}stud1,stud2; //these variables can access the struct members.

int function(){

    struct  Mydata teacher;
};

int main(){

stud1.name="Sakshi";
stud2.name="Yuvraj";
//or 
struct Mydata stud3={3,"Jack","Delhi"};//creating and initializing variables


//Designated Initialization- CAn initialize in any order by using (.)
// struct Mydata stud4={.name="sotu",.num=4,.address="Delhi"};
printf("Stud1 name is %s\n",stud1.name);
printf("Stud2 name is %s\n",stud2.name);
printf("Stud3 name is %s\n",stud3.name);
// printf("Stud4 name is %s\n",stud4.name);

printf("%d",sizeof(stud1));
return 0;

}