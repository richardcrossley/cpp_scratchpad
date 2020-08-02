//
// Created by richard on 2/8/2020.
//

#include "SimpleCalc.h"

SimpleCalc::SimpleCalc()
{
    setANumber(0);
    setANumber(0);
}

SimpleCalc::SimpleCalc(float aNumber, float bNumber) : _aNumber(aNumber), _bNumber(bNumber)
{}

float SimpleCalc::getANumber() const
{
    return _aNumber;
}

void SimpleCalc::setANumber(float aNumber)
{
    _aNumber = aNumber;
}

float SimpleCalc::getBNumber() const
{
    return _bNumber;
}

void SimpleCalc::setBNumber(float bNumber)
{
    _bNumber = bNumber;
}

float SimpleCalc::add()
{
    return _aNumber + _bNumber;
}

float SimpleCalc::subtract()
{
    return _aNumber - _bNumber;
}

float SimpleCalc::multiply()
{
    return _aNumber * _bNumber;
}

float SimpleCalc::divide()
{
    return _aNumber / _bNumber;
}