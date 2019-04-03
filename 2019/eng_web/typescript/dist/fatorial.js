"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var Fatorial = /** @class */ (function () {
    function Fatorial() {
    }
    Fatorial.prototype.calcular = function (numero) {
        if (numero == 1)
            return 1;
        else
            return this.calcular(numero - 1) * numero;
    };
    return Fatorial;
}());
exports.Fatorial = Fatorial;
//modular
