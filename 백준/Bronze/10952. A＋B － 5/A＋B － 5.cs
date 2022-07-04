using System;
using System.Collections.Generic;


namespace Program
{
    class Program
    {
        static void Main()
        {
            while (true)
            {
                string str = Console.ReadLine();
                if (str == "0 0") 
                    break;
                string[] str2 = str.Split();
                Console.WriteLine(int.Parse(str2[0]) + int.Parse(str2[1]));
            }
        }
    }
}
