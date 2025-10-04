using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть логін: ");
        string login = Console.ReadLine();
 
        Console.Write("Введіть пароль: ");
        string pass = Console.ReadLine();
 
        if (login == "admin" && pass == "12345")
            Console.WriteLine("Доступ дозволено");
        else
            Console.WriteLine("Доступ заборонено");
    }
}