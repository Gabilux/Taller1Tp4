/*
Considere la siguiente situación: En la misma distribuidora del práctico anterior ahora surgió
la necesidad de llevar un control de las tareas realizadas por sus empleados. Usted forma
parte del equipo de programación que se encargará de hacer el módulo en cuestión que a
partir de ahora se llamará módulo ToDo:
Tareas
Cada empleado tiene un listado de tareas a realizar.
Las estructuras de datos necesarias son las siguientes:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Task{
    int TareaID;//Numerado en ciclo iterativo
    char *Descripcion;
    int Duracion; // entre 10 – 100
}typedef Tarea;
int main(){
    int CantTareas;
    Tarea **Tareas;
    char Buff[100]; //LUEGO INTENTAR HACERLO CON PuNTERO Y MALLOC Obs: ver qu el cliente solo podra escribir una descripcion de 100 caracteres
//Desarrollar una interfaz por consola donde se solicite al usuario (es decir el empleado) cuantas tareas debe cargar.
    printf("Indique cuántas tareas debe cargar:");
    scanf("%d", &CantTareas);
//Tendrá que generar un arreglo de doble punteros dinámicamente del tipo Tarea con la cantidad de tareas solicitadas 
//en el punto anterior.Recuerde inicializar los arreglos apuntando a NULL.
   Tareas=(Tarea **)malloc(sizeof(*Tareas)*CantTareas);
    //**Tareas=NULL;//incializo apuntando a NULL?
    for (int i = 0; i < CantTareas; i++)
    {
        Tareas[i]=NULL;
        printf("%d", Tareas[i]);
    }
//3.Desarrolle una interfaz de consola para cargar las tareas, ingresando su descripción y duración. 
//Recuerde utilizar reserva de memoria dinámica para la carga de la descripción. 
    for (int i = 0; i < CantTareas; i++) 
    {
        Tareas[i]=(Tarea *) malloc(sizeof(Tarea));
    }
    for (int i = 0; i < CantTareas; i++)
    {
       Tareas[i]->TareaID= i+1;
       printf("\n-------------------tarea %d------------------\n", Tareas[i]->TareaID);
       printf("\nPor favor ingrese la descripción de la tarea:\n");
       scanf("%s", &Buff);
       Tareas[i]->Descripcion= (char *)malloc(sizeof(char)*(strlen(Buff)+1)); 
       strcpy(Tareas[i]->Descripcion, Buff);
       //puts(Tareas[i]->Descripcion); //era ppara evr si leia 
       printf("\nPor favor ingrese la duracion de la tarea\n");
       fflush(stdin);
       scanf("%d", &Tareas[i]->Duracion);
   //    if(Tareas[i]->Duracion<10 && Tareas[i]->Duracion>100){
   //     printf("Duración no valida. Ingrese nuevamente los datos");
   //    }
    }


    for (int i = 0; i < CantTareas; i++)
    {
        free(Tareas[i]->Descripcion);
       free(Tareas[i]);
    }
    /*4. Una vez cargada todas las tareas. Irá listando de a una las tareas y preguntando si se realizó o no la misma. 
    Si la respuesta es Si tiene que “mover” dicha tarea a otro arreglo denominado tareas realizadas que tendrá el
    mismo tamaño que el anterior. Una vez movida la tarea ese casillero del vector tiene que apuntar a null. 
    Como se muestra en la gráfica a continuación*/
    printf("----------------Lista de Tareas Realizadas---------------------");
    for (int i = 0; i < CantTareas; i++)
    {
       printf("La tarea %d consite en %s", Tareas[i]->TareaID, Tareas[i]->Descripcion);
       printf("La tarea fué realizada?Conteste 1 paraindicar que si la realizó y 0 para indicar que no ");
       printf(if)
    }
    
    
    
    return 0;
}