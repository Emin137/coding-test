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
            int testCase = int.Parse(Console.ReadLine());
           
            for (int i = 0; i < testCase; i++)
            {
                int a = int.Parse(Console.ReadLine());
                int b = int.Parse(Console.ReadLine());
                int[][] room = new int[a+1][];
                room[0] = Enumerable.Range(1, b).ToArray();
                for (int j = 1; j <= a; j++)
                {
                    int temp = 0;
                    room[j] = new int[b];
                    for (int k = 0; k < b; k++)
                    {
                        temp += room[j - 1][k];
                        room[j][k] = temp;
                    }
                }
                Console.WriteLine(room[a][b-1]);
            }

           
        }
    }
}
