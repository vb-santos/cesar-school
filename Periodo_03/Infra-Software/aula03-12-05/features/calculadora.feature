Feature: Calculadora Simples
  Como um usuário
  Eu quero poder realizar operações matemáticas básicas
  Para resolver problemas do dia a dia

  Scenario: Somar dois números positivos
    Given que eu tenho os números 5 e 7
    When eu os somo
    Then eu devo obter 12

  Scenario: Somar número positivo com zero
    Given que eu tenho os números 3 e 0
    When eu os somo
    Then eu devo obter 3