import { Component, OnInit } from '@angular/core';
import { User } from './user.model';
import { UsuarioService } from '../service/usuario.service';

@Component({
  selector: 'app-cadastro',
  templateUrl: './cadastro.component.html',
  styleUrls: ['./cadastro.component.css']
})
export class CadastroComponent implements OnInit {


  public aux:any  = {}
  public user:User
  constructor(private service:UsuarioService) {
    this.user = new User
   }

   cadastrar(){
     this.service.save(this.user).subscribe( user =>{
       alert(`Usuario cadastrado no ID ${user._id}`)
       this.user = new User
     })
   }
  ngOnInit() {
  }

 
}
