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
            int[] input = new int[N];
            for (int i = 0; i < N; i++)
            {
                input[i] = int.Parse(Console.ReadLine());
            }
            Array.Sort(input);
            

            // 1. 산술평균
            int output = (int)Math.Round((double)input.Sum() / N);
            Console.WriteLine(output);

            //2. 중앙값
            Console.WriteLine(input[(N-1)/2]);

            //3. 최빈값
            int[] modeCount = new int[8001];
            List<int> list = new List<int>();
            for (int i = 0; i < N; i++)
            {
                modeCount[input[i] + 4000]++;
            }
            int max = modeCount.Max();
            for (int i = 0; i < modeCount.Length; i++)
            {
                if (modeCount[i] == max)
                {
                    list.Add(i-4000);
                }
            }
            if(list.Count>1)
                Console.WriteLine(list[1]);
            else
                Console.WriteLine(list[0]);

            //4. 범위값
            Console.WriteLine(input[N-1] - input[0]);

               

        }
    }
}