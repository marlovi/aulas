<?php
    class Query{
        public $id;
        public $id_estado;
        public $id_cidade;
        private $link;
        public function __construct($con){
            $this->link = $con;
        }

        public function consulta(){
            $sql = "SELECT * FROM estado;";

            $result = mysqli_query($this->link, $sql);

            while($row = mysqli_fetch_array($result)){
                echo '<option value=" ' . $row['id_estado'] . ' "> ' . $row['nome'] .  ' - ' . $row['uf'] . '</option>' ;
            } 
        }

        public function resposta(){
            $id = $this->id;
            $sql = "SELECT * FROM cidade where estado_id_estado = $id;";
            

            $result = mysqli_query($this->link, $sql);

            while($row = mysqli_fetch_array($result)){
                echo '<option class="cidade" value=" ' . $row['id_cidade'] . ' "> ' . $row['nome'] . '</option>' ;
            } 
        }

        public function readEstado($id_estado){
            $sql = "SELECT * FROM estado WHERE id_estado =" . $id_estado;

            $result = mysqli_query($this->link, $sql);

            while($row = mysqli_fetch_array($result)){
                echo '<option selected value=" ' . $row['id_estado'] . ' "> ' . $row['nome'] .  ' - ' . $row['uf'] . '</option>' ;
            }

        }
        public function readCidade($id_cidade){
            $sql = "SELECT * FROM cidade where id_cidade =". $id_cidade;
            

            $result = mysqli_query($this->link, $sql);

            while($row = mysqli_fetch_array($result)){
                echo '<option selected class="cidade" value=" ' . $row['id_cidade'] . ' "> ' . $row['nome'] . '</option>' ;
            }

        }
    }
?>