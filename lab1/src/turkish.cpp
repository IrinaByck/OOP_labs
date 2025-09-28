#include "../include/turkish.h"

std::string convertNumberToTurkish(int number)
{
    std::string num1[] = {"sıfır", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};
    std::string num2[] = {"sıfır", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};
    int number1 = number / 10;
    int number2 = number % 10;
    if (number2 == 0){
        return num2[number1];
    }
    if (number1 ==0 ){
        return num1[number2];
    }
    return num2[number1] + " " + num1[number2];
}
