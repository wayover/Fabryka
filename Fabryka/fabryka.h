#ifndef FABRYKA_H_INCLUDED
#define FABRYKA_H_INCLUDED

#include <fstream>
#include <string>
#include <vector>
#include "Console.h"
#include "File.h"
#include "Light.h"
#include "Sound.h"
#include "Parser.h"

class factory
{
    public:
    factory();
    ~factory();

    enum dzwignia { beep = 1, disc, display, swiatlo};

    std::string e_inf;//extra informacje
    std::string inf;
    int i1, i2, i3;
    parser p;
    dzwignia output;//ustawianie outputu
    dzwignia n;
    int out;
    std::string text;//podawany tekst
    double num;
    void setExtraInfo(std::string e_inf);
    void setOutput(factory::dzwignia n);
    void convertText(std::string &text);
    void convert(double num);//??

};


#endif // FABRYKA_H_INCLUDED
