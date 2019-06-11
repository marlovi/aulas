import { Aluno } from './cadastro/model/aluno.class';
import { Injectable } from '@angular/core';
import { HttpClient, HttpErrorResponse } from '@angular/common/http';
import { HttpHeaders } from '@angular/common/http';
import { Observable } from 'rxjs';
import { catchError, retry } from 'rxjs/operators';
import { throwError } from 'rxjs';


@Injectable()
export class ComunicacaoService {

   httpOptions = {
    headers: new HttpHeaders({
      'Content-Type':  'application/json',
      'Authorization': 'my-auth-token'
    })
  };
  



   save(aluno: Aluno) : Observable<Aluno>{    
     console.log(JSON.stringify(aluno))
    return this.http.post<Aluno>('http://localhost:3000/usuario',aluno,this.httpOptions)
    .pipe(
        catchError(this.handleError)
    )
      
   }

   getAll(){
     return this.http.get<Aluno>("http://localhost:3000/usuarios");
   }

   getAluno(id:string){
     return this.http.get<Aluno>(`http://localhost:3000/usuario/${id}`)
   }
   getAlunoEmail(email:string){
    return this.http.get<Aluno>(`http://localhost:3000/usuarioemail/${email}`)
   }
   update(aluno:Aluno):Observable<Aluno>{
     return this.http.patch(`http://localhost:3000/usuario/${aluno._id}`,aluno,this.httpOptions)
   }

   delete(id:string){
     return this.http.delete(`http://localhost:3000/usuario/${id}`)
   }

   handleError(error) {
    let errorMessage = '';
    if (error.error instanceof ErrorEvent) {
      // client-side error
      errorMessage = `Class Comunicação Error: ${error.error.message}`;
    } else {
      // server-side error
      errorMessage = `Class Comunicação Error Code: ${error.status}\nMessage: ${error.message}`;
    }
    window.alert(errorMessage);
    return throwError(errorMessage);
  }

  constructor(private http  :HttpClient) { }
}
