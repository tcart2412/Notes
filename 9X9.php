<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>99乘法表</title>
    <style type="text/css">
    table {
        margin-left: auto;
        margin-right: auto;
    }

    tr {
        text-align: center;
    }

    th {
        font-size: 14px;
    }

    .table_1 {
        width: 300px;
        border-collapse: collapse;
    }

    .tr_1 {
        color: #FFF;
        background-color: #000;
    }

    .td_right {
        text-align: right;
    }
    </style>
</head>

<body>
    <table class="table_1" border="2">
        <tr class="tr_1">
            <th colspan="9">銋�銋�銋�瘜�銵�</th>
        </tr>
        <?php
        $x=1;    
        for($i=1;$i<=3;$i++)
        {
            echo "<tr>";
            for($j=1;$j<=3;$j++)
            {
                echo "<td>";
                echo"<table>";
                for($y=1;$y<=9;$y++)
                {
                    echo "<tr>";
                    if($x==1)
                    {
                        echo"<td>".$x." * ".$y." =</td>
                            <td class=td_right>&nbsp;&nbsp;".$x*$y."</td>
                            </tr>";
                    }
                    else
                    {
                        echo"<td>".$x." * ".$y." =</td>
                            <td class=td_right>".$x*$y."</td>
                            </tr>";
                    }
                }
                $x++;
                echo "</table>";
                echo "</td>";
            }
            echo "</tr>";
        }
    ?>
    </table>
</body>

</html>