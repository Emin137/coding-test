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
            int M = int.Parse(input[1]);
            int[][] ints = new int[N*2][];
            for (int i = 0; i < N*2; i++)
            {
                ints[i] = Array.ConvertAll<string, int>(Console.ReadLine().Split(), int.Parse);
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M-1; j++)
                {
                    Console.Write($"{ints[i][j] + ints[i + N][j]} ");
                }
                Console.WriteLine(ints[i][M-1] + ints[i + N][M-1]);
            }
        }
    }
}
