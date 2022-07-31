using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
            int N = int.Parse(Console.ReadLine());
            string[] input = new string[N];
            for (int i = 0; i < N; i++)
            {
                input[i] = Console.ReadLine();
                int count = 0;
                bool isTrue = true;
                for (int j = 0; j < input[i].Length; j++)
                {
                    if (input[i][j] == '(')
                        count++;
                    else
                        count--;
                    if (count < 0)
                        isTrue = false;
                }
                if (count == 0 && isTrue)
                    Console.WriteLine("YES");
                else
                    Console.WriteLine("NO");
            }
        }
    }
}
