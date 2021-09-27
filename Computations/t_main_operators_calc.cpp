#include "t_main_operators_calc.h"

TMainOperatorsCalc::TMainOperatorsCalc()
{

}

double TMainOperatorsCalc::add(const double a, const double b)
{
    return (a + b);
}

double TMainOperatorsCalc::subtract(const double a, const double b)
{
    return (a - b);
}

double TMainOperatorsCalc::multiply(const double a, const double b)
{
    return (a * b);
}

double TMainOperatorsCalc::division(const double a, const double b)
{
    return (a / b);
}

double TMainOperatorsCalc::cent(const double number)
{
    return (number / 100);
}

double TMainOperatorsCalc::root(const double number)
{
    return  (qPow(number, 0.5));
}

double TMainOperatorsCalc::square(const double number)
{
    return (number * number);
}

double TMainOperatorsCalc::inverse(const double number)
{
    return (1 / number);
}

double TMainOperatorsCalc::calc(QString displayText)
{
    QStringList numList;
    double answer = 0;
    double firstNum;
    double secondNum;

    if (displayText.contains("+")){
        numList = displayText.split("+", QString::SplitBehavior::KeepEmptyParts);
        firstNum = numList.at(0).toDouble();
        secondNum = numList.at(1).toDouble();
        answer = add(firstNum, secondNum);
    }else if (displayText.contains("-")){
        numList = displayText.split("-", QString::SplitBehavior::KeepEmptyParts);
        if (displayText.at(0) == "-"){
            firstNum = - numList.at(1).toDouble();
            secondNum = numList.at(2).toDouble();
        }else{
        firstNum = numList.at(0).toDouble();
        secondNum = numList.at(1).toDouble();
        }
        answer = subtract(firstNum, secondNum);
    }else if (displayText.contains("*")){
        numList = displayText.split("*", QString::SplitBehavior::KeepEmptyParts);
        firstNum = numList.at(0).toDouble();
        secondNum = numList.at(1).toDouble();
        answer = multiply(firstNum, secondNum);
   } else if (displayText.contains("/")){
        numList = displayText.split("/", QString::SplitBehavior::KeepEmptyParts);
        firstNum = numList.at(0).toDouble();
        secondNum = numList.at(1).toDouble();
        answer = division(firstNum, secondNum);
    }

    return answer;
}
