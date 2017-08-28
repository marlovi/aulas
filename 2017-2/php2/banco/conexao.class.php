<?php
    class Conexao{
        private static $servername = "localhost";
        private static $user = "marlus";
        private static $password="s1lv@385";
        private static $database="php2";


        public static function getConnection(){
            $con  = new mysqli(self::$servername,
            self::$user,self::$password,self::$database);

            if($con->connect_error){
                die("Erro ao Conectar ".$con->connect_error);
            }

            return $con;
        }
    }
?>