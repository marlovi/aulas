import { Component, OnInit } from '@angular/core';
import {Aluno} from '../cadastro/model/aluno.class'
import { ComunicacaoService } from '../comunicacao.service';

@Component({
  selector: 'usuario-cadastro',
  templateUrl: './cadastro.component.html',
  styleUrls: ['./cadastro.component.css']
})
export class CadastroComponent implements OnInit {

  aluno: Aluno
  teste:string = ""
  constructor(private servico : ComunicacaoService) { 
    this.aluno = new Aluno
  }

  chamandoServico(){
    this.servico.getAluno(this.aluno).subscribe( al =>{
      console.log('comunicação retornou o objeto ')
      console.log(al)
    
    }
  ) 
  }
  ngOnInit() {
  }

}
