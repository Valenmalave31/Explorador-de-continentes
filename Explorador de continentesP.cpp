#include <iostream>
#include <fstream>
using namespace std;


void visualizar();
void top_poblaciones();
void eliminar();
void modificar();
void archivo();
void archivo2();

string nombres_paises[50][50]; 
string nombres_continentes[50];
string nombres_capitales[50][50];
string idiomas_paises[50][50];
string presidente_Actl[50][50];

int top_poblacion[5];
int poblacion[50][50];
int superficie[50][50];
int poblacion_actual;
int numero_continentes, capitales;
int menu, menu1, menu2, opc, opc1, opc2, opc3; 
int numero_paises, poblacion_Global, pais_espesifico;
int eliminar_pais, eliminar_continente; 
int superficie_General, densidad_Globam;
int modificar_continente,modificar_pais; 
int densidad_poblacion;


int main()
{
 
    do
    {
         cout<<"\tBienvenidos al explorador de continentes "<<endl;
         cout<<"Seleccione una opcion "<<endl;
         cout<<"1. Para registar un continente "<<endl;
         cout<<"2. Visualizar la informacion general "<<endl;
         cout<<"3. Visualizar la informacion de un pais "<<endl; 
         cout<<"4. Eliminar un continente o un pais "<<endl;
         cout<<"5. Para modificar un contienen o un pais "<<endl;
         cout<<"6. Top de la poblacion "<<endl;
         cout<<"7. Salir "<<endl;
        
         cout<<"\nOpcion: ";
         cin>>menu;
         //cout<<endl;
        
        if(menu == 7)
        {
         cout<<"\nHasta pronto "<<endl;    
        }
        
        switch(menu)
        {
        case 1:
             cout<<endl;
             cout << "\nCUANTOS CONTINENETES DESEA CREAR: ";
             cin >> numero_continentes;
             cout << "INGRESE EL NUMERO DE PAISES QUE DESEA CREAR: ";
             cin >> numero_paises;
             cout<<endl;
             for (int i = 0; i < numero_continentes; i++) 
             {
             cout << "Ingrese el nombre del continente " << i+1 << ": ";
             cin>>nombres_continentes[i];
                 for (int j = 0; j < numero_paises; j++) 
                {
                 cout << "Ingrese el nombre del país " << j+1<<": ";
                 cin>>nombres_paises[i][j];
                 cout << "Ingrese el nombre de la capital: "; 
                 cin >> nombres_capitales[i][j];
                 cout<<"Digite el nombre del presidente: ";
                 cin >>presidente_Actl[i][j];
                 cout <<"Digite el idioma oficial del pais: ";
                 cin >>idiomas_paises[i][j];
                 cout<<"Digite el numero de habitantes: ";
                 cin>>poblacion[i][j];
                 cout<<"Digite la superficie del pais: ";
                 cin>>superficie[i][j];
                 cout<<endl;
                 }
             }
                 cout<<"Se registro correctamente "<<endl;
                 cout<<endl;
             do{
             cout<<"1.Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc3;
             switch(opc3)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc3!=1); 
    break;
    
    case 2:
             system("clear");
             cout<<endl;
             for (int i = 0; i < numero_continentes; i++) 
             {
              cout<<"\t\tCONTINENTE "<< i+1<<endl;
              cout<<"\t\t"<<nombres_continentes[i]<<endl;
                  for (int j = 0; j < numero_paises; j++)
                {
                 cout <<"\tPais "<< j+1<<": "<<nombres_paises[i][j]<<endl;
                 cout<<"\tCapital: "<<nombres_capitales[i][j]<<endl;
                 cout<<"\tPresidente: "<<presidente_Actl[i][j]<<endl;
                 cout<<"\tIdioma: "<<idiomas_paises[i][j]<<endl;
                 cout<<"\tHabitantes del pais: "<<poblacion[i][j]<<endl;
                 cout<<"\tSuperficie del pais: "<<superficie[i][j]<<endl;
                 poblacion_Global += poblacion[i][j]; 
                 cout<<endl;
                }
            }
                 cout<<"\tPoblacion global: "<<poblacion_Global<<endl; 
                 cout<<endl;
            do{
             cout<<"1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc;
             switch(opc)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc!=1); 
    break;
         case 3: 
                 
            visualizar();      
                   
    break;
        
        case 4:
             
             eliminar();
             
    break;
         
         case 5:
              
             modificar();
               
    break;          
        
        case 6:
             
             top_poblaciones(); 
                
        }
    }while(menu!=7);
     
     archivo();
     archivo2();
}

