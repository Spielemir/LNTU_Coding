using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть сторону a: ");
        int a = int.Parse(Console.ReadLine());
 
        Console.Write("Введіть сторону b: ");
        int b = int.Parse(Console.ReadLine());
 
        Console.Write("Введіть сторону c: ");
        int c = int.Parse(Console.ReadLine());
 
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
                Console.WriteLine("Трикутник рівносторонній");
            else if (a == b || a == c || b == c)
                Console.WriteLine("Трикутник рівнобедрений");
            else
                Console.WriteLine("Трикутник різносторонній");
        }
        else
        {
            Console.WriteLine("Такий трикутник не існує");
        }
    }
}