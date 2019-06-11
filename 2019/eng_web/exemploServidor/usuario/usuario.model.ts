import * as mongoose from 'mongoose'

export interface Usuario extends mongoose.Document{
    _id:object,
    nome:string,
    email: string,
    password: string,
    telefone: string,
    idade : number
} 

const usuarioSchema = new mongoose.Schema({
    nome:{
        type:String
    
    },
    email:{
        type: String,
        unique: true
    },password:{
        type: String,
        select:true
    },
    telefone:{
        type: String
    },
    idade:{
        type: Number
    }
})

export const Usuario = mongoose.model<Usuario>("Usuario",usuarioSchema)