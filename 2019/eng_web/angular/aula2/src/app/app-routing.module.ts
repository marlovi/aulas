import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { CadastroComponent } from './crud/usuario/cadastro/cadastro.component';
import { InicialComponent } from './pagina/inicial/inicial.component';

const routes: Routes = [
  {path:'',component:InicialComponent},
  {path:'cadastrousuario',component:CadastroComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
