#ifndef TMAINOPERATORSCALC_H
#define TMAINOPERATORSCALC_H

#include <QtMath>
#include <QStringList>


class TMainOperatorsCalc
{
public:
    TMainOperatorsCalc();
    double add(const double a, const double b);
    double subtract(const double a, const double b);
    double multiply(const double a, const double b);
    double division(const double a, const double b);
    double cent(const double number);
    double root(const double number);
    double square(const double number);
    double inverse(const double number);
    double calc(QString displayText);

};

#endif // TMAINOPERATORSCALC_H
