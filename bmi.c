#include <stdio.h>
#include <stdlib.h>

float bmi(float weight, float height)
{
float sqht;
sqht = (height/100)*(height/100);
if (height < 2) height = height*100;

return weight/sqht;

}

char* BMI_Evaluation(char S, float bmi_index)
{
float too_low = 18.5;
float obese = 32;
float too_high;
char *str1;
if (S == 'F') too_high = 25; else too_high = 27;

if (bmi_index < too_low) str1 = "BMI is too low"; 
    else if (bmi_index > obese) str1 = "BMI above obesity limit";
        else if (bmi_index > too_high) str1 = "BMI is higher than normal";
            else str1 = "BMI is normal";
     
return str1;
}

int main()
{
float wght, hght, bmi1;
char S1;
char *Eval;

printf("Enter your weight: ");
scanf("%f", &wght);

printf("Enter your height: ");
scanf("%f", &hght);

printf("Enter your sex (M/F): ");
scanf(" %c",&S1);
bmi1 = bmi(wght,hght);
printf("Your BMI: %4.1f", bmi1);

Eval = BMI_Evaluation(S1, bmi1);
printf("\nEvaluation: %s", Eval);

return 0;
}




