"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var fatorial_1 = require("./fatorial");
var aluno_model_1 = require("./aluno.model");
var ka_1 = require("./ka");
var celta_1 = require("./celta");
var fat = new fatorial_1.Fatorial;
var aluno = new aluno_model_1.Aluno("Alice", 2, "123456", "123.456.456-98");
console.log(aluno);
console.log("O fatorial de 5 \u00E9 " + fat.calcular(1));
//let  carro:Carro  = {nome:"Fiesta",placa:"OMX1234",potencia:25,cor:"Pink",ano:1964,combustivel:"Gás"}
var ka = new ka_1.Ka;
var celta = new celta_1.Celta;
function imprimir(c) {
    console.log(c.precoVenda());
}
imprimir(ka);
imprimir(celta);
