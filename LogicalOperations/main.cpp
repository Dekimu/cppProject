#include <stdio.h>
int main(){
    /*unsigned int age;
    char fName[15];
    char lName[15];*/
    char userInput;
    FILE *fPtr;
    if(!(fPtr = fopen("employee.dat", "r")))
      {
      puts("File could not be opened or file is protected");
      puts("Create it? (If it is protected there's no way you can rewrite it) Y/n");
      scanf(" %c", &userInput);
      if(userInput == 'Y' || userInput == 'y')
        {
        if((fPtr = fopen("employee.dat", "wr"))){
        puts("\n\nSuccess!");
        }
        else
        {
        puts("File protected");
        }
      }
      else{
        return 0;
      }
    }

}
