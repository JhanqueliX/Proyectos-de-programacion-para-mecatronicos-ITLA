#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int Exponente;
    float Coeficiente;
} Telemento;
struct polinomio
{
    Telemento el;
    struct polinomio *Sig;
};
typedef struct polinomio Polinomio;
Polinomio* NuevoNodo(Telemento el)
{
    Polinomio *NodoNuevo ;
    NodoNuevo = (Polinomio*)malloc(sizeof(Polinomio));
    NodoNuevo -> el = el;
    NodoNuevo -> Sig = NULL;
    return NodoNuevo;
}

void main(){}

void AgregaTermino(Telemento el, Polinomio ** Primero,Polinomio** Ultimo)
/*Agrega al polinomio con primer nodo Primero con último Ultimo el térmimo el*/
{
    Polinomio *Aux;
    Aux = NuevoNodo(el);
    if (*Ultimo == NULL)
        *Primero = Aux; /*no hay elementos en la lista*/
    else
        (*Ultimo)->Sig = Aux;
    *Ultimo = Aux;
}
void SumaPolinomios(Polinomio *p, Polinomio *q, Polinomio ** Suma)
{
    /*fecto suma los polinomios p y q y lo deja en Suma. Modifica Suma*/
    float c;
    Telemento e;
    Polinomio *Primero, *Ultimo;
    Primero = NULL;
    Ultimo= NULL; /* se crea la lista vacia de elementos*/
    while ((p != NULL) && (q !=NULL))
        if (p->el.Exponente == q->el.Exponente)
        {
            c = p->el.Coeficiente + q->el.Coeficiente;
            if (fabs(c) > 0.00001 )
            {
                /* c<>0 hay que añadir un nuevo elemento a la suma de polinomios*/
                e.Coeficiente = c;
                e.Exponente = p->el.Exponente;
                AgregaTermino(e, &Primero, &Ultimo);
            }
            /*no necesita else el coeficiente es cero y no se añade a la suma*/
            p = p->Sig;
            q = q->Sig; /* se avanza en los dos polinomios*/
        }
        else if (p->el.Exponente > q->el.Exponente)
        {
            AgregaTermino(p->el, &Primero, &Ultimo);
            p = p->Sig; /* se avanza solo en el polinomio p*/
        }
        else
        {
            /*q->el.Exponente > p^.el.Exponente*/
            AgregaTermino(q->el, &Primero, &Ultimo);
            q = q->Sig; /* se avanza solo en el polinomio q*/
        }
    /* O bien el polinomio p o bien el polinomio q se han terminado*/
    while (p != NULL)
    {
        AgregaTermino(p->el, &Primero, &Ultimo);
        p = p->Sig; /* se avanza solo en el polinomio p*/
    }
    while (q != NULL)
    {
        AgregaTermino(q->el, &Primero, &Ultimo);
        q = q->Sig; /* se avanza solo en el polinomio q*/
    }
    *Suma = Primero;
    /* Se toma el primer elemento de la lista como el polinomio suma*/
}
void CambiaDeSigno( Polinomio **q)
{
    Polinomio *Aux; /*cambia de signo el polinomio q*/
    Aux = *q;
    while (Aux != NULL)
    {
        Aux->el.Coeficiente = -Aux->el.Coeficiente;
        Aux = Aux->Sig;
    };
    *q = Aux;
};
void RestaPolinomios(Polinomio *p, Polinomio *q, Polinomio **Suma)
{
    /*al polinomio p le resta el polinomio q y lo deja en resta*/
    CambiaDeSigno(&q);
    SumaPolinomios(p, q, Suma);
    CambiaDeSigno(&q); /* para no modificar el polinomio q*/
}
void MultiplicaPorMonomio(Polinomio *p, Polinomio *Monomio, Polinomio **Pro)
{
    /*multiplica el polinomio p por el monomio y deja el resultado en pro*/
    Telemento x, y, z;
    Polinomio *Aux, *Primero, *Ultimo;
    Primero = NULL;
    Ultimo = NULL;
    Aux = p;
    y = Monomio->el;
    while (Aux != NULL)
    {
        x = Aux->el;
        z.Exponente = x.Exponente + y.Exponente;
        z.Coeficiente = x.Coeficiente * y.Coeficiente;
        AgregaTermino(z, &Primero, &Ultimo);
        Aux = Aux->Sig;
    }
    *Pro = Primero;
}
void MultiplicaPolinomios(Polinomio *p, Polinomio *q, Polinomio ** Producto)
{
    /*Efecto multiplica p por q y lo deja en Producto. Modifica Producto*/
    Polinomio *Aux, *Aux1, *ProductoAuxiliar;
    *Producto = NULL;
    Aux = p;
    Aux1 = q;
    while (Aux1 != NULL)
    {
        MultiplicaPorMonomio(Aux, Aux1, &ProductoAuxiliar);
        SumaPolinomios(*Producto, ProductoAuxiliar, Producto);
        Aux1 = Aux1->Sig;
    }
}

