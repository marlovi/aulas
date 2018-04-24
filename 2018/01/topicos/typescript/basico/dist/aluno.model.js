"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Aluno {
    constructor() {
        this.salario = 1000;
        this.comissao = (ganho) => {
            return this.calularSalario(200) + ganho;
        };
    }
    calularSalario(desconto) {
        let total = this.salario - desconto;
        return total;
    }
}
exports.Aluno = Aluno;
