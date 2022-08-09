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

            int[] trees = Array.ConvertAll<string, int>(Console.ReadLine().Split(), int.Parse);

            long start = 0;
            long end = trees.Max();
            long middle = 0; // 절단기 높이
            long sum = 0;
            List<(long, long)> list = new List<(long, long)>();

            while(true)
            {
                sum = 0;
                if (start > end)
                    break;

                middle = (start + end) / 2;

                for (int i = 0; i < N; i++)
                {
                    if (trees[i] > middle)
                        sum += trees[i] - middle;
                }

                list.Add((middle, sum));

                if (sum == M)
                    break;
                if (sum >= M)
                    start = middle + 1;
                else
                    end = middle - 1;
            }

            list.Sort((x, y) => x.Item2.CompareTo(y.Item2));

            foreach (var item in list)
            {
                if(item.Item2>=M)
                {
                    Console.WriteLine(item.Item1);
                    break;
                }
            }
            
        }
    }

}