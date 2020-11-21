
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#define ENTER 13
#define ESC 27
void paste (void);
void copy( char []);
void gotoxy(int ,int);
void back(void);
void option(void);
int main()
{
char write[5000];
char ch;
system("color 03");
printf("WRITE SOMETHING HERE\n");
printf("\n");
gets(write);
option();
ch=getch();
if(ch=='c'||ch=='C')
{

    copy(write);
   k:    gotoxy(0,14);
    printf("NOW PRESS \"V\" FOR PASTE");
{

   char f;
   f=getch();
   if(f=='v'||f=='V')
   {

   printf("\n \n");
   paste();
   back();
   }
   else
   {system("cls");
   goto k;}

}



}else if(ch=='x'||ch=='X')
{
    copy(write);
   h:  system("cls");

     printf("NOW PRESS \"V\" ONLY ");
     {char v;
     v=getch();
     if(v=='v'||v=='V')
     {
     system("cls");
     paste();

     }else
     {
     goto h;

     }


     }

printf("\n");
back();


}else if(ch=='u'||ch=='U')
{

    system("cls");
    puts(strupr(write));
    printf("\n");
    back();

}




}
 void gotoxy(int a, int b)
 {
     COORD x;
     x.X=a;
     x.Y=b;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);





 }
 void copy(char s[])
 {
   FILE *p;
   p=fopen("copy.txt","w");
   fputs(s,p);
   fclose(p);



 }
 void paste(void)
 {
    FILE *p;
    p=fopen("copy.txt","r");
    char ch;
    if(p==NULL)
    {
      printf("SEGMENT ERROR ......");
      getch();
    exit(0);
    }
    while(ch!=EOF)
{

    printf("%c",ch);
    ch=fgetc(p);



}
fclose(p);






 }
void back(void)
{
    char ch;
printf("\n");
    printf("\nTO CONTINUE PRESS <ENTER>\n \n TO EXIT PRESS <ESC>");
       ch=getch();
    if(ch==ENTER)
    {
        system("cls");
        main();
    }else if(ch==ESC)
    {system("cls");
    gotoxy(40,12);
        printf("THANX");
        getch();
        exit(0);
    }


}
void option(void)
{
    gotoxy(50,18);
printf("FOR COPY IT PRESS \"C\"");
gotoxy(50,20);
printf("FOR CUT PRESS \"X\"");
gotoxy(50,22);
printf("TO MAKE ALL WORDS IN UPPER CASE PRESS \"U\"");



}
