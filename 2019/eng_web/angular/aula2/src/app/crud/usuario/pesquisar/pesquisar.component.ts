import { Component, OnInit } from '@angular/core';
import { ComunicacaoService } from '../comunicacao.service';
import { Aluno } from '../cadastro/model/aluno.class';
import { Router } from '@angular/router';

@Component({
  selector: 'app-pesquisar',
  templateUrl: './pesquisar.component.html',
  styleUrls: ['./pesquisar.component.css']
})
export class PesquisarComponent implements OnInit {

  alunos:any
  inputEmail:string
  constructor(private service : ComunicacaoService,private router:Router) { 
   
  }
  teste(){}

  public gotoProductDetails(url, id) {
    this.router.navigate([url, id]).then( (e) => {
      if (e) {
        console.log("Navigation is successful!",id);
      } else {
        console.log("Navigation has failed!");
      }
    });
}

  pesquisarAlunos(){
    this.service.getAll().subscribe( dados =>{
      this.alunos = dados
    })
  }


  onKeydown(event) {
    if(this.inputEmail !== undefined)
    if(this.inputEmail.length === 0  || this.inputEmail.length === 1){
      this.alunos.length = 0;
      console.log('limpando array')
      
    }else
    this.pesquisarEmail();
  }

  pesquisarEmail(){
    this.service.getAlunoEmail(this.inputEmail).subscribe( dados =>{
      console.log(dados)
      this.alunos = dados
    })
  }

  delete(aluno:Aluno){
   this.service.delete(aluno._id).subscribe( a => {
     if(a === null){
       window.alert('Aluno deletado com sucesso !')
       this.pesquisarEmail()
     }
   
   
   })
  }
  ngOnInit() {
  }

}