void visualizar()
{
         system("clear");
         cout<<endl;
         cout<<"\nDIGITE EL CONTINENTE QUE DESEA VER: ";
         cin>>numero_continentes;
             
        for (int j = 0; j < numero_paises; j++)
        {
            if(numero_continentes- 1< numero_continentes)
            {  
             cout<<"\tPais "<<j+1<<": ";
             cout<<nombres_paises[numero_continentes- 1][j] << endl; 
             cout<<"\tCapitales: ";
             cout<<nombres_capitales[numero_continentes- 1][j]<<endl;
             cout<<"\tPresidente: ";
             cout<<presidente_Actl[numero_continentes- 1][j]<<endl;
             cout<<"\tIdioma: ";
             cout<<idiomas_paises[numero_continentes- 1][j]<<endl;
             cout<<"\tHabitantes del pais: ";
             cout<<poblacion[numero_continentes- 1][j]<<endl;
             cout<<"\tSperficie del pais: ";
             cout<<superficie[numero_continentes- 1][j]<<endl;
             cout<<endl;
            }else{
             cout<<"Error: El continente no existe: ";    
            }     
        }
        do{
             cout<<endl;
             cout<<"1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
        }while(opc1!=1); 
}

void eliminar()
{
  
  do{
         cout<<"\tQue desea eliminar"<<endl;
         cout<<"1. eliminar contiente"<<endl;
         cout<<"2. Eliminar pais"<<endl;
         cout<<"3. Eliminar capital"<<endl;
         cout<<"4. Eliminar presidente"<<endl; 
         cout<<"5. Eliminar idioma"<<endl;
         cout<<"6. Eliminar poblacion"<<endl;
         cout<<"7. Eliminar superficie"<<endl;
         cout<<"8. Salir"<<endl;
    
         cout<<"\nOpcion: ";
         cin>>menu1;
    
         switch(menu1)
        {
             
             case 1: 
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ELIMINAR: ";
             cin>>eliminar_continente;
             if (eliminar_continente- 1 < numero_continentes)
             {
                 nombres_continentes[eliminar_continente- 1] = " ";
                 system("clear");
                 cout<<"El continente fue eliminado con exito. "<<endl;
                 
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 eliminar();
             }    
            break;
             
             case 2:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DEL PAIS QUE DESEA ELIMINAR: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes)
             {
             if(eliminar_pais- 1 < numero_paises) {       
                 nombres_paises[eliminar_continente- 1][eliminar_pais- 1] = " ";
                 system("clear");
                 cout<<"El pais fue eliminado con exito. "<<endl;
                 
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }     
             }else{
                 system("clear");
                 cout <<"Error: el continente no existe"<< endl;
                 eliminar();
             }
            break;
             
             case 3:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DE LA CAPITAL QUE DESEA ELIMINAR:: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes)
             {
             if(eliminar_pais- 1 < numero_paises) {          
                nombres_capitales[eliminar_continente- 1][eliminar_pais- 1] = " ";
                system("clear");
                cout<<"La capital fue eliminada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }      
             }else{
                 system("clear");
                 cout <<"Error: el continente no existe"<<endl;
                 eliminar();
             }
            break;
             
             case 4:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DEL PRESIDENTE QUE DESEA ELIMINAR: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes)
             {
             if(eliminar_pais- 1 < numero_paises) {        
                 presidente_Actl[eliminar_continente- 1][eliminar_pais- 1] = " ";
                 system("clear");
                 cout<<"El presidente fue eliminado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }     
             }else{
                 system("clear");
                 cout <<"Error: el continente no existe"<< endl;
                 eliminar();
             }
            break;
             
             case 5:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DEL IDIOMA QUE DESEA ELIMINAR: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes)
             {
             if(eliminar_pais- 1 < numero_paises){       
                 idiomas_paises[eliminar_continente- 1][eliminar_pais- 1] = " ";
                system("clear"); 
                cout<<"El idioma fue eliminado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }
             }else{
                 system("clear");
                 cout << "Error: el continente no existe" << endl;    
                 eliminar();
             }
            break;
             
             case 6:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DE LA POBLACION QUE DESEA ELIMINAR: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes) 
             {
             if(eliminar_pais- 1 < numero_paises) 
             { 
                 poblacion[eliminar_continente- 1][eliminar_pais- 1] = 0;
                 poblacion_Global = 0;
                 system("clear");
                 cout<<"La poblacion fue eliminada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 eliminar();
                 
             }
            break;
         
             case 7:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>eliminar_continente;
             cout<<"DIGITE EL NUMERO DE LA SUPERFICIE QUE DESEA ELIMINAR: ";
             cin>>eliminar_pais;
             if (eliminar_continente- 1 < numero_continentes) 
             {
             if(eliminar_pais- 1 < numero_paises){          
                 superficie[eliminar_continente- 1][eliminar_pais- 1] = 0;
                 system("clear");
                 cout<<"La superficie fue eliminada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 eliminar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<< endl;    
                 eliminar();
                   
             }
            break;
                
        }
    }while(menu1!=8);    
     system ("clear");    
}

