<?php 
session_start();
    if(! isset($_SESSION['display'])){
        $_SESSION['display']="";
    }
   // var_dump($_SESSION['display']);
?>

<!DOCTYPE html>
  <html>
    <head>
      <!--Import Google Icon Font-->
      <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
      <!--Import materialize.css-->
      <link type="text/css" rel="stylesheet" href="css/materialize.min.css"  media="screen,projection"/>

      <!--Let browser know website is optimized for mobile-->
      <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    </head>

    <body>

    <!-- Navbar goes here -->

  <nav>
    <div class="nav-wrapper blue-grey darken-4">
      <a href="#" class="brand-logo">Logo</a>
      <ul id="nav-mobile" class="right hide-on-med-and-down">
        <li><a href="sass.html">Sass</a></li>
        <li><a href="badges.html">Components</a></li>
        <li><a href="collapsible.html">JavaScript</a></li>
      </ul>
    </div>
  </nav>
        
    <!-- Page Layout here -->
    <div class="row">


      <div class="col s12">
        <!-- Teal page content  -->
        <form  method="post">
            <div class="row">
                <div class="col s4 input-field">
                    <input type="text" name="display" id="display" value="<?php echo $_SESSION['display'];  ?>">
                    <label for="display">Display</label>
                </div>                
            </div>
            <div class="row">
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit" name="um">1</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit" name="dois">2</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">3</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">/</button>
                </div>
            </div>
            <div class="row">
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">4</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">5</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">6</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">*</button>
                </div>
            </div>
            <div class="row">
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">7</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">8</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">9</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">-</button>
                </div>
            </div>
            <div class="row">
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">0</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">.</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit">=</button>
                </div>
                <div class="col s1">
                    <button class=" blue-grey darken-4 btn waves-effect waves-yellow" type="submit" name ="mais">+</button>
                </div>
            </div>

            <?php
                if(isset($_POST['um'])){
                   
                    $valor = $_SESSION['display'];
                    $_SESSION['display'] = $valor.""."1";  
                    
                    
                    echo "<script>
                     window.location.href='http://localhost/aulas/2018/01/php1/calculadora.php' 
                     </script>"; // obrigando dar 2 refresh
                }else  if(isset($_POST['dois'])){
                    $valor = $_SESSION['display'];
                    $_SESSION['display'] = $valor.""."2";   
                    echo "<script>
                    window.location.href='http://localhost/aulas/2018/01/php1/calculadora.php' 
                    </script>"; // obrigando dar 2 refresh
                }
               
            ?>
        </form>
      </div>

    </div>
    <footer class="page-footer blue-grey darken-4">
          <div class="container">
            <div class="row">
              <div class="col l6 s12">
                <h5 class="white-text">Footer Content</h5>
                <p class="grey-text text-lighten-4">You can use rows and columns here to organize your footer content.</p>
              </div>
              <div class="col l4 offset-l2 s12">
                <h5 class="white-text">Links</h5>
                <ul>
                  <li><a class="grey-text text-lighten-3" href="#!">Link 1</a></li>
                  <li><a class="grey-text text-lighten-3" href="#!">Link 2</a></li>
                  <li><a class="grey-text text-lighten-3" href="#!">Link 3</a></li>
                  <li><a class="grey-text text-lighten-3" href="#!">Link 4</a></li>
                </ul>
              </div>
            </div>
          </div>
          <div class="footer-copyright">
            <div class="container">
            © 2014 Copyright Text
            <a class="grey-text text-lighten-4 right" href="#!">More Links</a>
            </div>
          </div>
        </footer>
          
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>