#include <iostream>
#define _WIN32_WINNT 0x403//mowi naklowkowi ze chcecie uzywac nowszej wersji
#include <Windows.h>

#include "fabryka.h"

using namespace std;



int main()
{
    factory f;//wskaŸnik na morsa
    f.setExtraInfo("200 200 400");//potrzeba parser
    f.setOutput(factory::beep);//ustwienie outputu
    f.convertText("Ala ma kota");//konwersja ³añcucha tekstowego
    f.setOutput(factory::disc);//zapisze do pliku "200 200 400"
    f.convertText("A pies");
    f.convert(123);
    f.convert(1.23);
    return 0;
}

