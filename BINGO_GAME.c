#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

int arr[5][5];
int bibh[75];
int car[200];
char arr2[5][5];

int i=0,j=0;
//arr2[i][j]='*';
//void  user_input();
int board[5][5];


void board_display()        ///This function prints the board along with the elements.
{
    int num ;

    printf("\n\n\n\n");
    SetColor(10);

    printf("\t\t ____ ____ ____ ____ ____ \t\t ____ ____ ____ ____ ____ \n");
    printf("\t\t|    |    |    |    |    |\t\t|    |    |    |    |    |\n");
    printf("\t\t| ");

    if(board[0][0]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[0][0]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[0][0]);

    }

    SetColor(10);
    printf(" | ");

    if(board[0][1]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[0][1]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[0][1]);

    }


    SetColor(10);
    printf(" | ");

    if(board[0][2]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[0][2]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[0][2]);

    }

    SetColor(10);
    printf(" | ");

    if(board[0][3]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[0][3]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[0][3]);

    }

    SetColor(10);
    printf(" | ");

    if(board[0][4]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[0][4]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[0][4]);

    }



    SetColor(10);
    printf(" |\t\t| a  | b  | c  | d  | e  |\n");
    printf("\t\t|____|____|____|____|____|\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \t\t|    |    |    |    |    |\n");
    printf("\t\t| ");


    if(board[1][0]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[1][0]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[1][0]);

    }

    SetColor(10);
    printf(" | ");

    if(board[1][1]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[1][1]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[1][1]);

    }


    SetColor(10);
    printf(" | ");

    if(board[1][2]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[1][2]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[1][2]);

    }

    SetColor(10);
    printf(" | ");

    if(board[1][3]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[1][3]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[1][3]);

    }

    SetColor(10);
    printf(" | ");

    if(board[1][4]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[1][4]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[1][4]);

    }



    SetColor(10);
    printf(" |\t\t| f  | g  | h  | i  | j  |\n");
    printf("\t\t|____|____|____|____|____|\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \t\t|    |    |    |    |    |\n");
    printf("\t\t| ");

    if(board[2][0]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[2][0]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[2][0]);

    }

    SetColor(10);
    printf(" | ");

    if(board[2][1]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[2][1]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[2][1]);

    }


    SetColor(10);
    printf(" | ");

    if(board[2][2]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[2][2]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[2][2]);

    }

    SetColor(10);
    printf(" | ");

    if(board[2][3]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[2][3]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[2][3]);

    }

    SetColor(10);
    printf(" | ");

    if(board[2][4]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[2][4]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[2][4]);

    }



    SetColor(10);
    printf(" |\t\t| k  | l  | m  | n  | o  |\n");
    printf("\t\t|____|____|____|____|____|\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \t\t|    |    |    |    |    |\n");
    printf("\t\t| ");


    if(board[3][0]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[3][0]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[3][0]);

    }

    SetColor(10);
    printf(" | ");

    if(board[3][1]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[3][1]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[3][1]);

    }


    SetColor(10);
    printf(" | ");

    if(board[3][2]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[3][2]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[3][2]);

    }

    SetColor(10);
    printf(" | ");

    if(board[3][3]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[3][3]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[3][3]);

    }

    SetColor(10);
    printf(" | ");

    if(board[3][4]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[3][4]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[3][4]);

    }



    SetColor(10);
    printf(" |\t\t| p  | q  | r  | s  | t  |\n");
    printf("\t\t|____|____|____|____|____|\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \t\t|    |    |    |    |    |\n");
    printf("\t\t| ");

    if(board[4][0]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[4][0]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[4][0]);

    }

    SetColor(10);
    printf(" | ");

    if(board[4][1]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[4][1]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[4][1]);

    }


    SetColor(10);
    printf(" | ");

    if(board[4][2]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[4][2]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[4][2]);

    }

    SetColor(10);
    printf(" | ");

    if(board[4][3]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[4][3]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[4][3]);

    }

    SetColor(10);
    printf(" | ");

    if(board[4][4]==0)
    {

        SetColor(3);                                    ///The setcolor function is responsible for changing the color of text
        printf("%-2d",board[4][4]);
    }
    else
    {
        SetColor(14);
        printf("%-2d",board[4][4]);

    }



    SetColor(10);
    printf(" |\t\t| u  | v  | w  | x  | y  |\n");
    printf("\t\t|____|____|____|____|____|\t\t|____|____|____|____|____|\n");


}


