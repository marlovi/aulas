import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { RodapeComponent } from './pagina/rodape/rodape.component';
import { NavegacaoComponent } from './pagina/navegacao/navegacao.component';
import { CadastroComponent } from './crud/usuario/cadastro/cadastro.component';
import { InicialComponent } from './pagina/inicial/inicial.component';

@NgModule({
  declarations: [
    AppComponent,
    RodapeComponent,
    NavegacaoComponent,
    CadastroComponent,
    InicialComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
