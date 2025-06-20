# Procurar um arquivo .cpp na pasta atual
$cppFile = Get-ChildItem -Filter *.cpp | Select-Object -First 1

if (-not $cppFile) {
    Write-Host "Nenhum arquivo .cpp encontrado na pasta."
    exit 1
}

# Nome do executável (sem extensão no Windows)
$exeName = "programa_teste.exe"

# Compilar o arquivo .cpp para C++20
Write-Host "Compilando $($cppFile.Name)..."
g++ -O2 -std=c++20 $cppFile.Name -o $exeName
if ($LASTEXITCODE -ne 0) {
    "Erro na compilacao." | Tee-Object -FilePath log.txt
    exit 1
}

# Executar o programa com entrada e salvar saída
Write-Host "Executando o programa..."
Get-Content samples-input.txt | .\programa_teste.exe > saida.txt

# Comparar com saída esperada
Write-Host "Comparando resultados..."
if (Compare-Object (Get-Content saida.txt) (Get-Content samples-output.txt) -SyncWindow 0) {
    "Diferencas encontradas :( " | Tee-Object -FilePath log.txt
    Compare-Object (Get-Content saida.txt) (Get-Content samples-output.txt)
} else {
    "Boaaa! Matou! :)"
}

# Limpeza
Remove-Item $exeName, saida.txt -ErrorAction SilentlyContinue