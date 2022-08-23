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
            List<(int, int)> list = new List<(int, int)>();
            int N = int.Parse(Console.ReadLine());
            for (int i = 0; i < N; i++)
            {
                var input = Console.ReadLine().Split();
                list.Add((int.Parse(input[0]), int.Parse(input[1])));
            }

            for (int i = 0; i < N; i++)
            {
                int K = 0;
                for (int j = 0; j < N; j++)
                {
                    if (list[i].Item1 < list[j].Item1 && list[i].Item2 < list[j].Item2)
                        K++;
                }
                Console.Write(K + 1);
                if (i != N - 1)
                    Console.Write(' ');
            }
            
        }
    }

}