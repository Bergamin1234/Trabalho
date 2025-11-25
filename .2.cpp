// Em Banco (1).cs, dentro de public class Banco
private Conta? BuscarConta(int numeroConta)
{
    // Uso de LINQ para encontrar a primeira conta com o número correspondente
    return Contas.FirstOrDefault(c => c.Numero == numeroConta);
}