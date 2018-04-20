"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const aluno_model_1 = require("./aluno.model");
class Primario extends aluno_model_1.Aluno {
    constructor(nome, idade = 5) {
        super(nome, idade);
    }
}
exports.Primario = Primario;
