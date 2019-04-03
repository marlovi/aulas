export interface Carro{
    placa?:string
    potencia?:number
    cor?:string
    ano?:number
    combustivel?:string
    nome?:string

    precoVenda():number;
}