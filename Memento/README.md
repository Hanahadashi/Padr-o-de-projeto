O memento é um padrão de projeto do tipo comportamental que permite que um objeto seja salvado e restaurado sem revelar seus detalhes de implementação.

No código temos apenas duas classes o "Memento" e "Originator". O Originator é responsável por manter o estado interno do objeto que desejamos salvar e restaurar, enqunato o Memento possui a função de armazenar o estado do Originator.