import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { EngwebComponent } from './engweb/engweb.component';

const routes: Routes = [
  {path:"engweb",component: EngwebComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
