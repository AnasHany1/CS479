#include<stdio.h>
#include <string.h>

int Stud [6][50];
int SS = -1;
int Exams[3][20];

int number_Students(x){

printf("%d\n",x);
}
int number_halls(){
int counter=0;
int i;
 for (i=0;i<20;i++){
    if(Exams[2][i] != NULL){
    counter++;
for (int j=i+1;j<20;j++){
    if(Exams[2][j] != NULL){
    if(strcmp(Exams[2][i],Exams[2][j])==0){counter--; break;}
    }
 }
    }
 }

printf("%d\n",counter);
}
int student_min_id(){
    int min=1910999;
    for (int i=0;i<=SS;i++){
        if (Stud[0][i]<=min && Stud[0][i]!=0){
            min = Stud[0][i];
        }
    }

    printf("%d\n",min);
}
int List_Student_Courses_Less(int n){
    int counter;
    for (int i=0;i<50;i++){
        if(Stud[0][i]!= NULL){
            counter=0;
            for (int j=0; j<50;j++){
                if(Stud[j][i]== NULL){break;}
                    counter++;
            }
        if(counter-1<n){
    if(Stud[0][i]==NULL){break;}

    printf("%d\n",Stud[0][i]);
            }

        }
    }
}
int course_students(int code){
    for (int i=0;i<50;i++){
        if (Stud[0][i] != NULL)
        for (int j=0;j<50;j++){
            if (Stud[j][i] == NULL){break;}
            if(Stud[j][i] == code ){printf("%d\n",Stud[0][i]);break;}
        }
    }
}
int main() {
    int counter = 0;
    int X_axis;
    int TT = 0;
    int thick = 1;
    char inputa;
    int parameter;
    const char *halls="Number_Halls";
    const char *studento="Number_Students";
    const char *id="Student_ID_Min";
    const char *cstudent="Course_Students";
    const char *lstudents="List_Student_Courses_Less";
    const char *quit="Quit";
    char yarra[2];
    char token9;
    FILE *fptr;
    fptr = fopen("D:/Input.txt","r+");
    if(fptr == NULL){
        printf("Error!");
        exit(1);}
                char strinput[500];
                char strinputf[500];
                int l,f;
                gets(strinput);
                for (int k=0;k<sizeof(strinput);k++){
                    if (strinput[k]=='['){
                        for(l=k,f=0;l<sizeof(strinput);l++, f++){
                       strinputf[f] = strinput[l];
                        if (strinput[l] == NULL){break;}}}}
    char string= strinputf;
                char stuinput[500];
                char stuinputf[500];
                int q,r;
                gets(stuinput);
                for (int k=0;k<sizeof(stuinput);k++){
                    if (stuinput[k]=='['){
                        for(q=k,r=0;q<sizeof(stuinput);q++, r++){
                       stuinputf[q] = stuinput[q];
                        if (stuinput[q] == NULL){break;}}}}
    char * token1 = strtok(strinputf, "[" "," ";" "]");
    while( token1 != NULL ) {
            if(counter==3*TT){
                X_axis = counter/3;
                Exams[0][X_axis] = token1;
                Exams[0][X_axis] = atoi(Exams[0][X_axis]);}
            if(counter==3*TT+1){
                Exams[1][X_axis] = token1;}
            if(counter==3*TT+2){
                Exams[2][X_axis] = token1;
                TT++;}
        fprintf(fptr,"%s\n",token1);
        token1 = strtok(NULL, "," ";" "[" "]");
        counter++;}
    char * token2 = strtok(stuinput, "[" "," ";" "]");
    while( token2 != NULL ) {
        if(strlen(token2)>3){
                SS++;
                thick = 1;
                Stud[0][SS] = token2;
                Stud[0][SS] = atoi(Stud[0][SS]);}
        if(strlen(token2)==3){
                Stud[thick][SS] = token2;
                Stud[thick][SS] = atoi(Stud[thick][SS]);thick++;}
        fprintf(fptr,"%s\n",token2);
        token2 = strtok(NULL, "," ";" "[" "]");}
char input[50];
for(int i=0;i<1;i--){
gets(input);
int b=0;
while( token9 != NULL ) {
        yarra[b]=token9;
        token9 = strtok(NULL, " ");
        b++;
    }
if(strcmp(input,studento)==0 ){
    number_Students(SS);
    continue;
}
if(strcmp(input,id)==0 ){
    student_min_id(Stud[0][SS]);
    continue;
}
if(strcmp(input,cstudent)==0 ){
    course_students(atoi(yarra[1]));
    continue;
}
if(strcmp(input,halls)==0 ){
    number_halls();
    continue;
}
if(strcmp(input,lstudents)==0 ){
    List_Student_Courses_Less(atoi(yarra[1]));
    continue;
}
if(strcmp(input,quit)==0 ){
    return 0;
}
}
fclose(fptr);
    return 0;
}
