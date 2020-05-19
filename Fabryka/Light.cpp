#include "Light.h"



void swiatlo::capslockBlink(int dl)
{
    INPUT in[2];
    in[0].type=INPUT_KEYBOARD;
    in[0].ki.wVk=VK_CAPITAL;
    in[0].ki.wScan=0;
    in[0].ki.time=dl;
    in[0].ki.dwFlags=0;
    in[0].ki.dwExtraInfo=0;

    in[1]=in[0];
    in[1].ki.dwFlags=KEYEVENTF_KEYUP;
    ::SendInput(2, in, sizeof(INPUT));
}

void swiatlo::translate(string text)
{
    for(int i=0; i<text.size(); i++)
    {
        for(int k=0; k<40; k++)
        {
            if(zdanie[i]==' ')
            {
                translatedText.push_back('0');
            }
            else
            {
                if(zdanie[i]==latinU[k])
                {
                    translatedText.push_back(morse[k]);
                }
                else
                {
                    if(zdanie[i]==latinl[k])
                    {
                        translatedText.push_back(morse[k]);
                    }
                }
            }
        }
    }
    lightThis(translatedText);
}

void swiatlo::lightThis(const vector<string> &translatedText)
{
    for(int i=0; i<translatedText.size(); i++)
    {
        switch(translatedText[i])
        {
        case "0":
            Sleep(p);
            break;
        case ".":
            capslockBlink(0)
            break;
        case "-":
            capslockBlink(2)
            break;
        }
    }

}
