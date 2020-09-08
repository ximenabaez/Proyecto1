//Este es el primer código que realice mal ya que no era compatible para diferentes datos y plantillas.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string linea, linea2;
    string cliente = "<cliente>", saldo = "<saldo>", fecha = "<fecha>", cuenta = "<cuenta>", direccion = "<direccion>", empresa = "<empresa>";
    string cliente2 = "<cliente>", saldo2 = "<saldo>", fecha2 = "<fecha>", cuenta2 = "<cuenta>", direccion2 = "<direccion>", empresa2 = "<empresa>";
    int ncliente, nsaldo, nc, ns, contadorcli=0, contadorsal=0;
    ifstream archEnt;
    ifstream archEnt2;
    ofstream archSal;
    archEnt.open("datos.txt");
    archEnt2.open("plantilla.txt");
    archSal.open("salidaproy.txt");
    
    while (getline(archEnt,linea))
    {
        
        /*nc = linea.find(cliente);
        if (contadorcli != -1)
        {
            cliente = linea.substr(linea.find("<cliente>")+ cliente.length()+1);
            contadorcli = linea.find("<cliente>",(contadorcli + cliente.length()));
            //cout<<cliente<<endl;
        }
        else
        {
            linea = linea.erase(linea.find(cliente));
        }
        contadorsal = contadorcli;
        //linea = linea.erase(linea.find(cliente));
        while (contadorsal != -1)
        {
            saldo = linea.substr(linea.find("<saldo>")+ saldo.length()+1);
            contadorsal = linea.find("<saldo>",(contadorsal + saldo.length()));
            //cout<<cliente<<endl;
        }*/
        /*if (cliente == "<cliente>")
        {
            cliente = linea.substr(linea.find("<cliente>")+ cliente.length()+1);
            //cout<<cliente<<endl;
        }
        
        if (saldo == "<saldo>")
        {
            saldo = linea.substr(linea.find("<saldo>")+ saldo.length()+1);
            //cout<<saldo<<endl;
        }
        
        else if (fecha == "<fecha>")
        {
            fecha = linea.substr(linea.find("<fecha>")+ fecha.length()+1);
            //cout<<fecha<<endl;
        }
        
        else if (cuenta == "<cuenta>")
        {
            cuenta = linea.substr(linea.find("<cuenta>")+ cuenta.length()+1);
            //cout<<cuenta<<endl;
        }
        
        else if (direccion == "<direccion>")
        {
            direccion = linea.substr(linea.find("<direccion>")+ direccion.length()+1);
            //cout<<direccion<<endl;
        }
        
        else if (empresa == "<empresa>")
        {
            empresa = linea.substr(linea.find("<empresa>")+ empresa.length()+1);
            //cout<<empresa<<endl;
        }*/
        cout<<cliente<<endl;
        cout<<saldo<<endl;
        cout<<linea.find(saldo)<<endl;
        //cout<<fecha<<endl;
        //cout<<cuenta<<endl;
        //cout<<direccion<<endl;
        //cout<<empresa<<endl;
        
    while (getline(archEnt2,linea))
    {
        ncliente = linea.find(cliente2);
        while (ncliente != -1)
        {
            linea = linea.replace(ncliente,cliente2.length(),cliente);
            ncliente = linea.find(cliente2, ncliente + cliente2.length());
        }
        
        nsaldo = linea.find(saldo2);
        while (nsaldo != -1)
        {
            linea = linea.replace(nsaldo,saldo2.length(),saldo);
            nsaldo = linea.find(saldo2, ncliente + saldo2.length());
        }
        /*while (linea.find(saldo2) != -1)
        {
            linea = linea.replace(linea.find(saldo2),saldo2.length(),saldo);
        }
        while (linea.find(fecha2) != -1)
        {
            linea = linea.replace(linea.find(fecha2),fecha2.length(),fecha);
        }
        while (linea.find(cuenta2) != -1)
        {
            linea = linea.replace(linea.find(cuenta2),cuenta2.length(),cuenta);
        }
        while (linea.find(direccion2) != -1)
        {
            linea = linea.replace(linea.find(direccion2),direccion2.length(),direccion);
        }
        while (linea.find(empresa2) != -1)
        {
            linea = linea.replace(linea.find(empresa2),empresa2.length(),empresa);
        }*/
        
        //cout<<linea<<endl;
    }
        
    }
    archEnt.close();
    archEnt2.close();
    archSal.close();
    
    return 0;
}
