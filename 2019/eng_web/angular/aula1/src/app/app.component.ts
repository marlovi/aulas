import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'aula1';
  
  obj = [
    {nome:"João Santos",telefone:981339987},
    {nome:"Allan Fernandes",telefone:98999546},
    {nome:"Terra planista vilela",telefone:986541236},
    {nome:"André Ribeiro",telefone:986666666}
  ]


}
