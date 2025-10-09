using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        int i = 2;
        while (i <= 20)
        {
            Console.Write(i + "\n ");
            i += 2;
        }
    }
}
