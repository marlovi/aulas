import { Component } from '@angular/core';
import { UserService } from './user.service';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
vetor:Array<any>
  constructor(private service:UserService){
     service.getAll().subscribe( res =>{
     console.log(res)
     this.vetor = res

      
     })
  }
  title = 'app';
  turma = "Ciência da Computação"
}
