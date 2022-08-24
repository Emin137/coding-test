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
            var input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int M = int.Parse(input[1]);
            int B = int.Parse(input[2]);
            int[,] ground = new int[N,M];
            int min = 256, max = 0;
            for (int i = 0; i < N; i++)
            {
                var input2 = Console.ReadLine().Split();
                for (int j = 0; j < M; j++)
                {
                    int value = int.Parse(input2[j]);
                    ground[i,j] = value;
                    if(min>value)
                        min = value;
                    if(max<value)
                        max = value;
                }
            }
            int remove, build, time;
            int minTime = 256 * N * M * 2, maxHeight = 0;
            for (int i = min; i <= max; i++)
            {
                remove = 0;
                build = 0;

                for (int x = 0; x < N; x++)
                {
                    for (int y = 0; y < M; y++)
                    {
                        int height = ground[x,y] - i;
                        if (height > 0)
                            remove += height;
                        else if (height < 0)
                            build -= height;
                    }
                }
                if(build<=remove+B)
                {
                    time = remove * 2 + build;

                    if(time<=minTime)
                    {
                        minTime = time;
                        maxHeight = i;
                    }
                }
            }
            Console.WriteLine($"{minTime} {maxHeight}");
        }
    }
}