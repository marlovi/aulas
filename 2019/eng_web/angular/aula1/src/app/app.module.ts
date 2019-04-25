import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { EngwebComponent } from './engweb/engweb.component';
import { EstruturadadosComponent } from './estruturadados/estruturadados.component';
import { Estruturadados1Component } from './estruturadados1/estruturadados1.component';

@NgModule({
  declarations: [
    AppComponent,
    EngwebComponent,
    EstruturadadosComponent,
    Estruturadados1Component
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
