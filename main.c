/********************************************************************
* Author:         Nate Tillery
* Course:         EGR 226 907
* Date:           20/01/2021
* Project:        Lab 01
* File:           main.c
* Description:    This program is meant to help students review C programming so that they can  proceed comfortably with the course.
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXSIZE 250

void prompt(void);
void calcResistorColors(int);
void displayChart();
int getIntBetween();


/*******| main |*****************************************************
* Brief:         This is the main function that will be the primary operating space of the program.
* Input/s:       None
* Return:        0
**********************************************************************/
int main()
{
    int userValue;
    char repeat = 'z';

    while (repeat != 'x')
    {

        displayChart();

        userValue = getIntBetween();

        calcResistorColors(userValue);

        printf("Would you like to find information on another resistor? (x to exit, any other key to continue)\n");
        while ( getchar() != '\n' );
        scanf("%c", &repeat);
    }

    return 0;
}

/*******| prompt |*****************************************************
* Brief:         This is the main function that will be the primary operating space of the program.
* Input/s:       None
* Return:        0
**********************************************************************/
void prompt(void)
{
    printf("This program will allow you to enter a resistance in ohms and have it converted to color coded bands.\n");
    printf("Please enter the value of your resistor in ohms. (1-9900000): ");
}

/*******| getIntBetween |*******************************************************
* Brief:         This function will take an integer between 1 and 99000000.
* Input/s:       None
* Return:        An integer named userValue
*********************************************************************************/
int getIntBetween()
{
    int userValue;

    prompt();
    scanf("%d", &userValue);

    while (userValue <= 0 || userValue >= 9900001) //Error checking
    {
        fflush(stdin);
        printf("ERROR: Invalid input.\n");
        scanf("%d", &userValue);
    }


    return userValue;
}

