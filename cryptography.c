#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // this has to do with incription
    // a way of incripting things to mske it difficult for others except involved parties to decode.


    // code for the total number of users in php

       <?php
                
                                
         $query = "SELECT id FROM users ORDER BY id";
        $query_run = mysqli_query($connection, $query);

        $row = mysqli_num_rows($query_run);
        echo '<h1>'.$row.' </h1>'
            ?> 
}