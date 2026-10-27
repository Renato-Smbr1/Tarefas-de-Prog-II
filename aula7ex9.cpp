// Compilador: g++ main.cpp Pessoa.cpp -o programa

/*
Pessoa.h declara a classe (atributos e protótipos dos métodos), 
ou seja, diz ao compilador “o que existe”, sem a implementação.

Por que main.cpp inclui o cabeçalho: cada .cpp é compilado separadamente. 
Para o compilador aceitar Pessoa p("Ana", 20); e p.apresentar();
ele precisa conhecer a declaração da classe. O #include fornece isso.

Função do linker: depois que main.cpp e Pessoa.cpp viram arquivos objeto separados (.o),
o linker os une, resolvendo referências. Por exemplo, a chamada 
Pessoa::apresentar() em main.o é ligada ao código real de Pessoa.o, 
gerando o executável final. Se faltar Pessoa.cpp na compilação, ocorre o erro 
undefined reference.

*/