void display()                                                                        ///for display the computer generated number after finishing the game
{

    printf("\t\t ____ ____ ____ ____ ____\n");
    printf("\t\t|    |    |    |    |    | \n");
    printf("\t\t| %-2d | %-2d | %-2d | %-2d | %-2d |\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3],arr[0][4]);
    printf("\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \n");
    printf("\t\t| %-2d | %-2d | %-2d | %-2d | %-2d |\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3],arr[1][4]);
    printf("\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \n");
    printf("\t\t| %-2d | %-2d | %-2d | %-2d | %-2d |\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3],arr[2][4]);
    printf("\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \n");
    printf("\t\t| %-2d | %-2d | %-2d | %-2d | %-2d |\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3],arr[3][4]);
    printf("\t\t|____|____|____|____|____|\n");
    printf("\t\t|    |    |    |    |    | \n");
    printf("\t\t| %-2d | %-2d | %-2d | %-2d | %-2d |\n",arr[4][0],arr[4][1],arr[4][2],arr[4][3],arr[4][4]);
    printf("\t\t|____|____|____|____|____|\n");
}

int arr[5][5];



void generate()                                                                             ///for generating random number
{
    int arr1[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int arr2[]= {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int arr3[]= {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
    int arr4[]= {46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};
    int arr5[]= {61,62,63,64,65,66,67,68,69,70,71,72,73,74,75};
    srand(time(NULL));
    int i,j,k=rand(),l;
    for(i=0; i<5; i++)
    {
        int m=15;
        for(j=0; j<5; j++)
        {
            int indx=k%m;
            if(i==0)
            {
                arr[j][i]=arr1[indx];
                for(l=indx; l<14; l++)
                {
                    arr1[l]=arr1[l+1];
                }
            }
            else if(i==1)
            {
                arr[j][i]=arr2[indx];
                for(l=indx; l<14; l++)
                {
                    arr2[l]=arr2[l+1];
                }
            }
            else if(i==2)
            {
                arr[j][i]=arr3[indx];
                for(l=indx; l<14; l++)
                {
                    arr3[l]=arr3[l+1];
                }
            }
            else if(i==3)
            {
                arr[j][i]=arr4[indx];
                for(l=indx; l<14; l++)
                {
                    arr4[l]=arr4[l+1];
                }
            }
            else if(i==4)
            {
                arr[j][i]=arr5[indx];
                for(l=indx; l<14; l++)
                {
                    arr5[l]=arr5[l+1];
                }
            }

            m--;
        }
    }


    /*
     for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
             printf("%2d ",arr[i][j]);
         }
         printf("\n");
     }
     */


}

void print_array()                          ///printing the array
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%-3d ",arr[i][j]);
        }
        printf("\n");
    }

}

void move()                                ///This function takes the player input
{
    char x;
    int num;
    printf("\n\n\n");
    // char name[30];
    //printf("Enter your name : ");
    //scanf("%s",name);
    //scanf("%c",&x);
    //scanf("%d",&num);


    while(1)
    {
        printf("Press the letter on the keyboard to indicate in which slot you want to mark : ");
        scanf("%c",&x);
        if(!car[x] && x>='a' && x<='y')
        {
            car[x]=1;
            break;
        }
        getchar();
        printf("!!! WRONG INPUT !!! TRY AGAIN \n");
    }
    int lowerlimit=15*((x-'a')%5)+1;
    int upperlimit=lowerlimit+14;


    while(1)
    {
        if(((x-'a')%5)==0)
        {
            printf("Enter number (1-15) : ");

        }
        else if(((x-'a')%5)==1)
        {
            printf("Enter number (16-30) : ");

        }
        else if(((x-'a')%5)==2)
        {
            printf("Enter number (31-45) : ");

        }
        else if(((x-'a')%5)==3)
        {
            printf("Enter number (46-60) : ");

        }
        else if(((x-'a')%5)==4)
        {
            printf("Enter number (61-75) : ");

        }
        scanf("%d",&num);

        if(num>=lowerlimit && num<=upperlimit && !bibh[num])
        {
            bibh[num]=1;
            break;
        }

        printf("!!! WRONG INPUT !!! TRY AGAIN \n");
    }


    getchar();
    if(x=='a')
    {
        printf("Enter number (01-15) : ");
        SetColor(10);
        board[0][0]=num;
        printf("\a");
    }
    else if(x=='b')
    {
        SetColor(3);
        board[0][1]=num;
        printf("\a");
    }
    else if(x=='c')
    {
        SetColor(4);
        board[0][2]=num;
        printf("\a");
    }
    else if(x=='d')
    {
        SetColor(11);
        board[0][3]=num;
        printf("\a");
    }
    else if(x=='e')
    {
        SetColor(12);
        board[0][4]=num;
        printf("\a");
    }
    else if(x=='f')
    {
        SetColor(15);
        board[1][0]=num;
        printf("\a");
    }
    else if(x=='g')
    {
        SetColor(14);
        board[1][1]=num;
        printf("\a");
    }
    else if(x=='h')
    {
        SetColor(19);
        board[1][2]=num;
        printf("\a");
    }
    else if(x=='i')
    {
        SetColor(22);
        board[1][3]=num;
        printf("\a");
    }
    else if(x=='j')
    {
        SetColor(25);
        board[1][4]=num;
        printf("\a");
    }
    else if(x=='k')
    {
        SetColor(10);
        board[2][0]=num;
        printf("\a");
    }
    else if(x=='l')
    {
        SetColor(3);
        board[2][1]=num;
        printf("\a");
    }
    else if(x=='m')
    {
        SetColor(4);
        board[2][2]=num;
        printf("\a");
    }
    else if(x=='n')
    {
        SetColor(11);
        board[2][3]=num;
        printf("\a");
    }
    else if(x=='o')
    {
        SetColor(12);
        board[2][4]=num;
        printf("\a");
    }
    else if(x=='p')
    {
        SetColor(15);
        board[3][0]=num;
        printf("\a");
    }
    else if(x=='q')
    {
        SetColor(14);
        board[3][1]=num;
        printf("\a");
    }
    else if(x=='r')
    {
        SetColor(19);
        board[3][2]=num;
        printf("\a");
    }
    else if(x=='s')
    {
        SetColor(22);
        board[3][3]=num;
        printf("\a");
    }
    else if(x=='t')
    {
        SetColor(25);
        board[3][4]=num;
        printf("\a");
    }
    else if(x=='u')
    {
        SetColor(10);
        board[4][0]=num;
        printf("\a");
    }
    else if(x=='v')
    {
        SetColor(3);
        board[4][1]=num;
        printf("\a");
    }
    else if(x=='w')
    {
        SetColor(6);
        board[4][2]=num;
        printf("\a");
    }
    else if(x=='x')
    {
        SetColor(19);
        board[4][3]=num;
        printf("\a");
    }
    else if(x=='y')
    {
        SetColor(25);
        board[4][4]=num;
        printf("\a");
    }


}
void SetColor(int ForgC)                                    ///for giving multiple color in this game
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
int lose()                      ///check condition for losing
{
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            if(!board[i][j])
                return 0;
    return 1;
}
int check()                     ///check condition for each and every box
{
    int m,i,j;
    for(i=0; i<5; i++)
    {
        m=0;
        for(j=0; j<5; j++)
        {
            if(arr[i][j]!=board[i][j])
            {
                break;
            }
            m++;
        }
        if(m==5)
        {
            return 1;
        }
    }
    for(i=0; i<5; i++)
    {
        m=0;
        for(j=0; j<5; j++)
        {
            if(arr[j][i]!=board[j][i])
            {
                break;
            }
            m++;
        }
        if(m==5)
        {
            return 1;
        }
    }
    m=0;
    for(i=0; i<5; i++)
    {
        if(arr[i][i]!=board[i][i])
        {
            break;
        }
        m++;
    }
    if(m==5)
    {
        return 1;
    }
    m=0;
    for(i=0; i<5; i++)
    {
        if(arr[i][4-i]!=board[i][4-i])
        {
            break;
        }
        m++;
    }
    if(m==5)
    {
        return 1;
    }
    return 0;

}


int main ()
{
    generate();


    char name[30];
    char select1 ;
    printf("\n\n");
    printf("\t\t\t\t\tTHE BINGO GAME\n\n\n\n");
    printf("Enter your name : ");
    gets(name);
    printf("\n\n");
    printf("\t\t\t\t 1.New Game\n\n");
    printf("\t\t\t\t\t 2.Instruction\n\n\n\n\n ");

    printf("\n\n");

    for(;;)
    {
        printf("Press '1' to start new game and Press '2' to see the Instruction : ");
        scanf("%c",&select1) ;
        getchar();
        printf("\n\n");

        if(select1=='1')
        {
            Beep(600,200);
            Beep(512,200);
            Beep(655,200);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            break ;
        }
        else if(select1=='2')
        {
            printf("\t\t\t ___ ___ ___ ___ ___\n");
            printf("\t\t\t|a  |b  |c  |d  |e  |\n");
            printf("\t\t\t|___|___|___|___|___|\n");
            printf("\t\t\t|f  |g  |h  |i  |j  |\n");
            printf("\t\t\t|___|___|___|___|___|\n");
            printf("\t\t\t|k  |l  |m  |n  |o  |\n");
            printf("\t\t\t|___|___|___|___|___|\n");
            printf("\t\t\t|p  |q  |r  |s  |t  |\n");
            printf("\t\t\t|___|___|___|___|___|\n");
            printf("\t\t\t|u  |v  |w  |x  |y  |\n");
            printf("\t\t\t|___|___|___|___|___|\n");

            printf("\n\n");

            printf("1.Each letter represents a box that shown in the upper figure. Press that letter to input in that particular box.\n\n");
            printf("2.Each row must be randomly assigned 5 numbers with these specifications: 1 to 15 in the 1st column, \n");
            printf("  16 to 30 in the 2nd column; 31 to 45 in the 3rd column; 46 to 60 in the 4th column  \n");
            printf("  and 61 to 75 in the 5th column .\n\n");
            printf("3.If the player can match one row or column or diagonally with the computer generated number then\n ");
            printf(" he/she wins otherwise he/she lost .\n\n");
            printf("\n\n");
            SetColor(10);
            printf("\t\tNow press '1' to start a new game and enjoy your game \n\n\n ");
            SetColor(15);
        }

        else
        {
            printf("You pressed a wrong button.Try the correct ones \n\n");

        }

    }


    while(1)
    {

        system("cls");
        SetColor(10);
        printf("\n\n");
        printf("\t\t\t\t\tTHE BINGO GAME\n\n\n\n");
        SetColor(10);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPlayer Name : %s\n\n",name);
        //display();
        //intro();
        board_display();

        move();
        if(check())
        {
            system("cls");
            printf("\n\n");
            SetColor(10);
            printf("\t\t\t\t\tTHE BINGO GAME\n\n\n\n");
            SetColor(10);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPlayer Name : %s\n\n",name);
            SetColor(10);
            board_display();
            display();
            Beep(600,200);
            Beep(512,200);
            Beep(655,200);
            printf("\n\n\n\n\t CONGRATULATIONS %s! YOU WIN!\n\n",name);
            Beep(524,200);
            Beep(725,200);
            Beep(536,200);
            Beep(600,200);

            break;
        }
        else if(lose())
        {
            system("cls");
            printf("\n\n");
            SetColor(10);
            printf("\t\t\t\t\tTHE BINGO GAME\n\n\n\n");
            SetColor(10);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPlayer Name : %s\n\n",name);
            board_display();
            display();
            Beep(500,400);
            SetColor(4);
            printf("\n\n\n\n\t Sorry %s,You Lost.Better luck next time \n\n  ",name);
            Beep(400,500);
            Beep(300,500);

            break;
        }

    }

    getch();
}
