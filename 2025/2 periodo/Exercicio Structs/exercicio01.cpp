#include <iostream>
#include <stdio.h>
using namespace std;

struct Horario{
    int hora, min, seg;

    void CorrigirHora(){
        min += (seg / 60);
        seg = seg % 60;

        hora += (min/60);
        min = min % 60;

        hora = hora%24;
    }

    void SolicitarHorario(){
        cin>>hora;
        cin>>min;
        cin>>seg;

        CorrigirHora();
    }
};

Horario somaHorario(Horario a, Horario b){
    Horario c;
    
    c.seg = a.seg + b.seg;
    c.min = a.min + b.min;
    c.hora = a.hora + b.hora;

    c.CorrigirHora();

    return c;
}



int main(){
    Horario a;
    Horario b;

    a.SolicitarHorario();
    b.SolicitarHorario();
    Horario c = somaHorario(a,b);

    cout<<c.hora<<":"<<c.min<<":"<<c.seg;

    return 0;
}