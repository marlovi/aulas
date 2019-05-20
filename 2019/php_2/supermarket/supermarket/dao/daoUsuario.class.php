<?php
    require_once "model/usuario.class.php";
    require_once "model/Telefone.class.php";
    require_once "db/conexao.php";
    class DaoUsuario{
        public function create($usuario, $tele){
            $con = new Conexao;
            $con = $con->getConnection();
            $sql = "INSERT INTO usuario(nome, email, cpf, rg, senha) VALUES(?,?,?,?,?);";
            $stmt = $con->prepare($sql);
            $stmt->bind_param("ssiis", $nome, $email, $cpf, $rg, $senha);
            $nome = $usuario->getNome();
            $email = $usuario->getEmail();
            $cpf = $usuario->getCpf();
            $rg = $usuario->getRg();
            $senha = $usuario->getSenha();
            if($stmt->execute()){
                $idUsuario = $con->insert_id;
                $dao = new DaoTelefone();
                $dao->create($tele, $idUsuario);


             //criaro método salvarTelefones 

             //$vetortel = usuario->getTelefones(); 
            }
            
        }

        public function read($id){
            $sql = "SELECT u.*, t.* 
            FROM usuario AS u LEFT JOIN usuario_telefone ON u.id_usuario = usuario_telefone.id_usuario
            LEFT JOIN telefone AS t ON usuario_telefone.id_telefone = t.id_telefone WHERE u.id_usuario=" . $id ;

            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result->num_rows == 1){
               $row = $result->fetch_assoc();
                    $usu = new Usuario();
                    $usu->setIdUsuario($row['id_usuario']);
                    $usu->setNome($row['nome']);
                    $usu->setEmail($row['email']);
                    $usu->setRg($row['rg']);
                    $usu->setCpf($row['cpf']);
                    $usu->setSenha($row['senha']);
                    $tele = new Telefone();
                    $tele->setId($row['id_telefone']);
                    $tele->setDdd($row['ddd']);
                    $tele->setTelefone($row['telefone']);
                    
                    // echo "<pre>";
                    // var_dump($retorno);
                    // echo "</pre>";
                    $retorno = $usu;
                
            }
            return $retorno;

        }

        
        public function update($usuario){
            $sql = "UPDATE endereco SET cep = ?, 
            rua = ?, bairro = ?, num = ?, complemento = ?, 
            cidade_id_cidade = ? 
            WHERE id_endereco = " . $usuario->getEnderecoIdEndereco();
            $con = new Conexao();
            $con = $con->getConnection();
            $stmt = $con->prepare($sql);
            $stmt->bind_param("issisi", $cep, 
            $rua, $bairro, $num, $complemento, 
            $cidade_id_cidade);
            
            $cep = $usuario->getCep();
            $rua = $usuario->getRua();
            $complemento = $usuario->getComplemento();
            $num = $usuario->getNum();
            $bairro = $usuario->getBairro();
            $cidade_id_cidade = $usuario->getCidadeIdCidade();
            
            if($stmt->execute()){
                $sql = "UPDATE usuario SET nome = ?, email = ?, cpf = ?, rg = ?, 
                senha = ? WHERE id_usuario =" . $usuario->getIdUsuario();
                $stmt = $con->prepare($sql);
                $stmt->bind_param("ssiis", $nome, $email, $cpf, $rg, $senha);
                $nome = $usuario->getNome();
                $email = $usuario->getEmail();
                $cpf = $usuario->getCpf();
                $rg = $usuario->getRg();
                $senha = $usuario->getSenha();
                
                if($stmt->execute()){
                    $sql = "UPDATE telefone SET ddd = ?, telefone = ?
                    WHERE id_telefone = " . $usuario->getIdTelefone();
                    $stmt = $con->prepare($sql);
                    $stmt->bind_param("ii", $ddd, $telefone);
                    $ddd = $usuario->getDdd();
                    $telefone= $usuario->getTelefone();
                    if($stmt->execute()){
                        echo "<script>alert('OK')</script>";
                        echo "<script> window.location.href='index.php?p=readAll'</script> ";
                    }else{
                        echo "quase" .$con->error;
                    }

                }else{
                    echo "segundo errado" . $con->error;
                }
            }else{
            echo "primeiro errado" . $con->error;
        }
        
        }
        
        public function delete($ids){
            $id_endereco = $ids["ende"];
            $id_telefone = $ids["tele"];
            $id_usuario = $ids["usu"];
            $sql = 'DELETE FROM usuario_endereco WHERE usuario_id_usuario =  ' . $id_usuario;
            $con = new Conexao();
            $con = $con->getConnection();
            
            if($con->query($sql)){
                $sql = 'DELETE FROM endereco where id_endereco =  ' . $id_endereco ;            
                $con = new Conexao();
                $con = $con->getConnection();
                
                if($con->query($sql)){
                    $sql = 'DELETE FROM usuario_telefone WHERE usuario_id_usuario = ' . $id_endereco;
                    $con = new Conexao();
                    $con = $con->getConnection();
                    
                    if($con->query($sql)){
                        $sql = 'DELETE FROM telefone WHERE id_telefone = ' . $id_telefone;
                        $con = new Conexao();
                        $con = $con->getConnection();
                        
                        if($con->query($sql)){                 
                            $sql = 'DELETE FROM usuario WHERE id_usuario = ' . $id_usuario;
                            $con = new Conexao();
                            $con = $con->getConnection();
                            
                            if($con->query($sql)){                 
                                
                                echo "<script>alert('OK')</script>";
                                echo "<script> window.location.href='index.php?p=readAll'</script> ";
                            }else{
                                echo "error   " . $con->error;
                            }
                        }else{
                            echo "error  4 " . $con->error;
                        }
                        
                        
                    }else{
                        echo "error   3" . $con->error;
                    }
                }else{
                    echo "error  2 " . $con->error;
                }
            }else{
                echo "error 1  " . $con->error;
            }
            
        } 
        
        public function login($user){


try{
    $sql = "SELECT u.*, t.* 
    FROM usuario AS u LEFT JOIN usuario_telefone ON u.id_usuario = usuario_telefone.id_usuario
    LEFT JOIN telefone AS t ON usuario_telefone.id_telefone = t.id_telefone WHERE email LIKE '{$user->getEmail()}' AND senha LIKE '{$user->getSenha()}'";
    $con = new Conexao();
    $con = $con->getConnection();
    $retorno = NULL;
    
    $result = $con->query($sql);
    if($result->num_rows > 0){
        $row = $result->fetch_assoc();
    
        
        $_SESSION['email'] = $user->getEmail();
        $_SESSION['id_user'] = $row['id_usuario'];
        $_SESSION['nome'] = $row['nome'];
        
        $retorno = ' ';
        echo "<script> window.location.href='index.php'</script> ";
    }else{
        echo "<script> window.location.href='index.php?erro=1'</script> ";
    }     
}catch(Exception $e){
    die($e->getMessage());
}

         
              
                 

        }
    }
    ?>






<!-- // public function readAll(){
//     $sql = 'SELECT usuario.id_usuario, usuario.nome, usuario.email, usuario.rg, usuario.cpf, telefone.ddd, 
//     telefone.telefone FROM usuario INNER JOIN usuario_telefone ON usuario.id_usuario = usuario_telefone.usuario_id_usuario 
//     INNER JOIN telefone ON usuario_telefone.telefone_id_telefone = telefone.id_telefone;';
//     $retorno = NULL;
//     $con = new Conexao();
//     $con = $con->getConnection();
//     $result = $con->query($sql);
//     if($result->num_rows > 0){
//         $retorno = array();
        
//         while($row = $result->fetch_assoc()){
//             $usu = new Usuario($con);
//             $usu->setNome($row['nome']);
//             $usu->setEmail($row['email']);
//             $usu->setRg($row['rg']);
//             $usu->setCpf($row['cpf']);
//             $usu->setDdd($row['ddd']);
//             $usu->setTelefone($row['telefone']);
//             $usu->setIdUsuario($row['id_usuario']);
//             array_push($retorno, $usu);
//         }
//     }

//     // echo "<pre>";

//     // print_r($retorno);
//     // echo "</pre>";


//     return $retorno;
// } -->