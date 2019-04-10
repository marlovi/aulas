"use strict";
var __importStar = (this && this.__importStar) || function (mod) {
    if (mod && mod.__esModule) return mod;
    var result = {};
    if (mod != null) for (var k in mod) if (Object.hasOwnProperty.call(mod, k)) result[k] = mod[k];
    result["default"] = mod;
    return result;
};
Object.defineProperty(exports, "__esModule", { value: true });
const mongoose = __importStar(require("mongoose"));
const usuarioSchema = new mongoose.Schema({
    nome: {
        type: String
    },
    email: {
        type: String,
        unique: true
    }, password: {
        type: String,
        select: false
    },
    telefone: {
        type: String
    },
    idade: {
        type: Number
    }
});
exports.Usuario = mongoose.model("Usuario", usuarioSchema);
