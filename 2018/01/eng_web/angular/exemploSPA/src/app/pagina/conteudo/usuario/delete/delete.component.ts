import { Component, OnInit } from '@angular/core';
import { User } from '../cadastro/user.model';
import { UsuarioService } from '../service/usuario.service';
import { CookiesService } from '@ngx-utils/cookies/src/cookies.service';

@Component({
  selector: 'app-delete',
  templateUrl: './delete.component.html',
  styleUrls: ['./delete.component.css']
})
export class DeleteComponent implements OnInit {

  user:User = {}
  constructor(private service: UsuarioService,private cookie:CookiesService) { 
    let a =  this.cookie.getObject('userDelete')
    this.user = <User> a // convertendo o objeto retornado que é any para User <> 
  }

  delete(){
    this.service.delete(this.user)
  }
  ngOnInit() {
  }

}
