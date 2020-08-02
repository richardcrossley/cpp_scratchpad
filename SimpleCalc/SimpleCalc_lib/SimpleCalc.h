//
// Created by richard on 2/8/2020.
//

#ifndef SIMPLECALC_SIMPLECALC_H
#define SIMPLECALC_SIMPLECALC_H


class SimpleCalc
{
private:
    float _aNumber;
    float _bNumber;
public:
    float add(void);
    float subtract(void);
    float multiply(void);
    float divide(void);

    SimpleCalc();

    SimpleCalc(float aNumber, float bNumber);

    float getANumber() const;

    void setANumber(float aNumber);

    float getBNumber() const;

    void setBNumber(float bNumber);

};


#endif //SIMPLECALC_SIMPLECALC_H
