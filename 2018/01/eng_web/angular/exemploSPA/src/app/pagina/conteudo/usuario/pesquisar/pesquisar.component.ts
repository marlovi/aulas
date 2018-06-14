import { Component, OnInit, EventEmitter, Output } from '@angular/core';
import { UsuarioService } from '../service/usuario.service';
import { User } from '../cadastro/user.model';

import { CookiesService } from '@ngx-utils/cookies/src/cookies.service';

@Component({
  selector: 'app-pesquisar',
  templateUrl: './pesquisar.component.html',
  styleUrls: ['./pesquisar.component.css']
})
export class PesquisarComponent implements OnInit {
  public items:User[] = []
  
  constructor(private service:UsuarioService, private cookie:CookiesService) {
    this.service.getAll().subscribe( users => {
      this.items = users
    })
  }
  


  
    update(user:User) {
     // console.log(user)

     this.cookie.putObject('userUpdate',user)
    }
    delete(user:User) {
      this.cookie.putObject('userDelete',user)
    }

  
  ngOnInit() {
  }




  


}
