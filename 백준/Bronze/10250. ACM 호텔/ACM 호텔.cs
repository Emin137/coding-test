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
            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine();
                int[] ints = Array.ConvertAll<string, int>(input.Split(' '), int.Parse);
                int count = 0;
                for (int j = 1; j <= ints[1]; j++)
                {
                    for (int k = 1; k <=ints[0]; k++)
                    {
                        count++;
                        if (count == ints[2])
                        {
                            if(j<10)
                                Console.WriteLine($"{k}0{j}");
                            else
                            {
                                Console.WriteLine($"{k}{j}");
                            }
                        }

                    }
                }
                
            }
        }
    }
}
