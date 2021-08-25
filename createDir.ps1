cd C:\Users\wellington_farias\Documents\Workspaces\EstruturasDeDadosCpp\Lista01
for ( $i = $($args[0]); $i -le $($args[1]); $i++ ) {
    New-Item -PATH . -Name "Exercicio$i" -ItemType "directory"
    write-host "Folder  Exercicio$i was created"
    cd .\Exercicio$i
    New-Item -PATH . -Name "Exercicio$i.cpp" -ItemType "file"
    cd ..
}
cd ..