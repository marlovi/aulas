import { Component, OnInit } from '@angular/core';
import { User } from '../conteudo/usuario/cadastro/user.model';
import { UsuarioService } from '../conteudo/usuario/service/usuario.service';

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.css']
})
export class LoginComponent implements OnInit {

  usuario: User
  constructor(private service: UsuarioService) { 
    this.usuario = new User
  }

  ngOnInit() {
  }
  enviar(){
    this.service.login(this.usuario).subscribe( u =>{
      console.log('logou')
      console.log(u)
      this.usuario = u
    })
  }

}
