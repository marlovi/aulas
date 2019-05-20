$( document ).ready(function() {
    $("#estado").change(function(){
        var id = $(this).val();
        //alert(id);
        $.ajax({
            type: "POST",
            url: "exibe_cidade.php?id=" + id,
            dataType: "text",
            success: function(res) {
                $("#cidade").children(".cidade").remove();
                $("#cidade").append(res);
            },
            error : function() {
                alert("ERRO");
            }
        });
    });

});
