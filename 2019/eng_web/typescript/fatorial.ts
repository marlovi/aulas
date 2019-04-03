export class Fatorial{
    calcular(numero : number) : number {
        if(numero == 1)
            return 1;
        else return this.calcular(numero - 1 ) * numero
    }
}



//modular