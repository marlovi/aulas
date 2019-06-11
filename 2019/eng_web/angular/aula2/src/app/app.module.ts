import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {FormsModule} from '@angular/forms'
import { HttpClientModule } from '@angular/common/http';



import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { RodapeComponent } from './pagina/rodape/rodape.component';
import { NavegacaoComponent } from './pagina/navegacao/navegacao.component';
import { CadastroComponent } from './crud/usuario/cadastro/cadastro.component';
import { InicialComponent } from './pagina/inicial/inicial.component';


import { ComunicacaoService } from './crud/usuario/comunicacao.service';

import { PesquisarComponent } from './crud/usuario/pesquisar/pesquisar.component';
import { UpdateComponent } from './crud/usuario/update/update.component';
@NgModule({
  declarations: [
    AppComponent,
    RodapeComponent,
    NavegacaoComponent,
    CadastroComponent,
    InicialComponent,    
    PesquisarComponent, UpdateComponent
    
  ],
  imports: [
    FormsModule,
    
    BrowserModule,
    AppRoutingModule,
    HttpClientModule,
  ],
  providers: [ComunicacaoService],
  bootstrap: [AppComponent]
})
export class AppModule { }
