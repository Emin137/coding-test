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
            string[] inputNM = Console.ReadLine().Split();
            int N = int.Parse(inputNM[0]); // 카드의 개수
            int M = int.Parse(inputNM[1]); // 총합
            string inputNumbers = Console.ReadLine();
            string[] inputNumbers2 = inputNumbers.Split();
            int[] ints = new int[N];
            ints = Array.ConvertAll<string, int>(inputNumbers2, int.Parse);
            Array.Sort(ints);
            int min = 0;
            int sum = 0;
            for (int i = 0; i < N - 2; i++)
            {
                for (int j = i + 1; j < N - 1; j++)
                {
                    for (int k = j + 1; k < N; k++)
                    {
                        sum = ints[i] + ints[j] + ints[k];

                        if (sum == M)
                        {
                            min = sum;
                            goto Print;
                        }

                        if (sum > M)
                            continue;
                        if (M - sum < M - min)
                            min = sum;
                    }
                }
            }
            Print:
            Console.WriteLine(min);
        }
    }
}
