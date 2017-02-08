#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct clientData {
    unsigned short int ID;
    char lName[15];
    char fName[15];
    unsigned short int age;
    double balance;

};

int main(void)
{
    char _file[20];
    strcpy(_file, "clients.dat");
    struct clientData client = {0, "", "", 0, 0.0};
    unsigned short int i;
    i = 0;
    char x;
    FILE *fp;
    fp = fopen(_file, "r+");
    if(!fp){
        printf("File does not exist! Do you want to create it?(y/n)\n");
        scanf(" %c", &x);
        while(i == 0)
        if(x == 'n' || x == 'N'){
            return 0;
        }
        else {
            if(x == 'y' || x == 'Y'){
                i = 1;
                fp = fopen(_file,"w+");
                if(!fp){
                    printf("File could not be created!\n\n\n");
                    return 0;
                }
                else{
                    printf("File created successfully!\n");
                }
            }
            else {
                printf("Try again!\n");
                scanf(" %c", &x);
            }
        }
    } // Until now the file must have been created successfully otherwise the program quit
//        while(!feof(stdin)){
//         fprintf(fp, "");
//
//        }
        for(i = 1; i <= 100; ++i){
            fwrite(&client, sizeof(struct clientData), 1, fp);
        }

// Until now, the file has been made and in it, 100 blank clients have been written, if the file couldn't be used nor made, the program finished execution




// Right now I'm writing to the file from user input
        printf("Enter account ID from 1 to 100:\n#");
        scanf(" %d", &client.ID);
        while(client.ID >= 1 && client.ID <= 100){
          printf("Enter lastname, firstname, age and balance\n#");
          fscanf(stdin, "%14s%14s%d%lf", client.lName, client.fName, &client.age, &client.balance);
          fseek(fp, (client.ID - 1) * sizeof(struct clientData),SEEK_SET);
          fwrite(&client, sizeof(struct clientData), 1, fp);

          printf("Enter account ID\n");
          scanf("%d", &client.ID);
        }
    fclose(fp);

// Right now I'm going to read every record from the file where the ID != 0
            int result; //result is used to see if fread read any bytes
            i = 0;
            fp = fopen(_file, "rb");
            printf("%-4s%-14s%-14s%-4s%10s\n", "ID", "Last Name", "First Name", "Age", "Balance");
            while(!feof(fp)){
              result = fread(&client, sizeof(struct clientData), 1, fp);
              if(result != 0 && client.ID != 0 ){
                printf("%-4d%-14s%-14s%-4d%10.2f\n", client.ID, client.lName, client.fName, client.age, client.balance);
                i++;
              }
            }


        fclose(fp);
       // getch();
    return 0;
}
