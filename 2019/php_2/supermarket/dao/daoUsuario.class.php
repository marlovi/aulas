<?php
    require_once "model/usuario.class.php";
    require_once "db/conexao.php";
    class DaoUsuario{
        public function create($usuario){
            $sql = "INSERT INTO endereco(cep, rua, bairro, num, complemento, cidade_id_cidade) VALUES (?,?,?,?,?,?);";
            $con = new Conexao();
            $con = $con->getConnection();
            $stmt = $con->prepare($sql);
            $stmt->bind_param("issisi", $cep, $rua, $bairro, $num, $complemento, $cidade_id_cidade);

            $cep = $usuario->getCep();
            $rua = $usuario->getRua();
            $complemento = $usuario->getComplemento();
            $num = $usuario->getNum();
            $bairro = $usuario->getBairro();
            $cidade_id_cidade = $usuario->getCidadeIdCidade();

            if($stmt->execute()){
                $endereco_id_endereco = $con->insert_id;

                $sql = "INSERT INTO usuario(nome, email, cpf, rg, senha) VALUES(?,?,?,?,?);";
                $stmt = $con->prepare($sql);
                $stmt->bind_param("ssiis", $nome, $email, $cpf, $rg, $senha);
                $nome = $usuario->getNome();
                $email = $usuario->getEmail();
                $cpf = $usuario->getCpf();
                $rg = $usuario->getRg();
                $senha = $usuario->getSenha();

                if($stmt->execute()){
                    $usuario_id_usuario = $con->insert_id;
                    $sql = "INSERT INTO usuario_endereco(usuario_id_usuario, endereco_id_endereco) VALUES(?,?)";
                    $stmt = $con->prepare($sql);
                    $stmt->bind_param("ii", $usuario_id_usuario, $endereco_id_endereco);
                    if($stmt->execute()){
                        $id_usuario_endereco = $con->insert_id;
                        $sql = "INSERT INTO telefone(ddd, telefone) VALUES(?,?)";
                        $stmt = $con->prepare($sql);
                        $stmt->bind_param("ii", $ddd, $telefone);
                        $ddd = $usuario->getDdd();
                        $telefone= $usuario->getTelefone();
                        if($stmt->execute()){
                            $telefone_id_telefone = $con->insert_id;
                            $sql = "INSERT INTO usuario_telefone(telefone_id_telefone, usuario_id_usuario) VALUES(?, ?)";
                            $stmt = $con->prepare($sql);
                            $stmt->bind_param("ii", $telefone_id_telefone, $usuario_id_usuario);
                            if($stmt->execute()){

                                echo "<script>alert('OK')</script>";
                                echo "<script> window.location.href='index.php'</script> ";
                                $stmt->close();
                                $con->close();
                            }else{
                                echo "quase" . $con->error;
                            }   
                        }else{
                            echo "quarta" . $con->error;
                        }
                    }else{
                        echo " terceiro" . $con->error;
                    }
                }else{
                    echo "segunda errada" . $con->error;
                }
            }else{
                echo "primeiro errado" . $con->error;
            }
        }

        public function read($id){
            $sql = "SELECT usuario.senha, usuario.id_usuario, usuario.nome, usuario.email, usuario.rg, usuario.cpf, endereco.cep,
            endereco.rua, usuario_endereco.id_usuario_endereco, usuario_endereco.endereco_id_endereco, endereco.bairro, endereco.num, endereco.complemento, cidade.id_cidade as cidade, estado.id_estado 
            as estado, telefone.ddd, telefone.telefone, telefone.id_telefone FROM usuario 
            INNER JOIN usuario_endereco ON usuario.id_usuario = usuario_endereco.usuario_id_usuario 
            INNER JOIN endereco ON usuario_endereco.endereco_id_endereco = endereco.id_endereco
            INNER JOIN cidade ON endereco.cidade_id_cidade = cidade.id_cidade 
            INNER JOIN estado ON cidade.estado_id_estado = estado.id_estado 
            INNER JOIN usuario_telefone ON usuario.id_usuario = usuario_telefone.usuario_id_usuario
            INNER JOIN telefone ON usuario_telefone.telefone_id_telefone = telefone.id_telefone
            WHERE usuario.id_usuario =" . $id ;

            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $usu = new Usuario($con);
                    $usu->setIdTelefone($row['id_telefone']);
                    $usu->setIdUsuarioEndereco($row['id_usuario_endereco']);
                    $usu->setEnderecoIdEndereco($row['endereco_id_endereco']);
                    $usu->setIdUsuario($row['id_usuario']);
                    $usu->setNome($row['nome']);
                    $usu->setEmail($row['email']);
                    $usu->setRg($row['rg']);
                    $usu->setCpf($row['cpf']);
                    $usu->setCep($row['cep']);
                    $usu->setRua($row['rua']);
                    $usu->setBairro($row['bairro']);
                    $usu->setNum($row['num']);
                    $usu->setComplemento($row['complemento']);
                    $usu->setCidadeIdCidade($row['cidade']);
                    $usu->setEstadoIdEstado($row['estado']);
                    $usu->setSenha($row['senha']);
                    $usu->setDdd($row['ddd']);
                    $usu->setTelefone($row['telefone']);
                    
                    // echo "<pre>";
                    // var_dump($retorno);
                    // echo "</pre>";
                    $retorno = $usu;
                }
            }
            return $retorno;

        }

        public function readAll(){
            $sql = 'SELECT usuario.id_usuario, usuario.nome, usuario.email, usuario.rg, usuario.cpf, telefone.ddd, 
            telefone.telefone FROM usuario INNER JOIN usuario_telefone ON usuario.id_usuario = usuario_telefone.usuario_id_usuario 
            INNER JOIN telefone ON usuario_telefone.telefone_id_telefone = telefone.id_telefone;';
            $retorno = NULL;
            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result->num_rows > 0){
                $retorno = array();
                
                while($row = $result->fetch_assoc()){
                    $usu = new Usuario($con);
                    $usu->setNome($row['nome']);
                    $usu->setEmail($row['email']);
                    $usu->setRg($row['rg']);
                    $usu->setCpf($row['cpf']);
                    $usu->setDdd($row['ddd']);
                    $usu->setTelefone($row['telefone']);
                    $usu->setIdUsuario($row['id_usuario']);
                    array_push($retorno, $usu);
                }
            }

            // echo "<pre>";

            // print_r($retorno);
            // echo "</pre>";


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
            $sql = "SELECT email, senha, nome, id_usuario FROM usuario WHERE email LIKE '{$user->getEmail()}' AND senha LIKE '{$user->getSenha()}'";
            $con = new Conexao();
            $con = $con->getConnection();

            
            $result = $con->query($sql);
            if($result->num_rows > 0){
                $row = $result->fetch_assoc();

                session_start();
                $_SESSION['email'] = $user->getEmail();
                $_SESSION['id_user'] = $row['id_usuario'];
                $_SESSION['nome'] = $row['nome'];
                echo "<script> window.location.href='index.php'</script> ";


                // echo "<pre>";
                // var_dump($_SESSION['id_user']);
                // echo "</pre>";
            }else{
                echo "<script> window.location.href='index.php?erro=1'</script> ";
            }          

        }
    }
?>