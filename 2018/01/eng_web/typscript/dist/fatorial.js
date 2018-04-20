"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Fatorial {
    calcular(num) {
        if (num === 1)
            return 1;
        else
            return this.calcular(num - 1) * num;
    }
}
exports.Fatorial = Fatorial;
