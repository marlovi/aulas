import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { CadastroComponent } from './crud/usuario/cadastro/cadastro.component';
import { InicialComponent } from './pagina/inicial/inicial.component';
import { PesquisarComponent } from './crud/usuario/pesquisar/pesquisar.component';
import { UpdateComponent } from './crud/usuario/update/update.component'

const routes: Routes = [
  {path:'',component:InicialComponent},
  {path:'cadastrousuario',component:CadastroComponent},
  {path:'pesquisarusuario',component:PesquisarComponent},
  {path:'updateusuario/:id',component: UpdateComponent}
 
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
