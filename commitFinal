// Este es el código final que realice del proyecto 1 para que pueda funcionar con diferentes datos y plantillas

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    string linea, linea2, linea3, palabra, palabra2;
    int pico1, pico2, inicia = 1, plargo;
    ifstream archEnt;
    ifstream archEnt2;
    ofstream archSal;
    
    archEnt.open("datos2.txt");
    archEnt2.open("plantilla2.txt");
    archSal.open("salidaproy2.txt");
    
    while (getline(archEnt2,linea)) { linea3 += linea;}
    {
        while (inicia == 1)
        {
            pico1 = linea3.find("<");
            pico2 = linea3.find(">");
            
            if (pico1 != -1 && pico1 <= linea3.length() && pico2 != -1 &&  pico2 <= linea3.length())
            {
                plargo = pico2 - pico1 + 1;
                //cout<<largo<<endl;
                palabra = linea3.substr(pico1, plargo);
                //cout<<palabra<<endl;
                
                while (getline(archEnt,linea2))
                {
                    if (linea2.find(palabra) != -1 && linea2.find(palabra) <= linea2.length())
                    {
                        palabra2 = linea2.substr(plargo +1);
                        //cout<<palabra2<<endl;
                        linea3.replace(pico1, plargo, palabra2);
                    }
                }
                archEnt.close();
                archEnt.open("datos2.txt");
            }
            else
            {
                inicia = 0;
            }
        
        }
        
        archSal<<linea3;
        /*pico1 = linea.find("<");
        pico2 = linea.find(">");
        palabra = linea.substr((pico1 + 1), (pico2-1) - pico1);*/
        //cout<<palabra<<endl;
        
        //palabra = linea.substr(pico1 + 1, (pico2-1) - pico1);
        //cout<<linea.find(palabra)<<endl;
        
        //pico1 = linea.find("<", linea.find(palabra) + palabra.length());
        //pico2 = linea.find("<", linea.find(palabra) + palabra.length());
        /*cout<<palabra<<endl;
        cout<<linea.find(palabra)<<endl;
        cout<<pico1<<" "<<pico2<<endl;*/
        /*pico1 = linea.find("<");
        pico2 = linea.find(">");
        while (contador != -1)
        {
            palabra = linea.substr(pico1 + 1, (pico2 - 1) - pico1);
            contador = linea.find(palabra) + palabra.length();
            cout<<palabra<<endl;
            cout<<pico1<<" "<<pico2<<endl;
            //pico1 = linea.find("<")+1;
            //pico2 = linea.find(">")+1;
        }*/
        //cout<<pico2<<endl;
        //cout<<pico1<<endl;
        //cout<<palabra<<endl;
    }
    
    archEnt.close();
    archEnt2.close();
    archSal.close();
    
    return 0;
}
