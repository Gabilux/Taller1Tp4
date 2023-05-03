typedef struct Tnodo
{
    int valor;
    Tnodo sig;
}Tnodo;

int main(){
    
    return 0;
}


void InsertarNodoAlComienzo(TNodo **start, TNodo *NuevoNodo)
{
    NuevoNodo->siguiente=start;
    *start=NuevoNodo;
}
//recordar hacer que 
void InsertarAlFinal(Tnodo * start, Tnodo *NuevoNodo){
    Tnodo* Aux= Start;
    while (Aux->siguiene)// while(Aux->siguiente!=NULL) otra manera
    {
        Aux =Aux->siguiente;
    }
    Aux -> siguiente= NuevoNodo;

}// recorre toda la lista y cuando llega al último elemnto lo agrega al final 

Tnodo *BuscarNodo(Tnodo * start, int idBuscado){
    Tnodo *Aux= start;
    while (Aux && Aux->Tarea.TAreaID != idBuscado)
    {
        Aux= Aux -> siguiente;
    }
    return Aux;
}
Tnodo *QuitarNodo(Tnodo ** start, int id){
    
}