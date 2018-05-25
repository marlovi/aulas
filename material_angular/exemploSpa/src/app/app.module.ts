import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { CabecalhoComponent } from './corpo/cabecalho/cabecalho.component';
import { AppRoutingModule, routes } from './/app-routing.module';
import { RouterModule } from '@angular/router';
import { InicialComponent } from './corpo/conteudo/inicial/inicial.component';
import { RodapeComponent } from './corpo/rodape/rodape.component';
import { CadastroComponent } from './corpo/conteudo/cadastro/cadastro.component';



@NgModule({
  declarations: [
    AppComponent,
    CabecalhoComponent,
    InicialComponent,
    RodapeComponent,
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
