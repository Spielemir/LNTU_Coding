using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        int i = 1;
        do
        {
            Console.WriteLine($"{i} × 7 = {i * 7}");
            i++;
        } while (i <= 10);
    }
}
