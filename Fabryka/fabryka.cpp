#include "fabryka.h"

void factory::setExtraInfo(std::string e_inf)
{
    inf=e_inf;
    p.parseStr_to_Double(3, e_inf);
    i1=p.giveNumber(0);
    i2=p.giveNumber(1);
    i3=p.giveNumber(2);
}

void factory::setOutput(factory::dzwignia n)
{
    output=n;
}

void factory::convertText(std::string &text)
{
    switch(output)
    {
    case 1:
    {
        dzwiek dt(i1, i2, i3);
        dt.translate(text);
    }
    break;
    case 2:
    {
        file ft(inf);
        ft.translate(text);
    }
    break;
    case 3:
    {
        console ct;
        ct.translate(text);
    }
    break;
    case 4:
    {
        swiatlo l;
        l.translate(text);
    }
    break;

    }
}

void factory::convert(double num)
{
    p.parseDouble_to_Str(num);
    text=p.giveString();
    switch(out)
    {
    case 1:
    {
        p.parseStr_to_Double(3, inf);
        i1=p.giveNumber(0);
        i2=p.giveNumber(1);
        i3=p.giveNumber(2);
        dzwiek dn(i1, i2, i3);
        dn.translate(text);
    }
    break;
    case 2:
    {
        file fn(inf);
        fn.translate(text);
    }

    break;
    case 3:
    {
        console cn;
        cn.translate(text);
    }
    break;
    case 4:
    {
        swiatlo ln;
        ln.translate(text);
    }

    break;

    }
}
