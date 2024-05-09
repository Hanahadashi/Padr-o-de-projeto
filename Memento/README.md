O memento é um padrão de projeto do tipo comportamental que permit que um objeto seja salvado e restaurado sem revelar seus detalhes de implementação.

No código temos apenas duas classes o "Memento" e "Originator". O Originator mantém seu estado interno e pode criar um Memento contendo esse estado ou restaurar seu estado a partir de um Memento fornecido.