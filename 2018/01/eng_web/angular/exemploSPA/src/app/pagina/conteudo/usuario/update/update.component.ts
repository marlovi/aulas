import { Component, OnInit } from '@angular/core';
import { User } from '../cadastro/user.model';
import { CookiesService } from '@ngx-utils/cookies/src/cookies.service';
import { UsuarioService } from '../service/usuario.service';


@Component({
  selector: 'app-update',
  templateUrl: './update.component.html',
  styleUrls: ['./update.component.css']
})
export class UpdateComponent implements OnInit {

  user:any = {}
  constructor(private cookie:CookiesService, private service:UsuarioService) { 
    let a =  this.cookie.getObject('userUpdate')
    this.user = a
  }

  update(){
    this.service.update(this.user).subscribe(
      user =>{
        alert('usuario alterado com sucesso')
        console.log(user)
      }
    )
  }
  ngOnInit() {
  }

}
