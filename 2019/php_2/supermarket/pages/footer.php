        <!-- Modal Login -->
        <div class="modal fade" id="modalLogin" tabindex="-1" role="dialog" aria-labelledby="exampleModalCenterTitle" aria-hidden="true">
        <div class="modal-dialog" role="document">
            <div class="modal-content">
            <div class="modal-header">
                <h5 class="modal-title">Login</h5>
                <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                <span aria-hidden="true">&times;</span>
                </button>
            </div>
            <div class="modal-body">
                <form method="post" action="#" class="">
                    <div class="form-group">
                        <label for="email">Email :</label>
                        <input required type="email" class="form-control" id="email" name="email" placeholder="exemplo@email.com">
                    </div>
                    <div class="form-group">
                        <label for="senha">Senha :</label>
                        <input required type="password" class="form-control" id="senha" name="senha" placeholder="Senha">
                    </div>
                    <button type="submit" class="btn btn-success" name="login">Login</button>
                </form>
                <div class="justify-content-center">
                    <ul class=" nav-justified pt-4">
                        <li class="nav-item list-group"><a class="d-block" href="?p=cadastro">Cadastre-se !</a></li>
                        <li class="nav-item  list-group"><a class="d-block" href="?p=recuperar">Esqueceu seu e-mail ?</a></li>
                    </ul>
                </div>
            </div>
            </div>
        </div>
        </div>
        <!-- Fim Modal Login -->
    
        <footer>
        <nav class="nav bg-dark pt-4 pb-4 justify-content-center">
            <ul class="nav text-nowrap">
                <li class="nav-item"><a class="nav-link" href="#">Contato</a></li>
                <li class="nav-item"><a class="nav-link" href="#">Sobre</a></li>
                <li class="nav-item"><a class="nav-link" href="#">Produtos</a></li>
                <li class="nav-item"><a class="nav-link" href="#">Sugestões e Reclamações</a></li>
            </ul>
        </nav>
    </footer>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="bootstrap/js/jquery-3.3.1.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="bootstrap/js/bootstrap.min.js" ></script>
  </body>
</html>