/*divide el polinomio p por el polinomio q y obitiene el Cociente y el Resto*/
void DividePolinomios(Polinomio *p, Polinomio *q, Polinomio **Cociente,
                      Polinomio **Resto)
{
    Polinomio *Dividendo, *Divisor, *Multiplicando, *Suma, *Primero, *Ultimo;
    Telemento x, y, z;
    int expdeDividendo, expdeDivisor;
    Dividendo = p;
    Divisor = q;
    Primero = NULL;
    Ultimo = NULL;
    if (Divisor == NULL)
        expdeDivisor = 32767;

    else
    {
        expdeDivisor = Divisor->el.Exponente;
        y = Divisor->el;
    }
    if (Dividendo == NULL)
        expdeDividendo = 0;
    else
    {
        expdeDividendo = Dividendo->el.Exponente;
        x = Dividendo->el;
    }
    while (expdeDividendo >= expdeDivisor)
    {
        z.Exponente = x.Exponente - y.Exponente;
        z.Coeficiente = x.Coeficiente / y.Coeficiente;
        Multiplicando = NuevoNodo(z);
        MultiplicaPolinomios(Divisor, Multiplicando, &Suma);
        AgregaTermino(z, &Primero, &Ultimo);
        RestaPolinomios(Dividendo, Suma, &Dividendo);
        if (Dividendo == NULL)
            expdeDividendo = 0 ;
        else
        {
            expdeDividendo = Dividendo->el.Exponente;
            x = Dividendo->el;
        }
    }
    *Cociente = Primero;
    *Resto = Dividendo;
}
/*Evalúa el polinomio p en el punto x*/
float Valor(Polinomio *p, float x)
{
    Polinomio *Aux;
    float Suma;
    Telemento z;
    Suma = 0;
    Aux = p;
    while (Aux != NULL)
    {
        z = Aux->el;
        Suma = Suma + z.Coeficiente * pow(x, z.Exponente);
        Aux = Aux->Sig;
    }
    return( Suma);
}
/*Deriva el polinomio p simbólicamente y deja el resultado en el propio p*/
void Deriva(Polinomio **p)
{
    Polinomio *Aux, *Anterior;
    Telemento y;

    int sw;
    Aux = *p;
    Anterior = NULL;
    sw = 0;;
    while (Aux !=NULL)
    {
        y = Aux -> el;
        if (y.Exponente == 0)
        {
            /* Como el polinomio está ordenado Descendentemente hay que borrar el
            ultimo elemento de p ya que la derivada de una constante es cero*/
            if (Anterior == NULL)
                *p = NULL;
            else
                Anterior->Sig = NULL;
            Anterior = Aux;
            Aux = NULL;
            sw = 1;
        }
        else
        {
            y.Coeficiente = y.Coeficiente * y.Exponente;
            y.Exponente --;
            Aux->el = y;
            Anterior = Aux;
            Aux = Aux->Sig ;
        }
        if (sw)
            free(Anterior);
    }
}
/*Inserta e en la lista manteniéndola ordenada descendentemente*/
void InsertarOrden(Polinomio **L, Telemento e)
{
    int Encontrado;
    Polinomio *Nuevo, *Aux, *Anterior;
    Nuevo=NuevoNodo(e);
    Aux=*L;
    Encontrado=0;
    while ((Aux != NULL) && (! Encontrado))
        if (Aux->el.Exponente > e.Exponente)
        {
            Anterior = Aux;
            Aux = Aux->Sig;
        }
        else
            Encontrado = 1;
    if (Aux == *L)
    {
        Nuevo->Sig = *L;
        *L = Nuevo;
    }
    else
    {
        Nuevo->Sig = Aux;
        Anterior->Sig = Nuevo;
    }
}
/*Lee el polinomio p no necesariamente ordenado pero sin términos repetidos*/
void LeePolinomio(Polinomio **p)
{
    Telemento x;
    *p = NULL;
    do
    {
        scanf("%f %d", &x.Coeficiente, &x.Exponente);
        if (x.Exponente >= 0)
            InsertarOrden(p, x);
    }
    while (x.Exponente >= 0);
}
