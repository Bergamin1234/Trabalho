// Em Banco (1).cs, dentro de public class Banco
public bool Depositar(int numeroConta, decimal valor)
{
    var conta = BuscarConta(numeroConta);
    // Verifica se a conta existe e, em caso afirmativo, tenta depositar
    return conta != null && conta.Depositar(valor);
}

public bool Sacar(int numeroConta, decimal valor)
{
    var conta = BuscarConta(numeroConta);
    // Verifica se a conta existe e, em caso afirmativo, tenta sacar
    return conta != null && conta.Sacar(valor);
}

public bool AumentarLimite(int numeroConta, decimal valor)
{
    var conta = BuscarConta(numeroConta);
    // Verifica se a conta existe e, em caso afirmativo, tenta aumentar o limite
    return conta != null && conta.AumentarLimite(valor);
}

public bool DiminuirLimite(int numeroConta, decimal valor)
{
    var conta = BuscarConta(numeroConta);
    // Verifica se a conta existe e, em caso afirmativo, tenta diminuir o limite
    return conta != null && conta.DiminuirLimite(valor);
}