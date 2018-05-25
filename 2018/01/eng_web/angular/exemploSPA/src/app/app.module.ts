import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { NavegacaoComponent } from './pagina/corpo/navegacao/navegacao.component';
import { InicialComponent } from './pagina/conteudo/inicial/inicial.component';
import { AppRoutingModule, routes } from './/app-routing.module';
import { RouterModule } from '@angular/router';
import { CadastroComponent } from './pagina/conteudo/usuario/cadastro/cadastro.component';

@NgModule({
  declarations: [
    AppComponent,
    NavegacaoComponent,
    InicialComponent,
    CadastroComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    RouterModule.forRoot(routes)
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