void modificar()
{
    do{
         cout<<endl;
         cout<<"\tQue desea eliminar"<<endl;
         cout<<"1. Modificar contiente"<<endl;
         cout<<"2. Modificar pais"<<endl;
         cout<<"3. Modificar capital"<<endl;
         cout<<"4. Modificar presidente"<<endl; 
         cout<<"5. Modificar idioma"<<endl;
         cout<<"6. Modificar pobalcion"<<endl;
         cout<<"7. Modificar superficie"<<endl;
         cout<<"8. Salir"<<endl;
    
         cout<<"\nOpcion: ";
         cin>>menu2;
    
         switch(menu2)
        {
             
             case 1: 
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA MODIFICAR: ";
             cin>>modificar_continente;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes){
                 cout<<"Ingrese el nuevo nombre del continente: ";
                 cin>>nombres_continentes[modificar_continente- 1];
                 system("clear");
                 cout<<"El continente fue modificado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 modificar();      
             }    
            break;
             
             
             case 2:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DEL PAIS QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes)
             {
             if(modificar_pais- 1 < numero_paises) {       
                 cout<<"Ingrese el nuevo nombre del pais: ";
                 cin>>nombres_paises[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"El pais fue modificado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 modificar();      
             }
            break;
            
            
            case 3:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DE LA CAPITAL QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes)
             {
             if(modificar_pais- 1 < numero_paises){          
                 cout<<"Ingrese el nuevo nombre de la capital: ";
                 cin>>nombres_capitales[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"La capital fue modificada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }      
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 modificar();   
             }
            break;
            
             
             case 4:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DEL PRESIDENTE QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes)
             {
             if(modificar_pais- 1 < numero_paises){        
                 cout<<"Ingrese el nuevo nombre del presidente: ";
                 cin>>presidente_Actl[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"El presidente fue modificado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }     
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;
                 modificar();         
             }
            break;
            
             
             case 5:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DEL IDIOMA QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes)
             {
             if(modificar_pais- 1 < numero_paises) 
             {       
                 cout<<"Ingrese el nuevo idioma del pais: "; 
                 cin>>idiomas_paises[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"El idioma fue modificado con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;    
                 modificar();      
             }
            break;
            
             
             case 6:
             poblacion_Global = 0;
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DE LA POBLACION QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes) 
             {
             if(modificar_pais- 1 < numero_paises) 
             { 
                 cout<<"Ingrese la nueva poblacion del pais: ";     
                 cin>>poblacion[modificar_continente- 1][modificar_pais- 1];
                 // poblacion_Global += poblacion[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"La poblacion fue modificada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<<endl;   
                 modificar();
             }
            break;
            
            
             case 7:
             cout<<"\nDIGITE EL NUMERO DEL CONTINENTE QUE DESEA ACCERDER: ";
             cin>>modificar_continente;
             cout<<"DIGITE EL NUMERO DE LA SUPERFICIE QUE DESEA MODIFICAR: ";
             cin>>modificar_pais;
             cout<<endl;
             if (modificar_continente- 1 < numero_continentes) 
             {
             if(modificar_pais- 1 < numero_paises) 
             {         
                 cout<<"Ingrese la nueva superficie del pais: ";     
                 cin>>superficie[modificar_continente- 1][modificar_pais- 1];
                 system("clear");
                 cout<<"La superficie fue modificada con exito. "<<endl;
             }else{
                 system("clear");
                 cout<<"Error: el pais no existe"<<endl;
                 modificar();
             }
             }else{
                 system("clear");
                 cout<<"Error: el continente no existe"<< endl;    
                 modificar();
             }
            break;
            
        }
    }while(menu2!=8);    
     system ("clear");

}

void top_poblaciones()
{

    for (int i = 0; i < numero_continentes; i++)
    {
        for (int j = 0; j < numero_paises; j++)
        {
            poblacion_actual = poblacion[i][j];

            // Comparamos la población actual con los valores del top de población
            for (int o = 0; o < 5; o++)
            {
                if (poblacion_actual > top_poblacion[o])
                {
                    // Desplazamos los valores existentes hacia abajo
                    for (int t = 4; t > o; t--)
                    {
                        top_poblacion[t] = top_poblacion[t - 1];
                    }
                    // Insertamos la población actual en la posición adecuada del top
                    top_poblacion[o] = poblacion_actual;
                    break; 
                }
            }
        }
    }
    cout<<"Top 1: "<<top_poblacion[0]<<endl;
    cout<<"Top 2: "<<top_poblacion[1]<<endl;
    cout<<"Top 3: "<<top_poblacion[2]<<endl;
    cout<<"Top 4: "<<top_poblacion[3]<<endl;         
    cout<<"Top 5: "<<top_poblacion[4]<<endl;
    do{
         cout<<endl;
         cout<<"1. Volver al menu principal: "<<endl;
         cout<<"\nOpcion: ";
         cin>>opc2;
         switch(opc2)
         {
             case 1:
             system("clear");
             break;
         }
    }while(opc2!=1);
}


void archivo()
{
     
     ofstream continentes;//continestes es objeto de tipo ofstream,que luego se usa para escribir en el archivo 
     continentes.open("Estadisticas.txt", ios::app);
     continentes<<"\t\t\tESTADISTICAS DE LOS CONTINENTES "<<endl;
     cout<<endl;
     for(int i=0; i< numero_continentes; i++)
     {
         continentes<<"Contiente: "<<nombres_continentes[i]<<endl; 
         for(int j=0; j<numero_paises; j++)
        {    
          continentes<<"\tPaís "<<j+1<<": "<<nombres_paises[i][j]<<endl;
          continentes<<"\tCapital: "<<nombres_capitales[i][j]<<endl;
          continentes<<"\tPresidente: "<<presidente_Actl[i][j]<<endl;
          continentes<<"\tIdioma: "<<idiomas_paises[i][j]<<endl;
          continentes<<"\tPoblación: "<<poblacion[i][j]<<endl;
          continentes<<"\tSuperficie: "<<superficie[i][j]<<endl;
          continentes<<"\tPoblación global: "<<poblacion_Global<<endl;
          continentes<<endl;
        }
     }
     continentes.close(); //se cierra el archivo usando la funcion close     
}

void archivo2()
{

    ofstream tops;
    tops.open("Top.txt", ios::app);
    
   
      tops<<"continentes creados:"<<numero_continentes<<endl;
      tops<<"Top 1: "<<top_poblacion[0]<<endl;
      tops<<"Top 2: "<<top_poblacion[1]<<endl;
      tops<<"Top 3: "<<top_poblacion[2]<<endl;
      tops<<"Top 4: "<<top_poblacion[3]<<endl;         
      tops<<"Top 5: "<<top_poblacion[4]<<endl;
      cout<<endl;
    
    tops.close();
}


