using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть бал (0–100): ");
        int score = int.Parse(Console.ReadLine());
 
        if (score >= 90 && score <= 100)
            Console.WriteLine("Відмінно");
        else if (score >= 75)
            Console.WriteLine("Добре");
        else if (score >= 60)
            Console.WriteLine("Задовільно");
        else
            Console.WriteLine("Незадовільно");
    }
}