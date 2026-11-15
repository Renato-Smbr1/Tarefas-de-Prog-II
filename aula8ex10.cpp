/*
(a) Criar um operador novo: não é permitido. 
Só é possível sobrecarregar operadores já existentes 
(não dá para inventar ** ou <=> próprios; este último já existe desde o C++20).

(b) Alterar a precedência de +: não é permitido. 
Precedência e associatividade são fixas, definidas pela linguagem, 
e valem também para operadores sobrecarregados.

(c) Sobrecarregar a soma entre objetos de classe própria: 
é permitido e é o uso típico (Vetor3D por ex).

(d) Redefinir + entre dois int: não é permitido. 
Ao menos um dos operandos precisa ser de tipo definido pelo usuário (classe ou enumeração). 
O comportamento dos tipos primitivos não pode ser alterado.

(e) Usar + para excluir registros: o compilador aceita se a classe for sua, mas não é uma boa prática. 
Pelo princípio da menor surpresa, um operador deve fazer o que os programadores esperam dele. 
Quem lê banco + registro espera adição ou junção, e não destruição de dados. 
Isso torna o código enganoso, dificulta a manutenção e pode causar perda de dados por mal-entendido. 
Para excluir, use um método com nome mais compreensível, como remover().

*/