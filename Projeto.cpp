// Em Conta (1).cs, dentro de public class Conta
public bool Depositar(decimal valor)
{
    if (valor <= 0) return false;
    Saldo += valor;
    return true;
}

public bool Sacar(decimal valor)
{
    if (valor <= 0) return false;
    // O SaldoDisponível já considera o limite (Saldo + Limite)
    if (valor > SaldoDisponível) return false;
    Saldo -= valor;
    return true;
}

public bool AumentarLimite(decimal valor)
{
    if (valor <= 0) return false;
    Limite += valor;
    return true;
}

public bool DiminuirLimite(decimal valor)
{
    if (valor <= 0) return false;
    decimal novoLimite = Limite - valor;

    // O novo limite não pode ser negativo
    if (novoLimite < 0) return false;

    // Verificar se o novo limite cobre o saldo negativo (uso do cheque especial)
    decimal usoChequeEspecial = Saldo < 0 ? Math.Abs(Saldo) : 0m;
    if (usoChequeEspecial > novoLimite) return false;

    Limite = novoLimite;
    return true;
}