
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>



void menuController();
void StartQuiz();
void runQuiz();
void DisplayResult();
//int EasyQue();
//int MediumQue();
//int HardQue();


int main()
{
    int countq,countr;
     int r,i;
     int pa;int nq[10];int w;
     float score;







     char choice;
     char name[30];
    char x;

    int totalMarks=20;
    menuController();
    printf("\nYour choice is  ");
    scanf("%d",&choice);
     if(choice == 1)
        {
            system("cls");
            StartQuiz();

        }
     else if (choice == 2)
        {
            exit(0);
        }
    else
        {
            system("cls");
            printf("\n\n\t\tnInvalid Entry BYE BYE :computer:");

        }
    return 0;
}

void menuController()
{
    system("cls");

    printf("\n\t - - - - - - -- - - -- - - - -- - - -- - - - -- - - - - - - - - - -- ");
    printf("\n\t - - - --  - - -- - - -- - - - - -- - - - -- - - - - - -- - - - - -- ");
    printf("\n\n\t\t Welcome to Simple Quiz Game \n\n");
    printf("\n\n\n\t Your Options");
    printf("\n\t - - - -- - - - - - - -- - - - ");
    printf("\n\t - - - -- - - - - - - -- - - - ");
    printf("\n\t _____________________________");
    printf("\n\n\t\t 1)  Start The Quiz." );
    printf("\n\n\t\t 2)  Exit. \n\n\n");
 return 0;
}

void StartQuiz()
{
    system("cls");
    char name[20];
    char ch;
            printf("\n\t - - - - - - -- - - -- - - - -- - - -- - - - -- - - - - - - - - - -- ");
            printf("\n\t - - - --  - - -- - - -- - - - - -- - - - -- - - - - - -- - - - - -- ");
            printf("\n\n\t\t Welcome to Simple Quiz Game \n\n");

            printf("\n\n\n\n\t Player Name :   ");
            scanf("%s",&name);
            printf("\n\n\tReady \(Y//N\) :   ");
            scanf("%c",&ch);
    ch = toupper (getch());
    if (ch == 'Y')
    {
      runQuiz();
    }


}

void runQuiz()
    {
        //system("cls");

    int countr;
    int nq,w;
    int countq=countr=0;
    int i=1,r;
     srand ( time(NULL) );
     r=rand()%5+1;
//     nq[i]=r;
     for (w=0;w<i;w++)
 if (w==r)
 {
     runQuiz();
 }

     switch(r)
  {
  case 1:
  printf("\n\nWhat punctuation is used to signal the beginning and end of code blocks?");
  printf("\n\nA.{ }\tB.-> and\tC.BEGIN and END\tD. ( and )\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.4");break;}

  case 2:
  printf("\n\n\nWhat punctuation ends most lines of C++ code?");
  printf("\n\nA.. (dot)\tB.; (semi-colon)\tC. : (colon)\tD. ' (single quote)\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is B.; (semi-colon)");
  break;

  case 3:
  printf("\n\n\nWhich of the following is a correct comment?");
  printf("\n\nA.*/ Comments */\tB. ** Comment **\tC. /* Comment */\tD. { Comment }\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C. /* Comment */");break;}


  case 4:
  printf("\n\n\nWhich of the following is not a correct variable type?");
  printf("\n\nA.Float\tB. Real\tC. Int\tD. Double\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B. Real");break;}


  case 5:
  printf("\n\n\nEvaluate !(1 && !(0 || 1)).");
  printf("\n\nA. True\tB. False\tC. Unevaluatable\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A. True");break;}

  }

        DisplayResult();



    }

  /*  int QuizQues()
    {
        printf("\n\t - - - - - - -- - - -- - - - -- - - -- - - - -- - - - - - - - - - -- ");
        printf("\n\t - - - --  - - -- - - -- - - - - -- - - - -- - - - - - -- - - - - -- ");

        printf("\n\n\t Question Number : 01\n");
        printf("\tQuestion Category : Easy\n\n");

        for(int Que=1;Que<=5;Que++)
        {
          switch(Que)
            {
                case 1 : printf("\tQuestion:\n\t")
            }

        }

    }
*/




void DisplayResult()
{
    system("cls");
    char name;
    int score,totalMarks;
    printf("\n\tCongratulation :  %s.You have completed the quiz",&name);
    printf("\n\tYou have Scored %d out of %d",&score,&totalMarks);
    //printf("\n\tHere are your answers ...\n");
    //printf("\n\tQuestion Category : Easy\n\tQuestion Number : 1");

    printf("\n\n\tCategory Wise Marks ...");
    printf("\n\n\t\tEasy : %.2f",&score);
    printf("\n\t\tMedium : %.2f",&score);
    printf("\n\t\tHard : %.2f",&score);

    printf("\n\n\tYour Final Total Score : %.2f out of %.2f",&score,&totalMarks);
    puts("\n\nNEXT PLAY?(Y/N)");
    if (toupper(getch())=='Y')
        StartQuiz();

}



