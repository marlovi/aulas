import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import {Routes} from '@angular/router'
import { InicialComponent } from './pagina/conteudo/inicial/inicial.component';
import {CadastroComponent} from './pagina/conteudo/usuario/cadastro/cadastro.component'
import { PesquisarComponent } from './pagina/conteudo/usuario/pesquisar/pesquisar.component';
import { UpdateComponent } from './pagina/conteudo/usuario/update/update.component';
import { DeleteComponent } from './pagina/conteudo/usuario/delete/delete.component';

@NgModule({
  imports: [
    CommonModule
  ],
  declarations: []
})
export class AppRoutingModule { }

export const routes: Routes = [
  {path:''          ,component: InicialComponent},
  {path:'cadastro'  ,component: CadastroComponent},
  {path:'pesquisar' ,component:PesquisarComponent},
  {path:'inicial'   ,component:InicialComponent},
  {path:'update'    ,component:UpdateComponent},
  {path:'delete'    ,component:DeleteComponent}
  
]
