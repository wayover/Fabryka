#include "Console.h"

void console::translate(std::string text)
{

for(int i=0; i<text.size(); i++)
    {
        for(int k=0; k<40; k++)
        {
            if(text[i]==' ')
            {
                translatedText.push_back("0");
            }
            else
            {
                if(text[i]==latinU[k])
                {
                    translatedText.push_back(mors[k]);
                }
                else
                {
                    if(text[i]==latinl[k])
                    {
                        translatedText.push_back(mors[k]);
                    }
                }
            }
        }
    }
    displayThis(text, translatedText);
}

void console::displayThis(std::string text, const std::vector<std::string> &translatedText)
{
    std::cout<<text<<std::endl;

    for(int i=0; i<translatedText.size(); i++)
    {
        cout<<translatedText[i]<<" ";
    }
}
