import { Component, OnInit } from '@angular/core';
import { Router, ActivatedRoute } from '@angular/router';
import { Aluno } from '../cadastro/model/aluno.class';
import { ComunicacaoService } from '../comunicacao.service';

@Component({
  selector: 'app-update',
  templateUrl: './update.component.html',
  styleUrls: ['./update.component.css']
})
export class UpdateComponent implements OnInit {
  aluno:Aluno = new Aluno
  constructor(private routerAct:ActivatedRoute,private service : ComunicacaoService, private router:Router) { 
    this.routerAct.paramMap.subscribe( params=>{
     

       this.service.getAluno(params.get("id")).subscribe(a => this.aluno = a)
    })
  }


  alterar(){
    this.service.update(this.aluno).subscribe( a => {
      console.log(a)
      window.alert('Aluno alterado com sucesso!!')
      this.router.navigate(['/pesquisarusuario'])
    })
  }

  ngOnInit() {
  }

}
