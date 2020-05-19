#include "Sound.h"

void dzwiek::translate(std::string zdanie)
{
    for(int i=0; i<text.size(); i++)
    {
        for(int k=0; k<40; k++)
        {
            if(zdanie[i]==' ')
            {
                translatedText.push_back("0");
            }
            else
            {
                if(zdanie[i]==latinU[k])
                {
                    translatedText.push_back(mors[k]);
                }
                else
                {
                    if(zdanie[i]==latinl[k])
                    {
                        translatedText.push_back(mors[k]);
                    }
                }
            }
        }
    }
    soundThis(translatedText);
}
void dzwiek::soundThis(const std::vector<std::string> &translatedText)
{
    for(int i=0; i<translatedText.size(); i++)
    {
        switch (translatedText[i])
        {

        case "0":
            Sleep(400);
            break;
        case ".":
            Beep(f, kro);
            break;
        case "-":
            Beep(f, kre);
            break;

        }
    }

}



