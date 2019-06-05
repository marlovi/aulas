import { Aluno } from './cadastro/model/aluno.class';
import { Injectable } from '@angular/core';
import { HttpClient, HttpErrorResponse } from '@angular/common/http';
import { HttpHeaders } from '@angular/common/http';
import { Observable } from 'rxjs';
import { catchError, retry } from 'rxjs/operators';


@Injectable()
export class ComunicacaoService {

   httpOptions = {
    headers: new HttpHeaders({
      'Content-Type':  'application/json',
      'Authorization': 'my-auth-token'
    })
  };
  



   getAluno(aluno:Aluno) : Observable<Aluno>{
     console.log('alunos sendo chamados ')
     console.log(JSON.stringify(aluno))
    return this.http.post<Aluno>('http://localhost:3000/usuario',aluno,this.httpOptions)
    .pipe(
     // catchError(this.error('aluno',aluno))
    )
      
   }

   error(e: HttpErrorResponse ){
     console.log(e)
   }
  constructor(private http  :HttpClient) { }
}