/*******| calcResistorColors |*****************************************************
* Brief:         This function takes the value of the resistor and tells the user which colors will be displayed.
* Input/s:       Value of resistor in M Ohms
* Return:        None
*********************************************************************************/
void calcResistorColors(int resistorValue)
{
    int i = 0;
    int multiplier = resistorValue;
    int temp = resistorValue;
    char bandOne[MAXSIZE], bandTwo[MAXSIZE], bandThree[MAXSIZE], bandFour[MAXSIZE];

    while (multiplier >= 10)
    {
        multiplier = multiplier / 100;
        i++;
        if (i = 0)
        {
            strcpy(bandFour, "Black");
        }
        else if (i = 1)
        {
            strcpy(bandFour, "Brown");
        }
        else if (i = 2)
        {
            strcpy(bandFour, "Red");
        }
        else if (i = 3)
        {
            strcpy(bandFour, "Orange");
        }
        else if (i = 4)
        {
            strcpy(bandFour, "Yellow");
        }
        else if (i = 5)
        {
            strcpy(bandFour, "Green");
        }
        else if (i = 6)
        {
            strcpy(bandFour, "Blue");
        }
        else if (i = 7)
        {
            strcpy(bandFour, "Violet");
        }
    }
    printf("The value has a multiplier of %d\n", i);

    //Read the first digit
    if (temp > 10000)
    {
        if(temp <= 100000 && temp > 90000)
        {
            strcpy(bandOne, "White");
            temp = temp - 90000;
        }
        else if(temp <= 90000 && temp > 80000)
        {
            strcpy(bandOne, "Grey");
            temp = temp - 80000;
        }
        else if(temp <= 80000 && temp > 70000)
        {
            strcpy(bandOne, "Violet");
            temp = temp - 70000;
        }
        else if(temp <= 70000 && temp > 60000)
        {
            strcpy(bandOne, "Blue");
            temp = temp - 60000;
        }
        else if(temp <= 60000 && temp > 50000)
        {
            strcpy(bandOne, "Green");
            temp = temp - 50000;
        }
        else if(temp <= 50000 && temp > 40000)
        {
            strcpy(bandOne, "Yellow");
            temp = temp - 40000;
        }
        else if(temp <= 40000 && temp > 30000)
        {
            strcpy(bandOne, "Orange");
            temp = temp - 30000;
        }
        else if(temp <= 30000 && temp > 20000)
        {
            strcpy(bandOne, "Red");
            temp = temp - 20000;
        }
        else if(temp <= 20000 && temp > 10000)
        {
            strcpy(bandOne, "Brown");
            temp = temp - 10000;
        }
        else if(temp <= 10000 && temp >= 00000)
        {
            strcpy(bandOne, "Black");
        }
    }

    //Read the second digit
    if (temp > 1000)
    {
        if(temp <= 10000 && temp > 9000)
        {
            strcpy(bandTwo, "White");
            temp = temp - 9000;
        }
        else if(temp <= 9000 && temp > 8000)
        {
            strcpy(bandTwo, "Grey");
            temp = temp - 8000;
        }
        else if(temp <= 8000 && temp > 7000)
        {
            strcpy(bandTwo, "Violet");
            temp = temp - 7000;
        }
        else if(temp <= 7000 && temp > 6000)
        {
            strcpy(bandTwo, "Blue");
            temp = temp - 6000;
        }
        else if(temp <= 6000 && temp > 5000)
        {
            strcpy(bandTwo, "Green");
            temp = temp - 5000;
        }
        else if(temp <= 5000 && temp > 4000)
        {
            strcpy(bandTwo, "Yellow");
            temp = temp - 4000;
        }
        else if(temp <= 4000 && temp > 3000)
        {
            strcpy(bandOne, "Orange");
            temp = temp - 3000;
        }
        else if(temp <= 3000 && temp > 2000)
        {
            strcpy(bandTwo, "Red");
            temp = temp - 2000;
        }
        else if(temp <= 2000 && temp > 1000)
        {
            strcpy(bandTwo, "Brown");
            temp = temp - 1000;
        }
        else if(temp <= 1000 && temp >= 0000)
        {
            strcpy(bandTwo, "Black");
        }
    }

    //Read the last digit
    if (temp > 100)
    {
        if(temp <= 1000 && temp > 900)
        {
            strcpy(bandThree, "White");
            temp = temp - 900;
        }
        else if(temp <= 900 && temp > 800)
        {
            strcpy(bandOne, "Grey");
            temp = temp - 800;
        }
        else if(temp <= 800 && temp > 700)
        {
            strcpy(bandThree, "Violet");
            temp = temp - 700;
        }
        else if(temp <= 700 && temp > 600)
        {
            strcpy(bandThree, "Blue");
            temp = temp - 600;
        }
        else if(temp <= 600 && temp > 500)
        {
            strcpy(bandThree, "Green");
            temp = temp - 500;
        }
        else if(temp <= 500 && temp > 400)
        {
            strcpy(bandThree, "Yellow");
            temp = temp - 400;
        }
        else if(temp <= 400 && temp > 300)
        {
            strcpy(bandThree, "Orange");
            temp = temp - 300;
        }
        else if(temp <= 300 && temp > 200)
        {
            strcpy(bandThree, "Red");
            temp = temp - 200;
        }
        else if(temp <= 200 && temp > 100)
        {
            strcpy(bandThree, "Brown");
            temp = temp - 100;
        }
        else if(temp <= 100 && temp >= 000)
        {
            strcpy(bandThree, "Black");
        }
    }

    printf("Your resistor has a resistance of %d ohms and has a color code of %s - %s - %s - %s\n", resistorValue, bandOne, bandTwo, bandThree, bandFour);
}

/*******| displayChart |********************************************************
* Brief:         This function simply displays the graphic given to us in the lab handout.
* Input/s:       None
* Return:        None
*********************************************************************************/
void displayChart()
{
    printf("---------------Resistor Codes---------------\n");
    printf("|Character| Color  | Band 1 & 2 |   Band 3  |\n");
    printf("|    K    | Black  |      0     |*1         |\n");
    printf("|    N    | Brown  |      1     |*10        |\n");
    printf("|    R    | Red    |      2     |*100       |\n");
    printf("|    O    | Orange |      3     |*1,000     |\n");
    printf("|    Y    | Yellow |      4     |*10,000    |\n");
    printf("|    G    | Green  |      5     |*100,000   |\n");
    printf("|    B    | Blue   |      6     |*1,000,000 |\n");
    printf("|    V    | Violet |      7     |*10,000,000|\n");
    printf("|    E    | Grey   |      8     |           |\n");
    printf("|    W    | White  |      9     |           |\n");
    printf("|    D    | Gold   |            |           |\n");
    printf("|    S    | Silver |            |           |\n");
    printf("---------------------------------------------\n\n");

}
