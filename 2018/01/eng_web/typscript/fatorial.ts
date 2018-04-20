export class Fatorial{
     calcular(num:Number):Number{
        if(num === 1)
        return 1
        else
            return this.calcular(num -1 ) * num
     }
}