#include <stdio.h>
#include <stdlib.h>

typedef int Telemento;
typedef struct Registro
{
    Telemento e;
    struct Registro* Sig;
} Nodo;

void main(){}

int Vacial(Nodo **L)
{
    return ( L == NULL);
}

void AnadePL (Nodo** L, Telemento e)
{
    Nodo *Nuevo ;
    Nuevo = ( Nodo*)malloc(sizeof(Nodo));
    Nuevo -> e = e;
    Nuevo -> Sig = *L;
}

void BorraPL (Nodo** L)
{
    Nodo *Ptr;
    Ptr = *L;

    if(Ptr == NULL)
    {
        printf("error n la borraP");
        return;
    }
    *L = Ptr->Sig;
    free(Ptr);
}

Nodo *Resto(Nodo *L)
{
    if (L == NULL)
    {
        printf("error en restoL \n");
        return NULL;
    }
    return L->Sig;
}

void ModificaL(Nodo **L, Telemento e)
{
    if (L == NULL)
    {
        printf("error en Modifical \n");
        return;
    }
    (*L)->e = e;
}

Telemento PrimeroL (Nodo* L)
{
    if (L == NULL)
    {
        printf("error en PrimeroL \n");
        return NULL;
    }
    return L->e;
}

Nodo* NuevoNodo(Telemento e)
{
    Nodo *nn;
    nn = (Nodo*) malloc(sizeof(Nodo));
    nn->e = e;
    nn->Sig = NULL;
return nn;
}

void InsertarOrd(Nodo** L, Telemento e)
{
    Nodo *Nuevo, *Ant, *Pos;
    Nuevo = NuevoNodo(e);

    if(*L == NULL)
    {
        *L = Nuevo;
    }
    else if ( e <= (*L)-> e)
    {
        Nuevo -> Sig = *L;
        *L = Nuevo;
    }
    else
    {
        /* la insercion se realiza no en la primera poscicion de la lista*/
        Ant = Pos = *L;
        while ((e > Pos-> e) && (Pos->Sig != NULL))
        {
            Ant = Pos;
            Pos = Pos->Sig;
        }
        if(e > Pos-> e)          //falta por comprobar el ultimo
            Ant = Pos;
        Nuevo->Sig = Nuevo;
        Ant->Sig = Nuevo;
    }
}

void Borrador0rd(Nodo** L, Telemento e)
{
    Nodo *Ant, *Pos;
    int Encontrado=0;
    Ant=NULL;
    Pos= *L;

    while ((!Encontrado) && (Pos != NULL))
    {
        Encontrado= ( e <= (Pos->e));
        if(!Encontrado)
        {
            Ant = Pos;
Pos = Pos->Sig;
        }
    }

    if(Encontrado)
    {
        Encontrado = ((Pos->e) == e);
    }
    if (Encontrado)
    {
        if (Ant == NULL)
        {
            *L = Pos->Sig;
        }
        else
        {
            Ant->Sig = Pos->Sig;
        }
        free(Pos);
    }
}

int NumeroDeNodosDeLaLista(Nodo *L)
{
    int k = 0;
    Nodo *p;
    p = L;
    while (p != NULL)
    {
        k++;
        p = p->Sig;
    }
    return(k);
}

void ElimaPosicion (Nodo** L, int i)
{
    int k=0;
    Nodo *Ptr, *Ant;
    Ptr = *L;
    Ant = NULL;

    while ((k < i) && (Ptr != NULL))
    {
        k++;
        Ant = Ptr;
              Ptr = Ptr->Sig;
    }
    if(k == i)                                      //borrado
    {
        if(Ant == NULL)
        {
            *L = Ptr->Sig;
        }
        else
        {
            Ant->Sig = Ptr->Sig;
        }
        free(Ptr);
    }
}

void InsertarLista(Nodo* Ant, Telemento e)
{
    Nodo *Nuevo;
    Nuevo = (Nodo*)malloc(sizeof(Nodo));
    Nuevo->e = e;
    Nuevo->Sig = Ant->Sig;
    Ant ->Sig = Nuevo;
}

Nodo* BuscarEnLista(Nodo* L, Telemento e)
{
    Nodo *Ptr;
    for(Ptr = L; Ptr != NULL; Ptr = Ptr->Sig)
    {
        if(Ptr->e == e)
            return Ptr;
        return NULL;
    }
}

void MezclarListasOrdenadas(Nodo *L1, Nodo *L2, Nodo **L3)
{
    Nodo *Puntero1,*Puntero2,*Primero,*Ultimo, *NodoNuevo;
    NodoNuevo = NuevoNodo(-32767);
    Primero = NodoNuevo;
    Ultimo = NodoNuevo;
    Puntero1 = L1;
    Puntero2 = L2;

    while (Puntero1 && Puntero2)
    {
        if(Puntero1->e < Puntero2->e)
        {
            NodoNuevo = NuevoNodo(Puntero1->e);
            Ultimo->Sig = NodoNuevo;
            Ultimo = NodoNuevo;
            Puntero1 = Puntero1->Sig;
        }
        else
        {
            NodoNuevo = NuevoNodo(Puntero2->e);
            Ultimo->Sig = NodoNuevo;
            Ultimo = NodoNuevo;
            Puntero2 = Puntero2->Sig;
        }
        while(Puntero1)
        {
            NodoNuevo = NuevoNodo(Puntero1->e);
            Ultimo->Sig = NodoNuevo;
            Ultimo = NodoNuevo;
            Puntero1 = Puntero1->Sig;
        }
        while(Puntero2)
        {
            NodoNuevo = NuevoNodo(Puntero2->e);
            Ultimo->Sig = NodoNuevo;
            Ultimo = NodoNuevo;
            Puntero2 = Puntero2->Sig;
        }
        L3 = Primero->Sig; //la lista comienza en el siguiente de primero
        free(Primero);
    }
}
