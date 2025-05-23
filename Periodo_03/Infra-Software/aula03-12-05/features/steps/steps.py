from behave import given, when, then
from calculadora import somar

@given('que eu tenho os números {num1:d} e {num2:d}')
def step_impl(context, num1, num2):
    context.num1 = num1
    context.num2 = num2

@when('eu os somo')
def step_impl(context):
    context.resultado = somar(context.num1, context.num2)

@then('eu devo obter {esperado:d}')
def step_impl(context, esperado):
    assert context.resultado == esperado, f"Esperado {esperado}, obtido {context.resultado}"