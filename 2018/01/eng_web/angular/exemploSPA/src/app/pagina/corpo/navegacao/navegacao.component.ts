import { Component, OnInit } from '@angular/core';
import { UsuarioService } from '../../conteudo/usuario/service/usuario.service';
import { User } from '../../conteudo/usuario/cadastro/user.model';

@Component({
  selector: 'app-navegacao',
  templateUrl: './navegacao.component.html',
  styleUrls: ['./navegacao.component.css']
})
export class NavegacaoComponent implements OnInit {

  constructor() { }


  ngOnInit() {
  }

}
