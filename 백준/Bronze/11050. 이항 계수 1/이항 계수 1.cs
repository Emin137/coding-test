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
            string[] input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int K = int.Parse(input[1]);
            Console.WriteLine(Factorial(N) / (Factorial(K) * Factorial(N-K)));
        }

       static private int Factorial(int N)
        {
            int M = 1;
            for (int i = 1; i <= N; i++)
            {
                M *= i;
            }
            return M;
        }
    }
}
