import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import {Routes} from '@angular/router'
import { InicialComponent } from './pagina/conteudo/inicial/inicial.component';
import {CadastroComponent} from './pagina/conteudo/usuario/cadastro/cadastro.component'

@NgModule({
  imports: [
    CommonModule
  ],
  declarations: []
})
export class AppRoutingModule { }

export const routes: Routes = [
  {path:'',component: InicialComponent},
  {path:'cadastro',component: CadastroComponent}
  
]
