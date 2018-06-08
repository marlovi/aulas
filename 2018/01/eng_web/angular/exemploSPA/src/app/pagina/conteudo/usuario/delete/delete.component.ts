import { Component, OnInit } from '@angular/core';
import { User } from '../cadastro/user.model';

@Component({
  selector: 'app-delete',
  templateUrl: './delete.component.html',
  styleUrls: ['./delete.component.css']
})
export class DeleteComponent implements OnInit {

  user:User = {}
  constructor() { }

  delete(){
    
  }
  ngOnInit() {
  }

}
