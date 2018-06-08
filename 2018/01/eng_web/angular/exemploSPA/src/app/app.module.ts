import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { NavegacaoComponent } from './pagina/corpo/navegacao/navegacao.component';
import { InicialComponent } from './pagina/conteudo/inicial/inicial.component';
import { AppRoutingModule, routes } from './/app-routing.module';
import { RouterModule } from '@angular/router';
import {FormsModule} from '@angular/forms'
import { CadastroComponent } from './pagina/conteudo/usuario/cadastro/cadastro.component';
import { UsuarioService } from './pagina/conteudo/usuario/service/usuario.service';
import { HttpClientModule } from '@angular/common/http';
import { PesquisarComponent } from './pagina/conteudo/usuario/pesquisar/pesquisar.component';
import { UpdateComponent } from './pagina/conteudo/usuario/update/update.component';
import { DeleteComponent } from './pagina/conteudo/usuario/delete/delete.component';
import { BrowserCookiesModule } from '@ngx-utils/cookies/browser';

@NgModule({
  declarations: [
    AppComponent,
    NavegacaoComponent,
    InicialComponent,
    CadastroComponent,
    PesquisarComponent,
    UpdateComponent,
    DeleteComponent
    
  ],
  imports: [
    FormsModule,
    HttpClientModule,
    BrowserCookiesModule.forRoot(),
    BrowserModule,
    AppRoutingModule,
    RouterModule.forRoot(routes)
  ],
  providers: [
    UsuarioService
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }
