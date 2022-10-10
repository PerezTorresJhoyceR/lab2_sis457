// el juego se llama bubble shoter es un tanto similar al briks breaker, pero con algunas variaciones 
// en caunto a la dinamica dek juego 
// en este juego existen basntes niveles , en los qu ecada nivel posee posiciones diferentes para las pelotas 
// es decir diferentes figuras , ademas que se debe de eliminar las pelotas , geneeando 
// la colosion con pelotas del mismo color y ademas existe un tipo de direccon que ayuda a la 
// presicion del tiro 

#pragma once
class PelotaJugador :
    public Pelota
{
protected: 
    // todos estos son metodos los pongo como protegidos 
    disparar;
    moverse;
    modificar su color; 
    velocidad; 

protected:
    // sus mropiedades 
    color;
    tamaño;
    forma; 



};

