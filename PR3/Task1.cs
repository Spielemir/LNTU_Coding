using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть число: ");
        int n = int.Parse(Console.ReadLine());
 
        if (n % 2 == 0)
            Console.WriteLine("Число парне");
        else
            Console.WriteLine("Число непарне");
    }
}