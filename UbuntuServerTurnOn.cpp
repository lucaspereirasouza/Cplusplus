/* system example : DIR */
#include <stdio.h>     /* printf */
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <chrono>       /*Cronometro*/

int main ()
{
   /*System servirá de executar comandos
    irá localizar o arquivo do virtual box*/   
    system ("cd 'C:/Program Files/Oracle/VirtualBox'");
    system ("VirtualBoxVM.exe --startvm UbuntuServer");
    /*Aviso que o ubuntu esta iniciando*/
    
    printf("Iniciando Vm Ubuntuserver");
    system ("ssh luzter@192.168.0.16");
}