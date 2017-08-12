  <!DOCTYPE html>
  <html>
    <head>
      <!--Import Google Icon Font-->
      <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
      <!--Import materialize.css-->
      <link type="text/css" rel="stylesheet" href="css/materialize.min.css"  media="screen,projection"/>

      <!--Let browser know website is optimized for mobile-->
      <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
      <meta charset="UTF-8">
      <title>Lista Exercícios</title>
    </head>

    <body>


<!-- Dropdown Structure -->
<ul id="dropdown1" class="dropdown-content">
  <li><a href="exercicio1.php">um</a></li>
  <li><a href="exercicio2.php">Dois</a></li>
  <li class="divider"></li>
  <li><a href="#!">three</a></li>
</ul>
<nav>
  <div class="nav-wrapper teal darken-2">
    <a href="layout.php" class="brand-logo">Logo</a>
    <ul class="right hide-on-med-and-down">
      <li><a href="sass.html">Sass</a></li>
      <li><a href="badges.html">Components</a></li>
      <!-- Dropdown Trigger -->
      <li><a class="dropdown-button" href="#!" data-activates="dropdown1">Exercícios de 1 a 10<i class="material-icons right">arrow_drop_down</i></a></li>
    </ul>
  </div>
</nav>
        
        <div class="container">
            <div class="row">
                <div class="col s12 center">
                    <h2>Lista de exercícios de Nivelamento</h2>
                </div>
            </div>
        </div>


      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    
    <script type="text/javascript">
        $( document ).ready(function(){
            $(".button-collapse").sideNav();
            $(".dropdown-button").dropdown();        
        });
    </script>

    </body>
  </html>
        