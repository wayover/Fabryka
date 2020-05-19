#include "File.h"


void translate(string text)
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
    toFile(text, translatedText);
}

void toFile(string text, const vector<string> &translatedText, string nazwa)
{
    plik.open( nazwa, std::ios::out );
    plik<<text<<endl;
    if( plik.good() == true )
    {
        for(int i=0; i<translatedText.size(); i++)
        {
            plik<<translatedText[i]<<" ";
        }
        plik.close();
        cout<<"Zapisano zdanie w pliku "<<nazwa<<endl;
    }
    else
    {
        cout << "Dostep do pliku zostal zabroniony!" << endl;
    }

}
