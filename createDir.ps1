# Author: @juniorfarias
# Date: 25/08/2021
# Goal: Create initial files for exercicies 
$date = Get-Date
$dirLista = "C:\Users\wellington_farias\Documents\Workspaces\EstruturasDeDadosCpp\Lista01"
cd $dirLista
for ( $i = $($args[0]); $i -le $($args[1]); $i++ ) {
    New-Item -PATH . -Name "Exercicio$i" -ItemType "directory"
    write-host "Folder  Exercicio$i was created"
    cd .\Exercicio$i
    New-Item -PATH . -Name "Exercicio$i.cpp" -ItemType "file"
    "// Author: @juniorfarias" | Out-File -FilePath "$dirLista\Exercicio$i\Exercicio$i.cpp" -Append
    "// Date: $($date)" | Out-File -FilePath "$dirLista\Exercicio$i\Exercicio$i.cpp" -Append
    "// Goal:" | Out-File -FilePath "$dirLista\Exercicio$i\Exercicio$i.cpp" -Append
    "#include <iostream>" | Out-File -FilePath "$dirLista\Exercicio$i\Exercicio$i.cpp" -Append
    "using namespace std;" | Out-File -FilePath "$dirLista\Exercicio$i\Exercicio$i.cpp" -Append
    cd ..
}
cd ..