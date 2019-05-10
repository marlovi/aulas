import { Injectable } from '@angular/core';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import {Observable} from 'rxjs';
import { User } from '../cadastro/user.model';

@Injectable()
export class UsuarioService {

  constructor(private http:HttpClient) {
    
  
   }
   public save(user:User):Observable<User>{
    return this.http.post<User>('http://localhost:3000/user',user)
   }
   public getAll():Observable<User[]>{
     return this.http.get<User[]>('http://localhost:3000/users')
   }
   public update(user:User):Observable<User>{
     return this.http.patch<User>(`http://localhost:3000/user/${user._id}`,user)
   }
   public delete(user:User): Observable<any>{
     
   return this.http.delete<User>(`http://localhost:3000/user/${user._id}`)
     
   }


   public login(user:User):Observable<User>{
    return this.http.post<User>('http://localhost:3000/login',user)
   }
}
