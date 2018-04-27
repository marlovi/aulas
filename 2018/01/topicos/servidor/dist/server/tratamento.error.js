"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.tratamentoErros = (req, resp, err, done) => {
    err.toJSON = () => {
        return {
            message: err.message
        };
    };
};
