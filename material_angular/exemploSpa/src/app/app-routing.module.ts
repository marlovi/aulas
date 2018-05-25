import { NgModule, Component } from '@angular/core';
import { CommonModule } from '@angular/common';
import { RouterModule, Routes } from '@angular/router';
import { CabecalhoComponent } from './corpo/cabecalho/cabecalho.component';
import { InicialComponent } from './corpo/conteudo/inicial/inicial.component';
import {CadastroComponent} from './corpo/conteudo/cadastro/cadastro.component'
import { componentFactoryName } from '@angular/compiler';

@NgModule({
  imports: [
    CommonModule
  ],
  declarations: []
})
export class AppRoutingModule { 
  
}

export const routes: Routes = [
  { path: '', component: InicialComponent },
  { path: 'cadastro',component: CadastroComponent}
];
