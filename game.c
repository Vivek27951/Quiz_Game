#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int day(int);
char repeat(int);
int time2(int);
void main()
{
    int i,c=0,s=0,t;
    char name[20],choice,ans,a;
    float score,rr=0;
    time_t initial_time=time(NULL);
    //day(1);
    system("color 5b");
    /*for(i=0;i<2;i++)
    {
    Beep(1000,200);
    Beep(500,100);
    }*/
    PlaySound(TEXT("k1"),NULL,SND_SYNC);
    printf("\n\n\n\n\n\n\t\t\t\tWELCOME TO KBC");
    //PlaySound(TEXT("kbc3"),NULL,SND_SYNC);
   /* for(i=0;i<2;i++)
    {
    Beep(1000,200);
    Beep(500,100);
    }*/
    PlaySound(TEXT("k2"),NULL,SND_SYNC);
    system("cls");
    again:
        system("cls");
        system("color 5b");
    printf("\n\n\n\t\t\t      ******* MENU ********\n");
    printf("\n\n\t\t\t         S :  START GAME\n\n");
    printf("\t\t\t         V :  VIEW SCORE\n\n");
    printf("\t\t\t         R :  RESET SCORE\n\n");
    printf("\t\t\t         H :  HELP\n\n");
    printf("\t\t\t         Q :  QUIT");
    if(s==0){
    PlaySound(TEXT("kbc2a"),NULL,SND_SYNC);
    s++;}
    choice=toupper(getch());
    if(choice=='V')
    {
        Beep(1000,200);
        view_score();
         system("cls");
        goto again;
    }
    else if(choice=='R')
    {
        Beep(1000,200);
        reset_score();
        goto again;
    }
    else if (choice=='H')
    {
        Beep(1000,200);
        help();
        system("cls");
        goto again;
    }
    else if(choice=='Q')
    {
        system("cls");
        Beep(1000,200);
        printf("\n\n\n\n\t\t\t\tARE YOU SURE\n");
        printf("\n\t\t\t\t____________\n");
        printf("\t\t\t\t| YES  |  NO|\n");
        printf("\t\t\t\t|-----------|\n");
        a=toupper(getch());
        if(a=='Y')
        {
            system("color 4c");
            day(1);
            system("cls");
            printf("\n\n\n\n\t\t\tTHANKYOU FOR YOUR TIME");
            Beep(2000,500);
            day(1);
            exit(1);
        }
        else
        {
            system("color 2a");
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\tgoing back to menu....");
            Beep(2000,500);
            day(2);
             system("cls");
            goto again;
        }
    }
    else if(choice=='S')
    {
       system("cls");
       printf("\n\n\n\n\n\t\t\tREGESTER YOUR NAME : ");
       Beep(1000,300);
       gets(name);
       Beep(1000,300);
       system("cls");
       printf("\n\n\n\t\t\tWELCOME TO THE GAME\n\n\t\t\t\tMr.");
       puts(name);
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tGAME IS LOADING....");
        time2(3);
        printf("\t\t\t#");time2(1);
        for(i=0;i<55;i++)
        {
          printf("#");time2(1);
        }
        system("cls");
        printf("\n\n\n\n\n\t\tROUND 1\t\tFASTEST FINGER FIRST\n\n\n\n\t\t\tYOU HAVE A TIME LIMIT OF 120sec FOR ROUND 1");
        PlaySound(TEXT("KBC vissel"),NULL,SND_SYNC);
        //Beep(2000,500);
        day(1);
        system("cls");
        time(NULL);
         printf("\n\t\t\tROUND 1:FASTEST FINGER FIRST\n");
         printf("\t\t\t*******************************\n\n");
         printf("   \nQUESTION 1:");
         printf("   WHICH TYPE OF SCIENTIST STUDIES AND FORECAST THE WEATHWE?\n\n\n");
         PlaySound(TEXT("kbcq"),NULL,SND_SYNC);
         printf("\t\tA : BIOLOGIST\t\tB : ASTRONOMER\n\n\t\tC : METEOROLOGIST\t D : ASTROLOGIST\n\n");
         printf("\n\t\tANSWERS : ");
         time2(1);
         PlaySound(TEXT("h1"),NULL,SND_SYNC);
         ans=toupper(getch());
         printf("%c",ans);
         if(ans=='C')
         {
             system("color 3a");
             printf("\n\n\t\t\tCORRECT ANSWER");
             c++;
            Beep(2000,500);
            day(2);
         }
         else
         {
             system("color 4c");
             printf("\n\n\t\tWRONG ANSWER\n\n\t\tCORRECT ANSWER IS  C : METEOROLOGIST");
            Beep(2000,1000);
            day(3);
         }
         system("cls");
         system("color 5b");
         printf("\n\t\t\tROUND 1:FASTEST FINGER FIRST\n");
         printf("\t\t\t*******************************\n\n");
         printf("   \nQUESTION 2:");
         printf("   WHAT COLOR WOULD YOU GET IF YOU MIXED RED AND YELLOW TOGETHER?\n\n\n");
         PlaySound(TEXT("kbcq"),NULL,SND_SYNC);
         printf("\t\tA : ORANGE\t\tB : GRAY\n\n\t\tC : PINK\t D : BLUE\n\n");
         printf("\n\t\tANSWERS : ");
          time2(1);
         PlaySound(TEXT("h1"),NULL,SND_SYNC);
         ans=toupper(getch());
         printf("%c",ans);
         if(ans=='A')
         {
             system("color 3a");
             printf("\n\n\t\t\tCORRECT ANSWER");
             c++;
             Beep(2000,500);
            day(2);
         }
         else
         {
             system("color 4c");
             printf("\n\n\t\tWRONG ANSWER\n\n\t\tCORRECT ANSWER IS  A : ORANGE");
            Beep(2000,1000);
            day(3);
         }system("cls");
         system("color 5b");
         printf("\n\t\t\tROUND 1:FASTEST FINGER FIRST\n");
         printf("\t\t\t*******************************\n\n");
         printf("   \nQUESTION 3:");
         printf("   WHICH BATSMAN SCORE 3 DOUBLE CENTUAYR IN ODI?\n\n\n");
         PlaySound(TEXT("kbcq"),NULL,SND_SYNC);
         printf("\t\tA : SACHIN TENDULKAR\t\tB : ROHIT SHARMA\n\n\t\tC : VIRAT KOHLI\t\t D : MS DHONI\n\n");
         printf("\n\t\tANSWERS : ");
         time2(1);
         PlaySound(TEXT("h1"),NULL,SND_SYNC);
         ans=toupper(getch());
         printf("%c",ans);
         if(ans=='B')
         {
             system("color 3a");
             printf("\n\n\t\t\tCORRECT ANSWER");
             c++;
             Beep(2000,500);
            day(2);
         }
         else
         {
             system("color 4c");
             printf("\n\n\t\tWRONG ANSWER\n\n\t\tCORRECT ANSWER IS  B : ROHIT SHARMA");
            Beep(2000,1000);
            day(3);
         }system("cls");
          system("color 5b");
         printf("\n\t\t\tROUND 1:FASTEST FINGER FIRST\n");
         printf("\t\t\t*******************************\n\n");
         printf("   \nQUESTION 4:");
         printf("   THE FREQUENCY OF ALTERNATING CURRENT IN INDIA IS-\n\n\n");
         PlaySound(TEXT("kbcq"),NULL,SND_SYNC);
         printf("\t\tA : 60Hz\t\tB : 110Hz\n\n\t\tC : 50Hz\t\t D : 220Hz\n\n");
         printf("\n\t\tANSWERS : ");
         time2(1);
         PlaySound(TEXT("h1"),NULL,SND_SYNC);
         ans=toupper(getch());
         printf("%c",ans);
         if(ans=='C')
         {
             system("color 3a");
             printf("\n\n\t\t\tCORRECT ANSWER");
             c++;
             Beep(2000,500);
            day(2);
         }
         else
         {
             system("color 4c");
             printf("\n\n\t\tWRONG ANSWER\n\n\t\tCORRECT ANSWER IS  C : 50Hz");
            Beep(2000,1000);
            day(3);
         }system("cls");
          system("color 5b");
         printf("\n\t\t\tROUND 1:FASTEST FINGER FIRST\n");
         printf("\t\t\t*******************************\n\n");
         printf("   \nQUESTION 5:");
         printf("   MAIN LEAD ACTOR OF FILM MY NAME IS KHAN?\n\n\n");
         PlaySound(TEXT("kbcq"),NULL,SND_SYNC);
         printf("\t\tA : AMIR KHAN\t\tB : SALMAN KHAN\n\n\t\tC : SHAHRUKH KHAN\t\t D : SAIFALI KHAN\n\n");
         printf("\n\t\tANSWERS : ");
         time2(1);
         PlaySound(TEXT("h1"),NULL,SND_SYNC);
         ans=toupper(getch());
         printf("%c",ans);
         if(ans=='C')
         {
             system("color 3a");
             printf("\n\n\t\t\tCORRECT ANSWER");
             c++;
             Beep(2000,500);
            day(2);
         }
         else
         {
             system("color 4c");
             printf("\n\n\t\tWRONG ANSWER\n\n\t\tCORRECT ANSWER IS  C : SHAHRUKH KHAN");
            Beep(2000,1000);
            day(3);
         }
         system("cls");
          system("color 3f");
    t=time(NULL)-initial_time;
   //printf("%d",t);
   //day(2);
    if(t>120)
    {
        printf("\n\n\nTIME TAKEN : %d\t\t\t\tSORRY!!!! \n\n\nTO SLOW FOR QUALIFICATION",t);
    }
    else{
         system("cls");
         if(c<3)
         {
             system("color 4c");
             printf("\n\n\n\t\t\t\tSORRY!!!\n");
            printf("\n\t\tyou are not qualified for HOT SEAT ROUND\n");
            day(1);
             printf("\n\n\n\n\n\n\t\t\tdo you want to try again?");
             a=toupper(getch());
             if(a=='Y')
             {
                 system("cls");
                 goto again;
             }
             else
                {
                    exit(1);
                }
         }
         else
         {
              system("color 5b");
              printf("\n\t\t#  #  #  #  #  #  #  #  ");
             time2(5);
             printf("#  #  #  #  #  #  #  #  ");
             time2(5);
             printf("\n\t\t\tCONGRATULATIONS\n");
             printf("\n\t  #  #  #  #  #  #  #  #  ");
             time2(5);
             printf("#  #  #  #  #  #  #  #  ");
             time2(5);
              printf("\n\n\n\n\t\tyou are qualified for HOT SEAT ROUND\n");
         }
         day(3);
         system("cls");
         system("color 5f");
         printf("\n\n\n\n\t\t\tTRY TO ANSWER EVERY QUESTION WITHIN 20 SECOUND");
         day(2);
         system("cls");
         system("color 5b");
         printf("\n\n\t\t\tROUND 2: STAGE-1\t\t\tRs.=5,000\n");
         printf("_____________________________________________________\n\n");
         printf(" QUESTION 1: ");
         printf("Which of the following is a Palindrome number?\n\n");
         printf("\tA : 42042\t\tB : 101010\n\nC : 23232\t\tD : 01234\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
          ans=repeat(rr);
         if(ans=='C')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=5000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  C : METEOROLOGIST");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("\n\n\t\t\tROUND 2: STAGE-1\t\t\tRs.=10,000\n");
         printf("\t\t\t_____________________________________\n\n");
         printf("QUESTION 2: ");
         printf("WHICH COUNTRY WIN FIFA 2018?\n\n");//time show
         printf("\tA : BRAZIL\t\tB : ARGENTINA\n\tC : FRANCE\t\tD : ENGLAND\n\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
          ans=repeat(rr);
         if(ans=='C')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
            rr=10000;
             day(1);
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  C : FRANCE");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-1\t\t\tRs.=20,000");
         printf("___________________________________________\n\n");
         printf("QUESTION 3: ");
         printf("The Laws of Electromagnetic Induction were given by?\n\n");
         printf("A : Faraday\t\tB : Tesla\n\tC : Maxwell\t\tD : Coulomb\n\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
          ans=repeat(rr);
         if(ans=='A')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=20000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  A : Faraday");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-1\t\t\tRs.=40,000");
         printf("___________________________________________\n\n");
         printf("QUESTION 4: ");
         printf("What is the group of frogs known as?\n\n");
         printf("A : A traffic\t\tB : A toddler\nC : A police\t\tD : An Army\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
          ans=repeat(rr);
         if(ans=='D')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=40000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  D : An Army");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-1\t\t\tRs.=80,000\n");
         printf("________________________________________\n\n");
         printf("QUESTION 5: ");
         printf("Study of Earthquake is called............\n\n");//time show
         printf("A : Seismology\t\tB : Cosmology\nC : Orology\t\tD : Etimology\n\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
          ans=repeat(rr);
         if(ans=='A')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=80000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  A : Seismology");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-1\t\t\tRs.=1,60,000\n");
         printf("____________________________________________\n\n");
         printf("QUESTION 6: ");
         printf("Which Blood Group is known as the Universal Recipient?\n");//time show
         printf("A : A\t\tB : AB\nC : B\t\tD : O\n\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
         ans=repeat(rr);
         if(ans=='B')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=160000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  B : AB");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-1\t\t\tRs.=3,20,000\n");
         printf("_________________________________________________\n\n");
         printf("QUESTION 7: ");
         printf("Wind speed is measure by__________\n\n");//time show
         printf("A : Lysimeter\t\tB : Air vane\nC : Hydrometer\t\tD : Anemometer\n");
         printf("ANSWERS : ");
         time2(1);
         PlaySound(TEXT("heart1"),NULL,SND_SYNC);
         ans=repeat(rr);
         if(ans=='D')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=320000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  D : Anemometer");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("\n\n\n\n\t\t\t\t\tSTAGE II\n\n\n\t\t\tNO TIME LIMIT");
         day(1);
         system("cls");
         printf("ROUND 2: STAGE-II\t\t\tRs.=7,50,000\n");
         printf("____________________________________________\n\n");
         printf("QUESTION 8: ");
         printf("How many times a piece of paper can be folded at the most?\n\n");//time show
         printf("A : 6\t\tB : 8\n\tC : 7\t\tD : Depends on the size of paper\n\n");
         printf("ANSWERS : ");
          ans=toupper(getch());
         if(ans=='C')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=750000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  B : 7");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-II:\t\t\tRs.=15,00,000\n");
         printf("____________________________________________________\n");
         printf("QUESTION 9: ");
         printf("Which city is known at 'The City of Seven Hills'?\n\n");
         printf("A : Rome\t\tB : Vactican City\nC : Madrid\t\tD : Berlin\n\n");
         printf("ANSWERS : ");
          ans=toupper(getch());
         if(ans=='A')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=1500000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  A : Rome");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-II\t\t\tRs.=30,00,000\n");
         printf("________________________________________________\n");
         printf("QUESTION 10: ");
         printf("What is the color of the Black Box in aeroplanes?\n\n");
         printf("A : White\t\tB :Black\nC :Orange\t\tD : Red\n\n");
         printf("ANSWERS : ");
          ans=toupper(getch());
         if(ans=='C')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=3000000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  C : Orange");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-II\t\t\tRs.=50,00,000\n");
         printf("_______________________________________________\n");
         printf("QUESTION 11: ");
         printf("What is the National Name of Japan?\n\n");//time show
         printf("A : Polska\t\tB : Hellas\nC :Drukyul\t\tD :Nippon\n\n");
         printf("ANSWERS : ");
          ans=toupper(getch());
         if(ans=='D')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=5000000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  D : Nippon");
             day(2);
             goto cash;
         }
         system("cls");
         system("color 5b");
         printf("ROUND 2: STAGE-II\t\t\tRs.=1,00,00,000\n");
         printf("______________________________________________\n");
         printf("QUESTION 12: ");
         printf("Who was awarded the youngest player award in Fifa World Cup 2006?\n\n");//time show
         printf("A : Wayne Rooney\t\tB : Lucas Podolski\nC : Lionel Messi\t\tD : Christiano Ronaldo\n\n");
         printf("ANSWERS : ");
          ans=toupper(getch());
         if(ans=='B')
         {
             system("color 3a");
             printf("CORRECT ANSWER");
             day(1);
             rr=10000000;
         }
         else
         {
             system("color 4c");
             printf("WRONG ANSWER!!!\nCORRECT ANSWER IS  B : Lucas Podolski");
             day(2);
             goto cash;
         }
        cash:

                system("cls");
                if(rr==10000000)
                {
                    system("color 3a");
                    printf("\n\n\n\t\t\tCONGRATULATIONS Mr.");
                    puts(name);
                    printf("\n\n\t\t\tyou have win 1 crore");
                    PlaySound(TEXT("coin"),NULL,SND_SYNC);
                    day(1);
                    edit_score(rr,name);
                    printf("\n\n\n\n\t\t\t\tpress any key to go to menu");
                    getch();
                    goto again;
                }
               else if(rr>0 && rr<10000000)
                {
                    system("color 3a");
                    printf("\n\n\n\t\t\tWELL PLAYED Mr.");
                    puts(name);
                    printf("\n\n\t\t\tyou have win Rs. %f",rr);
                    PlaySound(TEXT("coin"),NULL,SND_SYNC);
                    day(1);
                    edit_score(rr,name);
                    printf("\n\n\n\t\t\t\tpress any key to go to menu");
                    getch();
                    goto again;
                }
               else if(rr==0)
                {
                    system("color 4c");
                    printf("\n\n\n\t\t\tSORRY Mr.");
                    puts(name);
                    printf("\n\n\t\t\tyou have not win any cash");
                    printf("\n\n\t\t\tBETTER LUCK NEXT TIME\n");
                    day(2);
                    edit_score(rr,name);
                    printf("\n\t\t\tpress any key to go to menu");
                    getch();
                    goto again;
                }

    }}
    getch();
}
int view_score()
{
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&scr);
    printf("\n\n\t\t***********************");
    printf("\n\n\t\t %s has secured the higest score %f",name,scr);
    printf("\n\n\t\t***********************");
    fclose(f);
    getch();
}
void reset_score()
{
     system("cls");
    int status;
  char file_name[25];
  status = remove("score.txt");
  if (status == 0)
    printf("%s file deleted successfully.\n",file_name);
  else
  {
    printf("Unable to delete the file\n");
    perror("Following error occurred");
  }
}
void help()
{
    system("cls");
    printf("\n\n\t\t\t\tHELP\n\t\t__________________________________\n\n");
    printf("1 : This quiz has two rounds\n\n");
    printf("2 : Round 1 is FASTEST FINGER FIRST in which you have 5 questions and 120 sec\n\n");
    printf("3 : Round 2 is HOT SEAT in which you have 12 questions\n\n");
    printf("4 : You must have to answer atlest 3 question right in round 1 to play round 2\n\n");
    printf("5 : round 2 have stage-I and stage-II\n\n");
    printf("6 : In stage-I you have 7 questions and in stage-II 5 questions\n\n");
    printf("7 : you will be given 20sec for each question in stage-I\n\n");
    printf("8 : there is no time limitation for stage-II\n\n\n\n\n");
    printf("\t\t\t*******BEST OF LUCK*********");
    PlaySound(TEXT("drop"),NULL,SND_SYNC);
    getch();
}
void edit_score(float score,char plnm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}
}
 int day(int n)
{
    int s;
    double i;
            for(s=n;s>=00;s--)
            {
                for( i=25599999;i>=0;i--)
                {
                    i++;
                    i--;
                }
            }
}
 char repeat(int s)
{
    char ans;
    time_t initial_time=time(NULL);
    float time_limit=20.0f;
    time(NULL);
    ans=toupper(getch());
   if((time(NULL)-initial_time)>time_limit)
   {
       system("color 4c");
       printf("time delay");
       day(1);
       system("cls");
       system("color 3a");
       printf("\n\n\n\t\t\t\tYOU HAVE WON Rs. %d",s);
       printf("\t\t\tTHANKYOU FOR YOUR TIME");
       day(1);
       exit(1);
   }
   else
        return (ans);
}
int time2(int n)
{
    int s;
    double i;
            for(s=n;s>=00;s--)
            {
                for( i=909999;i>=0;i--)
                {
                    i++;
                    i--;
                }
            }
}

